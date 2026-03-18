/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x1C0058CB8
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C001E070 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v2; // rax

  v2 = (struct _KSEMAPHORE *)PdoExt(a2);
  KeReleaseSemaphore(v2 + 80, 16, 1, 0);
  return 0LL;
}
