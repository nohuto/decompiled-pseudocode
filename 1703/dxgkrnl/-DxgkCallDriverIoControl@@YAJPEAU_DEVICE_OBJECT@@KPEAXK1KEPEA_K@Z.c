/*
 * XREFs of ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C011CA40
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C011C7D0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C0197C40 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C01E7060 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCallDriverIoControl(
        PDEVICE_OBJECT DeviceObject,
        __int64 IoControlCode,
        PVOID InputBuffer,
        __int64 InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        unsigned __int64 *a8)
{
  ULONG v8; // esi
  ULONG v10; // r14d
  IRP *v12; // rax
  unsigned int Status; // ecx
  __int64 v15; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v8 = InputBufferLength;
  v10 = IoControlCode;
  if ( KeGetCurrentIrql() )
  {
    v15 = WdLogNewEntry5_WdAssertion(DeviceObject, IoControlCode, InputBuffer, InputBufferLength);
    *(_QWORD *)(v15 + 24) = 40LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( a8 )
    *a8 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = IoBuildDeviceIoControlRequest(
          v10,
          DeviceObject,
          InputBuffer,
          v8,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Event,
          &IoStatusBlock);
  if ( v12 )
  {
    Status = IofCallDriver(DeviceObject, v12);
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
