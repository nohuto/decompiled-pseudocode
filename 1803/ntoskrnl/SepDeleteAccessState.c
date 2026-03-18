/*
 * XREFs of SepDeleteAccessState @ 0x140105150
 * Callers:
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x1404D52E0 (PsOpenThread.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     WmipCreateGuidObject @ 0x140502308 (WmipCreateGuidObject.c)
 *     SeDeleteAccessState @ 0x140544AA0 (SeDeleteAccessState.c)
 *     CmpCheckSecurityCellAccess @ 0x14056251C (CmpCheckSecurityCellAccess.c)
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x14059A540 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     NtGetNextThread @ 0x1405C2B40 (NtGetNextThread.c)
 *     PspCreateProcess @ 0x1405E9350 (PspCreateProcess.c)
 *     NtGetNextProcess @ 0x14060E220 (NtGetNextProcess.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406F4EE8 (CmpDoAccessCheckOnKCB.c)
 *     CMFCheckAccess @ 0x1407C8194 (CMFCheckAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x14056A020 (SeDeassignSecurity.c)
 */

void __fastcall SepDeleteAccessState(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void (*v5)(void); // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( *(_BYTE *)(a1 + 11) )
    ExFreePoolWithTag(*(PVOID *)v2, 0);
  v3 = *(void **)(a1 + 136);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 48) )
      SeDeassignSecurity((PSECURITY_DESCRIPTOR *)(v2 + 48));
    v5 = *(void (**)(void))(v2 + 72);
    if ( v5 && *(_QWORD *)(v2 + 80) )
    {
      if ( *(_QWORD *)(v2 + 56) )
        v5();
      if ( *(_QWORD *)(v2 + 64) )
        (*(void (__fastcall **)(_QWORD))(v2 + 72))(*(_QWORD *)(v2 + 80));
    }
  }
}
