/*
 * XREFs of PfFbBufferListShutdown @ 0x140271230
 * Callers:
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
