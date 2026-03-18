/*
 * XREFs of UsbhFdoPnp_QueryPnpDeviceState @ 0x1C00082E0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryPnpDeviceState(__int64 a1, PIRP Irp)
{
  int v3; // esi
  __int64 v4; // rdi
  int v6; // [rsp+48h] [rbp-10h]

  v3 = a1;
  v4 = FdoExt(a1);
  Log(v3, 2, 1934650960, *(_DWORD *)(v4 + 2572), (__int64)Irp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids);
  if ( *(_DWORD *)(v4 + 2572) )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids,
        *(_DWORD *)(v4 + 2572));
    Irp->IoStatus.Information |= *(unsigned int *)(v4 + 2572);
    LOBYTE(v6) = 0;
    Irp->IoStatus.Status = 0;
    UsbhException(v3, 0, 87, (_DWORD)Irp + 56, 8, 0, 0, usbfile_pnp_c, 2265, v6);
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), Irp);
}
