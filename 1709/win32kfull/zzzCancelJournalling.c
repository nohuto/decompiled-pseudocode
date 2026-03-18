/*
 * XREFs of zzzCancelJournalling @ 0x1C011A924
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     SendMsgCleanup @ 0x1C00490C0 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C004911C (xxxReceiverDied.c)
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0056178 (zzzUnhookWindowsHookEx.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     IsThreadHung @ 0x1C0085124 (IsThreadHung.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     PhkFirstGlobalValid @ 0x1C009EB9C (PhkFirstGlobalValid.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int16 zzzCancelJournalling()
{
  __int64 GlobalValid; // rdi
  __int64 v1; // rdi
  __int16 result; // ax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 Valid; // rbx
  __int64 v6; // rbx

  if ( (gdwMitConfig & 1) != 0 )
    ForceResetMouseButtonsDownState();
  else
    gwMouseOwnerButton = 0;
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1);
  if ( GlobalValid )
  {
    do
    {
      if ( *(_QWORD *)(GlobalValid + 16) )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup();
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
  }
  zzzEndDeferWinEventNotify();
  ++gdwDeferWinEvent;
  v1 = PhkFirstGlobalValid(gptiRit, 0);
  if ( v1 )
  {
    do
    {
      if ( *(_QWORD *)(v1 + 16) )
      {
        PostThreadMessage(*(_QWORD *)(v1 + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup();
      }
      v6 = PhkNextValid(v1);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v1);
      v1 = v6;
    }
    while ( v6 );
  }
  zzzEndDeferWinEventNotify();
  gppiLockSFW = 0LL;
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v3 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 16);
      if ( v4 )
      {
        if ( (*(_BYTE *)(v4 + 71) & 8) != 0 )
          return SetOrClrWF(0, (_DWORD *)v4, 0xF08u, 1);
      }
    }
  }
  return result;
}
