/*
 * XREFs of ?GetAlphaMode@CDesktopRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801473C0
 * Callers:
 *     ?GetAlphaMode@CDesktopRenderTarget@@WDA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800D5590 (-GetAlphaMode@CDesktopRenderTarget@@WDA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?GetAlphaMode@CHwndRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180145D20 (-GetAlphaMode@CHwndRenderTarget@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetAlphaMode(CDesktopRenderTarget *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 20) )
    return CHwndRenderTarget::GetAlphaMode((CHwndRenderTarget *)(**((_QWORD **)this + 7) + 64LL));
  return result;
}
