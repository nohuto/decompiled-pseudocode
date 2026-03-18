/*
 * XREFs of ?ADAPTER_RENDER_DdiMapCpuHostAperture@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z @ 0x1C000C050
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z @ 0x1C00A4D54 (-DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiMapCpuHostAperture(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_MAPCPUHOSTAPERTURE *a2)
{
  return ADAPTER_RENDER::DdiMapCpuHostAperture(a1, a2);
}
