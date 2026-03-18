/*
 * XREFs of ExGetPreviousMode @ 0x140011AD0
 * Callers:
 *     NtApphelpCacheControl @ 0x1404291C4 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14067C12C (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x140746A68 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
