/*
 * XREFs of xxxFlashWindow @ 0x1C00175F8
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00174B0 (xxxSystemTimerProc.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D3670 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserFlashWindowEx @ 0x1C01D8010 (NtUserFlashWindowEx.c)
 *     xxxFlashEnabledPopup @ 0x1C020DC94 (xxxFlashEnabledPopup.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     _SetSystemTimer @ 0x1C00B21F0 (_SetSystemTimer.c)
 */

__int64 __fastcall xxxFlashWindow(struct tagWND *a1, unsigned int a2, int a3)
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
  Prop = GetProp(a1, (unsigned __int16)gaFlashWState, 1LL);
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
  else if ( (*((_BYTE *)a1 + 56) & 0x40) != 0 || (a2 & 1) != 0 && (*((_BYTE *)a1 + 70) & 0xC0) != 0 )
  {
    v8 = 36864;
  }
  v9 = a2 & 0xFFFF000F;
  v6 = v8 & 0x8000;
  if ( a1 != gspwndAltTab )
  {
    if ( (v8 & 8) != 0 && gpqForeground == *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) )
      v9 = 0;
LABEL_9:
    if ( v9 )
    {
      v10 = v6 == 0;
    }
    else
    {
      if ( gpqForeground && *(struct tagWND **)(gpqForeground + 88LL) == a1 )
      {
        v10 = 1;
        goto LABEL_31;
      }
      v10 = 0;
    }
    if ( v9 && (v9 & 1) == 0 )
    {
LABEL_13:
      if ( (!v9 || (v9 & 2) != 0) && (unsigned int)IsTrayWindow(a1) )
      {
        v11 = *(_QWORD *)a1;
        if ( (v8 & 0x800) != 0 )
          v12 = !v10;
        else
          v12 = v9 != 0 && v10;
        xxxCallHook(6LL, *(_QWORD *)a1, v12);
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
          goto LABEL_27;
        v8 |= 0x4000u;
        if ( !a3 )
          a3 = *(_DWORD *)(gpsi + 5392LL);
        if ( SetSystemTimer((_DWORD)a1, 65528, a3, (unsigned int)xxxSystemTimerProc, 1) )
        {
LABEL_27:
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
          InternalSetProp(a1, (unsigned __int16)gaFlashWState, v15, 5LL);
        }
      }
      else
      {
        if ( (v8 & 0x4000) != 0 )
          FindTimer((_DWORD)a1, 65528, 2, 1, 0LL);
        InternalRemoveProp(a1, (unsigned __int16)gaFlashWState, 1LL);
      }
      return v6;
    }
LABEL_31:
    xxxSendTransformableMessageTimeout((int)a1, 134, v10, 0, 0, 100, (ULONG_PTR)&BugCheckParameter3, 1, 0);
    goto LABEL_13;
  }
  return v6;
}
