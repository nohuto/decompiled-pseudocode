/*
 * XREFs of NdisCurrentProcessorIndexExported @ 0x1C000E710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisCurrentProcessorIndexExported(void)
{
  return KeGetPcr()->Prcb.Number;
}
