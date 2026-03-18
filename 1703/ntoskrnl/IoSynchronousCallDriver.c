/*
 * XREFs of IoSynchronousCallDriver @ 0x14002FA10
 * Callers:
 *     FsRtlGetFileExtents @ 0x1401E2B1C (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x14044A120 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140457D90 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140457EB0 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x140584258 (WmipGetFilePDO.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x1405C25B4 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     PopAcquireCoolingInterface @ 0x1405D6E58 (PopAcquireCoolingInterface.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140687044 (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     PopBatteryInitialize @ 0x1406CA5D0 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1406CA76C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1406CA7FC (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1406CA980 (PopBatteryReadTag.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int16 Object; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+32h] [rbp-26h]
  int v7; // [rsp+34h] [rbp-24h]
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  Object = 0;
  v7 = 0;
  v6 = 6;
  v8[1] = v8;
  v8[0] = v8;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
  CurrentStackLocation[-1].Context = &Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}
