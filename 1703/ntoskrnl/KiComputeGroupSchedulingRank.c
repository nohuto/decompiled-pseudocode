/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x14001C768
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x14001D530 (KiCheckForEffectivePriorityChange.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400442B8 (KiChargeSchedulingGroupCycleTime.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140114D8C (KiResortScbQueue.c)
 */

char __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 *a3)
{
  char v6; // cl
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // ecx
  volatile signed __int32 *v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8

  if ( (a3[14] & 0x12) != 0 || !(unsigned __int8)KiChargeSchedulingGroupCycleTime(a1, a3) )
  {
    v6 = 0;
  }
  else
  {
    *((_BYTE *)a3 + 112) |= 2u;
    v6 = 1;
  }
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  if ( (a3[14] & 0x10) != 0 && v7 >= v8 || (a3[14] & 0x10) == 0 && (v6 || v8 != v9 && v7 >= v8) )
  {
    v11 = *(unsigned int *)(a1 + 8);
    v12 = a3[4] / ((unsigned __int64)(KiCycleDivisorLongTerm * v11) >> 7) + 1;
    v13 = (volatile signed __int32 *)a3[15];
    *((_DWORD *)a3 + 29) = v12;
    if ( v13 )
      _InterlockedExchangeAdd(v13, v12);
    v14 = KiCycleDivisorShortTerm * v11;
    *((_BYTE *)a3 + 112) |= 4u;
    v15 = a3[1] + (v14 >> 7);
    a3[3] = v15;
    KiCheckForEffectivePriorityChange(a2, a3, v15, v9);
  }
  LOBYTE(v10) = *((_BYTE *)a3 + 112);
  if ( (v10 & 1) != 0 )
  {
    LOBYTE(v7) = 1;
    if ( (v10 & 2) != 0 )
      LOBYTE(v10) = KiRemoveSchedulingGroupQueue(a2, a3, v7, v9);
    else
      LOBYTE(v10) = KiResortScbQueue(a2, a3, v7, v9);
  }
  if ( (a3[14] & 4) != 0 && !*(_BYTE *)(a2 + 23449) )
  {
    v10 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6;
    _InterlockedOr64(
      &qword_14033FEC8[v10],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 23449) = 1;
  }
  return v10;
}
