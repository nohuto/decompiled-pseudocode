/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x1400D1370
 * Callers:
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x14008AE7C (KiChargeSchedulingGroupCycleTime.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400D231C (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400D2CD0 (KiResortScbQueue.c)
 */

unsigned __int64 __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rbx
  char v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 result; // rax
  __int64 v11; // r8
  unsigned int v12; // ecx
  volatile signed __int32 *v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8

  v3 = a3;
  if ( (a3[14] & 0x12) != 0 || !KiChargeSchedulingGroupCycleTime((volatile signed __int64 *)a1, a3) )
  {
    v6 = 0;
  }
  else
  {
    *((_BYTE *)v3 + 112) |= 2u;
    v6 = 1;
  }
  v7 = *v3;
  v8 = v3[1];
  v9 = v3[2];
  if ( (v3[14] & 0x10) != 0 )
  {
    if ( v7 < v8 )
      goto LABEL_5;
  }
  else if ( !v6 && (v8 == v9 || v7 < v8) )
  {
    goto LABEL_5;
  }
  v11 = *(unsigned int *)(a1 + 8);
  v12 = v3[4] / ((unsigned __int64)(KiCycleDivisorLongTerm * v11) >> 7) + 1;
  v13 = (volatile signed __int32 *)v3[15];
  *((_DWORD *)v3 + 29) = v12;
  if ( v13 )
    _InterlockedExchangeAdd(v13, v12);
  v14 = KiCycleDivisorShortTerm * v11;
  *((_BYTE *)v3 + 112) |= 4u;
  v15 = v3[1] + (v14 >> 7);
  v3[3] = v15;
  KiCheckForEffectivePriorityChange(a2, v3, v15, v9);
LABEL_5:
  result = *((unsigned __int8 *)v3 + 112);
  if ( (result & 1) != 0 )
  {
    LOBYTE(a3) = 1;
    if ( (result & 2) != 0 )
      result = KiRemoveSchedulingGroupQueue(a2, v3, a3);
    else
      result = KiResortScbQueue(a2, v3, a3, v9);
  }
  if ( (v3[14] & 4) != 0 && !*(_BYTE *)(a2 + 23449) )
  {
    result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6;
    _InterlockedOr64(
      &qword_140358548[result],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 23449) = 1;
  }
  return result;
}
