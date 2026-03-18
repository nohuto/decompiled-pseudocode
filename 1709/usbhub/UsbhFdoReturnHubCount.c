/*
 * XREFs of UsbhFdoReturnHubCount @ 0x1C0009D40
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhFdoChainIrp @ 0x1C00292C8 (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoReturnHubCount(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  __int64 v6; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // r10
  unsigned int v8; // ebx

  v6 = FdoExt(a1);
  PdoExt(a2);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (*(_DWORD *)(v6 + 2560) & 1) != 0 )
  {
    v8 = 0;
    if ( SecurityContext )
      ++LODWORD(SecurityContext->SecurityQos);
    else
      v8 = -1073741811;
    a3->IoStatus.Status = v8;
    IofCompleteRequest(a3, 0);
  }
  else
  {
    if ( SecurityContext )
      ++LODWORD(SecurityContext->SecurityQos);
    v8 = UsbhFdoChainIrp(a1, a3);
  }
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v8;
}
