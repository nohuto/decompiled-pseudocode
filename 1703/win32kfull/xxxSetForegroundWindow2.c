/*
 * XREFs of xxxSetForegroundWindow2 @ 0x1C00B489C
 * Callers:
 *     NtUserNavigateFocus @ 0x1C0005570 (NtUserNavigateFocus.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0007260 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0117400 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01B1E90 (xxxSetForegroundCheckNoActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01BD2BC (xxxActiveWindowTracking.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxSendNCActivateMessage @ 0x1C0019BA8 (xxxSendNCActivateMessage.c)
 *     xxxUpdateTray @ 0x1C0019CC0 (xxxUpdateTray.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C001A018 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     ?UpdateKeyStateFlag@@YAXXZ @ 0x1C00B2C64 (-UpdateKeyStateFlag@@YAXXZ.c)
 *     xxxDeactivate @ 0x1C00B304C (xxxDeactivate.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00B5774 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00B57FC (xxxSetForegroundThreadWithWindowHint.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00B5DB8 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00B5E38 (zzzInputFocusReceivedWindowEvent.c)
 *     IsThreadHung @ 0x1C00B6074 (IsThreadHung.c)
 *     SetNewForegroundQueue @ 0x1C00B6AD0 (SetNewForegroundQueue.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C00B6D04 (xxxCancelTracking.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00B7310 (IsWindowUnderActiveLockScreen.c)
 *     SetHungFlag @ 0x1C00B7CF0 (SetHungFlag.c)
 *     ClearKeyboardToggleStates @ 0x1C00B80E8 (ClearKeyboardToggleStates.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E11E8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0117260 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ProcessHungWindow @ 0x1C01321FC (ProcessHungWindow.c)
 *     zzzActiveCursorTracking @ 0x1C01BD448 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(LARGE_INTEGER *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rsi
  __int64 QuadPart; // r12
  LARGE_INTEGER v9; // rcx
  struct tagWND *v10; // rdx
  __int64 *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  BOOL v21; // r12d
  struct tagWND *TopLevelWindow; // rcx
  struct tagWND *v23; // rcx
  struct tagPOINT v24; // rbx
  HANDLE ThreadId; // r9
  __int64 v26; // r14
  __int64 v27; // rbx
  int v28; // eax
  LARGE_INTEGER v29; // r12
  int v30; // edx
  struct tagPOINT v31; // rbx
  unsigned int v32; // eax
  LARGE_INTEGER v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // ebx
  char v38; // r15
  unsigned int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  char v42; // bl
  struct tagWND *v43; // rcx
  struct tagWND *v44; // rcx
  int v45; // eax
  __int64 v46; // r8
  __int64 v47; // rcx
  struct tagWND *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct tagWND *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // [rsp+70h] [rbp-69h]
  LARGE_INTEGER *v55; // [rsp+78h] [rbp-61h]
  DWORD v56; // [rsp+78h] [rbp-61h]
  LARGE_INTEGER *v57; // [rsp+80h] [rbp-59h]
  DWORD v58; // [rsp+88h] [rbp-51h] BYREF
  __int64 v59; // [rsp+90h] [rbp-49h]
  __int64 v60; // [rsp+98h] [rbp-41h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-39h]
  _QWORD v62[3]; // [rsp+B0h] [rbp-29h] BYREF
  _QWORD v63[3]; // [rsp+C8h] [rbp-11h] BYREF
  _QWORD v64[10]; // [rsp+E0h] [rbp+7h] BYREF

  v59 = gptiCurrent;
  SetSystemInputSource(&v58);
  if ( a1
    && (a1[3].QuadPart != grpdeskRitInput
     || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1->LowPart + gSharedInfo[1] + 25LL) & 1) != 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread(a2, v64);
  gppiLockSFW = 0LL;
  v7 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 440LL) & 1) != 0 )
    v7 = 0LL;
  else
    LockW32Thread(gptiForeground, v63);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    QuadPart = a1[2].QuadPart;
    v54 = QuadPart;
    SetNewForegroundQueue(*(_QWORD *)(QuadPart + 384));
    LockW32Thread(QuadPart, v62);
    v9 = a1[2];
    v10 = (struct tagWND *)a1;
  }
  else
  {
    QuadPart = 0LL;
    v54 = 0LL;
    SetNewForegroundQueue(0LL);
    v10 = 0LL;
    v9.QuadPart = 0LL;
  }
  ((void (__fastcall *)(_QWORD, _QWORD))xxxSetForegroundThreadWithWindowHint)((LARGE_INTEGER)v9.QuadPart, v10);
  v11 = (__int64 *)gpqForegroundPrev;
  v12 = gpqForeground;
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
    {
      v13 = *(unsigned int *)(gpqForeground + 380LL);
      v14 = *(unsigned int *)(gpqForeground + 384LL);
    }
    else
    {
      v14 = 0LL;
      v13 = 0LL;
    }
    if ( gpqForegroundPrev )
    {
      v15 = *(unsigned int *)(gpqForegroundPrev + 380LL);
      v16 = *(unsigned int *)(gpqForegroundPrev + 384LL);
    }
    else
    {
      v16 = 0LL;
      v15 = 0LL;
    }
    if ( gbEnforceUIPI
      && (unsigned int)v13 <= (unsigned int)v15
      && ((_DWORD)v13 != (_DWORD)v15 || (_DWORD)v14 != (_DWORD)v16 && (_DWORD)v14 != -1 && (_DWORD)v16 != -1) )
    {
      ClearKeyboardToggleStates(v15, v16, v13, v14);
      UpdateKeyStateFlag();
    }
  }
  if ( gpqForeground
    && gpqForeground != gpqForegroundPrev
    && *(_QWORD *)(gpqForeground + 80LL)
    && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
  {
    xxxApplyGlobalInputSettings();
    v11 = (__int64 *)gpqForegroundPrev;
    v12 = gpqForeground;
  }
  v17 = *v11;
  if ( *(_QWORD *)v12 != *v11 )
  {
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 80);
      if ( v18 )
      {
        zzzInputFocusLostWindowEvent(v18, 1LL);
        v12 = gpqForeground;
      }
    }
    if ( *(_QWORD *)v12 && *(_QWORD *)(*(_QWORD *)v12 + 80LL) )
      zzzInputFocusReceivedWindowEvent(1LL);
    if ( a2 )
    {
      xxxCancelTracking();
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL);
      xxxMakeWindowForegroundWithState(0LL, 0);
    }
    v19 = 0LL;
    if ( v7 && (*(_DWORD *)(v7 + 440) & 1) == 0 )
      v19 = *(_QWORD *)(v7 + 384);
    v20 = 0LL;
    if ( a2 )
      v20 = *(_QWORD *)(a2 + 384);
    v57 = 0LL;
    if ( v19 && v19 != v20 )
    {
      v55 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)v19, 0LL, 0);
      if ( !v55 )
      {
        v36 = 0;
        goto LABEL_81;
      }
      v21 = 0;
      if ( a1 )
      {
        TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
        if ( TopLevelWindow )
        {
          if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
            v21 = CoreWindowProp::IsHostThreadOf((struct tagTHREADINFO *)v7, v23) != 0;
        }
      }
      v24 = LogicalQmsgCursorPos(0LL, v19);
      if ( gptiForeground )
        ThreadId = PsGetThreadId((PETHREAD)*gptiForeground);
      else
        ThreadId = 0LL;
      StoreQMessage(
        v55,
        0LL,
        0,
        (LARGE_INTEGER)ThreadId,
        0LL,
        0,
        0,
        5u,
        (LARGE_INTEGER)v21,
        0,
        &v58,
        *(_QWORD *)&v24,
        0LL,
        0LL);
      if ( v7 )
      {
        v55[13].QuadPart = v7;
        SetWakeBit(v7, 0x2040u);
      }
      if ( *(_QWORD *)(v19 + 88) )
      {
        if ( v7 && (unsigned int)IsThreadHung(v7, 0LL) )
        {
          v61 = *(_QWORD *)(v19 + 88);
          v47 = v61;
          v60 = *(_QWORD *)(v59 + 368);
          *(_QWORD *)(v59 + 368) = &v60;
          ++*(_DWORD *)(v47 + 8);
          v48 = *(struct tagWND **)(v19 + 88);
          ClearHungFlag(v48, 784);
          ProcessHungWindow(v48);
          ThreadUnlock1(v50, v49);
        }
        else
        {
          SetHungFlag(*(_QWORD *)(v19 + 88), 784LL);
        }
      }
    }
    QuadPart = v54;
    v26 = 0LL;
    if ( v54 && (*(_DWORD *)(v54 + 440) & 1) == 0 )
      v26 = *(_QWORD *)(v54 + 384);
    v27 = 0LL;
    if ( a2 )
      v27 = *(_QWORD *)(a2 + 384);
    if ( v26 )
    {
      if ( v26 != v27 )
      {
        v57 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)v26, 0LL, 0);
        if ( !v57 )
        {
          v36 = 0;
          goto LABEL_81;
        }
      }
      v28 = RemoveEventMessage((struct tagQ *)v26, 5, -1);
      if ( v26 == v27 )
      {
        if ( a1 == *(LARGE_INTEGER **)(v27 + 88) )
        {
          if ( a1 )
            v46 = a1->QuadPart;
          else
            v46 = 0LL;
          xxxSendNCActivateMessage((struct tagWND *)a1, 1LL, v46);
          xxxUpdateTray((struct tagWND *)a1);
          if ( (a3 & 4) == 0 )
            xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
        }
        else if ( (a3 & 1) == 0 )
        {
          v38 = ~(unsigned __int8)(a3 >> 2) & 2;
          if ( v7 )
            v39 = (unsigned int)PsGetThreadId(*(PETHREAD *)v7);
          else
            v39 = 0;
          v36 = xxxActivateThisWindow((struct tagWND *)a1, v39, v38, 0);
          if ( v36 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            zzzActiveCursorTracking(a1);
          goto LABEL_81;
        }
      }
      else
      {
        if ( (v27 || (a3 & 2) != 0) && a1 )
          v29 = *a1;
        else
          v29.QuadPart = 0LL;
        if ( v28 )
          *(_DWORD *)(v26 + 340) |= 0x8000u;
        v30 = (a3 >> 4) & 1 | 2;
        if ( (a3 & 4) == 0 )
          v30 = (a3 >> 4) & 1;
        v56 = v30;
        v31 = LogicalQmsgCursorPos(0LL, v26);
        if ( (a3 & 1) != 0 )
        {
          v33.QuadPart = 0LL;
        }
        else
        {
          if ( v7 )
            v32 = (unsigned int)PsGetThreadId(*(PETHREAD *)v7);
          else
            v32 = 0;
          v33.QuadPart = v32;
        }
        StoreQMessage(v57, 0LL, v56, v33, v29, 0, 0, 6u, (LARGE_INTEGER)a4, 0, &v58, *(_QWORD *)&v31, 0LL, 0LL);
        v57[13].QuadPart = v54;
        SetWakeBit(v54, 0x2040u);
        if ( *(_QWORD *)(v26 + 88) )
        {
          v40 = IsThreadHung(v54, 0LL);
          v41 = *(_QWORD *)(v26 + 88);
          if ( v40 )
          {
            v61 = *(_QWORD *)(v26 + 88);
            v60 = *(_QWORD *)(v59 + 368);
            *(_QWORD *)(v59 + 368) = &v60;
            ++*(_DWORD *)(v41 + 8);
            v51 = *(struct tagWND **)(v26 + 88);
            ClearHungFlag(v51, 784);
            ProcessHungWindow(v51);
            ThreadUnlock1(v53, v52);
          }
          else
          {
            SetHungFlag(v41, 784LL);
          }
        }
      }
    }
    v34 = 0LL;
    if ( v7 && (*(_DWORD *)(v7 + 440) & 1) == 0 )
      v34 = *(_QWORD *)(v7 + 384);
    v35 = 0LL;
    if ( a2 )
      v35 = *(_QWORD *)(a2 + 384);
    if ( v34 && v34 == v35 )
    {
      v42 = 0;
      if ( a1 )
      {
        v43 = (struct tagWND *)GetTopLevelWindow((__int64)a1);
        if ( v43 && (unsigned int)CoreWindowProp::IsComponent(v43) )
          v42 = CoreWindowProp::IsHostThreadOf((struct tagTHREADINFO *)v7, v44) != 0;
        v45 = (unsigned int)PsGetThreadId(*(PETHREAD *)a1[2].QuadPart);
      }
      else
      {
        v45 = 0;
      }
      xxxDeactivate(a2, v45, v42);
    }
    QuadPart = v54;
  }
  v36 = 1;
LABEL_81:
  if ( QuadPart )
    PopAndFreeW32ThreadLock(v62);
  if ( v7 )
    PopAndFreeW32ThreadLock(v63);
  if ( a2 )
    PopAndFreeW32ThreadLock(v64);
  return v36;
}
