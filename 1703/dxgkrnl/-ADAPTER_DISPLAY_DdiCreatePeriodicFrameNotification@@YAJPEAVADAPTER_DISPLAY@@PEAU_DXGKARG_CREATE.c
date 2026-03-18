/*
 * XREFs of ?ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification@@YAJPEAVADAPTER_DISPLAY@@PEAU_DXGKARG_CREATEPERIODICFRAMENOTIFICATION@@@Z @ 0x1C0034230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_DISPLAY_DdiCreatePeriodicFrameNotification(
        struct ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION *a2)
{
  return ADAPTER_DISPLAY::DdiCreatePeriodicFrameNotification(a1, a2);
}
