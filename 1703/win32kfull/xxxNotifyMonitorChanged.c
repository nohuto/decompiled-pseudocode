/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C005EF98
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C009DA38 (xxxEnableChildWindowDpiMessageX.c)
 *     NtUserUpdateLayeredWindow @ 0x1C009E0F0 (NtUserUpdateLayeredWindow.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0020808 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00FB81C (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BF624 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

__int64 __fastcall xxxNotifyMonitorChanged(struct tagWND *a1, __int64 a2, struct tagBWL *a3, unsigned __int16 a4)
{
  __int64 result; // rax
  struct tagRECT *v8; // r10
  __int16 ScaledLogPixels; // bx

  result = IsTopLevelWindow(a1);
  if ( (_DWORD)result )
  {
    if ( (*((_DWORD *)a1 + 92) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 568LL) & 0x2000000) != 0 )
    {
      if ( (unsigned int)IsPWNDEligibleForGDIScaling(a1) )
      {
        if ( !a4
          || (ScaledLogPixels = GreGetScaledLogPixels(*((unsigned __int16 *)a1 + 186)),
              (unsigned __int16)GreGetScaledLogPixels(a4) != ScaledLogPixels) )
        {
          xxxSendGDIScaledDpiChangedMsgs(a1, a3);
        }
      }
    }
    else
    {
      xxxSendDpiChangedMsgs(a1, v8, a3, a4);
    }
    TraceLoggingProcessMonitorInfoUpdateHelper(a1, 1);
    if ( *((_QWORD *)a1 + 15) )
    {
      result = PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 24LL, *(_QWORD *)a1);
    }
    else
    {
      result = IsTrayWindow(a1);
      if ( (_DWORD)result )
      {
        PostShellHookMessagesEx(0x10u, *(_QWORD *)a1, 0LL);
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 20LL, *(_QWORD *)a1);
        result = xxxCallHook(16, *(_QWORD *)a1, 0LL, 0xAu);
      }
    }
  }
  if ( a3 )
    return FreeHwndList(a3);
  return result;
}
