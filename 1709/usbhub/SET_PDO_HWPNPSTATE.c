/*
 * XREFs of SET_PDO_HWPNPSTATE @ 0x1C0043344
 * Callers:
 *     UsbhQueryBusRelations @ 0x1C0013BC0 (UsbhQueryBusRelations.c)
 *     UsbhDeregisterPdo @ 0x1C0043994 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044E40 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004544C (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0045744 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045DDC (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0054EC4 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

_DWORD *__fastcall SET_PDO_HWPNPSTATE(__int64 a1, int a2, int a3)
{
  _DWORD *result; // rax
  __int64 v6; // r9

  result = PdoExt(a1);
  v6 = ((unsigned __int8)result[1] + 1) & 7;
  result[1] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)result + v6 + 16) = a3;
  *(_DWORD *)((char *)result + v6 + 20) = result[281];
  *(_DWORD *)((char *)result + v6 + 24) = a2;
  result[281] = a2;
  return result;
}
