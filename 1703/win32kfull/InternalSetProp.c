/*
 * XREFs of InternalSetProp @ 0x1C0043520
 * Callers:
 *     NtUserShutdownBlockReasonCreate @ 0x1C0015BE0 (NtUserShutdownBlockReasonCreate.c)
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C001A160 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001FF9C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0026020 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowSmIcon @ 0x1C00C1950 (xxxCreateWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00C8990 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     FeedbackSetWindowSetting @ 0x1C00EF518 (FeedbackSetWindowSetting.c)
 *     NtUserSetBrokeredForeground @ 0x1C00F6260 (NtUserSetBrokeredForeground.c)
 *     _SetTargetingWindowValue @ 0x1C010612C (_SetTargetingWindowValue.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C010808C (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     _SetTouchWindowFlags @ 0x1C0116B50 (_SetTouchWindowFlags.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0132638 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     _SetWindowContextHelpId @ 0x1C0139B90 (_SetWindowContextHelpId.c)
 *     FeedbackClearWindowSetting @ 0x1C01B721C (FeedbackClearWindowSetting.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01BCC40 (PostMousePointerLeaveAndCleanup.c)
 *     UserAssociateHwnd @ 0x1C01C2C28 (UserAssociateHwnd.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01D2FF0 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     NtUserSetAppImeLevel @ 0x1C01DED80 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C01E1880 (NtUserfnDDEINIT.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01E4114 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E47A8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C0211780 (SetDisplayAffinity.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CreateProp @ 0x1C0042B34 (CreateProp.c)
 *     _FindProp @ 0x1C0062530 (_FindProp.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v6; // bx
  __int64 Prop; // rax
  __int64 v8; // rcx

  v6 = a2;
  if ( a2 )
  {
    Prop = FindProp(a1, a2, a4 & 1);
    if ( Prop )
    {
LABEL_5:
      *(_QWORD *)Prop = a3;
      return 1LL;
    }
    Prop = CreateProp(v8);
    if ( Prop )
    {
      *(_WORD *)(Prop + 8) = v6;
      *(_WORD *)(Prop + 10) = a4;
      goto LABEL_5;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return 0LL;
}
