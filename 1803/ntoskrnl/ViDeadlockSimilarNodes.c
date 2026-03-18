/*
 * XREFs of ViDeadlockSimilarNodes @ 0x14082A618
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x1408297D8 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140829858 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ViDeadlockSimilarNodes(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 56) == *(_QWORD *)(a2 + 56) && ((*(_BYTE *)(a2 + 72) ^ *(_BYTE *)(a1 + 72)) & 2) == 0;
}
