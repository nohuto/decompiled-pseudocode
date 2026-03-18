/*
 * XREFs of xxxSwitchDesktop @ 0x1C005089C
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     RemoteDisableScreen @ 0x1C00D68E0 (RemoteDisableScreen.c)
 *     NtUserSwitchDesktop @ 0x1C00F60D0 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00F61D8 (xxxSwitchDesktopWithFade.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     RemoteRedrawScreen @ 0x1C0141550 (RemoteRedrawScreen.c)
 * Callees:
 *     xxxRefreshDisplayOrientation @ 0x1C0042640 (xxxRefreshDisplayOrientation.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00471BC (zzzEnableDwmPointerSupport.c)
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     DwmSyncDesktopSwitch @ 0x1C0049388 (DwmSyncDesktopSwitch.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0049830 (xxxBroadcastDisplaySettingsChange.c)
 *     PostUpdateKeyStateEvent @ 0x1C00510EC (PostUpdateKeyStateEvent.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     zzzSetDesktop @ 0x1C008C630 (zzzSetDesktop.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     zzzAttachToQueue @ 0x1C00CAED8 (zzzAttachToQueue.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     FreeAllSpbs @ 0x1C00D70D0 (FreeAllSpbs.c)
 *     IPostQuitMessage @ 0x1C00D7230 (IPostQuitMessage.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     ResetPointerDevices @ 0x1C00FD5F4 (ResetPointerDevices.c)
 *     SetTimerCoalescingTolerance @ 0x1C0104E30 (SetTimerCoalescingTolerance.c)
 *     ClearKeyboardStates @ 0x1C0111E78 (ClearKeyboardStates.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C011C91C (GreLddmProcessDesktopSwitch.c)
 *     GreDesktopSwitch @ 0x1C011DD78 (GreDesktopSwitch.c)
 *     EraseBitmap @ 0x1C01210BC (EraseBitmap.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C012339C (DrvOcclusionStateChangeNotify.c)
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01A6E54 (UnreferenceUndispatchedFrame.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // r14d
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // r13
  ULONG_PTR v10; // rcx
  _QWORD *v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct tagWND **v17; // rcx
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 **v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rax
  BOOL v27; // r8d
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *i; // rbx
  __int64 v36; // r14
  int v37; // eax
  int v38; // eax
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rcx
  BOOL v43; // r8d
  int WindowCloakState; // eax
  BOOL v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _LIST_ENTRY *v52; // rbx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v54; // rax
  int ObjectType; // [rsp+20h] [rbp-E0h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-A8h] BYREF
  PETHREAD Thread; // [rsp+60h] [rbp-A0h]
  __int128 v58; // [rsp+70h] [rbp-90h]
  __int128 v59; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v60[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v61[3]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v62[3]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v63[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v64[80]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v65; // [rsp+158h] [rbp+58h]

  v4 = 0;
  v7 = a1;
  BugCheckParameter3 = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v7 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v7 + 32) & 4) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(v7 + 24);
  Thread = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect
    && !PsIsSystemThread(CurrentThread)
    && (PVOID)a2 != grpdeskLogon
    && (*(_BYTE *)(v7 + 32) & 1) != 0
    && (a3 & 2) == 0
    && PsGetThreadProcessId(CurrentThread) != (HANDLE)gpidLogon )
  {
    return 3221225506LL;
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)a2 != gspdeskDisconnect) )
  {
    LockObjectAssignment(&gspdeskShouldBeForeground, a2);
    return 0LL;
  }
  PushW32ThreadLock(a2, v64, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer(
    (PVOID)a2,
    0x200u,
    0LL,
    0x1F0003u,
    (POBJECT_TYPE)ExDesktopObjectType,
    0,
    (PHANDLE)&BugCheckParameter3);
  PushW32ThreadLock(BugCheckParameter3, v63, AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 432LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v10 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v60[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v60;
    v60[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(gspwndAltTab, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v51, v50);
  }
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) && gpqForeground )
    {
      *(_QWORD *)&v58 = grpdeskRitInput + 88LL;
      *((_QWORD *)&v58 + 1) = *(_QWORD *)(gpqForeground + 120LL);
      v59 = v58;
      HMAssignmentLock(&v59);
      xxxSetForegroundWindow2(0LL);
    }
    if ( grpdeskRitInput )
    {
      v11 = (_QWORD *)(grpdeskRitInput + 168LL);
      v12 = *(_QWORD **)(grpdeskRitInput + 168LL);
      if ( (_QWORD *)*v11 != v11 )
      {
        do
        {
          v13 = *(v12 - 38);
          if ( (*(_DWORD *)(v13 + 380) & 1) != 0 )
            PostUpdateKeyStateEvent(*(v12 - 38));
          *(_DWORD *)(v13 + 380) &= ~0x100u;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 != v11 );
        v4 = 0;
      }
      if ( grpdeskRitInput )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) != 0 )
        {
          if ( gfade[2] )
            StopFade();
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
          ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL));
          v14 = *(_QWORD *)(gpDispInfo + 32LL);
          GreLockDynamicModeChange(v14);
          GreUnlockDynamicModeChange(v14);
          v15 = *(_QWORD *)(v7 + 88);
          if ( v15 )
            EraseBitmap(v15);
          v4 = 1;
        }
        if ( grpdeskRitInput )
        {
          v16 = *(_QWORD *)(grpdeskRitInput + 240LL);
          if ( v16 )
          {
            v49 = *(_QWORD *)(v16 + 288);
            if ( v49 )
            {
              v52 = (struct _LIST_ENTRY *)(v49 + 1096);
              while ( v52->Flink != v52 )
              {
                Blink = v52->Blink;
                if ( Blink->Flink != v52 || (v54 = Blink->Blink, v54->Flink != Blink) )
                  __fastfail(3u);
                v52->Blink = v54;
                v54->Flink = v52;
                if ( (gdwMitConfig & 4) != 0 )
                  CTouchProcessor::UnreferenceUndispatchedFrame(gpTouchProcessor, Blink);
                else
                  UnreferenceUndispatchedFrame(Blink);
              }
              *(_QWORD *)(v16 + 288) = 0LL;
              *(_DWORD *)(v16 + 16) = 0;
            }
          }
        }
      }
    }
  }
  LockObjectAssignment(grpdeskRitInput, a2);
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  CitDesktopSwitch();
  v17 = *(struct tagWND ***)(a2 + 8);
  if ( (*((_DWORD *)*v17 + 13) & 1) != 0 )
    ComposeWindow(v17[2]);
  FreeAllSpbs();
  v18 = zzzSetDesktop(gptiRit);
  if ( v18 >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL) != *(_QWORD *)(v9 + 24) )
    {
      AllocQueue(0LL);
      ++*(_DWORD *)(*(_QWORD *)(v9 + 24) + 384LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v9 + 16), *(struct tagQ **)(v9 + 24));
    }
    v18 = zzzSetDesktop(*(struct tagTHREADINFO **)(v9 + 16));
    if ( v18 >= 0 )
    {
      v20 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v20 + 52) & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v20, v19);
        v21 = *(__int64 ***)(a2 + 8);
        v22 = **v21;
        v26 = (void *)UserReferenceDwmApiPort(*v21, v23, v24, v25);
        DwmSyncDesktopSwitch(v26, v22, a4);
        EnterCrit(0LL, 1LL);
      }
      v27 = v4 && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) != 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 32LL),
        *(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1,
        v27,
        ***(_QWORD ***)(a2 + 8),
        ObjectType);
      if ( v4 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) )
      {
        SetPointer(0);
        SetPointer(1);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1, 0);
      }
      v28 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
      v61[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v61;
      v61[1] = v28;
      if ( v28 )
        _InterlockedAdd((volatile signed __int32 *)(v28 + 8), 1u);
      GreLddmProcessDesktopSwitch();
      if ( v4 && (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) != 0 )
        v29 = 8;
      else
        v29 = 0;
      v65 = v29 | (4 * (unsigned __int8)*(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL)) & 4 | 1;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 32LL), v65);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 16LL), 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 32LL), v65);
      v31 = *(_QWORD *)(a2 + 88);
      if ( !v31
        || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v31 + gSharedInfo[1] + 25LL) & 1) != 0
        || (*(_BYTE *)(v31 + 306) & 0x40) != 0 && (GetWindowCloakState(*(_QWORD *)(a2 + 88)) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL) == *(_QWORD *)(*(_QWORD *)(v31 + 16) + 400LL)
        && (GetWindowCloakState(v31) & 1) != 0 )
      {
        v32 = *(_QWORD *)(a2 + 8);
        v31 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 112LL);
        if ( v31 )
        {
          v40 = *(_QWORD *)(v32 + 168);
          do
          {
            v41 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 400LL);
            if ( !(unsigned int)IsNonImmersiveBand(v31, v30, 0LL) || v40 == v41 || (*(_BYTE *)(v31 + 306) & 0x40) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v42);
              v45 = v40 == v41 && (WindowCloakState & 1) != 0;
              if ( WindowCloakState || (*(_BYTE *)(v31 + 67) & 8) != 0 )
                WindowCloakState = 1;
              v43 = v45 || WindowCloakState;
            }
            if ( (*(_BYTE *)(v31 + 71) & 0x18) == 0x10 && !v43 )
              break;
            v31 = *(_QWORD *)(v31 + 88);
          }
          while ( v31 );
        }
      }
      HMAssignmentUnlock(a2 + 88);
      if ( v31 )
      {
        if ( (*(_BYTE *)(v31 + 63) & 7) == 4 )
        {
          SetOrClrWF(0LL, v31, 1799LL, 1LL);
          SetOrClrWF(1LL, v31, 1793LL, 1LL);
        }
        v62[0] = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = v62;
        v62[1] = v31;
        _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
        xxxSetForegroundWindow2((struct tagWND *)v31);
        ThreadUnlock1(v47, v46);
      }
      else
      {
        xxxSetForegroundWindow2(0LL);
      }
      ThreadUnlock1(v34, v33);
      ClearKeyboardStates();
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v36 = *(i - 38);
        v37 = *(_DWORD *)(v36 + 380);
        if ( (v37 & 0x100) == 0 )
        {
          *(_DWORD *)(v36 + 380) = v37 | 0x101;
          memset((void *)(v36 + 192), 255, 0x20uLL);
          PostUpdateKeyStateEvent(v36);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent(gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(32, 0, 0, 0, 6);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v38 = *(_DWORD *)(a2 + 48);
      if ( (v38 & 0x20) != 0 )
      {
        v48 = *(_QWORD *)(a2 + 8);
        if ( v48 )
        {
          if ( *(_QWORD *)(v48 + 16) )
          {
            *(_DWORD *)(a2 + 48) = v38 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1, 0);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      xxxRefreshDisplayOrientation();
    }
  }
  PopAndFreeAlwaysW32ThreadLock(v63);
  PopAndFreeW32ThreadLock(v64);
  return (unsigned int)v18;
}
