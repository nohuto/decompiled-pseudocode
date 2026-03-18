/*
 * XREFs of xxxSetFocus @ 0x1C00B507C
 * Callers:
 *     xxxDWP_ProcessVirtKey @ 0x1C0008174 (xxxDWP_ProcessVirtKey.c)
 *     xxxCheckFocus @ 0x1C0020200 (xxxCheckFocus.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     NtUserSetFocus @ 0x1C00B4FE0 (NtUserSetFocus.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00B78BC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006288C (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00B4718 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0117260 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetFocus(struct tagWND *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  char v7; // al
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rcx
  _QWORD *i; // rsi
  struct tagWND *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v29; // [rsp+28h] [rbp-30h]
  __int64 v30; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = a2;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x40) != 0 )
    {
      v21 = 0LL;
      v22 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
      if ( v22 )
        v21 = *v22;
      if ( (unsigned int)xxxCallHook(9, 0, v21, 5u) )
        return 0LL;
    }
    v19 = *(unsigned __int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
    if ( v19 )
      v2 = *v19;
    xxxSendFocusMessages(gptiCurrent, 0LL, v3);
    return HMValidateHandleNoSecure(v2, 1);
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v5 + 384) != *(_QWORD *)(gptiCurrent + 384LL) && !CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
  {
    if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v30) )
    {
      for ( i = *(_QWORD **)(v30 + 32); i; i = (_QWORD *)*i )
      {
        v24 = (struct tagWND *)i[1];
        if ( v24 && (unsigned int)CoreWindowProp::IsComponent(v24) && gptiCurrent == *(_QWORD *)(v5 + 16) )
          goto LABEL_3;
      }
    }
    v18 = 5LL;
LABEL_29:
    UserSetLastError(v18);
    return 0LL;
  }
LABEL_3:
  v6 = a1;
  do
  {
    v7 = *((_BYTE *)v6 + 71);
    if ( (v7 & 0x20) != 0 || (v7 & 8) != 0 )
    {
      v18 = 87LL;
      goto LABEL_29;
    }
    if ( (v7 & 0xC0) != 0x40 )
      break;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
  }
  while ( v6 );
  v28 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v28;
  v29 = v6;
  if ( v6 )
    ++*((_DWORD *)v6 + 2);
  v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
  if ( a1 == (struct tagWND *)v8 )
  {
LABEL_16:
    v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 16);
    else
      v13 = gptiCurrent;
    v14 = *(_QWORD *)(v13 + 392);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 40);
      if ( gLCIDSentToShell != v15 )
      {
        v20 = *(__int64 **)(gptiCurrent + 416LL);
        a2 = *v20;
        if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*v20 + 16)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v15;
          xxxCallHook(8, 0, v15, 0xAu);
        }
      }
    }
    if ( v8 )
      v2 = *(_QWORD *)v8;
    ThreadUnlock1(v5, a2);
    return HMValidateHandleNoSecure(v2, 1);
  }
  v9 = *(_QWORD *)(gptiCurrent + 416LL);
  v10 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)v9 + 16LL));
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)v9 + 16LL)) & 0x40) == 0 )
    goto LABEL_12;
  v17 = 0LL;
  if ( v8 )
    v17 = *(_QWORD *)v8;
  if ( !(unsigned int)xxxCallHook(9, *(_QWORD *)a1, v17, 5u) )
  {
LABEL_12:
    v11 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( v6 != *(struct tagWND **)(v11 + 88) )
    {
      if ( v11 != gpqForeground && (unsigned int)FAllowForegroundActivate((struct tagQ *)v11, v6) )
      {
        if ( (*((_BYTE *)v6 + 71) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) |= 0x100u;
        if ( !(unsigned int)xxxSetForegroundWindow2((LARGE_INTEGER *)v6, gptiCurrent, 8u, v3) )
          goto LABEL_60;
      }
      if ( v6 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL)
        && !(unsigned int)xxxActivateThisWindow(v6, 0LL, 0, v3) )
      {
LABEL_60:
        v25 = 87LL;
        goto LABEL_61;
      }
    }
    v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
    ThreadUnlock1(v11, v10);
    v28 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v28;
    v29 = (struct tagWND *)v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    xxxSendFocusMessages(gptiCurrent, a1, v3);
    goto LABEL_16;
  }
  v25 = 5LL;
LABEL_61:
  UserSetLastError(v25);
  ThreadUnlock1(v27, v26);
  return 0LL;
}
