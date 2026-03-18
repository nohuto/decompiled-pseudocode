/*
 * XREFs of WmipSetTraceNotify @ 0x140600BEC
 * Callers:
 *     IoWMIRegistrationControl @ 0x140600880 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoAllocateIrp @ 0x1400075E0 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IoWMIDeviceObjectToProviderId @ 0x140161E70 (IoWMIDeviceObjectToProviderId.c)
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 */

void __fastcall WmipSetTraceNotify(PDEVICE_OBJECT DeviceObject, int a2)
{
  __int64 *v2; // rax
  CCHAR v4; // bl
  PIRP Irp; // rax
  IRP *v6; // rbx
  ULONG v7; // eax
  __int64 *v8; // rax
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  switch ( a2 )
  {
    case 0x100000:
      v2 = &EtwpDiskIoNotifyRoutines;
      goto LABEL_3;
    case 0x200000:
      v2 = (__int64 *)EtwpTdiIoNotify;
      goto LABEL_3;
    case 0x400000:
      v8 = (__int64 *)&EtwpFileIoNotifyRoutines;
      goto LABEL_11;
  }
  if ( a2 != 0x800000 )
  {
LABEL_3:
    v9 = (__int64)v2;
    if ( !v2 )
      return;
    goto LABEL_4;
  }
  v8 = &EtwpSplitIoNotifyRoutines;
LABEL_11:
  v9 = (__int64)v8;
LABEL_4:
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = WmipServiceDeviceObject->StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp(v4, 0);
  v6 = Irp;
  if ( Irp )
  {
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    v7 = IoWMIDeviceObjectToProviderId(DeviceObject);
    WmipForwardWmiIrp(v6, 0xAu, v7, 0LL, 8u, (__int64)&v9);
    IoFreeIrp(v6);
  }
}
