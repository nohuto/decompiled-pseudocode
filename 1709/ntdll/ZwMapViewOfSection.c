/*
 * XREFs of ZwMapViewOfSection @ 0x1800A05C0
 * Callers:
 *     CsrpConnectToServer @ 0x18000699C (CsrpConnectToServer.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800136B8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpMapResourceFile @ 0x180018AC4 (LdrpMapResourceFile.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800193D0 (RtlCreateQueryDebugBuffer.c)
 *     LdrpMinimalMapModule @ 0x180022288 (LdrpMinimalMapModule.c)
 *     PsspCaptureVaSpaceInformation @ 0x180059BCC (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x18005BD74 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18005C79C (PsspCaptureThreadInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x18005CD24 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleTrace @ 0x18005D0E8 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x18005D188 (PsspCaptureIptTrace.c)
 *     PssNtWalkSnapshot @ 0x18005DAB0 (PssNtWalkSnapshot.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x18005DDF4 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x18005DF14 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x18005E084 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007A228 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800830C4 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008A5B0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpMapCleanModuleView @ 0x1800D69B4 (LdrpMapCleanModuleView.c)
 *     RtlCreateProcessReflection @ 0x1800D6CD0 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 *     RtlReportSqmEscalation @ 0x1800DD180 (RtlReportSqmEscalation.c)
 *     WerpCreateCrashDataSection @ 0x1800DD624 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800DF8F0 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E2DF4 (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F0190 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F02A0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F0AA0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800F66E8 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlHeapTrkInitialize @ 0x1800F6B90 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800F7700 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x180100BC8 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180102AEC (RtlpHpTagQueryHeapsRemote.c)
 *     _ResMapViewOfFile @ 0x180110408 (_ResMapViewOfFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSection(
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
  NTSTATUS result; // eax

  result = 40;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
