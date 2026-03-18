/*
 * XREFs of ExpSetKernelDataProtection @ 0x1404AE780
 * Callers:
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1404A85DC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404AE480 (ExpGenuinePolicyCacheProvider.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     ExGetLicenseTamperState @ 0x1407179A0 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x140717B30 (ExSetLicenseTamperState.c)
 *     sub_140718340 @ 0x140718340 (sub_140718340.c)
 *     sub_1407184B0 @ 0x1407184B0 (sub_1407184B0.c)
 *     ExInitLicenseData @ 0x140808950 (ExInitLicenseData.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     sub_1404AE384 @ 0x1404AE384 (sub_1404AE384.c)
 *     sub_1405CCC0C @ 0x1405CCC0C (sub_1405CCC0C.c)
 */

__int64 __fastcall ExpSetKernelDataProtection(__int64 a1, char a2, char a3)
{
  void *v5; // rcx
  void *v6; // rsi
  _DWORD *PoolWithTag; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-28h]
  PVOID P; // [rsp+28h] [rbp-20h]
  PVOID v14; // [rsp+30h] [rbp-18h]
  _DWORD *v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  if ( !a1 )
  {
    v10 = -1073741811;
    goto LABEL_27;
  }
  if ( (a3 & 1) == 0 && !Data )
  {
    v10 = 0;
    goto LABEL_27;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACB28, 0LL);
  if ( qword_1407ACB98 )
  {
    v15 = *(_DWORD **)qword_1407ACB98;
    v12 = sub_1404AE384((__int64 *)&v15);
    if ( v12 >= 0 )
    {
      PoolWithTag = v15;
LABEL_7:
      if ( (a2 & 1) != 0 )
        *(_QWORD *)PoolWithTag = *(_QWORD *)a1;
      if ( (a2 & 2) != 0 )
        PoolWithTag[2] = *(_DWORD *)(a1 + 8);
      if ( (a2 & 4) != 0 )
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(a1 + 16);
      if ( (a2 & 8) != 0 )
        *((_QWORD *)PoolWithTag + 3) = *(_QWORD *)(a1 + 24);
      if ( (a2 & 0x10) != 0 )
        *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a1 + 32);
      if ( (a2 & 0x20) != 0 )
        *((_BYTE *)PoolWithTag + 40) = *(_BYTE *)(a1 + 40);
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
    P = PoolWithTag;
    if ( PoolWithTag && (v8 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u), v9 = (__int64)v8, (v14 = v8) != 0LL) )
    {
      *v8 = PoolWithTag;
      v15 = PoolWithTag;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[2] = 4;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_BYTE *)PoolWithTag + 40) = 1;
      v12 = sub_1405CCC0C(v8);
      if ( v12 >= 0 )
      {
        qword_1407ACB98 = v9;
        P = 0LL;
        v14 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v12 = -1073741801;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACB28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACB28);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACB28);
  v10 = v12;
  v5 = P;
  v6 = v14;
LABEL_27:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v10;
}
