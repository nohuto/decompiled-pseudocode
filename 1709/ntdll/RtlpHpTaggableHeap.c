/*
 * XREFs of RtlpHpTaggableHeap @ 0x180062050
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180061908 (RtlpHpTagDestroyHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180061FE4 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(__int64 a1)
{
  return *(_DWORD *)(a1 + 16) == -571548178 && a1 != RtlpHpMetadataHeap;
}
