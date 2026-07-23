/*
 * XREFs of RtlFreeUnicodeString @ 0x18001F9F0
 * Callers:
 *     LdrSetDllDirectory @ 0x1800038F0 (LdrSetDllDirectory.c)
 *     sub_1800050C8 @ 0x1800050C8 (sub_1800050C8.c)
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     RtlOpenCurrentUser @ 0x18003B960 (RtlOpenCurrentUser.c)
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     sub_18003FFE0 @ 0x18003FFE0 (sub_18003FFE0.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800410E0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800478B0 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_18004CE2C @ 0x18004CE2C (sub_18004CE2C.c)
 *     RtlCreateServiceSid @ 0x18004D6F0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180050760 (RtlCreateVirtualAccountSid.c)
 *     sub_180050C68 @ 0x180050C68 (sub_180050C68.c)
 *     sub_1800537C0 @ 0x1800537C0 (sub_1800537C0.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 *     sub_180055274 @ 0x180055274 (sub_180055274.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 *     RtlEqualDomainName @ 0x180069A40 (RtlEqualDomainName.c)
 *     sub_18007B4A8 @ 0x18007B4A8 (sub_18007B4A8.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     sub_180085870 @ 0x180085870 (sub_180085870.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800D6040 @ 0x1800D6040 (sub_1800D6040.c)
 *     sub_1800D6D28 @ 0x1800D6D28 (sub_1800D6D28.c)
 *     RtlIsNameInExpression @ 0x1800F6E30 (RtlIsNameInExpression.c)
 *     sub_180104D80 @ 0x180104D80 (sub_180104D80.c)
 *     sub_1801050C4 @ 0x1801050C4 (sub_1801050C4.c)
 *     sub_180105FE8 @ 0x180105FE8 (sub_180105FE8.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
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
