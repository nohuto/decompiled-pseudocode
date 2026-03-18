/*
 * XREFs of xxxSetParentWorker @ 0x1C0018034
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004A10 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxResetTooltip @ 0x1C00AFC70 (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C01040A0 (NtUserSetParent.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C020D618 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     HasMessageRootWindow @ 0x1C0006410 (HasMessageRootWindow.c)
 *     SelectNewFrameRgn @ 0x1C0016D60 (SelectNewFrameRgn.c)
 *     ResetWindowTransform @ 0x1C0016D9C (ResetWindowTransform.c)
 *     IsWindowShellCloaked @ 0x1C0017F98 (IsWindowShellCloaked.c)
 *     IsImmersiveAppIORestricted @ 0x1C00185E8 (IsImmersiveAppIORestricted.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018CFC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0018D90 (SetWindowSubtreeCoreWindowStatus.c)
 *     _ScreenToClient @ 0x1C0018E14 (_ScreenToClient.c)
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     DecomposeWindowIfNeeded @ 0x1C001C558 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     CalcForegroundInsertAfter @ 0x1C001C8FC (CalcForegroundInsertAfter.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0021674 (ChangeRedirectionParentInDCEs.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     UnredirectDCEs @ 0x1C0022A58 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0022B14 (RedirectDCEs.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     UnlinkWindow @ 0x1C005FA3C (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00614C0 (LinkWindow.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ValidateNewParent @ 0x1C0069E64 (ValidateNewParent.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C0E2C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxTurnOffCompositing @ 0x1C01C273C (xxxTurnOffCompositing.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetParentWorker(struct tagWND *a1, __int64 a2, struct tagWND *a3)
{
  __int64 v3; // rdi
  int v6; // r13d
  struct tagWND *DesktopWindow; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagWND *v11; // r15
  struct tagWND *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  __int64 StyleWindow; // rax
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  struct tagWND *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // r10d
  int v38; // r11d
  __int64 v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  _BYTE v52[8]; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v53[6]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v54[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v55; // [rsp+70h] [rbp-19h]
  _QWORD v56[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v57[10]; // [rsp+90h] [rbp+7h] BYREF
  int v58; // [rsp+F0h] [rbp+67h]
  int v60; // [rsp+108h] [rbp+7Fh] BYREF
  int v61; // [rsp+10Ch] [rbp+83h]

  v3 = 0LL;
  v6 = 5;
  if ( a2 != -3 )
    v3 = a2;
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1, a2);
  v10 = *(_QWORD *)(v9 + 24);
  v11 = 0LL;
  v12 = DesktopWindow;
  if ( v10 )
    v11 = *(struct tagWND **)(v10 + 104);
  if ( a1 == DesktopWindow || a1 == v11 )
    goto LABEL_98;
  if ( !v3 )
    v3 = (__int64)DesktopWindow;
  if ( a3 && (*(_QWORD *)(v8 + 104) != v3 || a3 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
  {
    if ( (unsigned int)HasMessageRootWindow((__int64)a1, v13, v14) )
    {
      if ( !(unsigned int)HasMessageRootWindow(v3, v47, v48) )
      {
LABEL_98:
        v50 = 5LL;
LABEL_99:
        UserSetLastError(v50);
        return 0LL;
      }
    }
  }
  if ( (struct tagWND *)v3 != v12
    && (struct tagWND *)v3 != v11
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) == *(_QWORD *)(*(_QWORD *)(v3 + 16) + 376LL)
    && ((*(_BYTE *)(v3 + 368) ^ *((_BYTE *)a1 + 368)) & 0xF) != 0 )
  {
    v50 = 5023LL;
    goto LABEL_99;
  }
  v56[0] = *(_QWORD *)(v15 + 368);
  *(_QWORD *)(v15 + 368) = v56;
  v56[1] = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  if ( !(unsigned int)ValidateNewParent(a1, v3)
    || (v18 = xxxShowWindowEx(a1), v58 = v18, (*((_BYTE *)a1 + 71) & 0x10) != 0) )
  {
LABEL_86:
    ThreadUnlock1(v17, v16);
    return 0LL;
  }
  if ( (*((_DWORD *)a1 + 76) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent(a1, v3) )
  {
    if ( v18 && *((char *)a1 + 59) >= 0 )
      xxxShowWindowEx(a1);
    goto LABEL_86;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v52);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v20 = *((_QWORD *)a1 + 13);
  v55 = StyleWindow;
  v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v57;
  v57[1] = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  if ( (*(_BYTE *)(v20 + 66) & 0x40) != 0 )
    v21 = *((_DWORD *)a1 + 34);
  else
    v21 = *((_DWORD *)a1 + 32);
  v60 = v21;
  v61 = *((_DWORD *)a1 + 33);
  ScreenToClient(v20, &v60);
  if ( *((_DWORD *)a1 + 80) != 1 && ((struct tagWND *)v3 == v12 || (struct tagWND *)v3 == v11) )
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  if ( (struct tagWND *)v3 == v12 )
  {
    if ( (struct tagWND *)v20 != v12 )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v20, 0) )
      {
        v53[0] = 1;
        zzzSetWindowCompositionCloak(a1, v53, 2LL);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23, v22) + 768) & 0x30) == 0x10
        && (GetWindowCloakState(a1) & 1) != 0 )
      {
        v53[0] = 0;
        zzzSetWindowCompositionCloak(a1, v53, 1LL);
      }
      v24 = *((_DWORD *)a1 + 76);
      if ( (v24 & 0x8000) != 0 )
      {
        v51 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 76) = v24 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36uLL, v51, 0LL);
      }
    }
  }
  else if ( (struct tagWND *)v20 == v12 )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1, 1) )
    {
      v53[0] = 0;
      zzzSetWindowCompositionCloak(a1, v53, 2LL);
    }
    SelectNewFrameRgn((__int64)a1, 0LL);
    ResetWindowTransform((__int64)a1);
  }
  UnlinkWindow(a1, v20);
  v54[1] = v3;
  v54[0] = (char *)a1 + 104;
  HMAssignmentLock(v54);
  if ( v3 )
    v25 = (unsigned int)-__CFSHR__(*(_DWORD *)(v3 + 304), 26);
  else
    v25 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v25);
  if ( (*((_BYTE *)a1 + 71) & 0x40) != 0 )
  {
    v27 = *((_QWORD *)a1 + 15);
    if ( v27 )
    {
      if ( (*(_BYTE *)(v27 + 64) & 8) != 0 )
        SetOrClrWF(1LL, a1, 2056LL, 1LL);
    }
  }
  if ( v3 == GetDesktopWindow(a1, v26) && (*((_BYTE *)a1 + 64) & 8) == 0 )
  {
    CalcWindowFullScreen();
    CalcForegroundInsertAfter(a1);
    v28 = a1;
  }
  LinkWindow(v28);
  if ( a2 == -3 && !(unsigned int)IsWindowShellCloaked(a1, 1) )
  {
    v53[0] = 1;
    zzzSetWindowCompositionCloak(a1, v53, 2LL);
  }
  v29 = GetStyleWindow(a1, 2848LL);
  if ( v55 )
  {
    if ( v29 )
    {
      if ( v55 != v29 )
        ChangeRedirectionParentInDCEs(a1);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v29 )
  {
    RedirectDCEs(a1);
  }
  if ( v3 == GetDesktopWindow(a1, v30) && (*((_BYTE *)a1 + 71) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
  {
    v33 = (_QWORD *)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow(a1, v31) )
    {
      v34 = *((_QWORD *)a1 + 2);
      v32 = *(_QWORD *)(v20 + 16);
      if ( v34 != v32 )
        zzzAttachThreadInput(v34, v32, 0LL);
    }
    if ( v3 != GetDesktopWindow(a1, v32) )
    {
      v35 = *((_QWORD *)a1 + 2);
      v36 = *(_QWORD *)(v3 + 16);
      if ( v35 != v36 )
        zzzAttachThreadInput(v35, v36, 1LL);
    }
  }
  else
  {
    v33 = (_QWORD *)((char *)a1 + 104);
  }
  if ( (struct tagWND *)v3 == v11 || (struct tagWND *)v20 == v11 )
    v6 = 21;
  if ( (*(_DWORD *)(v20 + 304) & 0x20000000) != 0 || (*((_DWORD *)a1 + 76) & 0x20000000) != 0 )
  {
    *((_DWORD *)a1 + 76) &= 0x8FFFFFFF;
    v6 |= 0x20u;
  }
  if ( !(unsigned int)IsTopLevelWindow(a1) && v3 )
    LOBYTE(v37) = *(_WORD *)(v3 + 374) != 0;
  SetDeferredDpiStateForWindowAndChildren(a1, v37);
  v38 = -1;
  if ( !v52[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v52);
  }
  gdwDeferWinEvent += v38;
  if ( !(v38 + gdwDeferWinEvent) && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  if ( GetStyleWindow(*v33, 2818LL) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(32783, (_DWORD)a1, 0, 0, 1);
  xxxSetWindowPos(a1, 0, 0, v6);
  v39 = *v33;
  if ( !*v33
    || (v40 = *(_DWORD *)(v39 + 368), (((unsigned __int8)v40 ^ *((_BYTE *)a1 + 368)) & 0xF) == 0)
    || (struct tagWND *)v39 == v12
    || (struct tagWND *)v39 == v11 )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, v40);
  }
  if ( v58 )
    xxxShowWindowEx(a1);
  v43 = ThreadUnlock1(v42, v41);
  ThreadUnlock1(v45, v44);
  return v43;
}
