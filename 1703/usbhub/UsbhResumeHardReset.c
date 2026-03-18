/*
 * XREFs of UsbhResumeHardReset @ 0x1C000566C
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0003840 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C78 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 */

__int64 __fastcall UsbhResumeHardReset(int a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192818, 0, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, (unsigned int)(v1 + 11));
}
