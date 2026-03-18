/*
 * XREFs of ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x180133E60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180016810 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1801362D0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyInvalidDisplaySet(CDesktopRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rdi

  v2 = *((_DWORD *)this + 8) - 1;
  for ( i = v2;
        i >= 0;
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                            + 8 * i--)
                                                                                + 64LL)) )
  {
    ;
  }
  CDesktopRenderTarget::ReleaseRenderTargets((CDesktopRenderTarget *)((char *)this - 112));
  *((_BYTE *)this + 200) = 1;
  return 0LL;
}
