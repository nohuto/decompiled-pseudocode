/*
 * XREFs of IoFreeIrp @ 0x1400F1190
 * Callers:
 *     IopDropIrp @ 0x140011708 (IopDropIrp.c)
 *     IopCompletePageWrite @ 0x140014040 (IopCompletePageWrite.c)
 *     IopCancelIrpsInFileObjectList @ 0x140018980 (IopCancelIrpsInFileObjectList.c)
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     PnpDeviceCompletionRoutine @ 0x140080E60 (PnpDeviceCompletionRoutine.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 *     PopFreeIrp @ 0x140144BEC (PopFreeIrp.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1401539D0 (PnpDiagnosticCompletionRoutine.c)
 *     FsRtlGetFileExtents @ 0x1401E2B1C (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1401FB050 (IopDeviceEjectComplete.c)
 *     PopFxDestroyDeviceDpm @ 0x14022A988 (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14024F6C0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopFreeCompletionListPackets @ 0x140429154 (IopFreeCompletionListPackets.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14043C110 (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140457D90 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140457EB0 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x1404592F0 (IopUserRundown.c)
 *     CmpGetVolumeClusterSize @ 0x1404D8B8C (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     WmipSendWmiIrp @ 0x140580D5C (WmipSendWmiIrp.c)
 *     WmipGetFilePDO @ 0x140584258 (WmipGetFilePDO.c)
 *     WmipSetTraceNotify @ 0x1405A0034 (WmipSetTraceNotify.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x1405C25B4 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     PopConnectToPolicyDevice @ 0x1405D67E8 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x1405D6E58 (PopAcquireCoolingInterface.c)
 *     FsRtlQueryInformationFile @ 0x140685B40 (FsRtlQueryInformationFile.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140687044 (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x14068B2F0 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1406A78E4 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1406CF4AC (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x140701F04 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x140702254 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x14076EB80 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IovFreeIrpPrivate @ 0x140763334 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
