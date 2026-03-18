/*
 * XREFs of ?ADAPTER_RENDER_DdiCancelCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C00342B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiCancelCommand(struct ADAPTER_RENDER *a1, const struct _DXGKARG_CANCELCOMMAND *a2)
{
  return ADAPTER_RENDER::DdiCancelCommand(a1, a2);
}
