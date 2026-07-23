/*
 * XREFs of RtlFreeUnicodeString @ 0x180011530
 * Callers:
 *     LdrSetDllDirectory @ 0x180002990 (LdrSetDllDirectory.c)
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     sub_180004180 @ 0x180004180 (sub_180004180.c)
 *     sub_180004530 @ 0x180004530 (sub_180004530.c)
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 *     sub_1800092CC @ 0x1800092CC (sub_1800092CC.c)
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     sub_1800252F4 @ 0x1800252F4 (sub_1800252F4.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180037F50 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800380F0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     RtlCreateServiceSid @ 0x1800445F0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180049350 (RtlCreateVirtualAccountSid.c)
 *     sub_18004DCD8 @ 0x18004DCD8 (sub_18004DCD8.c)
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 *     RtlEqualDomainName @ 0x180067DA0 (RtlEqualDomainName.c)
 *     RtlOpenCurrentUser @ 0x18006F9B0 (RtlOpenCurrentUser.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     sub_180080418 @ 0x180080418 (sub_180080418.c)
 *     sub_1800CB800 @ 0x1800CB800 (sub_1800CB800.c)
 *     sub_1800CC838 @ 0x1800CC838 (sub_1800CC838.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800DD5D8 @ 0x1800DD5D8 (sub_1800DD5D8.c)
 *     RtlIsNameInExpression @ 0x1800F49F0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800F4AA0 (RtlIsNameInUnUpcasedExpression.c)
 *     sub_180106ED0 @ 0x180106ED0 (sub_180106ED0.c)
 *     sub_180107460 @ 0x180107460 (sub_180107460.c)
 *     sub_180108FC8 @ 0x180108FC8 (sub_180108FC8.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 */

void __stdcall RtlFreeUnicodeString(PUNICODE_STRING UnicodeString)
{
  _OBJECT_BOUNDARY_DESCRIPTOR *Buffer; // rcx

  Buffer = (_OBJECT_BOUNDARY_DESCRIPTOR *)UnicodeString->Buffer;
  if ( Buffer )
  {
    RtlDeleteBoundaryDescriptor(Buffer);
    *(_QWORD *)&UnicodeString->Length = 0LL;
    UnicodeString->Buffer = 0LL;
  }
}
