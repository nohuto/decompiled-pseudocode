/*
 * XREFs of InternalSetProp @ 0x1C009B790
 * Callers:
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     xxxCreateWindowSmIcon @ 0x1C0051CA4 (xxxCreateWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00538FC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0057E7C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C008A408 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     FeedbackSetWindowSetting @ 0x1C009CB10 (FeedbackSetWindowSetting.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C00CC238 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D5DB0 (NtUserSetBrokeredForeground.c)
 *     _SetTargetingWindowValue @ 0x1C011100C (_SetTargetingWindowValue.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0111D00 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0113800 (NtUserShutdownBlockReasonCreate.c)
 *     _SetTouchWindowFlags @ 0x1C0120770 (_SetTouchWindowFlags.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01347A8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     _SetWindowContextHelpId @ 0x1C01408C0 (_SetWindowContextHelpId.c)
 *     FeedbackClearWindowSetting @ 0x1C01BC58C (FeedbackClearWindowSetting.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01C0BE0 (PostMousePointerLeaveAndCleanup.c)
 *     UserAssociateHwnd @ 0x1C01C593C (UserAssociateHwnd.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01D7298 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     NtUserSetAppImeLevel @ 0x1C01EAEA0 (NtUserSetAppImeLevel.c)
 *     NtUserfnDDEINIT @ 0x1C01EDA30 (NtUserfnDDEINIT.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01F012C (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F07D8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     SetDisplayAffinity @ 0x1C0212C94 (SetDisplayAffinity.c)
 * Callees:
 *     _FindProp @ 0x1C0064018 (_FindProp.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CreateProp @ 0x1C0097B78 (CreateProp.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v6; // bx
  __int64 Prop; // rax
  __int64 v8; // r10

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
    UserSetLastError(87LL, 0LL);
  }
  return 0LL;
}
