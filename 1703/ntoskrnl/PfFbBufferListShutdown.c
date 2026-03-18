/*
 * XREFs of PfFbBufferListShutdown @ 0x140227054
 * Callers:
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PfFbBufferListShutdown(PEX_RUNDOWN_REF RunRef)
{
  ExWaitForRundownProtectionRelease(RunRef);
}
