/*
 * XREFs of ?GetPixelFormat@CHwSurfaceRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800499C8
 * Callers:
 *     ?GetPixelFormat@CHwDisplayRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180039D90 (-GetPixelFormat@CHwDisplayRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetPixelFormat(CHwSurfaceRenderTarget *this, enum DXGI_FORMAT *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *((_QWORD *)this + 21);
  result = 2291674892LL;
  if ( v2 )
  {
    *a2 = *(enum DXGI_FORMAT *)(v2 + 164);
    return 0LL;
  }
  return result;
}
