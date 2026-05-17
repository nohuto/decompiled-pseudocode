/*
 * XREFs of RtlpAllocateDirPrefixBlock @ 0x1800DE4DC
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800DE520 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpAllocateDirPrefixBlock(unsigned __int16 a1)
{
  __int64 result; // rax

  result = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, a1 + 32LL);
  if ( result )
  {
    *(_WORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = result + 32;
    *(_WORD *)(result + 18) = a1;
  }
  return result;
}
