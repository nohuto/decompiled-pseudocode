/*
 * XREFs of NtdllpFreeStringRoutine @ 0x18004FA20
 * Callers:
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800187FC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpLoadForwardedDll @ 0x18002BF34 (LdrpLoadForwardedDll.c)
 *     RtlUnicodeStringToAnsiString @ 0x18002E7D0 (RtlUnicodeStringToAnsiString.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180030EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlGetFullPathName_UstrEx @ 0x180031520 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180032660 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpFindLoadedDll @ 0x180035548 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x180035624 (LdrpFindLoadedDllInternal.c)
 *     LdrpMapDllFullPath @ 0x18004D28C (LdrpMapDllFullPath.c)
 *     LdrpGetNtPathFromDosPath @ 0x18004DC14 (LdrpGetNtPathFromDosPath.c)
 *     LdrpGetFullPath @ 0x18004DD58 (LdrpGetFullPath.c)
 *     RtlCreateUnicodeString @ 0x18004EE70 (RtlCreateUnicodeString.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x18004F9BC (LdrpFreeUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x1800508F0 (RtlUpcaseUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     RtlUnicodeStringToOemString @ 0x18006CEE0 (RtlUnicodeStringToOemString.c)
 *     RtlpEnsureBufferSize @ 0x1800749D0 (RtlpEnsureBufferSize.c)
 *     RtlDowncaseUnicodeString @ 0x1800799A0 (RtlDowncaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x18007ADF0 (RtlDuplicateUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18007B400 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18007B5A0 (RtlUpcaseUnicodeStringToOemString.c)
 *     LdrpMapDllRetry @ 0x180080334 (LdrpMapDllRetry.c)
 *     RtlFreeOemString @ 0x18008AED0 (RtlFreeOemString.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800D07BC (LdrpEnclaveAddDependentModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D2BD4 (LdrpGetProcApphelpCheckModule.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DE280 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E8D20 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8E70 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8F90 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
