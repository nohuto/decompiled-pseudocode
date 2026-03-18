/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1401136E0
 * Callers:
 *     KiDispatchInterrupt @ 0x140188550 (KiDispatchInterrupt.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x14003FE18 (KiInsertDeferredPreemptionApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiShouldPreemptionBeDeferred @ 0x14011387C (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x140113B68 (KiPrcbInGroupAffinity.c)
 *     KiAddThreadToScbQueue @ 0x140113C3C (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x14011F700 (KiAddThreadToPrcbQueue.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  int ThreadEffectiveRankNonZero; // r14d
  __int64 v5; // rsi
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbp
  char IsThreadRankNonZero; // al
  char v11; // cl
  char v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1) )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  v13 = 0;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v5 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v5 == *(_QWORD *)(a2 + 24)
    || !(unsigned int)KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v8 = *(_QWORD *)(v5 + 104)) == 0
     || (v8 += *(unsigned int *)(a2 + 216)) == 0
     || (LOBYTE(v7) = 1,
         (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v5, v8, v6, v7, (__int64)&v12)) == 0))
    && *(_BYTE *)(v5 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a2);
    v11 = 1;
    if ( !IsThreadRankNonZero )
      v11 = *(_BYTE *)(a1 + 195);
  }
  else
  {
    v11 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v11;
  *(_BYTE *)(v5 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v8, v5, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v5, *(char *)(v5 + 195), 1, v12);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  KiInsertDeferredPreemptionApc(a2, a1, 0);
  return 1;
}
