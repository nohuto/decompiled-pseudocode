/*
 * XREFs of RtlDeleteBoundaryDescriptor @ 0x180013CA0
 * Callers:
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180038D10 (RtlUnicodeStringToAnsiString.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     sub_18003B7AC @ 0x18003B7AC (sub_18003B7AC.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003BF10 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003FB24 @ 0x18003FB24 (sub_18003FB24.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     RtlUpcaseUnicodeString @ 0x180040B10 (RtlUpcaseUnicodeString.c)
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     sub_180041F10 @ 0x180041F10 (sub_180041F10.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     RtlUnicodeStringToOemString @ 0x18006B620 (RtlUnicodeStringToOemString.c)
 *     sub_180070650 @ 0x180070650 (sub_180070650.c)
 *     RtlpEnsureBufferSize @ 0x180071DA0 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x180078190 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1800796B0 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180079850 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlDuplicateUnicodeString @ 0x18007A8F0 (RtlDuplicateUnicodeString.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     RtlFreeOemString @ 0x180089AD0 (RtlFreeOemString.c)
 *     sub_1800C9EEC @ 0x1800C9EEC (sub_1800C9EEC.c)
 *     sub_1800CCA84 @ 0x1800CCA84 (sub_1800CCA84.c)
 *     LdrUpdatePackageSearchPath @ 0x1800D9180 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E4D50 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E4EA0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E4FC0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlDeleteBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BoundaryDescriptor);
}
