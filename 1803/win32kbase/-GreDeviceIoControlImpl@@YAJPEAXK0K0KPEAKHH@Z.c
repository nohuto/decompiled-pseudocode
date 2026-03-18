/*
 * XREFs of ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     ?FillMonitorDataFromMonitorDevice@@YAXPEAUtagPER_MONITOR_DATA@@PEAUtagVIDEO_MONITOR_DEVICE@@_N@Z @ 0x1C0052D14 (-FillMonitorDataFromMonitorDevice@@YAXPEAUtagPER_MONITOR_DATA@@PEAUtagVIDEO_MONITOR_DEVICE@@_N@Z.c)
 *     GreGdoDeviceIoControlEx @ 0x1C00534D0 (GreGdoDeviceIoControlEx.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C005351C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C006D878 (DrvSetMonitorBrightness.c)
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00CF1DC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D12B8 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z @ 0x1C00D2D8C (-SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z.c)
 *     DrvGetMonitorBrightness @ 0x1C00D50C0 (DrvGetMonitorBrightness.c)
 *     DrvSetVideoParameters @ 0x1C00D5D64 (DrvSetVideoParameters.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6068 (DrvSetWddmDeviceMonitorPowerState.c)
 *     bSetDeviceSessionUsage @ 0x1C00D68C0 (bSetDeviceSessionUsage.c)
 *     EngDeviceIoControl @ 0x1C00D88B0 (EngDeviceIoControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeviceIoControlImpl(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        unsigned int *a7,
        BOOLEAN InternalDeviceIoControl,
        int a9)
{
  unsigned int Status; // ebx
  PIRP v14; // rax
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
  v14 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Object,
          &IoStatusBlock);
  if ( v14 )
  {
    if ( gProtocolType && a9 )
      v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = FileObject;
    Status = IofCallDriver(DeviceObject, v14);
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
