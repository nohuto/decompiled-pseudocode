/*
 * XREFs of NdisGetSharedDataAlignment @ 0x1C0061F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisGetSharedDataAlignment(void)
{
  return KeGetRecommendedSharedDataAlignment();
}
