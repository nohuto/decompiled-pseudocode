/*
 * XREFs of RtlDeleteBoundaryDescriptor @ 0x180022070
 * Callers:
 *     sub_180019768 @ 0x180019768 (sub_180019768.c)
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_18003BB58 @ 0x18003BB58 (sub_18003BB58.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003C014 @ 0x18003C014 (sub_18003C014.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003CCD0 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003DF20 @ 0x18003DF20 (sub_18003DF20.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180043D50 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x18004A6F0 (RtlUpcaseUnicodeString.c)
 *     sub_18004AB20 @ 0x18004AB20 (sub_18004AB20.c)
 *     sub_18004BC44 @ 0x18004BC44 (sub_18004BC44.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 *     sub_18005040C @ 0x18005040C (sub_18005040C.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     RtlUnicodeStringToOemString @ 0x180071840 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x180077DA0 (RtlpEnsureBufferSize.c)
 *     RtlOemStringToUnicodeString @ 0x18007C750 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007CA30 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlDowncaseUnicodeString @ 0x18007DB80 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x18007DE00 (RtlDuplicateUnicodeString.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     RtlFreeOemString @ 0x18008F770 (RtlFreeOemString.c)
 *     sub_1800D6F80 @ 0x1800D6F80 (sub_1800D6F80.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DF900 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E99E0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E9B30 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E9C50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlDeleteBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BoundaryDescriptor);
}
