/*
 * XREFs of ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180033E00
 * Callers:
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180044C0C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Initialize@CCaptureRenderTarget@@EEAAJXZ @ 0x180156020 (-Initialize@CCaptureRenderTarget@@EEAAJXZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180156060 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180157264 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x18015CA7C (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18005F25C (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 */

__int64 __fastcall CComposition::AddRenderTarget(CRenderTargetManager **this, struct CRenderTarget *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CRenderTargetManager::AddRenderTarget(this[9], a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x149u);
  return v3;
}
