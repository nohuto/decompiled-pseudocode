/*
 * XREFs of sub_18003B5E0 @ 0x18003B5E0
 * Callers:
 *     RtlComputePrivatizedDllName_U @ 0x180004250 (RtlComputePrivatizedDllName_U.c)
 *     sub_18000AE4C @ 0x18000AE4C (sub_18000AE4C.c)
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180037F50 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180038D10 (RtlUnicodeStringToAnsiString.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     sub_18003BE6C @ 0x18003BE6C (sub_18003BE6C.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003BF10 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     sub_18003FB24 @ 0x18003FB24 (sub_18003FB24.c)
 *     sub_18003FEA8 @ 0x18003FEA8 (sub_18003FEA8.c)
 *     RtlUpcaseUnicodeString @ 0x180040B10 (RtlUpcaseUnicodeString.c)
 *     sub_180041B68 @ 0x180041B68 (sub_180041B68.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_18004DCD8 @ 0x18004DCD8 (sub_18004DCD8.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     RtlUnicodeStringToOemString @ 0x18006B620 (RtlUnicodeStringToOemString.c)
 *     RtlStringFromGUIDEx @ 0x18006D930 (RtlStringFromGUIDEx.c)
 *     RtlpEnsureBufferSize @ 0x180071DA0 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x180078190 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1800796B0 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180079850 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlDuplicateUnicodeString @ 0x18007A8F0 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800D9180 (LdrUpdatePackageSearchPath.c)
 *     sub_1800DA360 @ 0x1800DA360 (sub_1800DA360.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E4D50 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E4EA0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E4FC0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_18003B5E0(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
