/*
 * XREFs of ?xxxResolvePendingUp@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B3980
 * Callers:
 *     <none>
 * Callees:
 *     xxxCancelMouseUpTimer @ 0x1C01B4760 (xxxCancelMouseUpTimer.c)
 */

void __fastcall xxxResolvePendingUp(struct tagWND *a1)
{
  gidTapTimer = 0LL;
  gbTapTimerFired = 1;
  xxxCancelMouseUpTimer(1LL);
}
