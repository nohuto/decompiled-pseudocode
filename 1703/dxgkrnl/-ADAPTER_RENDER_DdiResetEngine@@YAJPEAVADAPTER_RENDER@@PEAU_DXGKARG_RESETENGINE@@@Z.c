/*
 * XREFs of ?ADAPTER_RENDER_DdiResetEngine@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_RESETENGINE@@@Z @ 0x1C0034360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiResetEngine(
        struct ADAPTER_RENDER *this,
        struct _DXGKARG_RESETENGINE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiResetEngine(this, a2, a3);
}
