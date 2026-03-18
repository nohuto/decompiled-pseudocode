/*
 * XREFs of UsbhSshBusIdle @ 0x1C003F620
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x1C0057AB0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

LONG __fastcall UsbhSshBusIdle(__int64 a1)
{
  volatile __int64 *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r10

  v2 = (volatile __int64 *)FdoExt(a1);
  Log(a1, 2048, 1114863917, 0LL, _InterlockedExchange64(v2 + 411, 0LL));
  return UsbhDecHubBusy(a1, v3, v4);
}
