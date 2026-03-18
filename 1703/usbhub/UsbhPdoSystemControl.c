/*
 * XREFs of UsbhPdoSystemControl @ 0x1C0020AE0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C0020EE8 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int Status; // ebx
  _DWORD *v5; // rbx
  NTSTATUS v6; // esi
  enum _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+48h] [rbp+10h] BYREF

  Status = Irp->IoStatus.Status;
  if ( (UsbhIncPdoIoCount(DeviceObject, Irp, 1398362953LL, 0LL) & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = Status;
    IofCompleteRequest(Irp, 0);
    return Status;
  }
  else
  {
    v5 = PdoExt((__int64)DeviceObject);
    Log(*((_QWORD *)v5 + 147), 256, 1347898697, (__int64)Irp, 0LL);
    v6 = WmiSystemControl((PWMILIB_CONTEXT)(v5 + 332), DeviceObject, Irp, &IrpDisposition);
    Log(*((_QWORD *)v5 + 147), 256, 1884769609, (__int64)Irp, v6);
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotWmi )
        v6 = Irp->IoStatus.Status;
      Irp->IoStatus.Status = v6;
      IofCompleteRequest(Irp, 0);
    }
    UsbhDecPdoIoCount((ULONG_PTR)DeviceObject, (ULONG_PTR)Irp);
    return (unsigned int)v6;
  }
}
