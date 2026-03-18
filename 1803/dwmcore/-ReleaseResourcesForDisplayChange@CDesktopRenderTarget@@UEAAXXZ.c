/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x180158200
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WGI@EAAXXZ @ 0x1800DD540 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WGI@EAAXXZ.c)
 * Callees:
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x18004504C (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801582B0 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseResourcesForDisplayChange(CDesktopRenderTarget *this)
{
  __int64 v2; // rcx

  CDesktopRenderTarget::RemoveInvalidRenderTargets((CDesktopRenderTarget *)((char *)this - 64));
  CDesktopRenderTarget::GetPrimary((CDesktopRenderTarget *)((char *)this - 64));
  v2 = *(_QWORD *)(*((_QWORD *)this - 6) + 376LL);
  if ( v2 )
    *(_BYTE *)(v2 + 20) = 1;
}
