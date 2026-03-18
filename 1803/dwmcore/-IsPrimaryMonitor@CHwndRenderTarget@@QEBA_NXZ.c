/*
 * XREFs of ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x180062F10
 * Callers:
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180044A74 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x18004504C (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18005F088 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18005F25C (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x1800D78C0 (-WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x18013BE88 (-SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B7590 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwndRenderTarget::IsPrimaryMonitor(CDisplay **this)
{
  char v2; // bl

  v2 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(CDisplay **))*this + 27))(this) )
    return CDisplay::IsPrimary(this[21]);
  return v2;
}
