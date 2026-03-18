/*
 * XREFs of ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x1800492F0
 * Callers:
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WLA@EBA_NXZ @ 0x1800D6250 (-IsHardwareProtected@CHwTextureRenderTarget@@WLA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WLI@EBA_NXZ @ 0x1800D6260 (-IsHardwareProtected@CHwTextureRenderTarget@@WLI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WMA@EBA_NXZ @ 0x1800D6270 (-IsHardwareProtected@CHwTextureRenderTarget@@WMA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsHardwareProtected(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 26);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 176) & 0x80000) != 0;
  return result;
}
