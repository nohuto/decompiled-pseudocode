/*
 * XREFs of UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E984
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C0007228 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhGetDeviceHandle @ 0x1C00261D0 (UsbhGetDeviceHandle.c)
 */

__int64 __fastcall UsbhFdoHandleGetDumpDataIoctl(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  _IRP *MasterIrp; // rbx
  PDEVICE_OBJECT *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  PIRP DeviceHandle; // [rsp+28h] [rbp-10h]

  v6 = PdoExt(a2);
  if ( a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x20 )
  {
    MasterIrp = a3->AssociatedIrp.MasterIrp;
    v11 = *((_QWORD *)v6 + 144);
    DeviceHandle = UsbhGetDeviceHandle(a1, a1);
    if ( DeviceHandle )
    {
      MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)&v11;
      v9 = (PDEVICE_OBJECT *)FdoExt(a1);
      ++a3->CurrentLocation;
      ++a3->Tail.Overlay.CurrentStackLocation;
      v7 = IofCallDriver(v9[152], a3);
      Usbh_HubDerefDeviceHandle(a1, (__int64)DeviceHandle, a1, 0x48447472u);
      goto LABEL_7;
    }
    v7 = -1073741823;
  }
  else
  {
    v7 = -1073741789;
  }
  a3->IoStatus.Status = v7;
  IofCompleteRequest(a3, 0);
LABEL_7:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v7;
}
