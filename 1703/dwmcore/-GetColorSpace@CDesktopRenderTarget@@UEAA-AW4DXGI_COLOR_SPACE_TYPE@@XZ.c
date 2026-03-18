/*
 * XREFs of ?GetColorSpace@CDesktopRenderTarget@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801473E0
 * Callers:
 *     ?GetColorSpace@CDesktopRenderTarget@@WDA@EAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800D55B0 (-GetColorSpace@CDesktopRenderTarget@@WDA@EAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 * Callees:
 *     ?GetColorSpace@CHwndRenderTarget@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180145D70 (-GetColorSpace@CHwndRenderTarget@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetColorSpace(CDesktopRenderTarget *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 20) )
    return CHwndRenderTarget::GetColorSpace((CHwndRenderTarget *)(**((_QWORD **)this + 7) + 64LL));
  return result;
}
