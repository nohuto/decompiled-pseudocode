/*
 * XREFs of ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180128FF4
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800AAF98 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x180127D60 (-Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18001BA38 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SetEnabled@CDebugFrameCounter@@QEAAX_N@Z @ 0x180128FCC (-SetEnabled@CDebugFrameCounter@@QEAAX_N@Z.c)
 */

void __fastcall CComposition::UpdateDebugCounter(CComposition *this, char a2)
{
  char v2; // dl
  __int64 v4; // r9

  if ( a2 )
  {
    if ( ++*((_DWORD *)this + 120) != 1 )
      return;
    v2 = 1;
  }
  else
  {
    if ( (*((_DWORD *)this + 120))-- != 1 )
      return;
    v2 = 0;
  }
  CDebugFrameCounter::SetEnabled(*((CDebugFrameCounter **)this + 61), v2);
  CRenderTargetManager::ForceFullRender(*(CRenderTargetManager **)(v4 + 72));
}
