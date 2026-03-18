/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1400E0F34
 * Callers:
 *     ExSetTimer @ 0x1400E0EB0 (ExSetTimer.c)
 *     ExCancelTimer @ 0x14012AFC0 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x14012F420 (ExDeleteTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
