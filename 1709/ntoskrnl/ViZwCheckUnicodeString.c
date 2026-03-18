/*
 * XREFs of ViZwCheckUnicodeString @ 0x1407CA1CC
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1407C5A10 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1407C5E50 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1407C6490 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1407C6540 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1407C6970 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1407C6B00 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x1407C6C20 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1407C6D20 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x1407C6E20 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1407C6F70 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1407C7580 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1407C8070 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x1407C8500 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1407C8DD0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1407C9020 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1407C9130 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x1407C9CE0 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x1407C9EA0 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1407CA17C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1407CA264 (ViZwCheckVirtualAddress.c)
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
    if ( (MmVerifierData & 0x800) != 0 )
    {
      if ( v4 + v5 < v4 || (v6 = BugCheckParameter3[1], v6 < v5) || ((v5 | v6) & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
  }
}
