/*
 * XREFs of xxxNotifyMonitorChanged @ 0x1C0061CB0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008D2D0 (NtUserUpdateLayeredWindow.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E6578 (xxxEnableChildWindowDpiMessageX.c)
 * Callees:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0051F24 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0107F90 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01C2F48 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 */

_UNKNOWN **__fastcall xxxNotifyMonitorChanged(struct tagWND *a1, __int64 a2, struct tagBWL *a3, unsigned __int16 a4)
{
  _UNKNOWN **result; // rax
  struct tagRECT *v8; // rdx
  _UNKNOWN **v9; // r8
  __int16 ScaledLogPixels; // bx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *((_QWORD *)a1 + 13) )
  {
    result = (_UNKNOWN **)GetDesktopWindow(a1);
    if ( v9 == result )
    {
      if ( (*((_DWORD *)a1 + 92) & 0xF) != 2 || (*(_DWORD *)(*((_QWORD *)a1 + 2) + 624LL) & 0x2000000) != 0 )
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
        result = (_UNKNOWN **)PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 24LL, *(_QWORD *)a1);
      }
      else
      {
        result = (_UNKNOWN **)IsTrayWindow(a1);
        if ( (_DWORD)result )
        {
          PostShellHookMessagesEx(0x10u, *(_QWORD *)a1, 0LL);
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 20LL, *(_QWORD *)a1);
          result = (_UNKNOWN **)xxxCallHook(16LL, *(_QWORD *)a1, 0LL, 10LL);
        }
      }
    }
  }
  if ( a3 )
    return (_UNKNOWN **)FreeHwndList(a3);
  return result;
}
