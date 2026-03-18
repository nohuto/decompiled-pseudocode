/*
 * XREFs of ExGetPreviousMode @ 0x140100020
 * Callers:
 *     NtApphelpCacheControl @ 0x140560FD4 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1406A6A5C (VrpPostQueryKey.c)
 *     AhcCacheQueryHwId @ 0x140788F7C (AhcCacheQueryHwId.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
