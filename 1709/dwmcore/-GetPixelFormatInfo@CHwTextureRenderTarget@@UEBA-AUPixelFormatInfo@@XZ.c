/*
 * XREFs of ?GetPixelFormatInfo@CHwTextureRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008F8F0
 * Callers:
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WMA@EBA?AUPixelFormatInfo@@XZ @ 0x1800C69C0 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WMA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WMI@EBA?AUPixelFormatInfo@@XZ @ 0x1800C69D0 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WMI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CHwTextureRenderTarget@@WNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800C69E0 (-GetPixelFormatInfo@CHwTextureRenderTarget@@WNA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 240);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
