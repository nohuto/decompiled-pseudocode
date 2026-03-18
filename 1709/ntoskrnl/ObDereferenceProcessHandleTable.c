/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x140577320
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401FA8E0 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 95);
}
