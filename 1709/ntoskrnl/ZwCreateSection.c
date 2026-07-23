/*
 * XREFs of ZwCreateSection @ 0x14017E200
 * Callers:
 *     LdrpMapResourceFile @ 0x1400B58D4 (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x14028CE60 (RtlFileMapMapView.c)
 *     ExpGetGlobalLocaleSection @ 0x14045DD20 (ExpGetGlobalLocaleSection.c)
 *     ExUpdateLicenseDataInternal @ 0x1404F3810 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1404F55B4 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x14054487C (PiLookupInDDB.c)
 *     NtGetNlsSectionPtr @ 0x140593170 (NtGetNlsSectionPtr.c)
 *     SepRmLsaConnectRequest @ 0x1405EAF1C (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x1406B5468 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140754C3C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140754E40 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407615E4 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140764D9C (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1407762FC (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
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
