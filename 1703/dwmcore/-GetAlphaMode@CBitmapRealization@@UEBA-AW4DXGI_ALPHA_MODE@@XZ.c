/*
 * XREFs of ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180036CD0
 * Callers:
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037990 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180076744 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180079B78 (-GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA-AW4D2D1_ALPHA_MODE@@XZ.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18007A120 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::GetAlphaMode(CBitmapRealization *this)
{
  __int64 result; // rax

  result = 3LL;
  if ( *((_DWORD *)this + 4) )
    return *((unsigned int *)this + 4);
  return result;
}
