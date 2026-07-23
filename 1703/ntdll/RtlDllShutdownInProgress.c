/*
 * XREFs of RtlDllShutdownInProgress @ 0x18000B510
 * Callers:
 *     RtlResetNtUserPfn @ 0x180095D30 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_18015B388 != 0;
}
