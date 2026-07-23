/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x180031338
 * Callers:
 *     RtlComputePrivatizedDllName_U @ 0x180002D90 (RtlComputePrivatizedDllName_U.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180017B08 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800187FC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18002BE5C (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18002DB10 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlUnicodeStringToAnsiString @ 0x18002E7D0 (RtlUnicodeStringToAnsiString.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180030EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180031520 (RtlGetFullPathName_UstrEx.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180031E0C (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosSearchPath_Ustr @ 0x180031F10 (RtlDosSearchPath_Ustr.c)
 *     LdrpAllocateUnicodeString @ 0x18004DCF0 (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18004DD58 (LdrpGetFullPath.c)
 *     RtlCreateUnicodeString @ 0x18004EE70 (RtlCreateUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1800508F0 (RtlUpcaseUnicodeString.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180053240 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpQueryRegistryDirect @ 0x180067234 (RtlpQueryRegistryDirect.c)
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     RtlUnicodeStringToOemString @ 0x18006CEE0 (RtlUnicodeStringToOemString.c)
 *     RtlStringFromGUIDEx @ 0x1800717A0 (RtlStringFromGUIDEx.c)
 *     RtlpEnsureBufferSize @ 0x1800749D0 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x1800799A0 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x18007ADF0 (RtlDuplicateUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18007B400 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007B5A0 (RtlUpcaseUnicodeStringToOemString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DE280 (LdrUpdatePackageSearchPath.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF454 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E8D20 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8E70 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8F90 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
