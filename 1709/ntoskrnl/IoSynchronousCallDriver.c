/*
 * XREFs of IoSynchronousCallDriver @ 0x140125800
 * Callers:
 *     FsRtlGetFileExtents @ 0x1401E6CEC (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x140581F10 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14059C6D0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14059C7F0 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1405C93B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipGetFilePDO @ 0x1405E5190 (WmipGetFilePDO.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1406B2500 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopAcquireCoolingInterface @ 0x1406F6C9C (PopAcquireCoolingInterface.c)
 *     PopBatteryInitialize @ 0x1406FE400 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1406FE59C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1406FE62C (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1406FE7B0 (PopBatteryReadTag.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
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
