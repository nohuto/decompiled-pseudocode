/*
 * XREFs of KdDecodeDataBlock @ 0x14023E3E8
 * Callers:
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140481F00 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KdCopyDataBlock @ 0x14023E2EC (KdCopyDataBlock.c)
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
