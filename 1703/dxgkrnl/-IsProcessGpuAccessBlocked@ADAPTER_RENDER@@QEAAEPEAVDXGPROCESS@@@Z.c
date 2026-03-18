/*
 * XREFs of ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00CEE80
 * Callers:
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C009F590 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ADAPTER_RENDER::IsProcessGpuAccessBlocked(
        VIDSCH_EXPORT **this,
        struct DXGPROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  if ( *((_BYTE *)this[2] + 186) )
    return 0;
  else
    return VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(this[51], this[52], a2, a4);
}
