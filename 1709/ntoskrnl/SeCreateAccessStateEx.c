/*
 * XREFs of SeCreateAccessStateEx @ 0x14057ECE0
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(a1, a2, &SubjectContext);
  return SepCreateAccessStateFromSubjectContext(&SubjectContext, a3, a4, a5, a6);
}
