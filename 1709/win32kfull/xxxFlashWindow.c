/*
 * XREFs of xxxFlashWindow @ 0x1C0084014
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0083EC0 (xxxSystemTimerProc.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DFA40 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserFlashWindowEx @ 0x1C01E4780 (NtUserFlashWindowEx.c)
 *     xxxFlashEnabledPopup @ 0x1C020F4B8 (xxxFlashEnabledPopup.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

__int64 __fastcall xxxFlashWindow(_QWORD *BugCheckParameter2, unsigned int a2, int a3)
{
  unsigned int v6; // r15d
  unsigned int Prop; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  BOOL v10; // ebp
  __int64 v11; // r12
  int v12; // r14d
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edi
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0;
  Prop = GetProp((__int64)BugCheckParameter2, gaFlashWState, 1);
  v8 = Prop;
  if ( Prop == 2048 )
  {
    v8 = 18432;
    v9 = 0;
    goto LABEL_9;
  }
  if ( Prop )
  {
    if ( a2 == 1024 )
      a2 = Prop;
  }
  else if ( (BugCheckParameter2[7] & 0x40) != 0 || (a2 & 1) != 0 && (*((_BYTE *)BugCheckParameter2 + 70) & 0xC0) != 0 )
  {
    v8 = 36864;
  }
  v9 = a2 & 0xFFFF000F;
  v6 = v8 & 0x8000;
  if ( BugCheckParameter2 != (_QWORD *)gspwndAltTab )
  {
    if ( (v8 & 8) != 0 && gpqForeground == *(_QWORD *)(BugCheckParameter2[2] + 408LL) )
      v9 = 0;
LABEL_9:
    if ( v9 )
    {
      v10 = v6 == 0;
    }
    else
    {
      if ( gpqForeground && *(_QWORD **)(gpqForeground + 120LL) == BugCheckParameter2 )
      {
        v10 = 1;
        goto LABEL_15;
      }
      v10 = 0;
    }
    if ( v9 && (v9 & 1) == 0 )
    {
LABEL_16:
      if ( (!v9 || (v9 & 2) != 0) && (unsigned int)IsTrayWindow((__int64)BugCheckParameter2) )
      {
        v11 = *BugCheckParameter2;
        if ( (v8 & 0x800) != 0 )
          v12 = !v10;
        else
          v12 = v9 != 0 && v10;
        xxxCallHook(6LL, *BugCheckParameter2, v12, 10LL);
        PostShellHookMessagesEx(v12 != 0 ? 32774 : 6, v11, 0LL);
      }
      if ( v9 )
      {
        if ( HIWORD(v9) )
        {
          v8 |= 0x2000u;
          v13 = v9 - 0x10000;
          if ( ((v8 >> 12) & 1) != v10 )
            v13 = v9;
          v9 = v13;
          if ( (v8 & 0x4000) == 0 )
            v9 = v13 | 4;
        }
        if ( (v9 & 4) == 0 )
          goto LABEL_30;
        v8 |= 0x4000u;
        if ( !a3 )
          a3 = *(_DWORD *)(gpsi + 4980LL);
        if ( SetSystemTimer((_DWORD)BugCheckParameter2, 65528, a3, (unsigned int)xxxSystemTimerProc, 1) )
        {
LABEL_30:
          if ( (v8 & 0x2000) != 0 && !HIWORD(v9) )
          {
            v15 = 2048;
          }
          else
          {
            if ( v10 )
              v14 = v8 | 0x8000;
            else
              v14 = v8 & 0xFFFF7FFF;
            v15 = (v9 ^ v14) & 0xFFFF000B ^ v14;
          }
          InternalSetProp(BugCheckParameter2, (unsigned __int16)gaFlashWState, v15, 5LL);
        }
      }
      else
      {
        if ( (v8 & 0x4000) != 0 )
          FindTimer((_DWORD)BugCheckParameter2, 65528, 2, 1, 0LL);
        InternalRemoveProp((__int64)BugCheckParameter2, (unsigned __int16)gaFlashWState, 1LL);
      }
      return v6;
    }
LABEL_15:
    xxxSendTransformableMessageTimeout((ULONG_PTR)BugCheckParameter2, 0, 100, (ULONG_PTR)&BugCheckParameter3, 1, 0);
    goto LABEL_16;
  }
  return v6;
}
