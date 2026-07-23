/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x1400B1940
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x1400A8330 (KiCheckForEffectivePriorityChange.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1400A8A64 (KiChargeSchedulingGroupCycleTime.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400A9260 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400A9530 (KiResortScbQueue.c)
 */

unsigned __int64 __fastcall KiComputeGroupSchedulingRank(__int64 a1, struct _KPRCB *a2, __int64 a3)
{
  char v5; // r8
  char v7; // al
  char v8; // di
  unsigned __int64 v9; // r10
  char v10; // cl
  unsigned __int64 result; // rax
  bool v12; // al
  __int64 v13; // r9
  unsigned int v14; // ecx
  volatile signed __int32 *v15; // rax
  unsigned __int64 v16; // r9

  v5 = *(_BYTE *)(a3 + 112);
  v7 = v5;
  if ( (v5 & 0x12) != 0 )
    goto LABEL_2;
  v12 = KiChargeSchedulingGroupCycleTime((volatile signed __int64 *)a1, (_QWORD *)a3);
  v5 = *(_BYTE *)(a3 + 112);
  if ( !v12 )
  {
    v7 = *(_BYTE *)(a3 + 112);
LABEL_2:
    v8 = 0;
    goto LABEL_3;
  }
  v5 |= 2u;
  v8 = 1;
  *(_BYTE *)(a3 + 112) = v5;
  v7 = v5;
LABEL_3:
  v9 = *(_QWORD *)(a3 + 8);
  v10 = v7;
  if ( (v5 & 0x10) != 0 && *(_QWORD *)a3 >= v9
    || (v5 & 0x10) == 0 && (v8 || (v10 = v7, v9 != *(_QWORD *)(a3 + 16)) && (v10 = v7, *(_QWORD *)a3 >= v9)) )
  {
    v13 = *(unsigned int *)(a1 + 8);
    v14 = *(_QWORD *)(a3 + 32) / ((unsigned __int64)(KiCycleDivisorLongTerm * v13) >> 7) + 1;
    v15 = *(volatile signed __int32 **)(a3 + 120);
    *(_DWORD *)(a3 + 116) = v14;
    if ( v15 )
    {
      _InterlockedExchangeAdd(v15, v14);
      v9 = *(_QWORD *)(a3 + 8);
      v5 = *(_BYTE *)(a3 + 112);
    }
    v16 = v9 + ((unsigned __int64)(KiCycleDivisorShortTerm * v13) >> 7);
    *(_BYTE *)(a3 + 112) = v5 | 4;
    *(_QWORD *)(a3 + 24) = v16;
    KiCheckForEffectivePriorityChange(a2, a3);
    v10 = *(_BYTE *)(a3 + 112);
  }
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 2) != 0 )
      KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a2, a3, 1);
    else
      KiResortScbQueue((_RTL_RB_TREE *)a2, a3, 1);
  }
  result = *(unsigned __int8 *)(a3 + 112);
  if ( (result & 4) != 0 && !a2->GroupSchedulingOverQuota )
  {
    result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[a2->Number] >> 6;
    _InterlockedOr64(&qword_14039BB08[result], 1LL << (KiProcessorIndexToNumberMappingTable[a2->Number] & 0x3F));
    a2->GroupSchedulingOverQuota = 1;
  }
  return result;
}
