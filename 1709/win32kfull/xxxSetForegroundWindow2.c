/*
 * XREFs of xxxSetForegroundWindow2 @ 0x1C00CDBE4
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0008910 (xxxSetModernAppWindow.c)
 *     NtUserNavigateFocus @ 0x1C0008DE0 (NtUserNavigateFocus.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C000C700 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0121060 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01B5070 (xxxSetForegroundCheckNoActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01C11D8 (xxxActiveWindowTracking.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 * Callees:
 *     ClearKeyboardToggleStates @ 0x1C0050198 (ClearKeyboardToggleStates.c)
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxSendNCActivateMessage @ 0x1C0054FF8 (xxxSendNCActivateMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C00552F4 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     xxxUpdateTray @ 0x1C0055370 (xxxUpdateTray.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C005E6A0 (IsWindowUnderActiveLockScreen.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     IsThreadHung @ 0x1C0085124 (IsThreadHung.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0085944 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00859CC (xxxSetForegroundThreadWithWindowHint.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0085FF4 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0086074 (zzzInputFocusReceivedWindowEvent.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     xxxCancelTracking @ 0x1C00CB4A0 (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     SetNewForegroundQueue @ 0x1C00CC1C0 (SetNewForegroundQueue.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00CD370 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ?UpdateKeyStateFlag@@YAXXZ @ 0x1C00FDBF4 (-UpdateKeyStateFlag@@YAXXZ.c)
 *     SetHungFlag @ 0x1C01152FC (SetHungFlag.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0120B14 (-IsHostThreadOf@CoreWindowProp@@SAHPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ProcessHungWindow @ 0x1C013431C (ProcessHungWindow.c)
 *     zzzActiveCursorTracking @ 0x1C01C1368 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(LARGE_INTEGER *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 QuadPart; // r12
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  struct tagWND *v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  BOOL v25; // r12d
  struct tagWND *TopLevelWindow; // rax
  struct tagWND *v27; // rbx
  LONGLONG v28; // rbx
  HANDLE ThreadId; // r9
  __int64 v30; // rdi
  __int64 v31; // rbx
  int v32; // eax
  LARGE_INTEGER v33; // r12
  int v34; // edx
  __int64 v35; // rbx
  unsigned int v36; // eax
  LARGE_INTEGER v37; // r9
  LARGE_INTEGER *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // ebx
  char v43; // r15
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  char v47; // bl
  struct tagWND *v48; // rax
  struct tagWND *v49; // rdi
  int v50; // eax
  __int64 v51; // rcx
  struct tagWND *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct tagWND *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  LONGLONG v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER *v61; // [rsp+88h] [rbp-78h]
  DWORD v62; // [rsp+88h] [rbp-78h]
  DWORD v63; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER *v64; // [rsp+98h] [rbp-68h]
  __int64 v65; // [rsp+A0h] [rbp-60h]
  __int64 v66; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-50h]
  _QWORD v68[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v69[3]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v70[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v71[9]; // [rsp+108h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v65 = gptiCurrent;
  SetSystemInputSource(&v63);
  if ( a1
    && (a1[3].QuadPart != grpdeskRitInput
     || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1->LowPart + gSharedInfo[1] + 25LL) & 1) != 0
     || (unsigned int)IsWindowUnderActiveLockScreen((__int64)a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread(a2, v71, v9, v10);
  gppiLockSFW = 0LL;
  v11 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 464LL) & 1) != 0 )
    v11 = 0LL;
  else
    LockW32Thread(gptiForeground, v70, v9, v10);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    QuadPart = a1[2].QuadPart;
    v60 = QuadPart;
    SetNewForegroundQueue(*(_QWORD *)(QuadPart + 408));
    LockW32Thread(QuadPart, v69, v13, v14);
    v15 = a1[2].QuadPart;
    v16 = (struct tagWND *)a1;
  }
  else
  {
    QuadPart = 0LL;
    v60 = 0LL;
    SetNewForegroundQueue(0LL);
    v16 = 0LL;
    v15 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v15, v16);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
    {
      v17 = *(unsigned int *)(gpqForeground + 420LL);
      v5 = *(_QWORD *)(gpqForeground + 420LL);
    }
    else
    {
      v17 = 0LL;
    }
    if ( gpqForegroundPrev )
    {
      v18 = *(_DWORD *)(gpqForegroundPrev + 420LL);
      v6 = *(_QWORD *)(gpqForegroundPrev + 420LL);
    }
    else
    {
      v18 = 0;
    }
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v17 <= v18 )
      {
        if ( (_DWORD)v17 != v18
          || (v19 = HIDWORD(v5), v20 = HIDWORD(v6), (_DWORD)v19 != (_DWORD)v20)
          && (_DWORD)v19 != -1
          && (_DWORD)v20 != -1 )
        {
          ClearKeyboardToggleStates();
          UpdateKeyStateFlag();
        }
      }
    }
  }
  if ( gpqForeground
    && gpqForeground != gpqForegroundPrev
    && *(_QWORD *)(gpqForeground + 112LL)
    && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
  {
    xxxApplyGlobalInputSettings();
  }
  if ( gpqForeground != gpqForegroundPrev )
  {
    if ( gpqForegroundPrev )
    {
      v21 = *(_QWORD *)(gpqForegroundPrev + 112LL);
      if ( v21 )
        zzzInputFocusLostWindowEvent(v21, 1u);
    }
    v22 = gpqForeground;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(1u);
    if ( a2 )
    {
      xxxCancelTracking(v22, v17);
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL, 1LL);
      xxxMakeWindowForegroundWithState(0LL, 0);
    }
    v23 = 0LL;
    if ( v11 && (*(_DWORD *)(v11 + 464) & 1) == 0 )
      v23 = *(_QWORD *)(v11 + 408);
    v24 = 0LL;
    if ( a2 )
      v24 = *(_QWORD *)(a2 + 408);
    v64 = 0LL;
    if ( v23 && v23 != v24 )
    {
      v61 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v23 + 24), 0LL, 0);
      if ( !v61 )
      {
        v41 = 0;
        goto LABEL_83;
      }
      v25 = 0;
      if ( a1 )
      {
        TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
        v27 = TopLevelWindow;
        if ( TopLevelWindow )
        {
          if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
            v25 = CoreWindowProp::IsHostThreadOf((struct tagTHREADINFO *)v11, v27) != 0;
        }
      }
      v28 = LogicalQmsgCursorPos(0LL, v23);
      if ( gptiForeground )
        ThreadId = PsGetThreadId((PETHREAD)*gptiForeground);
      else
        ThreadId = 0LL;
      StoreQMessage(v61, 0LL, 0, (LARGE_INTEGER)ThreadId, 0LL, 0, 0LL, 5u, (LARGE_INTEGER)v25, 0, &v63, v28, 0LL, 0LL);
      if ( v11 )
      {
        v61[13].QuadPart = v11;
        SetWakeBit(v11, 8256LL);
      }
      if ( *(_QWORD *)(v23 + 120) )
      {
        if ( v11 && (unsigned int)IsThreadHung((_QWORD *)v11, 0) )
        {
          v67 = *(_QWORD *)(v23 + 120);
          v51 = v67;
          v66 = *(_QWORD *)(v65 + 392);
          *(_QWORD *)(v65 + 392) = &v66;
          _InterlockedAdd((volatile signed __int32 *)(v51 + 8), 1u);
          v52 = *(struct tagWND **)(v23 + 120);
          ClearHungFlag(v52, 784);
          ProcessHungWindow(v52);
          ThreadUnlock1(v54, v53);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v23 + 120));
        }
      }
    }
    QuadPart = v60;
    v30 = 0LL;
    if ( v60 && (*(_DWORD *)(v60 + 464) & 1) == 0 )
      v30 = *(_QWORD *)(v60 + 408);
    v31 = 0LL;
    if ( a2 )
      v31 = *(_QWORD *)(a2 + 408);
    if ( v30 )
    {
      if ( v30 != v31 )
      {
        v64 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(v30 + 24), 0LL, 0);
        if ( !v64 )
        {
          v41 = 0;
          goto LABEL_83;
        }
      }
      v32 = RemoveEventMessage((struct tagQ *)v30, 5, -1);
      if ( v30 == v31 )
      {
        if ( a1 == *(LARGE_INTEGER **)(v31 + 120) )
        {
          if ( a1 )
            v58 = a1->QuadPart;
          else
            v58 = 0LL;
          xxxSendNCActivateMessage((struct tagWND *)a1, 1LL, v58);
          xxxUpdateTray((struct tagWND *)a1);
          if ( (a3 & 4) == 0 )
            xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
        }
        else if ( (a3 & 1) == 0 )
        {
          v43 = ~(unsigned __int8)(a3 >> 2) & 2;
          if ( v11 )
            v44 = (unsigned int)PsGetThreadId(*(PETHREAD *)v11);
          else
            v44 = 0;
          v41 = xxxActivateThisWindow((struct tagWND *)a1, v44, v43, 0);
          if ( v41 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            zzzActiveCursorTracking((struct tagWND *)a1);
          QuadPart = v60;
          goto LABEL_83;
        }
      }
      else
      {
        if ( (v31 || (a3 & 2) != 0) && a1 )
          v33 = *a1;
        else
          v33.QuadPart = 0LL;
        if ( v32 )
          *(_DWORD *)(v30 + 380) |= 0x8000u;
        v34 = (a3 >> 4) & 1 | 2;
        if ( (a3 & 4) == 0 )
          v34 = (a3 >> 4) & 1;
        v62 = v34;
        v35 = LogicalQmsgCursorPos(0LL, v30);
        if ( (a3 & 1) != 0 )
        {
          v37.QuadPart = 0LL;
        }
        else
        {
          if ( v11 )
            v36 = (unsigned int)PsGetThreadId(*(PETHREAD *)v11);
          else
            v36 = 0;
          v37.QuadPart = v36;
        }
        v59 = v35;
        v38 = v64;
        StoreQMessage(v64, 0LL, v62, v37, v33, 0, 0LL, 6u, (LARGE_INTEGER)a4, 0, &v63, v59, 0LL, 0LL);
        v38[13].QuadPart = v60;
        SetWakeBit(v60, 8256LL);
        if ( *(_QWORD *)(v30 + 120) )
        {
          v45 = IsThreadHung((_QWORD *)v60, 0);
          v46 = *(_QWORD *)(v30 + 120);
          if ( v45 )
          {
            v68[1] = *(_QWORD *)(v30 + 120);
            v68[0] = *(_QWORD *)(v65 + 392);
            *(_QWORD *)(v65 + 392) = v68;
            _InterlockedAdd((volatile signed __int32 *)(v46 + 8), 1u);
            v55 = *(struct tagWND **)(v30 + 120);
            ClearHungFlag(v55, 784);
            ProcessHungWindow(v55);
            ThreadUnlock1(v57, v56);
          }
          else
          {
            SetHungFlag((struct tagWND *)v46);
          }
        }
      }
    }
    v39 = 0LL;
    if ( v11 && (*(_DWORD *)(v11 + 464) & 1) == 0 )
      v39 = *(_QWORD *)(v11 + 408);
    v40 = 0LL;
    if ( a2 )
      v40 = *(_QWORD *)(a2 + 408);
    if ( v39 && v39 == v40 )
    {
      v47 = 0;
      if ( a1 )
      {
        v48 = (struct tagWND *)GetTopLevelWindow((__int64)a1);
        v49 = v48;
        if ( v48 && (unsigned int)CoreWindowProp::IsComponent(v48) )
          v47 = CoreWindowProp::IsHostThreadOf((struct tagTHREADINFO *)v11, v49) != 0;
        v50 = (unsigned int)PsGetThreadId(*(PETHREAD *)a1[2].QuadPart);
      }
      else
      {
        v50 = 0;
      }
      xxxDeactivate(a2, v50, v47);
    }
    QuadPart = v60;
  }
  v41 = 1;
LABEL_83:
  if ( QuadPart )
    PopAndFreeW32ThreadLock(v69);
  if ( v11 )
    PopAndFreeW32ThreadLock(v70);
  if ( a2 )
    PopAndFreeW32ThreadLock(v71);
  return v41;
}
