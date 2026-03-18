/*
 * XREFs of PopPdcCsDeviceNotification @ 0x140764F48
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x14064FDC4 (PopNetUpdateCsConsumptionFlags.c)
 *     PopPdcUpdateDeviceCompliance @ 0x140765174 (PopPdcUpdateDeviceCompliance.c)
 *     PopNetCompliantNicUpdate @ 0x14076B8C4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x14076B988 (PopNetNonCompliantDeviceUpdate.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _DWORD *v7; // r8
  char v8; // al
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  void **v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rcx

  v1 = 0;
  if ( !PopPlatformAoAc )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPdcDeviceListLock, 0LL);
  v6 = PopPdcDeviceList;
  v7 = 0LL;
  v8 = 0;
  if ( PopPdcDeviceList != (_UNKNOWN *)&PopPdcDeviceList )
  {
    v4 = *(_QWORD *)a1;
    while ( 1 )
    {
      v7 = v6;
      if ( *((_QWORD *)v6 + 2) == v4 )
        break;
      v6 = *(_DWORD **)v6;
      if ( v6 == (_DWORD *)&PopPdcDeviceList )
        goto LABEL_9;
    }
    v8 = 1;
  }
LABEL_9:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v8 )
    {
      ++v7[7];
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x6F435343u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x28uLL);
        v10[2] = *(_QWORD *)a1;
        *((_DWORD *)v10 + 6) = *(_DWORD *)(a1 + 8);
        *((_BYTE *)v10 + 32) = *(_BYTE *)(a1 + 13);
        *((_DWORD *)v10 + 7) = 1;
        v11 = off_1403997B0;
        if ( *(_UNKNOWN ***)off_1403997B0 != &PopPdcDeviceList )
          __fastfail(3u);
        *v10 = &PopPdcDeviceList;
        v10[1] = v11;
        *v11 = v10;
        off_1403997B0 = v10;
LABEL_22:
        PopPdcUpdateDeviceCompliance();
        PopAcquirePolicyLock();
        v15 = *(int *)(a1 + 8);
        if ( (((_DWORD)v15 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v15 == 3 )
        {
          v16 = PopCsDeviceCompliance;
          if ( PopCsDeviceCompliance[v15] == -1 )
          {
            LOBYTE(v16) = *(_BYTE *)(a1 + 12);
            PopNetNonCompliantDeviceUpdate(v16);
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 13) )
          {
            LOBYTE(v14) = *(_BYTE *)(a1 + 12);
            PopNetCompliantNicUpdate(v14);
          }
          PopNetUpdateCsConsumptionFlags();
        }
        PopReleasePolicyLock();
        goto LABEL_32;
      }
      v1 = -1073741801;
    }
  }
  else if ( v8 )
  {
    if ( (int)--v7[7] <= 0 )
    {
      v12 = *(_QWORD **)v6;
      if ( *(_DWORD **)(*(_QWORD *)v6 + 8LL) != v6 || (v13 = (void **)*((_QWORD *)v6 + 1), *v13 != v6) )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      ExFreePoolWithTag(v7, 0x6F435343u);
      goto LABEL_22;
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_32:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock, v4, (__int64)v7, v5);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
