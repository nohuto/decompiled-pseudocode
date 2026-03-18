/*
 * XREFs of SET_PDO_SWPNPSTATE @ 0x1C001B318
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055D20 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_StopDevice @ 0x1C0055F00 (UsbhPdoPnp_StopDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056000 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

_DWORD *__fastcall SET_PDO_SWPNPSTATE(__int64 a1, int a2, int a3)
{
  _DWORD *result; // rax
  __int64 v6; // r9

  result = PdoExt(a1);
  v6 = ((unsigned __int8)result[3] + 1) & 7;
  result[3] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)result + v6 + 528) = a3;
  *(_DWORD *)((char *)result + v6 + 532) = result[280];
  *(_DWORD *)((char *)result + v6 + 536) = a2;
  result[280] = a2;
  return result;
}
