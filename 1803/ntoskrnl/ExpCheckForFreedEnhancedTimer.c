/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x140085514
 * Callers:
 *     ExDeleteTimer @ 0x1400846E0 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x140085490 (ExSetTimer.c)
 *     ExCancelTimer @ 0x140085540 (ExCancelTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
