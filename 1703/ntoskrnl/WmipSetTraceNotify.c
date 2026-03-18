/*
 * XREFs of WmipSetTraceNotify @ 0x1405A0034
 * Callers:
 *     IoWMIRegistrationControl @ 0x14059FCD0 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IoWMIDeviceObjectToProviderId @ 0x140144180 (IoWMIDeviceObjectToProviderId.c)
 *     WmipForwardWmiIrp @ 0x1404BEDA0 (WmipForwardWmiIrp.c)
 */

void __fastcall WmipSetTraceNotify(PDEVICE_OBJECT DeviceObject, int a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rax
  CCHAR v5; // bl
  PIRP Irp; // rax
  IRP *v7; // rbx
  ULONG v8; // eax
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  switch ( a2 )
  {
    case 0x100000:
      v2 = &EtwpDiskIoNotifyRoutines;
      goto LABEL_11;
    case 0x200000:
      v2 = (__int64 *)EtwpTdiIoNotify;
      goto LABEL_11;
    case 0x400000:
      v4 = (__int64 *)&EtwpFileIoNotifyRoutines;
      goto LABEL_6;
  }
  if ( a2 != 0x800000 )
  {
LABEL_11:
    v9 = (__int64)v2;
    if ( !v2 )
      return;
    goto LABEL_7;
  }
  v4 = &EtwpSplitIoNotifyRoutines;
LABEL_6:
  v9 = (__int64)v4;
LABEL_7:
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v5 = WmipServiceDeviceObject->StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp(v5, 0);
  v7 = Irp;
  if ( Irp )
  {
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    v8 = IoWMIDeviceObjectToProviderId(DeviceObject);
    WmipForwardWmiIrp(v7, 0xAu, v8, 0LL, 8u, (__int64)&v9);
    IoFreeIrp(v7);
  }
}
