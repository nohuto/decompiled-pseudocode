/*
 * XREFs of SeCreateAccessState @ 0x1404D2BF0
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x1404D52E0 (PsOpenThread.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     WmipCreateGuidObject @ 0x140502308 (WmipCreateGuidObject.c)
 *     NtGetNextThread @ 0x1405C2B40 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x14060E220 (NtGetNextProcess.c)
 *     CMFCheckAccess @ 0x1407C8194 (CMFCheckAccess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(int *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a1, a2, a3, a4);
}
