/*
 * XREFs of ZwUnmapViewOfSection @ 0x14017E480
 * Callers:
 *     RtlFileMapFree @ 0x14006D794 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x140262BA0 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1404B3F94 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140689768 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14071553C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140715718 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140721A38 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x140724DB4 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x14073244C (AslpFilePartialViewFree.c)
 *     CmpSetVideoBiosInformation @ 0x1407F730C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1407F75EC (CmpSetSystemBiosInformation.c)
 *     EmpCacheBiosDate @ 0x140804FF0 (EmpCacheBiosDate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
