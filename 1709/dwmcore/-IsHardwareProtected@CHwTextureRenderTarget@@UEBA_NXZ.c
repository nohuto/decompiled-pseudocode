/*
 * XREFs of ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18008FA00
 * Callers:
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WMA@EBA_NXZ @ 0x1800C6A30 (-IsHardwareProtected@CHwTextureRenderTarget@@WMA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WMI@EBA_NXZ @ 0x1800C6A40 (-IsHardwareProtected@CHwTextureRenderTarget@@WMI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WNA@EBA_NXZ @ 0x1800C6A50 (-IsHardwareProtected@CHwTextureRenderTarget@@WNA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsHardwareProtected(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 28);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 168) & 0x80000) != 0;
  return result;
}
