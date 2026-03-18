/*
 * XREFs of ObDereferenceProcessHandleTable @ 0x140441C20
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401F4B00 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall ObDereferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 95);
}
