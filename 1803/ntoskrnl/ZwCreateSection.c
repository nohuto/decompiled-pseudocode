/*
 * XREFs of ZwCreateSection @ 0x1401A7E00
 * Callers:
 *     CmSiCreateSectionForFile @ 0x140006D58 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14016D15C (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1402C28B0 (RtlFileMapMapView.c)
 *     NtGetNlsSectionPtr @ 0x14053EF74 (NtGetNlsSectionPtr.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExpGetGlobalLocaleSection @ 0x14056CBE0 (ExpGetGlobalLocaleSection.c)
 *     PiLookupInDDB @ 0x1405FBCF4 (PiLookupInDDB.c)
 *     KsepShimDbMapToMemory @ 0x1405FFEA0 (KsepShimDbMapToMemory.c)
 *     SepRmLsaConnectRequest @ 0x140631D90 (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x14071A118 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1407BB55C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1407BB76C (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407C8DAC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407CCA7C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1407DF060 (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
