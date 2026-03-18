/*
 * XREFs of xxxSetFocus @ 0x1C0085260
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C000D158 (xxxDWP_ProcessVirtKey.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxCheckFocus @ 0x1C005F708 (xxxCheckFocus.c)
 *     NtUserSetFocus @ 0x1C00851C0 (NtUserSetFocus.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C009DE30 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00CC03C (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0120AB4 (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetFocus(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  char v7; // al
  struct tagWND *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v28; // [rsp+28h] [rbp-30h]

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 656LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x40) != 0 )
    {
      v22 = 0LL;
      v23 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
      if ( v23 )
        v22 = *v23;
      if ( (unsigned int)xxxCallHook(9LL, 0LL, v22, 5LL) )
        return 0LL;
    }
    v20 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
    if ( v20 )
      v2 = *v20;
    xxxSendFocusMessages(gptiCurrent, 0LL, v3);
LABEL_23:
    LOBYTE(v16) = 1;
    return HMValidateHandleNoSecure(v2, v16);
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v5 + 408) != *(_QWORD *)(gptiCurrent + 408LL)
    && !(unsigned int)CoreWindowProp::IsHostOrComponentThreadOf(gptiCurrent, a1) )
  {
    v19 = 5LL;
LABEL_29:
    UserSetLastError(v19, a2);
    return 0LL;
  }
  v6 = a1;
  do
  {
    v7 = *((_BYTE *)v6 + 71);
    if ( (v7 & 0x20) != 0 || (v7 & 8) != 0 )
    {
      v19 = 87LL;
      goto LABEL_29;
    }
    if ( (v7 & 0xC0) != 0x40 )
      break;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
  }
  while ( v6 );
  v27 = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = &v27;
  v28 = v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
  v8 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
  if ( a1 == v8 )
  {
LABEL_16:
    v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 16);
    else
      v13 = gptiCurrent;
    v14 = *(_QWORD *)(v13 + 416);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 40);
      if ( gLCIDSentToShell != v15 )
      {
        v21 = *(__int64 **)(gptiCurrent + 440LL);
        a2 = *v21;
        if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(*v21 + 16)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v15;
          xxxCallHook(8LL, 0LL, v15, 10LL);
        }
      }
    }
    if ( v8 )
      v2 = *(_QWORD *)v8;
    ThreadUnlock1(v5, a2);
    goto LABEL_23;
  }
  v9 = *(_QWORD *)(gptiCurrent + 440LL);
  v10 = (unsigned int)(*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(*(_QWORD *)v9 + 16LL));
  if ( ((*(_BYTE *)(gptiCurrent + 656LL) | *(_BYTE *)(*(_QWORD *)v9 + 16LL)) & 0x40) == 0 )
    goto LABEL_12;
  v18 = 0LL;
  if ( v8 )
    v18 = *(_QWORD *)v8;
  if ( !(unsigned int)xxxCallHook(9LL, *(_QWORD *)a1, v18, 5LL) )
  {
LABEL_12:
    v11 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v6 != *(struct tagWND **)(v11 + 120) )
    {
      if ( v11 != gpqForeground && FAllowForegroundActivate((struct tagQ *)v11, v6) )
      {
        if ( (*((_BYTE *)v6 + 71) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) |= 0x100u;
        if ( !(unsigned int)xxxSetForegroundWindow2(v6) )
          goto LABEL_49;
      }
      if ( v6 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL)
        && !(unsigned int)xxxActivateThisWindow(v6, 0, 0, v3) )
      {
LABEL_49:
        v24 = 87LL;
        goto LABEL_50;
      }
    }
    v8 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
    ThreadUnlock1(v11, v10);
    v27 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v27;
    v28 = v8;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    xxxSendFocusMessages(gptiCurrent, a1, v3);
    goto LABEL_16;
  }
  v24 = 5LL;
LABEL_50:
  UserSetLastError(v24, v10);
  ThreadUnlock1(v26, v25);
  return 0LL;
}
