/*
 * XREFs of ?GetDisplayRect@CHwndRenderTarget@@AEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18006EDD8
 * Callers:
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A7E4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18006C500 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetDisplayRect(_QWORD *a1)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 184LL))(a1)
    || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 176LL))(a1)
    || *(_BYTE *)(a1[2] + 1361LL) )
  {
    return a1[14] + 96LL;
  }
  else
  {
    return (__int64)a1 + 412;
  }
}
