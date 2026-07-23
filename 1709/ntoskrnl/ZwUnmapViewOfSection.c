/*
 * XREFs of ZwUnmapViewOfSection @ 0x14017DE00
 * Callers:
 *     RtlFileMapFree @ 0x1400F9D0C (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x14028CE60 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x14054487C (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1406B5468 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140754C3C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140754E40 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407615E4 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x140764884 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x1407765C0 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x14083336C (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x14083B210 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x14083B4EC (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
