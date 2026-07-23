/*
 * XREFs of RtlpHpTaggableHeap @ 0x180062050
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180061908 (RtlpHpTagDestroyHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180061FE4 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(_DWORD *a1)
{
  return a1[4] == -571548178 && a1 != RtlpHpMetadataHeap;
}
