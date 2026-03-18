/*
 * XREFs of ?GetAlphaMode@CHwndRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180145D20
 * Callers:
 *     ?GetAlphaMode@CDesktopRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801473C0 (-GetAlphaMode@CDesktopRenderTarget@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetAlphaMode(CHwndRenderTarget *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 8) + 288LL))((char *)this - 64) >= 0 )
    return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 32LL))(*((_QWORD *)this + 7));
  return v2;
}
