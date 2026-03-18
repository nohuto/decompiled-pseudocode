/*
 * XREFs of ?ADAPTER_RENDER_DdiSubmitCommand@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C0002DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommand(struct ADAPTER_RENDER *a1, const struct _DXGKARG_SUBMITCOMMAND *a2)
{
  return ADAPTER_RENDER::DdiSubmitCommand(a1, a2);
}
