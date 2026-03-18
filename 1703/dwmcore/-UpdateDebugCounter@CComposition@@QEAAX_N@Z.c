/*
 * XREFs of ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18013FBA4
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005BFB0 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x1801312E8 (-Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18006BD9C (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SetEnabled@CDebugFrameCounter@@QEAAX_N@Z @ 0x18013FB7C (-SetEnabled@CDebugFrameCounter@@QEAAX_N@Z.c)
 */

void __fastcall CComposition::UpdateDebugCounter(CComposition *this, char a2)
{
  char v2; // dl
  __int64 v4; // r9

  if ( a2 )
  {
    if ( ++*((_DWORD *)this + 132) != 1 )
      return;
    v2 = 1;
  }
  else
  {
    if ( (*((_DWORD *)this + 132))-- != 1 )
      return;
    v2 = 0;
  }
  CDebugFrameCounter::SetEnabled(*((CDebugFrameCounter **)this + 67), v2);
  CRenderTargetManager::ForceFullRender(*(CRenderTargetManager **)(v4 + 32));
}
