/*
 * XREFs of ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18014ABE4
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18002DA70 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x180149FAC (-Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18005F774 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SetEnabled@CDebugFrameCounter@@QEAAX_N@Z @ 0x18014ABBC (-SetEnabled@CDebugFrameCounter@@QEAAX_N@Z.c)
 */

void __fastcall CComposition::UpdateDebugCounter(CComposition *this, char a2)
{
  int v2; // eax
  int v3; // eax
  char v4; // dl
  int v5; // eax
  __int64 v6; // r9

  v2 = *((_DWORD *)this + 126);
  if ( a2 )
  {
    v3 = v2 + 1;
    *((_DWORD *)this + 126) = v3;
    if ( v3 != 1 )
      return;
    v4 = 1;
  }
  else
  {
    v5 = v2 - 1;
    *((_DWORD *)this + 126) = v5;
    if ( v5 )
      return;
    v4 = 0;
  }
  CDebugFrameCounter::SetEnabled(*((CDebugFrameCounter **)this + 64), v4);
  CRenderTargetManager::ForceFullRender(*(CRenderTargetManager **)(v6 + 72));
}
