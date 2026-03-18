/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x1401153E8
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x1400F0D10 (MiEmptyDecayClusterTimers.c)
 *     MiDecayPfnFullyInitialized @ 0x140115284 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x140115354 (MiDeleteParentDecayNode.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // r9
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r10

  v1 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v2 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  result = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)result >> 1;
  v5 = result >> 33;
  if ( v4 == 0x7FFFFFFF )
    *(_QWORD *)(v2 + 8 * v1 + 4640) = result ^ (result ^ *(_QWORD *)(v2 + 8 * v1 + 4640)) & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_140388DE0 + v4) - 0x58000000000LL + 8) = result ^ (result ^ *(_QWORD *)(48 * (qword_140388DE0 + v4)
                                                                                                  - 0x58000000000LL
                                                                                                  + 8)) & 0x1FFFFFFFFLL;
  if ( v5 == 0x7FFFFFFF )
  {
    *(_QWORD *)(v2 + 8 * v1 + 4640) ^= (result ^ *(_QWORD *)(v2 + 8 * v1 + 4640)) & 0xFFFFFFFE;
  }
  else
  {
    result = (*(_DWORD *)(48 * (v5 + qword_140388DE0) - 0x58000000000LL + 8) ^ (unsigned int)result) & 0xFFFFFFFE;
    *(_QWORD *)(48 * (v5 + qword_140388DE0) - 0x58000000000LL + 8) ^= result;
  }
  return result;
}
