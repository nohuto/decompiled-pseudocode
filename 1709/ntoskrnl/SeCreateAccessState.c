/*
 * XREFs of SeCreateAccessState @ 0x1404C6430
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x14046BF70 (PsOpenThread.c)
 *     NtGetNextThread @ 0x14046DCC8 (NtGetNextThread.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 *     WmipCreateGuidObject @ 0x140520168 (WmipCreateGuidObject.c)
 *     CmpCheckSecurityCellAccess @ 0x1405977F4 (CmpCheckSecurityCellAccess.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406916E0 (CmpDoAccessCheckOnKCB.c)
 *     NtGetNextProcess @ 0x14071C6A0 (NtGetNextProcess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a1, a2, a3, a4);
}
