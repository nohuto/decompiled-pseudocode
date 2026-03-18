/*
 * XREFs of GreDeviceIoControlEx @ 0x1C007A620
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0058550 (DrvUpdateGraphicsDeviceList.c)
 *     DrvSetMonitorBrightness @ 0x1C007876C (DrvSetMonitorBrightness.c)
 *     bSetDeviceSessionUsage @ 0x1C0078940 (bSetDeviceSessionUsage.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0079C2C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0079CD8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C007A450 (UpdateMonitorDevices.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A421C (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A4B78 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     xxxRemoteConnect @ 0x1C00A9030 (xxxRemoteConnect.c)
 *     DrvSetVideoParameters @ 0x1C00FA7B0 (DrvSetVideoParameters.c)
 *     EngDeviceIoControl @ 0x1C00FBBD0 (EngDeviceIoControl.c)
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
