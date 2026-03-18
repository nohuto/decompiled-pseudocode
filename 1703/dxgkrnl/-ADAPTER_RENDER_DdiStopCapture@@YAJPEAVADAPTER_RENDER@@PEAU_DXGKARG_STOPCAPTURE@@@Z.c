/*
 * XREFs of ?ADAPTER_RENDER_DdiStopCapture@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C0034380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiStopCapture(struct ADAPTER_RENDER *a1, struct _DXGKARG_STOPCAPTURE *a2)
{
  return ADAPTER_RENDER::DdiStopCapture(a1, a2);
}
