/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x14003AD30
 * Callers:
 *     KiDispatchInterrupt @ 0x1401B1C20 (KiDispatchInterrupt.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x14003AEF8 (KiShouldPreemptionBeDeferred.c)
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400439A8 (KiInsertDeferredPreemptionApc.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A8C4C (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400A930C (KiAddThreadToScbQueue.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  int ThreadEffectiveRankNonZero; // r14d
  __int64 v7; // rsi
  __int64 v9; // r8
  __int64 v10; // rbp
  bool IsThreadRankNonZero; // al
  char v12; // cl
  int *v13; // rdx
  int v14; // eax
  char v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  ThreadEffectiveRankNonZero = 0;
  v16 = 0;
  v15 = 0;
  while ( 1 )
  {
    LOBYTE(v4) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v4);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v7 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2)
    || ((v10 = *(_QWORD *)(v7 + 104)) == 0
     || (v10 += *(unsigned int *)(a2 + 216)) == 0
     || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v7, v10, v9, 1, (bool *)&v15)) == 0)
    && *(_BYTE *)(v7 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    IsThreadRankNonZero = KiIsThreadRankNonZero(a1, (struct _KPRCB *)a2);
    v12 = 1;
    if ( !IsThreadRankNonZero )
      v12 = *(_BYTE *)(a1 + 195);
  }
  else
  {
    v12 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v12;
  v13 = *(int **)(a2 + 25016);
  if ( v13 )
  {
    v14 = KiVpThreadSystemWorkPriority;
    if ( a1 != *(_QWORD *)(a2 + 24) )
      v14 = v12;
    *v13 = v14;
  }
  *(_BYTE *)(v7 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v10, v7, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v7, *(char *)(v7 + 195), 1, v15);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
