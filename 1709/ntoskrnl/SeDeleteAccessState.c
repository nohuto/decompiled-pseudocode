/*
 * XREFs of SeDeleteAccessState @ 0x14045D050
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
