/*
 * XREFs of ExGetPreviousMode @ 0x140005F90
 * Callers:
 *     NtApphelpCacheControl @ 0x140493478 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14070B0E8 (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x1407F5744 (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
