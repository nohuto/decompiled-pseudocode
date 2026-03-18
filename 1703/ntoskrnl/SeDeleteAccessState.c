/*
 * XREFs of SeDeleteAccessState @ 0x14046F5D0
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 * Callees:
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
