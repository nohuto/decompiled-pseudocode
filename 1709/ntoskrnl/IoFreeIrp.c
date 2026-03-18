/*
 * XREFs of IoFreeIrp @ 0x1400853A0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140060870 (IopBuildDeviceIoControlRequest.c)
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     IopDropIrp @ 0x1400DD9D0 (IopDropIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400DE350 (IopBuildAsynchronousFsdRequest.c)
 *     PnpDeviceCompletionRoutine @ 0x1400FB8B0 (PnpDeviceCompletionRoutine.c)
 *     IopCancelIrpsInFileObjectList @ 0x1401082AC (IopCancelIrpsInFileObjectList.c)
 *     PopFreeIrp @ 0x140123030 (PopFreeIrp.c)
 *     IopCompletePageWrite @ 0x140131230 (IopCompletePageWrite.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140132340 (PnpDiagnosticCompletionRoutine.c)
 *     FsRtlGetFileExtents @ 0x1401E6CEC (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x140200CD0 (IopDeviceEjectComplete.c)
 *     PopFxDestroyDeviceDpm @ 0x14023DB58 (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140275A00 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1404E4280 (CmpGetVolumeClusterSize.c)
 *     IopFreeCompletionListPackets @ 0x1405166EC (IopFreeCompletionListPackets.c)
 *     WmipSendWmiIrp @ 0x14051F050 (WmipSendWmiIrp.c)
 *     FsRtlSetKernelEaFile @ 0x14056B890 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14056C480 (FsRtlQueryKernelEaFile.c)
 *     IopUserRundown @ 0x140597990 (IopUserRundown.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14059C6D0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14059C7F0 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1405C93B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipSetTraceNotify @ 0x1405DF154 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x1405E5190 (WmipGetFilePDO.c)
 *     FsRtlQueryInformationFile @ 0x1406B0F60 (FsRtlQueryInformationFile.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1406B2500 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x1406B6F90 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1406D25A4 (IopCancelPendingEject.c)
 *     PopAcquireCoolingInterface @ 0x1406F6C9C (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x140706CAC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x14070704C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x14073A200 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x14073A558 (SmKmIsVolumeIoPossible.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140742D38 (WmipSendWmiIrpToTraceDeviceList.c)
 *     VfIrpSendSynchronousIrp @ 0x1407B09A0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1400853D0 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1407A5000 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
