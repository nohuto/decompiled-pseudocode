/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x1400168C8
 * Callers:
 *     MiDecayPfnFullyInitialized @ 0x140016720 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x14001683C (MiDeleteParentDecayNode.c)
 *     MiEmptyDecayClusterTimers @ 0x140082E80 (MiEmptyDecayClusterTimers.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r8
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // rbx

  v1 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v2 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  result = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)result >> 1;
  v5 = result >> 33;
  if ( v4 == 0x7FFFFFFF )
  {
    *(_QWORD *)(v2 + 8 * v1 + 4512) = result ^ (*(_QWORD *)(v2 + 8 * v1 + 4512) ^ result) & 0x1FFFFFFFFLL;
    v6 = qword_14036CBE0;
  }
  else
  {
    v6 = qword_14036CBE0;
    *(_QWORD *)(48 * (qword_14036CBE0 + v4) - 0x58000000000LL + 8) = result ^ (result ^ *(_QWORD *)(48 * (qword_14036CBE0 + v4)
                                                                                                  - 0x58000000000LL
                                                                                                  + 8)) & 0x1FFFFFFFFLL;
  }
  if ( v5 == 0x7FFFFFFF )
  {
    result = (*(_DWORD *)(v2 + 8 * v1 + 4512) ^ (unsigned int)result) & 0xFFFFFFFE;
    *(_QWORD *)(v2 + 8 * v1 + 4512) ^= result;
  }
  else
  {
    *(_QWORD *)(48 * (v6 + v5) - 0x58000000000LL + 8) ^= (result ^ *(_QWORD *)(48 * (v6 + v5) - 0x58000000000LL + 8)) & 0xFFFFFFFE;
  }
  return result;
}
