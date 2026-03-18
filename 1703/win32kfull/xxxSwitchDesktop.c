/*
 * XREFs of xxxSwitchDesktop @ 0x1C00B8B10
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     NtUserSwitchDesktop @ 0x1C00E68B0 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C00E69B8 (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x1C00FE5BC (RemoteDisableScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0111624 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     RemoteRedrawScreen @ 0x1C013A8A8 (RemoteRedrawScreen.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C001A520 (zzzSetDesktop.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 *     PostUpdateKeyStateEvent @ 0x1C00B936C (PostUpdateKeyStateEvent.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00B9A10 (zzzEnableDwmPointerSupport.c)
 *     ClearKeyboardStates @ 0x1C00B9C64 (ClearKeyboardStates.c)
 *     xxxRefreshDisplayOrientation @ 0x1C00BA280 (xxxRefreshDisplayOrientation.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C00BAE00 (DrvOcclusionStateChangeNotify.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C00BAE44 (GreLddmProcessDesktopSwitch.c)
 *     GreDesktopSwitch @ 0x1C00BAF04 (GreDesktopSwitch.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     DwmSyncDesktopSwitch @ 0x1C00E7C98 (DwmSyncDesktopSwitch.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F18E0 (xxxBroadcastDisplaySettingsChange.c)
 *     SetTimerCoalescingTolerance @ 0x1C00F9F60 (SetTimerCoalescingTolerance.c)
 *     IPostQuitMessage @ 0x1C00FE028 (IPostQuitMessage.c)
 *     FreeAllSpbs @ 0x1C00FE090 (FreeAllSpbs.c)
 *     ResetPointerDevices @ 0x1C0109C28 (ResetPointerDevices.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     EraseBitmap @ 0x1C011733C (EraseBitmap.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // r12d
  __int64 v7; // rsi
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // r15
  PVOID v10; // rax
  __int64 v11; // r13
  struct tagWND *v12; // rcx
  __int64 v13; // r8
  _QWORD **v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct tagWND **v20; // rcx
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // rax
  int v31; // r8d
  __int64 v32; // rcx
  int v33; // ebx
  unsigned int v34; // ebx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rcx
  int v40; // r8d
  int WindowCloakState; // eax
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *i; // rbx
  __int64 v47; // r14
  int v48; // eax
  int v49; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  int ObjectType; // [rsp+20h] [rbp-B9h]
  struct _KTHREAD *Thread; // [rsp+58h] [rbp-81h]
  __int128 v58; // [rsp+60h] [rbp-79h]
  __int128 v59; // [rsp+70h] [rbp-69h] BYREF
  _QWORD v60[3]; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v61[3]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v62[3]; // [rsp+B0h] [rbp-29h] BYREF
  _QWORD v63[3]; // [rsp+C8h] [rbp-11h] BYREF
  _QWORD v64[10]; // [rsp+E0h] [rbp+7h] BYREF
  void *Handle; // [rsp+148h] [rbp+6Fh] BYREF
  int v66; // [rsp+158h] [rbp+7Fh]

  v66 = a4;
  v4 = 0;
  Handle = 0LL;
  v7 = a1;
  v8 = gptiCurrent;
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
  v10 = gspdeskDisconnect;
  v11 = *(_QWORD *)(v7 + 24);
  Thread = CurrentThread;
  if ( (PVOID)a2 != gspdeskDisconnect )
  {
    if ( !PsIsSystemThread(CurrentThread)
      && (PVOID)a2 != grpdeskLogon
      && (*(_BYTE *)(v7 + 32) & 1) != 0
      && (a3 & 2) == 0
      && PsGetThreadProcessId(CurrentThread) != (HANDLE)gpidLogon )
    {
      return 3221225506LL;
    }
    v10 = gspdeskDisconnect;
  }
  if ( gbDesktopLocked && (!v10 || (PVOID)a2 != v10) )
  {
    LockObjectAssignment(&gspdeskShouldBeForeground, a2);
    return 0LL;
  }
  PushW32ThreadLock(a2, v64, UserDereferenceObject);
  ObfReferenceObject((PVOID)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  PushW32ThreadLock((__int64)Handle, v63, (__int64)AllowDesktopDestruction);
  if ( *(_QWORD *)(gptiCurrent + 408LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v12 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v60[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v60;
    v60[1] = v12;
    ++*((_DWORD *)v12 + 2);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((ULONG_PTR)gspwndAltTab, 0x10u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v55, v54);
  }
  v13 = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL) && gpqForeground )
    {
      *(_QWORD *)&v58 = grpdeskRitInput + 88LL;
      *((_QWORD *)&v58 + 1) = *(_QWORD *)(gpqForeground + 88LL);
      v59 = v58;
      HMAssignmentLock(&v59);
      xxxSetForegroundWindow2(0LL, gptiCurrent, 0x20u, 0);
      v13 = grpdeskRitInput;
    }
    if ( *(_QWORD *)v13 )
    {
      v14 = (_QWORD **)(*(_QWORD *)v13 + 168LL);
      v15 = *v14;
      if ( *v14 != v14 )
      {
        do
        {
          v16 = *(v15 - 34);
          if ( (*(_DWORD *)(v16 + 340) & 1) != 0 )
            PostUpdateKeyStateEvent(*(v15 - 34));
          *(_DWORD *)(v16 + 340) &= ~0x100u;
          v15 = (_QWORD *)*v15;
        }
        while ( v15 != v14 );
        v13 = grpdeskRitInput;
        v8 = gptiCurrent;
      }
      if ( *(_QWORD *)v13 && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)v13 + 8LL) + 52LL) & 1) != 0 )
      {
        if ( gfade[2] )
          StopFade();
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
        ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 6);
        v17 = *(_QWORD *)(gpDispInfo + 32LL);
        GreLockDynamicModeChange(v17);
        GreUnlockDynamicModeChange(v17);
        v18 = *(_QWORD *)(v7 + 88);
        if ( v18 )
          EraseBitmap(v18);
        v13 = grpdeskRitInput;
        v4 = 1;
      }
    }
  }
  LockObjectAssignment(v13, a2);
  if ( gptiDit )
  {
    if ( !grpdeskDitStartup )
      grpdeskDitStartup = *(_QWORD *)(gptiDit + 408);
    LockObjectAssignment(gptiDit + 408, a2);
  }
  v19 = LockInputThreadDesktop(a2);
  if ( v19 && !grpdeskDitStartup )
    grpdeskDitStartup = v19;
  gdwRitInputDesktopId = ***(_QWORD ***)(grpdeskRitInput + 8LL);
  CitDesktopSwitch();
  v20 = *(struct tagWND ***)(a2 + 8);
  if ( (*((_DWORD *)*v20 + 13) & 1) != 0 )
    ComposeWindow(v20[2], 5);
  FreeAllSpbs();
  v21 = zzzSetDesktop(gptiRit, a2, 0LL);
  if ( v21 >= 0 )
  {
    v22 = *(_QWORD *)(v11 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 384LL) != v22 )
    {
      AllocQueue(0LL, v22);
      ++*(_DWORD *)(*(_QWORD *)(v11 + 24) + 344LL);
      zzzAttachToQueue(*(struct tagTHREADINFO **)(v11 + 16), *(struct tagQ **)(v11 + 24), 0LL, 0);
    }
    v21 = zzzSetDesktop(*(struct tagTHREADINFO **)(v11 + 16), a2, 0LL);
    if ( v21 >= 0 )
    {
      v26 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v26 + 52) & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v26, v23, v24, v25);
        v30 = (void *)UserReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v27, v28, v29);
        DwmSyncDesktopSwitch(v30);
        EnterCrit(0LL, 1LL);
      }
      if ( !v4 || (v31 = 1, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) == 0) )
        v31 = 0;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 32LL),
        *(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1,
        v31,
        ***(_QWORD ***)(a2 + 8),
        ObjectType);
      if ( v4 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1, 0LL);
      }
      v32 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
      v61[0] = *(_QWORD *)(v8 + 368);
      *(_QWORD *)(v8 + 368) = v61;
      v61[1] = v32;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      GreLddmProcessDesktopSwitch();
      if ( !v4 || (v33 = 8, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) == 0) )
        v33 = 0;
      v34 = (4 * (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1)) | 1 | v33;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 32LL), v34);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(a2 + 8) + 16LL), 0LL, 0LL, 0LL, 0, 0, 323);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 32LL), v34);
      v35 = *(_QWORD *)(a2 + 88);
      if ( !v35
        || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v35 + gSharedInfo[1] + 25LL) & 1) != 0
        || (*(_BYTE *)(v35 + 306) & 0x40) != 0 && (GetWindowCloakState(*(_QWORD *)(a2 + 88)) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL) == *(_QWORD *)(*(_QWORD *)(v35 + 16) + 376LL)
        && (GetWindowCloakState(v35) & 1) != 0 )
      {
        v36 = *(_QWORD *)(a2 + 8);
        v35 = *(_QWORD *)(*(_QWORD *)(v36 + 16) + 112LL);
        if ( v35 )
        {
          v37 = *(_QWORD *)(v36 + 168);
          do
          {
            v38 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 376LL);
            if ( !IsNonImmersiveBand(v35) || v37 == v38 || (*(_BYTE *)(v35 + 306) & 0x40) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v39);
              if ( v37 != v38 || (v42 = 1, (WindowCloakState & 1) == 0) )
                v42 = 0;
              if ( WindowCloakState || (v43 = 0, (*(_BYTE *)(v35 + 67) & 8) != 0) )
                v43 = 1;
              if ( v42 || (v40 = 0, v43) )
                v40 = 1;
            }
            if ( (*(_BYTE *)(v35 + 71) & 0x18) == 0x10 && !v40 )
              break;
            v35 = *(_QWORD *)(v35 + 88);
          }
          while ( v35 );
          v8 = gptiCurrent;
        }
      }
      HMAssignmentUnlock(a2 + 88);
      if ( v35 )
      {
        if ( (*(_BYTE *)(v35 + 63) & 7) == 4 )
        {
          SetOrClrWF(0, (_DWORD *)v35, 0x707u, 1);
          SetOrClrWF(1, (_DWORD *)v35, 0x701u, 1);
        }
        v62[0] = *(_QWORD *)(v8 + 368);
        *(_QWORD *)(v8 + 368) = v62;
        v62[1] = v35;
        ++*(_DWORD *)(v35 + 8);
        xxxSetForegroundWindow2((LARGE_INTEGER *)v35, v8, 0x20u, 0);
        ThreadUnlock1(v52, v51);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 0x20u, 0);
      }
      ThreadUnlock1(v45, v44);
      ClearKeyboardStates();
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v47 = *(i - 34);
        v48 = *(_DWORD *)(v47 + 340);
        if ( (v48 & 0x100) == 0 )
        {
          *(_DWORD *)(v47 + 340) = v48 | 0x101;
          memset((void *)(v47 + 160), 255, 0x20uLL);
          PostUpdateKeyStateEvent(v47);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0LL);
      KePulseEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
      xxxWindowEvent(0x20u, 0LL, 0, 0, 6);
      if ( (PVOID)a2 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 32LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v49 = *(_DWORD *)(a2 + 48);
      if ( (v49 & 0x20) != 0 )
      {
        v53 = *(_QWORD *)(a2 + 8);
        if ( v53 )
        {
          if ( *(_QWORD *)(v53 + 16) )
          {
            *(_DWORD *)(a2 + 48) = v49 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      xxxRefreshDisplayOrientation();
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v63);
  PopAndFreeW32ThreadLock(v64);
  return (unsigned int)v21;
}
