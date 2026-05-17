/*
 * XREFs of RtlpHpMetadataHeapInit @ 0x1800036A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 *     RtlpMoveHeapBetweenLists @ 0x18004C75C (RtlpMoveHeapBetweenLists.c)
 */

__int64 RtlpHpMetadataHeapInit()
{
  __int64 v0; // rax
  unsigned int v1; // ebx

  v0 = RtlpHpHeapCreate(0LL, 0LL, 0LL);
  RtlpHpMetadataHeap = v0;
  if ( !v0 )
    return 0;
  v1 = 1;
  RtlpMoveHeapBetweenLists(v0, 0LL, 1LL);
  if ( !RtlpHpMetadataHeap )
    return 0;
  return v1;
}
