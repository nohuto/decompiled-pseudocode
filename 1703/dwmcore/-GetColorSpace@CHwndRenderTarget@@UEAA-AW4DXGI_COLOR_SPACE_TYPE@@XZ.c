/*
 * XREFs of ?GetColorSpace@CHwndRenderTarget@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180145D70
 * Callers:
 *     ?GetColorSpace@CDesktopRenderTarget@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801473E0 (-GetColorSpace@CDesktopRenderTarget@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetColorSpace(CHwndRenderTarget *this)
{
  unsigned int v1; // ebx

  v1 = *((_DWORD *)this + 96);
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 8) + 288LL))((char *)this - 64) >= 0 )
    return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 40LL))(*((_QWORD *)this + 7));
  return v1;
}
