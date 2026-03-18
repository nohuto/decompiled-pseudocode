/*
 * XREFs of ?ADAPTER_RENDER_DdiQueryCurrentFence@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_QUERYCURRENTFENCE@@@Z @ 0x1C0034320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiQueryCurrentFence(
        struct ADAPTER_RENDER *this,
        struct _DXGKARG_QUERYCURRENTFENCE *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiQueryCurrentFence(this, a2, a3);
}
