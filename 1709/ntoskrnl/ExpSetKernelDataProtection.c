/*
 * XREFs of ExpSetKernelDataProtection @ 0x1404F44AC
 * Callers:
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1404F46A0 (ExpGenuinePolicyCacheProvider.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14053856C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExGetLicenseTamperState @ 0x140757110 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1407572A0 (ExSetLicenseTamperState.c)
 *     sub_140757A20 @ 0x140757A20 (sub_140757A20.c)
 *     sub_140757B90 @ 0x140757B90 (sub_140757B90.c)
 *     ExInitLicenseData @ 0x14083D688 (ExInitLicenseData.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     sub_1404F4A48 @ 0x1404F4A48 (sub_1404F4A48.c)
 *     sub_1405E1688 @ 0x1405E1688 (sub_1405E1688.c)
 */

__int64 __fastcall ExpSetKernelDataProtection(__int64 a1, char a2, char a3)
{
  void *v5; // rcx
  void *v6; // rsi
  _DWORD *PoolWithTag; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rsi
  char v10; // al
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-28h]
  PVOID P; // [rsp+28h] [rbp-20h]
  PVOID v15; // [rsp+30h] [rbp-18h]
  _DWORD *v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  if ( !a1 )
  {
    v11 = -1073741811;
    goto LABEL_26;
  }
  if ( (a3 & 1) == 0 && !Data )
  {
    v11 = 0;
    goto LABEL_26;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3B98, 0LL);
  if ( qword_1407F3C18 )
  {
    v16 = *(_DWORD **)qword_1407F3C18;
    v13 = sub_1404F4A48(&v16);
    if ( v13 >= 0 )
    {
      PoolWithTag = v16;
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
    if ( PoolWithTag && (v8 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u), v9 = (__int64)v8, (v15 = v8) != 0LL) )
    {
      *v8 = PoolWithTag;
      v16 = PoolWithTag;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[2] = 4;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_BYTE *)PoolWithTag + 40) = 1;
      v13 = sub_1405E1688(v8);
      if ( v13 >= 0 )
      {
        qword_1407F3C18 = v9;
        P = 0LL;
        v15 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = -1073741801;
    }
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3B98, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3B98);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3B98);
  v11 = v13;
  v5 = P;
  v6 = v15;
LABEL_26:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v11;
}
