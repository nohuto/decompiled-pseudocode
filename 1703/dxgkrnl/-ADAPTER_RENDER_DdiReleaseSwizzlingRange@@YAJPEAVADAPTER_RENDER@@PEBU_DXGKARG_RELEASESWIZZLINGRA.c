/*
 * XREFs of ?ADAPTER_RENDER_DdiReleaseSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_RELEASESWIZZLINGRANGE@@@Z @ 0x1C0034350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiReleaseSwizzlingRange(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_RELEASESWIZZLINGRANGE *a2)
{
  return ADAPTER_RENDER::DdiReleaseSwizzlingRange(a1, a2);
}
