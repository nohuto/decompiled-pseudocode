/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1400AA5D0
 * Callers:
 *     KiDispatchInterrupt @ 0x140188000 (KiDispatchInterrupt.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400AA768 (KiShouldPreemptionBeDeferred.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400AB178 (KiInsertDeferredPreemptionApc.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToPrcbQueue @ 0x1400D2720 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400D2AE0 (KiAddThreadToScbQueue.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int ThreadEffectiveRankNonZero; // r14d
  __int64 v7; // rsi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  char IsThreadRankNonZero; // al
  char v13; // cl
  _DWORD *v14; // rdx
  char v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1, a2, a3, a4) )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  v16 = 0;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a2 + 48) );
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 104)
    || v7 == *(_QWORD *)(a2 + 24)
    || !KiPrcbInGroupAffinity(a2, a1 + 576)
    || ((v11 = *(_QWORD *)(v7 + 104)) == 0
     || (v11 += *(unsigned int *)(a2 + 216)) == 0
     || (LOBYTE(v10) = 1,
         (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v7, v11, v9, v10, (__int64)&v15)) == 0))
    && *(_BYTE *)(v7 + 195) > *(_BYTE *)(a1 + 195) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    return 0;
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a2);
    v13 = 1;
    if ( !IsThreadRankNonZero )
      v13 = *(_BYTE *)(a1 + 195);
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 195);
  }
  **(_BYTE **)(a2 + 56) = v13;
  v14 = *(_DWORD **)(a2 + 25016);
  if ( v14 )
    *v14 = v13;
  *(_BYTE *)(v7 + 388) = 1;
  if ( ThreadEffectiveRankNonZero )
    KiAddThreadToScbQueue(a2, v11, v7, 1LL);
  else
    KiAddThreadToPrcbQueue(a2, v7, *(char *)(v7 + 195), 1, v15);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  KiInsertDeferredPreemptionApc(a2, a1, 0LL);
  return 1;
}
