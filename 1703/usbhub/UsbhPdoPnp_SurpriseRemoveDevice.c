/*
 * XREFs of UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056000
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C001B318 (SET_PDO_SWPNPSTATE.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhSetPdo_FailIo @ 0x1C0043FC8 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045170 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhBillboardCleanup @ 0x1C0054B54 (UsbhBillboardCleanup.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0056160 (UsbhPdoRemoveCleanup.c)
 */

__int64 __fastcall UsbhPdoPnp_SurpriseRemoveDevice(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rbx
  int v5; // r10d
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  char v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+49h] [rbp-2Fh]

  v4 = PdoExt((__int64)Pdo);
  Log(*((_QWORD *)v4 + 147), 256, 1936879716, (__int64)Irp, *((_QWORD *)v4 + 144));
  Log(*((_QWORD *)v4 + 147), v5, 1936879665, (__int64)Pdo, (__int64)v4);
  UsbhSetPdo_FailIo((__int64)Pdo);
  if ( (v4[353] & 0x400000) != 0 )
    KeSetEvent((PRKEVENT)(v4 + 722), 0, 0);
  if ( (v4[356] & 0x40000) != 0 )
  {
    v6 = *((_QWORD *)v4 + 378);
    v10 = 0;
    v8 = v6;
    v9 = 0;
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v8, 13LL);
    v4[356] &= ~0x40000u;
  }
  if ( *((_QWORD *)v4 + 300) )
    UsbhBillboardCleanup(Pdo);
  UsbhPdoRemoveCleanup(Pdo);
  Usbh_PdoSurpriseRemove_PdoEvent(*((_QWORD *)v4 + 147), Pdo, (__int64)(v4 + 236));
  SET_PDO_SWPNPSTATE((__int64)Pdo, 102, 3);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
