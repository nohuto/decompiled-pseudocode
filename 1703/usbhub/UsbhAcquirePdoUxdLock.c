/*
 * XREFs of UsbhAcquirePdoUxdLock @ 0x1C0022400
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

__int64 __fastcall UsbhAcquirePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeWaitForSingleObject(v2 + 636, Executive, 0, 0, 0LL);
  return 0LL;
}
