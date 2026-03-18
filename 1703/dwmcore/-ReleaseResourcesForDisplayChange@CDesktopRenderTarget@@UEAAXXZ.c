/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1801478E0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WDA@EAAXXZ @ 0x1800D5600 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WDA@EAAXXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18006A550 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x180147318 (-FindPrimary@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180147994 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseResourcesForDisplayChange(CDesktopRenderTarget *this)
{
  __int64 v1; // rax
  CDesktopRenderTarget *v3; // rcx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this - 6);
  v3 = (CDesktopRenderTarget *)((char *)this - 64);
  if ( *(_DWORD *)(v1 + 1224) )
  {
    CDesktopRenderTarget::ReleaseRenderTargets(v3);
    *((_BYTE *)this + 248) = 1;
  }
  else
  {
    CDesktopRenderTarget::RemoveInvalidRenderTargets(v3);
    CDesktopRenderTarget::FindPrimary((CDesktopRenderTarget *)((char *)this - 64));
    v4 = *(_QWORD *)(*((_QWORD *)this - 6) + 392LL);
    if ( v4 )
      *(_BYTE *)(v4 + 28) = 1;
  }
}
