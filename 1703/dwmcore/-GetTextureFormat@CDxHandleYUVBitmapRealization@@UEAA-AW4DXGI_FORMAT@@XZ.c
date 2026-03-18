/*
 * XREFs of ?GetTextureFormat@CDxHandleYUVBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x1801B6D60
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B6934 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetTextureFormat(CDxHandleYUVBitmapRealization *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (int)CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleYUVBitmapRealization *)((char *)this - 104)) >= 0 )
    return *(unsigned int *)(*((_QWORD *)this + 39) + 152LL);
  return v2;
}
