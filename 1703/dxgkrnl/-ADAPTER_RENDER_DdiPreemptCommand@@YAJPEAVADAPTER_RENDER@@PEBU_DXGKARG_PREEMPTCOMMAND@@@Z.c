/*
 * XREFs of ?ADAPTER_RENDER_DdiPreemptCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PREEMPTCOMMAND@@@Z @ 0x1C0002CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiPreemptCommand(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_PREEMPTCOMMAND *a2)
{
  return ADAPTER_RENDER::DdiPreemptCommand(a1, a2);
}
