/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C00098A0
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 376) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
