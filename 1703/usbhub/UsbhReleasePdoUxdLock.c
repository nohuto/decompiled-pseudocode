/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x1C00223CC
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 636), 16, 1, 0);
  return 0LL;
}
