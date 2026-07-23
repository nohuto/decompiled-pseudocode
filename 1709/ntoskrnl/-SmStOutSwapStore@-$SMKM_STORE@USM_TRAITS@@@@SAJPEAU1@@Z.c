/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268DA4
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140003D64 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006EBC (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400C1A50 (RtlFindNextForwardRunClearCapped.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402689F0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140269804 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmArrayGrow @ 0x140271A84 (SmArrayGrow.c)
 *     SmPerformStoreSwapOperation @ 0x140275E70 (SmPerformStoreSwapOperation.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r13d
  _DWORD *v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // r8d
  int v8; // r9d
  _QWORD *v9; // rsi
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  int NextForwardRunClearCapped; // eax
  __int64 v14; // r9
  bool v15; // cf
  __int64 v16; // rdx
  int v17; // r8d
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  struct _KTHREAD *v20; // rax
  _DWORD *v21; // rsi
  int v23; // [rsp+20h] [rbp-48h]
  PVOID v24; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+38h] [rbp-30h]
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
  P = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  PoolWithTag = 0LL;
  v5 = -1LL;
  v6 = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)a1);
  v9 = *(_QWORD **)(a1 + 6552);
  if ( (unsigned __int64)v9 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v10 = -1073700861;
  }
  else
  {
    if ( v9 != (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6552), -1LL, (signed __int64)v9) )
      return (unsigned int)-1073700861;
    if ( *v9 )
    {
      v5 = (__int64)v9;
      v10 = -1073741791;
      goto LABEL_28;
    }
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    P = v9;
    v3 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * *(_DWORD *)(a1 + 6212)), 0x77536D73u);
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
LABEL_25:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
      KeAbPostRelease(a1 + 6024);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_28;
    }
    v31 = 0;
    v30 = 0;
LABEL_9:
    v12 = (__int64)(v9 + 1);
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v12, v1, 0xFFFFFFFF, &v30);
      if ( !NextForwardRunClearCapped )
        break;
      v1 = v30;
      v32 = v30 + NextForwardRunClearCapped;
      v15 = v30 < v30 + NextForwardRunClearCapped;
      v12 = (__int64)(v9 + 1);
      if ( v15 )
      {
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v1) & 0x7FFFFFFFFFFF0000LL) != 0 )
          {
            v26 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v1, 0, v14, 4u);
            if ( !(unsigned int)SmArrayGrow((unsigned int)v6, v16, &v31, &v24) )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v1, v17, v14, v23, 2);
              v10 = -1073741670;
              goto LABEL_18;
            }
            v18 = v24;
            v19 = 2LL * (unsigned int)v6;
            *((_DWORD *)PoolWithTag + v6) = v1;
            v6 = (unsigned int)(v6 + 1);
            v18[v19] = v26;
            v18[v19 + 1] = *(unsigned int *)(a1 + 6208);
          }
          v30 = ++v1;
          if ( v1 >= v32 )
            goto LABEL_9;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v3 = 0;
    if ( !(_DWORD)v6 )
    {
      v10 = -1073741607;
      goto LABEL_29;
    }
    v27 = 0LL;
    v28 = v24;
    v29 = (unsigned int)v6;
    v10 = SmPerformStoreSwapOperation(1LL);
    if ( v10 >= 0 )
    {
      v5 = (__int64)v9;
      *v9 = v27;
      v10 = 0;
      P = 0LL;
    }
LABEL_18:
    v4 = PoolWithTag;
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
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v21++, v7, v8, v23, 2);
      --v6;
    }
    while ( v6 );
  }
  if ( v3 )
    goto LABEL_25;
LABEL_28:
  if ( v5 != -1 )
LABEL_29:
    _InterlockedExchange64((volatile __int64 *)(a1 + 6552), v5);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v10;
}
