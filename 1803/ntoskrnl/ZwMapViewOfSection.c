/*
 * XREFs of ZwMapViewOfSection @ 0x1401A79C0
 * Callers:
 *     CmSiMapViewOfSection @ 0x140006C90 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1402C28B0 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1405FBCF4 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14071A118 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1407BB55C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1407BB76C (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407C8DAC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407CCA7C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1407DF060 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x1408A96D8 (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x1408AF57C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1408AF738 (CmpSetSystemBiosInformation.c)
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
