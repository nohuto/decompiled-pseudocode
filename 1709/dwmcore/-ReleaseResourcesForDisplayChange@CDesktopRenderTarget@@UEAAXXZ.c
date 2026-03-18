/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1801345C0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WDA@EAAXXZ @ 0x1800C5F10 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WDA@EAAXXZ.c)
 * Callees:
 *     ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x180133A74 (-FindPrimary@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180134664 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseResourcesForDisplayChange(CDesktopRenderTarget *this)
{
  __int64 v2; // rcx

  CDesktopRenderTarget::RemoveInvalidRenderTargets((CDesktopRenderTarget *)((char *)this - 64));
  CDesktopRenderTarget::FindPrimary((CDesktopRenderTarget *)((char *)this - 64));
  v2 = *(_QWORD *)(*((_QWORD *)this - 6) + 352LL);
  if ( v2 )
    *(_BYTE *)(v2 + 28) = 1;
}
