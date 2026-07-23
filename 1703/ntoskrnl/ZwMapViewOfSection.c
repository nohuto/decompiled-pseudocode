/*
 * XREFs of ZwMapViewOfSection @ 0x14017E440
 * Callers:
 *     RtlFileMapMapView @ 0x140262BA0 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1404B3F94 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140689768 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14071553C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140715718 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140721A38 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407252CC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140732188 (AslpFileLargeMapCreate.c)
 *     CmpSetVideoBiosInformation @ 0x1407F730C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 *     EmpMapPhysicalAddress @ 0x140805124 (EmpMapPhysicalAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
