/*
 * XREFs of KiRecomputeGroupSchedulingRank @ 0x1400A8494
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x1400A8A64 (KiChargeSchedulingGroupCycleTime.c)
 *     KiResortScbQueue @ 0x1400A9530 (KiResortScbQueue.c)
 */

__int64 __fastcall KiRecomputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  volatile signed __int32 *v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int64 result; // rax
  unsigned __int64 v12; // rtt
  volatile signed __int32 *v13; // rcx

  KiChargeSchedulingGroupCycleTime();
  v6 = KiCycleDivisorShortTerm * *(unsigned int *)(a1 + 8);
  v7 = *(_QWORD *)(a2 + 24);
  ++*(_DWORD *)(a2 + 116);
  v8 = *(volatile signed __int32 **)(a2 + 120);
  v9 = v6 >> 7;
  v10 = v9 + v7;
  *(_QWORD *)(a2 + 24) = v10;
  if ( v8 )
  {
    _InterlockedIncrement(v8);
    v10 = *(_QWORD *)(a2 + 24);
  }
  result = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 > v10 )
  {
    v12 = v9 + result - v10 - 1;
    result = v12 / v9;
    *(_DWORD *)(a2 + 116) += v12 / v9;
    *(_QWORD *)(a2 + 24) = v10 + v9 * (unsigned int)(v12 / v9);
    v13 = *(volatile signed __int32 **)(a2 + 120);
    if ( v13 )
      result = (unsigned int)_InterlockedExchangeAdd(v13, result);
  }
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
  {
    LOBYTE(v10) = 1;
    return KiResortScbQueue(a3, a2, v10);
  }
  return result;
}
