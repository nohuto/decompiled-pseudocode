/*
 * XREFs of xxxSetParentWorker @ 0x1C00C8434
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0008910 (xxxSetModernAppWindow.c)
 *     xxxResetTooltip @ 0x1C0084370 (xxxResetTooltip.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     NtUserSetParent @ 0x1C010F810 (NtUserSetParent.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C013B818 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     HasMessageRootWindow @ 0x1C000BA90 (HasMessageRootWindow.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     CalcForegroundInsertAfter @ 0x1C00587B8 (CalcForegroundInsertAfter.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     UnlinkWindow @ 0x1C0062338 (UnlinkWindow.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LinkWindow @ 0x1C0064B10 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     CalcWindowFullScreen @ 0x1C0066940 (CalcWindowFullScreen.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ValidateNewParent @ 0x1C0072B58 (ValidateNewParent.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00733A0 (SetWindowSubtreeCoreWindowStatus.c)
 *     DecomposeWindowIfNeeded @ 0x1C008A3AC (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C008FF10 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C008FFB4 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0090070 (RedirectDCEs.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     SelectNewFrameRgn @ 0x1C00C6BDC (SelectNewFrameRgn.c)
 *     ResetWindowTransform @ 0x1C00C6C18 (ResetWindowTransform.c)
 *     IsImmersiveAppIORestricted @ 0x1C00C8A38 (IsImmersiveAppIORestricted.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C8A5C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     _ScreenToClient @ 0x1C00C8AF0 (_ScreenToClient.c)
 *     IsWindowShellCloaked @ 0x1C00C8B24 (IsWindowShellCloaked.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C457C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxTurnOffCompositing @ 0x1C01C56BC (xxxTurnOffCompositing.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetParentWorker(struct tagWND *a1, __int64 a2, struct tagWND *a3)
{
  __int64 v4; // rdi
  int v6; // r12d
  struct tagWND *DesktopWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  struct tagWND *v12; // r15
  struct tagWND *v13; // r14
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 StyleWindow; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rax
  struct tagWND *v29; // rdx
  __int64 v30; // rax
  __int64 *v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // r9d
  __int64 v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  _DWORD v52[6]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v53; // [rsp+58h] [rbp-41h]
  _BYTE v54[16]; // [rsp+60h] [rbp-39h] BYREF
  __int128 v55; // [rsp+70h] [rbp-29h]
  __int128 v56; // [rsp+80h] [rbp-19h] BYREF
  _QWORD v57[3]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v58[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v59; // [rsp+100h] [rbp+67h]
  unsigned int v61; // [rsp+118h] [rbp+7Fh] BYREF
  unsigned int v62; // [rsp+11Ch] [rbp+83h]

  v4 = 0LL;
  if ( a2 != -3 )
    v4 = a2;
  v6 = 5;
  DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)a1);
  v11 = *((_QWORD *)a1 + 3);
  v12 = DesktopWindow;
  v13 = 0LL;
  if ( v11 )
    v13 = *(struct tagWND **)(v11 + 104);
  if ( a1 == DesktopWindow || a1 == v13 )
    goto LABEL_96;
  if ( !v4 )
    v4 = (__int64)DesktopWindow;
  if ( a3 && (*(_QWORD *)(v9 + 104) != v4 || a3 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 400LL), v8, v9, v10) )
  {
    if ( (unsigned int)HasMessageRootWindow((__int64)a1) )
    {
      if ( !(unsigned int)HasMessageRootWindow(v4) )
      {
LABEL_96:
        v50 = 5LL;
LABEL_97:
        UserSetLastError(v50, v8);
        return 0LL;
      }
    }
  }
  if ( (struct tagWND *)v4 != v12 && (struct tagWND *)v4 != v13 )
  {
    v8 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v8 + 400) == *(_QWORD *)(*(_QWORD *)(v4 + 16) + 400LL)
      && ((*(_BYTE *)(v4 + 368) ^ *((_BYTE *)a1 + 368)) & 0xF) != 0 )
    {
      v50 = 5023LL;
      goto LABEL_97;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v14, v15);
  v57[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v57;
  v57[1] = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  if ( !(unsigned int)ValidateNewParent((__int64)a1, v4)
    || (v19 = xxxShowWindowEx(a1, 0, 0), v59 = v19, (*((_BYTE *)a1 + 71) & 0x10) != 0) )
  {
LABEL_83:
    ThreadUnlock1(v18, v17);
    return 0LL;
  }
  if ( (*((_DWORD *)a1 + 76) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent((__int64)a1, v4) )
  {
    if ( v19 && *((char *)a1 + 59) >= 0 )
      xxxShowWindowEx(a1, 1u, 0);
    goto LABEL_83;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v54);
  StyleWindow = GetStyleWindow((__int64)a1, 2848);
  v21 = *((_QWORD *)a1 + 13);
  v53 = StyleWindow;
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
  v58[0] = *(_QWORD *)(v25 + 392);
  *(_QWORD *)(v25 + 392) = v58;
  v58[1] = v21;
  if ( v21 )
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
  if ( (*(_BYTE *)(v21 + 66) & 0x40) != 0 )
    v26 = *((_DWORD *)a1 + 34);
  else
    v26 = *((_DWORD *)a1 + 32);
  v61 = v26;
  v62 = *((_DWORD *)a1 + 33);
  ScreenToClient(v21, &v61);
  if ( *((_DWORD *)a1 + 80) != 1 && ((struct tagWND *)v4 == v12 || (struct tagWND *)v4 == v13) )
    SetOrClrWF(1, a1, 0x808u, 1);
  if ( (struct tagWND *)v4 == v12 )
  {
    if ( (struct tagWND *)v21 != v12 )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v21) )
      {
        v52[0] = 1;
        zzzSetWindowCompositionCloak((__int64)a1, v52, 2u);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x30) == 0x10
        && (GetWindowCloakState((__int64)a1) & 1) != 0 )
      {
        v52[0] = 0;
        zzzSetWindowCompositionCloak((__int64)a1, v52, 1u);
      }
      v46 = *((_DWORD *)a1 + 76);
      if ( (v46 & 0x8000) != 0 )
      {
        v51 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 76) = v46 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36u, v51, 0LL);
      }
    }
  }
  else if ( (struct tagWND *)v21 == v12 )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1) )
    {
      v52[0] = 0;
      zzzSetWindowCompositionCloak((__int64)a1, v52, 2u);
    }
    SelectNewFrameRgn((__int64)a1, 0LL);
    ResetWindowTransform((__int64)a1, v47, v48);
  }
  UnlinkWindow((__int64 *)a1, (__int64 *)v21);
  *((_QWORD *)&v55 + 1) = v4;
  *(_QWORD *)&v55 = (char *)a1 + 104;
  v56 = v55;
  HMAssignmentLock(&v56);
  if ( v4 )
    v27 = -__CFSHR__(*(_DWORD *)(v4 + 304), 26);
  else
    v27 = 0;
  SetWindowSubtreeCoreWindowStatus((__int64)a1, v27);
  if ( (*((_BYTE *)a1 + 71) & 0x40) != 0 )
  {
    v28 = *((_QWORD *)a1 + 15);
    if ( v28 )
    {
      if ( (*(_BYTE *)(v28 + 64) & 8) != 0 )
        SetOrClrWF(1, a1, 0x808u, 1);
    }
  }
  if ( v4 != GetDesktopWindow((__int64)a1) || (*((_BYTE *)a1 + 64) & 8) != 0 )
  {
    v29 = a3;
  }
  else
  {
    CalcWindowFullScreen(a1);
    v29 = CalcForegroundInsertAfter((__int64)a1);
  }
  LinkWindow(a1, (unsigned __int64)v29, v4);
  if ( a2 == -3 && !(unsigned int)IsWindowShellCloaked(a1) )
  {
    v52[0] = 1;
    zzzSetWindowCompositionCloak((__int64)a1, v52, 2u);
  }
  v30 = GetStyleWindow((__int64)a1, 2848);
  if ( v53 )
  {
    if ( v30 )
    {
      if ( v53 != v30 )
        ChangeRedirectionParentInDCEs(a1, 1u);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v30 )
  {
    RedirectDCEs(a1);
  }
  if ( v4 == GetDesktopWindow((__int64)a1) && (*((_BYTE *)a1 + 71) & 4) == 0 )
  {
    SetOrClrWF(1, a1, 0xF04u, 1);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
  {
    v31 = (__int64 *)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
    {
      v32 = *((_QWORD *)a1 + 2);
      v33 = *(_QWORD *)(v21 + 16);
      if ( v32 != v33 )
        zzzAttachThreadInput(v32, v33, 0LL);
    }
    if ( v4 != GetDesktopWindow((__int64)a1) )
    {
      v34 = *((_QWORD *)a1 + 2);
      v35 = *(_QWORD *)(v4 + 16);
      if ( v34 != v35 )
        zzzAttachThreadInput(v34, v35, 1LL);
    }
  }
  else
  {
    v31 = (__int64 *)((char *)a1 + 104);
  }
  if ( (struct tagWND *)v4 == v13 || (struct tagWND *)v21 == v13 )
    v6 = 21;
  if ( (*(_DWORD *)(v21 + 304) & 0x20000000) != 0 || (*((_DWORD *)a1 + 76) & 0x20000000) != 0 )
  {
    *((_DWORD *)a1 + 76) &= 0x8FFFFFFF;
    v6 |= 0x20u;
  }
  if ( !(unsigned int)IsTopLevelWindow((__int64)a1) && v4 )
    LOBYTE(v36) = *(_WORD *)(v4 + 374) != 0;
  SetDeferredDpiStateForWindowAndChildren(a1, v36);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v54);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*v31, 2818) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, (volatile signed __int32 *)a1, 0LL, 0LL, 1);
  xxxSetWindowPos(a1, 0LL, v61, v62, 0, 0, v6);
  v37 = *v31;
  if ( !*v31
    || (v38 = *(_DWORD *)(v37 + 368), (((unsigned __int8)v38 ^ *((_BYTE *)a1 + 368)) & 0xF) == 0)
    || (struct tagWND *)v37 == v12
    || (struct tagWND *)v37 == v13 )
  {
    xxxInheritWindowMonitor(a1, 0LL, 0);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, v38);
  }
  if ( v59 )
    xxxShowWindowEx(a1, 1u, 0);
  v41 = ThreadUnlock1(v40, v39);
  ThreadUnlock1(v43, v42);
  return v41;
}
