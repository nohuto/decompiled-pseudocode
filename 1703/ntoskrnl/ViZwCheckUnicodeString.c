/*
 * XREFs of ViZwCheckUnicodeString @ 0x140787D68
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x140783660 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x140783A80 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1407840C0 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x140784170 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1407845A0 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140784730 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x140784850 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140784950 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x140784A70 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x140784BC0 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1407851B0 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x140785C90 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x140786100 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1407869B0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x140786C00 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x140786D00 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x140787880 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x140787A40 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x140787D18 (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x140787DFC (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(unsigned __int16 *a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( a1 )
  {
    ViZwCheckVirtualAddress(a1, a2);
    v4 = *((_QWORD *)a1 + 1);
    ViZwCheckVirtualAddress(v4, a2);
    v5 = *a1;
    if ( v4 + v5 < v4 || (v6 = a1[1], v6 < (unsigned __int16)v5) || (((unsigned __int16)v5 | v6) & 1) != 0 )
    {
      if ( ViZwBreakForIssues )
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, a2, (ULONG_PTR)a1, 0LL);
    }
  }
}
