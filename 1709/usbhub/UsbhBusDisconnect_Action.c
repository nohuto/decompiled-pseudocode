/*
 * XREFs of UsbhBusDisconnect_Action @ 0x1C003F394
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C00073A4 (Usbh_BS_BusSuspend.c)
 *     Usbh_BS_BusPause @ 0x1C000B548 (Usbh_BS_BusPause.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0041194 (UsbhPCE_BusDisconnect.c)
 */

_DWORD *__fastcall UsbhBusDisconnect_Action(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int16 v5; // bp
  unsigned __int16 i; // bx
  _DWORD *result; // rax

  FdoExt(a1);
  Log(a1, 2048, 1919251262, 0LL, 0LL);
  v5 = v4 + 1;
  for ( i = v4 + 1; ; i += v5 )
  {
    result = FdoExt(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    UsbhPCE_BusDisconnect(a1, a2, i);
  }
  return result;
}
