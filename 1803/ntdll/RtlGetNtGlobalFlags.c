/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1800E72F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtCurrentPeb()->NtGlobalFlag;
}
