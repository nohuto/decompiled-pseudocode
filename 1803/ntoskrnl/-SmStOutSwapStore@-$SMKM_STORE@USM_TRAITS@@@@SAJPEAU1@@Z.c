/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14009A524
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140081D8C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14009740C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140097528 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmArrayGrow @ 0x14009A7F4 (SmArrayGrow.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14009AD0C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x14009C150 (SmPerformStoreSwapOperation.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400D7870 (RtlFindNextForwardRunClearCapped.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r13d
  unsigned int *v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rax
  int NextForwardRunClearCapped; // eax
  __int64 v13; // r9
  bool v14; // cf
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  int v19; // ebx
  struct _KTHREAD *v20; // rax
  unsigned int *v21; // rsi
  __int64 v23; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  PVOID v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h]
  __int64 v27; // [rsp+48h] [rbp-20h]
  PVOID v28; // [rsp+50h] [rbp-18h]
  __int64 v29; // [rsp+58h] [rbp-10h]
  unsigned int v30; // [rsp+B0h] [rbp+48h] BYREF
  int v31; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+C0h] [rbp+58h]
  PVOID PoolWithTag; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  v3 = 0;
  v25 = 0LL;
  P = 0LL;
  v4 = 0LL;
  PoolWithTag = 0LL;
  v5 = -1LL;
  v6 = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList(a1);
  v9 = *(_QWORD **)(a1 + 6552);
  if ( (unsigned __int64)v9 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v19 = -1073700861;
  }
  else
  {
    if ( v9 != (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6552), -1LL, (signed __int64)v9) )
      return (unsigned int)-1073700861;
    if ( *v9 )
    {
      v5 = (__int64)v9;
      v19 = -1073741791;
      goto LABEL_29;
    }
    CurrentThread = KeGetCurrentThread();
    v3 = 1;
    v5 = 0LL;
    v25 = v9;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * *(_DWORD *)(a1 + 6212)), 0x77536D73u);
    if ( !PoolWithTag )
    {
      v19 = -1073741670;
LABEL_26:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
      KeAbPostRelease(a1 + 6024);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      goto LABEL_29;
    }
    v31 = 0;
    v30 = 0;
LABEL_6:
    v11 = v9 + 1;
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v11, v1, 0xFFFFFFFFLL, &v30);
      if ( !NextForwardRunClearCapped )
        break;
      v1 = v30;
      v32 = v30 + NextForwardRunClearCapped;
      v14 = v30 < v30 + NextForwardRunClearCapped;
      v11 = v9 + 1;
      if ( v14 )
      {
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v1) & 0x7FFFFFFFFFFF0000LL) != 0 )
          {
            v26 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v1, 0, v13, 4u);
            if ( !(unsigned int)SmArrayGrow((unsigned int)v6, v15, &v31, &P) )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v1, v16, v13, v23, 2u);
              v19 = -1073741670;
              goto LABEL_19;
            }
            v17 = P;
            v18 = 2LL * (unsigned int)v6;
            *((_DWORD *)PoolWithTag + v6) = v1;
            v6 = (unsigned int)(v6 + 1);
            v17[v18] = v26;
            v17[v18 + 1] = *(unsigned int *)(a1 + 6208);
          }
          v30 = ++v1;
          if ( v1 >= v32 )
            goto LABEL_6;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    v3 = 0;
    if ( !(_DWORD)v6 )
    {
      v19 = -1073741607;
      goto LABEL_30;
    }
    v27 = 0LL;
    v28 = P;
    v29 = (unsigned int)v6;
    v19 = SmPerformStoreSwapOperation(1LL);
    if ( v19 >= 0 )
    {
      v5 = (__int64)v9;
      *v9 = v27;
      v19 = 0;
      v25 = 0LL;
    }
LABEL_19:
    v4 = (unsigned int *)PoolWithTag;
  }
  if ( (_DWORD)v6 )
  {
    if ( !v3 )
    {
      v20 = KeGetCurrentThread();
      v3 = 1;
      --v20->SpecialApcDisable;
      ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    }
    v21 = v4;
    do
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v21++, v7, v8, v23, 2u);
      --v6;
    }
    while ( v6 );
  }
  if ( v3 )
    goto LABEL_26;
LABEL_29:
  if ( v5 != -1 )
LABEL_30:
    _InterlockedExchange64((volatile __int64 *)(a1 + 6552), v5);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v19;
}
