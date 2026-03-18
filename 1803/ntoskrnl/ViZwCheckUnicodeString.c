/*
 * XREFs of ViZwCheckUnicodeString @ 0x14083772C
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x140832F70 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1408333B0 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1408339F0 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x140833AA0 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x140833ED0 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x140834060 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x140834180 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x140834280 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x140834380 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1408344D0 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x140834AE0 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1408355D0 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x140835A60 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x140836330 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x140836580 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x140836690 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x140837240 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x140837400 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1408376DC (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1408377C4 (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(__int16 *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rdi
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)BugCheckParameter3, BugCheckParameter2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    ViZwCheckVirtualAddress(v4, BugCheckParameter2);
    v5 = *BugCheckParameter3;
    if ( (MmVerifierData & 0x100) != 0 )
    {
      if ( v4 + v5 < v4 || (v6 = BugCheckParameter3[1], v6 < v5) || ((v5 | v6) & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
  }
}
