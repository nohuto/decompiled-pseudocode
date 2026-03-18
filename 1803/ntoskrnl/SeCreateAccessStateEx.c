/*
 * XREFs of SeCreateAccessStateEx @ 0x1405626A0
 * Callers:
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     CmpCheckSecurityCellAccess @ 0x14056251C (CmpCheckSecurityCellAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406F4EE8 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        int *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(a1, a2, &SubjectContext);
  return SepCreateAccessStateFromSubjectContext(&SubjectContext, a3, a4, a5, a6);
}
