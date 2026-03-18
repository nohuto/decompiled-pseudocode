/*
 * XREFs of ?ADAPTER_RENDER_DdiSetupPriorityBands@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C002E450
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C0163678 (-DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetupPriorityBands(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETUPPRIORITYBANDS *a2)
{
  return ADAPTER_RENDER::DdiSetupPriorityBands(a1, a2);
}
