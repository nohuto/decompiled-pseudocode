/*
 * XREFs of NdisGetSharedDataAlignment @ 0x1C0061250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG NdisGetSharedDataAlignment(void)
{
  return KeGetRecommendedSharedDataAlignment();
}
