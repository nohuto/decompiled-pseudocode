/*
 * XREFs of IoFreeIrp @ 0x140106E30
 * Callers:
 *     IopBuildAsynchronousFsdRequest @ 0x140098370 (IopBuildAsynchronousFsdRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400B677C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x1400D0700 (IopCompletePageWrite.c)
 *     IoRemoveIoCompletion @ 0x1400F4CD0 (IoRemoveIoCompletion.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x14013FD64 (IopDropIrp.c)
 *     PnpDeviceCompletionRoutine @ 0x1401466F0 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x140165F90 (PopFreeIrp.c)
 *     FsRtlGetFileExtents @ 0x140224358 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x14023DC00 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14023DC60 (PnpDiagnosticCompletionRoutine.c)
 *     PopFxDestroyDeviceDpm @ 0x140275108 (PopFxDestroyDeviceDpm.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1402A8C70 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     CmpGetVolumeClusterSize @ 0x140499488 (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x14049968C (CmpFileFlushAndPurge.c)
 *     FsRtlSetKernelEaFile @ 0x140555A10 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140555EA0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14057C7F0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14057C910 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x140581B70 (IopUserRundown.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopFreeCompletionListPackets @ 0x1405BD024 (IopFreeCompletionListPackets.c)
 *     WmipSendWmiIrp @ 0x1405DCF88 (WmipSendWmiIrp.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1405F1F60 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipSetTraceNotify @ 0x140600BEC (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x140613250 (WmipGetFilePDO.c)
 *     PopConnectToPolicyDevice @ 0x140626BD4 (PopConnectToPolicyDevice.c)
 *     PopAcquireCoolingInterface @ 0x140627358 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1406464B0 (WmipSendWmiIrpToTraceDeviceList.c)
 *     FsRtlQueryInformationFile @ 0x140715A40 (FsRtlQueryInformationFile.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140716FD0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x14071BC10 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x140739FF4 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x14076B12C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x14079D204 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x14079D55C (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x14081DB4C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140106E60 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140811FCC (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
