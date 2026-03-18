/*
 * XREFs of VidSchiCheckTimeoutForced @ 0x1C000AD70
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C006F3D0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0071908 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckTimeoutForced(__int64 a1)
{
  return *(_QWORD *)(a1 + 384) && g_TdrForceTimeout && TdrIsTimeoutForcedFlip();
}
