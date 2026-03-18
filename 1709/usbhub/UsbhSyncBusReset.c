/*
 * XREFs of UsbhSyncBusReset @ 0x1C0005D18
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C00050E0 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000B320 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncBusReset(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt(a1);
  Log(a1, 2048, 1346458174, 0, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v4 + 10));
  Log(a1, 2048, 1346458172, 0, v5);
  return v6;
}
