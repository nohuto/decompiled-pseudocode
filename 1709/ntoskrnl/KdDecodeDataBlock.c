/*
 * XREFs of KdDecodeDataBlock @ 0x140201310
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     IopLiveDumpEndMirroringCallback @ 0x14042B400 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KdCopyDataBlock @ 0x140201214 (KdCopyDataBlock.c)
 */

char *KdDecodeDataBlock()
{
  char *result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
