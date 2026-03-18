/*
 * XREFs of SeCreateAccessState @ 0x1404F4470
 * Callers:
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     NtGetNextThread @ 0x14041F564 (NtGetNextThread.c)
 *     CmpCheckSecurityCellAccess @ 0x14045860C (CmpCheckSecurityCellAccess.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x1404F33F0 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     WmipCreateGuidObject @ 0x140555430 (WmipCreateGuidObject.c)
 *     NtGetNextProcess @ 0x14057BB10 (NtGetNextProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406671C0 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x1400EE570 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a1, a2, a3, a4);
}
