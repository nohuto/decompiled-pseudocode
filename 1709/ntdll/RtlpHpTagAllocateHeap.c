/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x180061FE4
 * Callers:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x180062050 (RtlpHpTaggableHeap.c)
 *     RtlpHpTagContextGetTag @ 0x180102960 (RtlpHpTagContextGetTag.c)
 */

unsigned __int64 __fastcall RtlpHpTagAllocateHeap(__int64 a1, size_t a2, int a3)
{
  unsigned __int16 Tag; // di
  unsigned __int64 result; // rax

  if ( (unsigned int)RtlpHpTaggableHeap() )
    Tag = RtlpHpTagContextGetTag();
  else
    Tag = 0;
  result = RtlpAllocateHeapInternal(a1, a2, a3, Tag);
  if ( !result )
  {
    if ( Tag )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_18015D918 + 8LL * Tag - 8) + 32LL),
        -(__int64)a2);
  }
  return result;
}
