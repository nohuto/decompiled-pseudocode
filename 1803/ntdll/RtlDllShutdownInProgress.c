/*
 * XREFs of RtlDllShutdownInProgress @ 0x18004AAB0
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008AF70 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_18015C3A8 != 0;
}
