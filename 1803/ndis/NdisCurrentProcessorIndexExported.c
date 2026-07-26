/*
 * XREFs of NdisCurrentProcessorIndexExported @ 0x1C0007520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisCurrentProcessorIndexExported(void)
{
  return KeGetPcr()->Prcb.Number;
}
