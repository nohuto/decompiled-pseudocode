/*
 * XREFs of ?GetPixelFormatInfo@CHwTextureRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180078140
 * Callers:
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WNI@EBA?AUPixelFormatInfo@@XZ @ 0x1800DE040 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WNI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WOA@EBA?AUPixelFormatInfo@@XZ @ 0x1800DE050 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WOA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WOI@EBA?AUPixelFormatInfo@@XZ @ 0x1800DE060 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WOI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 264);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 256);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
