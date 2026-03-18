/*
 * XREFs of SepDeleteAccessState @ 0x1400EE7C0
 * Callers:
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     NtGetNextThread @ 0x14041F564 (NtGetNextThread.c)
 *     CmpCheckSecurityCellAccess @ 0x14045860C (CmpCheckSecurityCellAccess.c)
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     SeDeleteAccessState @ 0x14046F5D0 (SeDeleteAccessState.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x1404F33F0 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x14050EFA0 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x14050F290 (PsOpenProcess.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     WmipCreateGuidObject @ 0x140555430 (WmipCreateGuidObject.c)
 *     NtGetNextProcess @ 0x14057BB10 (NtGetNextProcess.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406671C0 (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x140449CF0 (SeDeassignSecurity.c)
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
