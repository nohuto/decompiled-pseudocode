/*
 * XREFs of GreDeviceIoControlEx @ 0x1C00616F0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0060F4C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0060FF8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C0061520 (UpdateMonitorDevices.c)
 *     bSetDeviceSessionUsage @ 0x1C00624A0 (bSetDeviceSessionUsage.c)
 *     DrvSetMonitorBrightness @ 0x1C0062550 (DrvSetMonitorBrightness.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C009B07C (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C009B5F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     xxxRemoteConnect @ 0x1C009F300 (xxxRemoteConnect.c)
 *     DrvSetVideoParameters @ 0x1C00FA574 (DrvSetVideoParameters.c)
 *     EngDeviceIoControl @ 0x1C00FB7B0 (EngDeviceIoControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeviceIoControlEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        _DWORD *a7,
        BOOLEAN InternalDeviceIoControl)
{
  unsigned int Status; // ebx
  PIRP v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741822;
  if ( !DeviceObject )
    return 3221225480LL;
  if ( InputBufferLength >= 0x2710000
    || OutputBufferLength >= 0x2710000
    || InputBufferLength + OutputBufferLength >= 0x2710000 )
  {
    return 3221225485LL;
  }
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Object,
          &IoStatusBlock);
  if ( v13 )
  {
    if ( gProtocolType )
      v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = FileObject;
    Status = IofCallDriver(DeviceObject, v13);
    if ( Status == 259 )
    {
      while ( KeWaitForSingleObject(&Object, UserRequest, 0, 1u, 0LL) == 257 )
        ;
      Status = IoStatusBlock.Status;
    }
    *a7 = IoStatusBlock.Information;
  }
  return Status;
}
