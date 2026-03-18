/*
 * XREFs of ExpSetKernelDataProtection @ 0x140548EB4
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140549988 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExpGenuinePolicyCacheProvider @ 0x14054A090 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1407BDD10 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1407BDF20 (ExSetLicenseTamperState.c)
 *     sub_1407BE790 @ 0x1407BE790 (sub_1407BE790.c)
 *     sub_1407BE900 @ 0x1407BE900 (sub_1407BE900.c)
 *     ExInitLicenseData @ 0x1408AFFA0 (ExInitLicenseData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     sub_14054A430 @ 0x14054A430 (sub_14054A430.c)
 *     sub_14064A184 @ 0x14064A184 (sub_14064A184.c)
 */

__int64 __fastcall ExpSetKernelDataProtection(__int64 a1, char a2, char a3)
{
  void *v5; // rcx
  void *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *PoolWithTag; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  char v13; // al
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-28h]
  PVOID P; // [rsp+28h] [rbp-20h]
  PVOID v18; // [rsp+30h] [rbp-18h]
  _DWORD *v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  if ( !a1 )
  {
    v14 = -1073741811;
    goto LABEL_26;
  }
  if ( (a3 & 1) == 0 && !Data )
  {
    v14 = 0;
    goto LABEL_26;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1408624E0, 0LL);
  if ( qword_140862558 )
  {
    v19 = *(_DWORD **)qword_140862558;
    v16 = sub_14054A430(&v19);
    if ( v16 >= 0 )
    {
      PoolWithTag = v19;
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
    if ( PoolWithTag
      && (v11 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u), v12 = (__int64)v11, (v18 = v11) != 0LL) )
    {
      *v11 = PoolWithTag;
      v19 = PoolWithTag;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[2] = 4;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_BYTE *)PoolWithTag + 40) = 1;
      v16 = sub_14064A184(v11);
      if ( v16 >= 0 )
      {
        qword_140862558 = v12;
        P = 0LL;
        v18 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v16 = -1073741801;
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1408624E0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1408624E0, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)&qword_1408624E0);
  v14 = v16;
  v5 = P;
  v6 = v18;
LABEL_26:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v14;
}
