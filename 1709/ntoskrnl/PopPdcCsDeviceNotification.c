/*
 * XREFs of PopPdcCsDeviceNotification @ 0x1406FF6C8
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x1405EAF04 (PopNetUpdateCsConsumptionFlags.c)
 *     PopPdcUpdateDeviceCompliance @ 0x1406FF8D4 (PopPdcUpdateDeviceCompliance.c)
 *     PopNetCompliantNicUpdate @ 0x140707A84 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140707B50 (PopNetNonCompliantDeviceUpdate.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  char v6; // al
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  void **v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rcx

  v1 = 0;
  if ( !PopPlatformAoAc )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPdcDeviceListLock, 0LL);
  v4 = PopPdcDeviceList;
  v5 = 0LL;
  v6 = 0;
  if ( PopPdcDeviceList != (_UNKNOWN *)&PopPdcDeviceList )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( *((_QWORD *)v4 + 2) == *(_QWORD *)a1 )
        break;
      v4 = *(_DWORD **)v4;
      if ( v4 == (_DWORD *)&PopPdcDeviceList )
        goto LABEL_8;
    }
    v6 = 1;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v6 )
    {
      ++v5[7];
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6F435343u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x28uLL);
        v8[2] = *(_QWORD *)a1;
        *((_DWORD *)v8 + 6) = *(_DWORD *)(a1 + 8);
        *((_BYTE *)v8 + 32) = *(_BYTE *)(a1 + 13);
        *((_DWORD *)v8 + 7) = 1;
        v9 = off_140356190;
        if ( *(_UNKNOWN ***)off_140356190 != &PopPdcDeviceList )
          __fastfail(3u);
        *v8 = &PopPdcDeviceList;
        v8[1] = v9;
        *v9 = v8;
        off_140356190 = v8;
LABEL_21:
        PopPdcUpdateDeviceCompliance();
        PopAcquirePolicyLock();
        v13 = *(int *)(a1 + 8);
        if ( (((_DWORD)v13 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v13 == 3 )
        {
          v14 = PopCsDeviceCompliance;
          if ( PopCsDeviceCompliance[v13] == -1 )
          {
            LOBYTE(v14) = *(_BYTE *)(a1 + 12);
            PopNetNonCompliantDeviceUpdate(v14);
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 13) )
          {
            LOBYTE(v12) = *(_BYTE *)(a1 + 12);
            PopNetCompliantNicUpdate(v12);
          }
          PopNetUpdateCsConsumptionFlags();
        }
        PopReleasePolicyLock();
        goto LABEL_31;
      }
      v1 = -1073741801;
    }
  }
  else if ( v6 )
  {
    if ( (int)--v5[7] <= 0 )
    {
      v10 = *(_QWORD **)v4;
      if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 || (v11 = (void **)*((_QWORD *)v4 + 1), *v11 != v4) )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      ExFreePoolWithTag(v5, 0x6F435343u);
      goto LABEL_21;
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_31:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
