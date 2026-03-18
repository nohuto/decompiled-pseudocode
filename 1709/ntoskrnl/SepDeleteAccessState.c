/*
 * XREFs of SepDeleteAccessState @ 0x140081E70
 * Callers:
 *     SeDeleteAccessState @ 0x14045D050 (SeDeleteAccessState.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x14046BF70 (PsOpenThread.c)
 *     NtGetNextThread @ 0x14046DCC8 (NtGetNextThread.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x1404C5240 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 *     WmipCreateGuidObject @ 0x140520168 (WmipCreateGuidObject.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     CmpCheckSecurityCellAccess @ 0x1405977F4 (CmpCheckSecurityCellAccess.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406916E0 (CmpDoAccessCheckOnKCB.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 *     NtGetNextProcess @ 0x14071C6A0 (NtGetNextProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x14057D4B0 (SeDeassignSecurity.c)
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
