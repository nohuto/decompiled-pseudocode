/*
 * XREFs of LinkNodeClearPossibleData @ 0x1C008980C
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0089410 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008A3E0 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00A8A5C (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeClearPossibleData()
{
  __int64 result; // rax

  for ( result = LinkNodeListHead - 56;
        &LinkNodeListHead != (__int64 *)(result + 56);
        result = *(_QWORD *)(result + 56) - 56LL )
  {
    *(_DWORD *)(result + 36) = 0;
    *(_DWORD *)(result + 28) = 0;
  }
  return result;
}
