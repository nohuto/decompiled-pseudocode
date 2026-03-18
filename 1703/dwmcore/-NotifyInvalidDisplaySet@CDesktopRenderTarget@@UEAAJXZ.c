/*
 * XREFs of ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x1800CD6F0
 * Callers:
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@WDA@EAAJXZ @ 0x1800D55D0 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@WDA@EAAJXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18006A550 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800CD870 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyInvalidDisplaySet(CDesktopRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rdi

  v2 = *((_DWORD *)this + 20) - 1;
  for ( i = v2;
        i >= 0;
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(*(_QWORD *)(*((_QWORD *)this + 7)
                                                                                            + 8 * i--)
                                                                                + 64LL)) )
  {
    ;
  }
  CDesktopRenderTarget::ReleaseRenderTargets((CDesktopRenderTarget *)((char *)this - 64));
  *((_BYTE *)this + 248) = 1;
  return 0LL;
}
