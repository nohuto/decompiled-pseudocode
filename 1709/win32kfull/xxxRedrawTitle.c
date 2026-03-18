/*
 * XREFs of xxxRedrawTitle @ 0x1C0053FC0
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxEnableMenuItem @ 0x1C007ABB8 (xxxEnableMenuItem.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020C0A0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
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
      if ( (a1[7] & 0x40) != 0 && *(_QWORD *)(a1[2] + 408LL) == gpqForeground )
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
    xxxCallHook(6LL, *a1, 0LL, 10LL);
    PostShellHookMessagesEx(6uLL, v6, 0LL);
  }
  return v4;
}
