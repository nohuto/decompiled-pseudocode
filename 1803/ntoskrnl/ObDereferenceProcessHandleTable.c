/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x140565870
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140237700 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 95);
}
