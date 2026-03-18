/*
 * XREFs of UsbhQueryCapsComplete @ 0x1C00272C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueryCapsComplete(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 Context)
{
  _DWORD *v4; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  __int128 v6; // xmm1

  v4 = FdoExt(Context);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids,
      Irp->IoStatus.Status);
  if ( Irp->PendingReturned )
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
  *((_OWORD *)v4 + 312) = *(_OWORD *)&SecurityContext->SecurityQos;
  *((_OWORD *)v4 + 313) = *(_OWORD *)&SecurityContext->DesiredAccess;
  *((_OWORD *)v4 + 314) = *(_OWORD *)&SecurityContext[1].AccessState;
  v6 = *(_OWORD *)&SecurityContext[2].SecurityQos;
  v4[640] |= 0x200u;
  *((_OWORD *)v4 + 315) = v6;
  KeSetEvent((PRKEVENT)(v4 + 650), 0, 0);
  return (unsigned int)Irp->IoStatus.Status;
}
