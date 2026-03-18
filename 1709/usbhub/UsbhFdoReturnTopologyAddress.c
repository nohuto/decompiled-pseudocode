/*
 * XREFs of UsbhFdoReturnTopologyAddress @ 0x1C0009FAC
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhBuildTopologyAddress @ 0x1C000A144 (UsbhBuildTopologyAddress.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int64 __fastcall UsbhFdoReturnTopologyAddress(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  __int64 v6; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  int v8; // eax
  unsigned int v9; // ebx

  FdoExt(a1);
  v6 = PdoExt(a2);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  v8 = UsbhBuildTopologyAddress(a1, SecurityContext, *(unsigned __int16 *)(v6 + 1420));
  a3->IoStatus.Status = v8;
  v9 = v8;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v9;
}
