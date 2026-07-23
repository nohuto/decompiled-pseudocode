/*
 * XREFs of ZwCreateSection @ 0x14017E880
 * Callers:
 *     LdrpMapResourceFile @ 0x140165554 (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140262BA0 (RtlFileMapMapView.c)
 *     NtGetNlsSectionPtr @ 0x1404618FC (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x14049A020 (ExpGetGlobalLocaleSection.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1404AF86C (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x1404B3F94 (PiLookupInDDB.c)
 *     SepRmLsaConnectRequest @ 0x1405C5C44 (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x140689768 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14071553C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140715718 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140721A38 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407252CC (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140732188 (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
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
