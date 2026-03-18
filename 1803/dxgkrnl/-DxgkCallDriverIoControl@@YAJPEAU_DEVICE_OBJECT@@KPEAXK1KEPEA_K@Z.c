/*
 * XREFs of ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C01A88F4
 * Callers:
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C01A7970 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C022BD10 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0237460 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCallDriverIoControl(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        unsigned __int64 *a8)
{
  __int64 v12; // rax
  IRP *v13; // rax
  unsigned int Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v12 = WdLogNewEntry5_WdAssertion(DeviceObject);
    *(_QWORD *)(v12 + 24) = 40LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a8 )
    *a8 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Event,
          &IoStatusBlock);
  if ( v13 )
  {
    Status = IofCallDriver(DeviceObject, v13);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( a8 )
      *a8 = IoStatusBlock.Information;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return Status;
}
