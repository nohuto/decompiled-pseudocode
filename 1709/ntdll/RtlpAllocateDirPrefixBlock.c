/*
 * XREFs of RtlpAllocateDirPrefixBlock @ 0x1800DE4DC
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x1800DE520 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

_WORD *__fastcall RtlpAllocateDirPrefixBlock(unsigned __int16 a1)
{
  _WORD *result; // rax

  result = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, a1 + 32LL);
  if ( result )
  {
    result[8] = 0;
    *((_QWORD *)result + 3) = result + 16;
    result[9] = a1;
  }
  return result;
}
