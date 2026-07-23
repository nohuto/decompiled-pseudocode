/*
 * XREFs of sub_180043FE0 @ 0x180043FE0
 * Callers:
 *     RtlComputePrivatizedDllName_U @ 0x180005200 (RtlComputePrivatizedDllName_U.c)
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     sub_18003CC2C @ 0x18003CC2C (sub_18003CC2C.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003CCD0 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800410E0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180043D50 (RtlUnicodeStringToAnsiString.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     sub_1800473D0 @ 0x1800473D0 (sub_1800473D0.c)
 *     sub_180047564 @ 0x180047564 (sub_180047564.c)
 *     RtlUpcaseUnicodeString @ 0x18004A6F0 (RtlUpcaseUnicodeString.c)
 *     sub_18004BC44 @ 0x18004BC44 (sub_18004BC44.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     sub_180055274 @ 0x180055274 (sub_180055274.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180056BE0 @ 0x180056BE0 (sub_180056BE0.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     RtlStringFromGUIDEx @ 0x180061F90 (RtlStringFromGUIDEx.c)
 *     RtlUnicodeStringToOemString @ 0x180071840 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x180077DA0 (RtlpEnsureBufferSize.c)
 *     RtlOemStringToUnicodeString @ 0x18007C750 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007CA30 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlDowncaseUnicodeString @ 0x18007DB80 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x18007DE00 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DF900 (LdrUpdatePackageSearchPath.c)
 *     sub_1800E0AE0 @ 0x1800E0AE0 (sub_1800E0AE0.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E99E0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E9B30 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E9C50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_180043FE0(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
