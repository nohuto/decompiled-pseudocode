/*
 * XREFs of ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x1800497B0
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18004A304 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?IsValid@CHwTextureRenderTarget@@WLA@EBA_NXZ @ 0x1800D6280 (-IsValid@CHwTextureRenderTarget@@WLA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwTextureRenderTarget::IsValid(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)this + 26);
  result = 0LL;
  if ( v1 )
    return *(_BYTE *)(v1 + 77) != 0;
  return result;
}
