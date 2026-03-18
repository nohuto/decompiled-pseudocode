/*
 * XREFs of UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0027830
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryPnpDeviceState(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  PDEVICE_OBJECT v5; // rcx
  int v7; // [rsp+48h] [rbp-10h]

  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 2, 1934650960, *((unsigned int *)v4 + 643), (__int64)a2);
  v5 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids);
    v5 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)v4 + 643) )
  {
    if ( LOWORD(v5->DeviceType) )
      WPP_RECORDER_SF_d(
        v5->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids,
        *((_DWORD *)v4 + 643));
    a2->IoStatus.Information |= *((unsigned int *)v4 + 643);
    LOBYTE(v7) = 0;
    a2->IoStatus.Status = 0;
    UsbhException(a1, 0, 87, (_DWORD)a2 + 56, 8, 0, 0, usbfile_pnp_c, 2265, v7);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
