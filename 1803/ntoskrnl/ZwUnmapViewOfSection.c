/*
 * XREFs of ZwUnmapViewOfSection @ 0x1401A7A00
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x1400CC138 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1401618FC (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1402C28B0 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1405FBCF4 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14071A118 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1407BB55C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1407BB76C (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407C8DAC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1407CC564 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x1407DF32C (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x1408A95A4 (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x1408AF57C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1408AF738 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
