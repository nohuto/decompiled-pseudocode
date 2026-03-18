/*
 * XREFs of UsbhSshBusIdle @ 0x1C003E770
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x1C0057BB0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
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
