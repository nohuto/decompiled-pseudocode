/*
 * XREFs of RtlDllShutdownInProgress @ 0x18006DA00
 * Callers:
 *     RtlResetNtUserPfn @ 0x180090B10 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_18015F3E8 != 0;
}
