/*
 * XREFs of xxxRedrawTitle @ 0x1C003D3F0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxEnableMenuItem @ 0x1C00C2158 (xxxEnableMenuItem.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020AD00 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 */

__int64 __fastcall xxxRedrawTitle(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  __int64 v6; // rbx
  __int64 DCEx; // rbx

  v2 = a2;
  v4 = 1;
  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)a1 + 70) & 0xC0) == 0xC0 )
    {
      if ( (a1[7] & 0x40) != 0 && *(_QWORD *)(a1[2] + 384LL) == gpqForeground )
        v2 = a2 | 1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        xxxDrawCaptionBar(a1, DCEx, v2);
        _ReleaseDC(DCEx);
      }
      else
      {
        xxxSendMessage(a1, 174LL, v2, 0LL);
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) && (v2 & 0xC) != 0 )
  {
    v6 = *a1;
    xxxCallHook(6LL, *a1, 0LL);
    PostShellHookMessagesEx(6u, v6, 0LL);
  }
  return v4;
}
