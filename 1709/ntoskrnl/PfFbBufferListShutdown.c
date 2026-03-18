/*
 * XREFs of PfFbBufferListShutdown @ 0x140239D10
 * Callers:
 *     PfTCleanup @ 0x1406F3D88 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
