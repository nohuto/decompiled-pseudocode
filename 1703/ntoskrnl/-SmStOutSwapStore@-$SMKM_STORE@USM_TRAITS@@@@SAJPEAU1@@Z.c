/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140003DE8
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14007E5E0 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     SmPerformStoreSwapOperation @ 0x1400040B8 (SmPerformStoreSwapOperation.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001FDF0 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmArrayGrow @ 0x14003BA3C (SmArrayGrow.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14005D878 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14005D994 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400AC7C0 (RtlFindNextForwardRunClearCapped.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rax
  int NextForwardRunClearCapped; // eax
  int v13; // r9d
  bool v14; // cf
  __int64 v15; // rdx
  int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  int v19; // ebx
  struct _KTHREAD *v20; // rax
  _DWORD *v21; // rsi
  int v23; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  PVOID v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h]
  _QWORD v27[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+48h] BYREF
  int v29; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+58h]
  PVOID PoolWithTag; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  v3 = 0;
  v25 = 0LL;
  P = 0LL;
  v4 = 0LL;
  PoolWithTag = 0LL;
  v5 = -1LL;
  v6 = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList();
  v9 = *(_QWORD **)(a1 + 6520);
  if ( (unsigned __int64)v9 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v19 = -1073700861;
  }
  else
  {
    if ( v9 != (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6520), -1LL, (signed __int64)v9) )
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
    ExAcquirePushLockSharedEx(a1 + 5992, 0LL);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * *(_DWORD *)(a1 + 6180)), 0x77536D73u);
    if ( !PoolWithTag )
    {
      v19 = -1073741670;
LABEL_26:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5992), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 5992);
      KeAbPostRelease(a1 + 5992);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      goto LABEL_29;
    }
    v29 = 0;
    v28 = 0;
LABEL_6:
    v11 = v9 + 1;
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v11, v1, 0xFFFFFFFFLL, &v28);
      if ( !NextForwardRunClearCapped )
        break;
      v1 = v28;
      v30 = v28 + NextForwardRunClearCapped;
      v14 = v28 < v28 + NextForwardRunClearCapped;
      v11 = v9 + 1;
      if ( v14 )
      {
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6184) + 8LL * v1) & 0x7FFFFFFFFFFF0000LL) != 0 )
          {
            v26 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v1, 0, v13, 4);
            if ( !(unsigned int)SmArrayGrow((unsigned int)v6, v15, &v29, &P) )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v1, v16, v13, v23, 2);
              v19 = -1073741670;
              goto LABEL_19;
            }
            v17 = P;
            v18 = 2LL * (unsigned int)v6;
            *((_DWORD *)PoolWithTag + v6) = v1;
            v6 = (unsigned int)(v6 + 1);
            v17[v18] = v26;
            v17[v18 + 1] = *(unsigned int *)(a1 + 6176);
          }
          v28 = ++v1;
          if ( v1 >= v30 )
            goto LABEL_6;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5992), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 5992);
    KeAbPostRelease(a1 + 5992);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    v3 = 0;
    if ( !(_DWORD)v6 )
    {
      v19 = -1073741607;
      goto LABEL_30;
    }
    v27[0] = 0LL;
    v27[1] = P;
    v27[2] = (unsigned int)v6;
    v19 = SmPerformStoreSwapOperation(1LL, v27);
    if ( v19 >= 0 )
    {
      v5 = (__int64)v9;
      *v9 = v27[0];
      v19 = 0;
      v25 = 0LL;
    }
LABEL_19:
    v4 = PoolWithTag;
  }
  if ( (_DWORD)v6 )
  {
    if ( !v3 )
    {
      v20 = KeGetCurrentThread();
      v3 = 1;
      --v20->SpecialApcDisable;
      ExAcquirePushLockSharedEx(a1 + 5992, 0LL);
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
    goto LABEL_26;
LABEL_29:
  if ( v5 != -1 )
LABEL_30:
    _InterlockedExchange64((volatile __int64 *)(a1 + 6520), v5);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v19;
}
