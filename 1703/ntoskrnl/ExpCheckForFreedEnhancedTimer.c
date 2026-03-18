/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x14012B210
 * Callers:
 *     ExCancelTimer @ 0x14012AB50 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x1401491C0 (ExDeleteTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
