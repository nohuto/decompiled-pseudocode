/*
 * XREFs of ?ADAPTER_RENDER_DdiCreateDevice@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0012DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiCreateDevice(struct ADAPTER_RENDER *a1, struct _DXGKARG_CREATEDEVICE *a2)
{
  return ADAPTER_RENDER::DdiCreateDevice(a1, a2);
}
