/*
 * XREFs of KiRecomputeGroupSchedulingRank @ 0x14002A620
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x1400442B8 (KiChargeSchedulingGroupCycleTime.c)
 *     KiResortScbQueue @ 0x140114D8C (KiResortScbQueue.c)
 */

__int64 __fastcall KiRecomputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r9
  volatile signed __int32 *v7; // rax
  unsigned __int64 v8; // r9
  __int64 result; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rtt
  volatile signed __int32 *v12; // rcx

  KiChargeSchedulingGroupCycleTime(a1, a2);
  v6 = KiCycleDivisorShortTerm * *(unsigned int *)(a1 + 8);
  ++*(_DWORD *)(a2 + 116);
  v7 = *(volatile signed __int32 **)(a2 + 120);
  v8 = v6 >> 7;
  *(_QWORD *)(a2 + 24) += v8;
  if ( v7 )
    _InterlockedIncrement(v7);
  result = *(_QWORD *)a2;
  v10 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)a2 > v10 )
  {
    v11 = v8 + result - v10 - 1;
    result = v11 / v8;
    *(_DWORD *)(a2 + 116) += v11 / v8;
    *(_QWORD *)(a2 + 24) = v10 + v8 * (unsigned int)(v11 / v8);
    v12 = *(volatile signed __int32 **)(a2 + 120);
    if ( v12 )
      result = (unsigned int)_InterlockedExchangeAdd(v12, result);
  }
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
  {
    LOBYTE(v10) = 1;
    return KiResortScbQueue(a3, a2, v10, v8);
  }
  return result;
}
