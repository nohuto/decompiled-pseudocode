/*
 * XREFs of ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x180078A50
 * Callers:
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WNI@EBA_NXZ @ 0x1800DE090 (-IsHardwareProtected@CHwTextureRenderTarget@@WNI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WOA@EBA_NXZ @ 0x1800DE0A0 (-IsHardwareProtected@CHwTextureRenderTarget@@WOA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WOI@EBA_NXZ @ 0x1800DE0B0 (-IsHardwareProtected@CHwTextureRenderTarget@@WOI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsHardwareProtected(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 31);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 168) & 0x80000) != 0;
  return result;
}
