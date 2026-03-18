/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000B440
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0077190 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 400) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
