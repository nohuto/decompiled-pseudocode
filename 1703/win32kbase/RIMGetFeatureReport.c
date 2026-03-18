/*
 * XREFs of RIMGetFeatureReport @ 0x1C00084FC
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C0008310 (RIMGetMaxCountFeatureDetails.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall RIMGetFeatureReport(
        PLARGE_INTEGER Timeout,
        unsigned __int16 a2,
        char a3,
        struct _DEVICE_OBJECT *a4,
        struct _FILE_OBJECT *a5)
{
  ULONG OutputBufferLength; // ebx
  PIRP v8; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  LOBYTE(Timeout->LowPart) = a3;
  OutputBufferLength = a2;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(0xB0192u, a4, 0LL, 0, Timeout, OutputBufferLength, 0, &Event, &IoStatusBlock);
  if ( v8 )
  {
    v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = a5;
    result = IofCallDriver(a4, v8);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      18,
      32,
      (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
    return -1073741668;
  }
  return result;
}
