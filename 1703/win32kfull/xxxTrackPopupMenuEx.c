/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C0213DB0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01E0CE0 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C020EF98 (xxxDoScrollMenu.c)
 * Callees:
 *     IsWindowShellCloaked @ 0x1C0017F98 (IsWindowShellCloaked.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0063098 (IsWindowBroadcastingDpiToChildrenX.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C009DA38 (xxxEnableChildWindowDpiMessageX.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     SubtractRect @ 0x1C00EE518 (SubtractRect.c)
 *     xxxPlayEventSound @ 0x1C01044C0 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C0113B9C (MNClearCachedPopupSizes.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01C04D4 (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01C052C (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01EAAA8 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C01EAAEC (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C01EB044 (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C020158C (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C0203D60 (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C020717C (xxxMNReleaseCapture.c)
 *     FindBestPos @ 0x1C02135AC (FindBestPos.c)
 *     MNAnimate @ 0x1C0215560 (MNAnimate.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 a1, unsigned int a2, LONG a3, LONG a4, __int64 a5, __int64 a6)
{
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rcx
  unsigned __int8 **v11; // rbx
  unsigned int v12; // esi
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rcx
  __int64 v15; // rcx
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // r10
  __int64 v22; // rcx
  unsigned __int8 *v23; // rdx
  unsigned __int8 *v24; // rax
  __int64 v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v33; // dl
  _DWORD *Window; // rax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  struct tagMENUSTATE *v40; // rdi
  __int64 v41; // rbx
  unsigned __int8 *v42; // rcx
  unsigned __int8 *v43; // rax
  __int64 v44; // rax
  unsigned __int8 *v45; // rdx
  unsigned __int8 *v46; // rax
  __int64 v47; // rcx
  struct tagMENU **v48; // rbx
  unsigned int v49; // edx
  bool v50; // cf
  HDC v51; // rax
  unsigned __int8 *v52; // rdx
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // r9d
  unsigned int v58; // ecx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int16 WindowDpiLastNotify; // ax
  __int64 v62; // rax
  int v63; // ebx
  unsigned __int64 v64; // rbx
  __int64 v65; // r12
  int v66; // r9d
  unsigned __int8 *v67; // r15
  int *v68; // r8
  int v69; // edx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  int *v75; // rdx
  __int64 v76; // rax
  unsigned __int8 *v77; // rdx
  __int16 v78; // bx
  int BestPos; // eax
  __int64 v80; // r9
  unsigned __int8 *v81; // rdx
  int v82; // r15d
  __int64 v83; // r8
  __int64 *v84; // rdx
  int v85; // ecx
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned int v88; // ebx
  int v89; // r15d
  __int64 *v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // r8
  int v93; // [rsp+20h] [rbp-F0h]
  unsigned __int64 v94; // [rsp+40h] [rbp-D0h]
  unsigned __int8 *v95; // [rsp+90h] [rbp-80h] BYREF
  __int64 v96; // [rsp+98h] [rbp-78h] BYREF
  unsigned __int8 *v97; // [rsp+A0h] [rbp-70h]
  unsigned int v98; // [rsp+B0h] [rbp-60h]
  int v99; // [rsp+B4h] [rbp-5Ch]
  unsigned int v100; // [rsp+B8h] [rbp-58h]
  int v101; // [rsp+BCh] [rbp-54h]
  __int64 v102[4]; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v103; // [rsp+E0h] [rbp-30h]
  __int64 v104[2]; // [rsp+E8h] [rbp-28h] BYREF
  __int64 v105[4]; // [rsp+F8h] [rbp-18h] BYREF
  _QWORD v106[3]; // [rsp+118h] [rbp+8h] BYREF
  _QWORD v107[3]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v108[11]; // [rsp+148h] [rbp+38h] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(&v95, 0LL);
  v8 = 0;
  v99 = 0;
  v9 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v10 = 87LL;
LABEL_41:
      UserSetLastError(v10);
LABEL_42:
      v12 = 0;
      goto LABEL_43;
    }
    *(_OWORD *)v104 = *(_OWORD *)(a6 + 4);
  }
  v103 = gptiCurrent;
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v11 = *(unsigned __int8 ***)(gptiCurrent + 528LL);
  v12 = 1;
  if ( v11 )
  {
    if ( (a2 & 1) == 0 )
    {
      v10 = 1446LL;
      goto LABEL_41;
    }
    v13 = *v11;
    v14 = v95;
    if ( v95 != *v11 )
    {
      if ( v95 )
      {
        v15 = v96;
        v16 = v97;
        if ( *(__int64 **)(v96 + 8) != &v96 || *(__int64 **)v97 != &v96 )
          __fastfail(3u);
        *(_QWORD *)v97 = v96;
        *(_QWORD *)(v15 + 8) = v16;
      }
      v95 = v13;
      v14 = v13;
      if ( v13 )
      {
        v17 = v13 + 88;
        v18 = *(_QWORD *)v17;
        if ( *(unsigned __int8 **)(*(_QWORD *)v17 + 8LL) != v17 )
          __fastfail(3u);
        v96 = *(_QWORD *)v17;
        v97 = v17;
        *(_QWORD *)(v18 + 8) = &v96;
        *(_QWORD *)v17 = &v96;
        v14 = v95;
      }
    }
    v19 = *((_QWORD *)v14 + 1);
    if ( ((_DWORD)v11[1] & 4) == 0
      || (*(_DWORD *)v14 & 0x8000) != 0
      || !v19
      || v19 != a5
      || v11[4] != *(unsigned __int8 **)(v19 + 16) )
    {
      goto LABEL_42;
    }
    MNAnimate(v11, 0LL);
    v20 = (unsigned __int8 *)safe_cast_fnid_to_PMENUWND(*((_QWORD *)v95 + 7));
    if ( v20 )
      v20 = (unsigned __int8 *)*((_QWORD *)v20 + 1);
    if ( v21 != v20 )
    {
      v22 = v96;
      v23 = v97;
      if ( *(__int64 **)(v96 + 8) != &v96 || *(__int64 **)v97 != &v96 )
        __fastfail(3u);
      *(_QWORD *)v97 = v96;
      *(_QWORD *)(v22 + 8) = v23;
      v95 = v20;
      if ( !v20 )
        goto LABEL_35;
      v24 = v20 + 88;
      v25 = *(_QWORD *)v24;
      if ( *(unsigned __int8 **)(*(_QWORD *)v24 + 8LL) != v24 )
        __fastfail(3u);
      v96 = *(_QWORD *)v24;
      v97 = v24;
      *(_QWORD *)(v25 + 8) = &v96;
      *(_QWORD *)v24 = &v96;
      v21 = v95;
    }
    if ( v21 && (*(_DWORD *)v21 & 0x2000) != 0 )
    {
      FindTimer(*((_QWORD *)v21 + 2), 65534LL, 0, 1, 0LL);
      *(_DWORD *)v95 &= ~0x2000u;
    }
LABEL_35:
    if ( ((_DWORD)v11[1] & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(v103 + 384) + 340LL) &= ~0x100000u;
  }
  v98 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v101 = (unsigned __int16)GetKeyState(2u) >> 15;
  else
    v101 = (unsigned __int16)GetKeyState(1u) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v102[0] = __PAIR64__(a4, a3);
    v28 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2u) + 40);
    v8 = *(_DWORD *)(v28 + 28);
    v29 = *(_DWORD *)(v28 + 32);
  }
  else
  {
    v29 = v99;
  }
  v33 = 0;
  if ( PsGetCurrentProcessWin32Process(v28, v27) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31, v30);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v33 = 1;
  }
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             -2139095040,
             v8,
             v29,
             100,
             100,
             a5 & -(__int64)((*(_DWORD *)(a1 + 56) & 0x40000000) != 0),
             0LL,
             *(_QWORD *)(a5 + 72),
             0LL,
             *(_DWORD *)(a5 + 320),
             0xA00u,
             v33,
             0LL);
  v35 = (__int64)Window;
  if ( !Window )
    goto LABEL_42;
  v102[0] = safe_cast_fnid_to_PMENUWND((__int64)Window);
  if ( !v102[0] )
  {
    xxxDestroyWindow(v37, v36, v38);
    goto LABEL_42;
  }
  v106[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v106;
  v106[1] = v35;
  ++*(_DWORD *)(v35 + 8);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v103 + 376) + 768LL) & 0x80000) != 0
      || ((a2 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v39 = IsChildWindowDpiMessageEnabledX(a5))
         : (v39 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v39 = IsNonClientDpiScalingEnabledX(a5)),
          v39) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)v35);
    }
  }
  else if ( (*(_DWORD *)(a1 + 56) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)v35, (__int64 *)a5, 0);
  }
  v40 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 )
  {
    v41 = a5;
  }
  else
  {
    v41 = a5;
    if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v35, 1)
      && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
    {
      zzzSetWindowCompositionCloak(v35, 0LL, 0);
    }
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(v41 + 66) >> 6)) == 0 )
    SetOrClrWF(1, (_DWORD *)v35, 0xA40u, 1);
  SetOrClrWF(0, (_DWORD *)v35, 0x408u, 1);
  v42 = *(unsigned __int8 **)(v102[0] + 8);
  v43 = v95;
  if ( v95 != v42 )
  {
    if ( v95 )
    {
      v44 = v96;
      v45 = v97;
      if ( *(__int64 **)(v96 + 8) != &v96 || *(__int64 **)v97 != &v96 )
        __fastfail(3u);
      *(_QWORD *)v97 = v96;
      *(_QWORD *)(v44 + 8) = v45;
    }
    v95 = v42;
    if ( !v42 )
      goto LABEL_84;
    v46 = v42 + 88;
    v47 = *((_QWORD *)v42 + 11);
    if ( *(unsigned __int8 **)(v47 + 8) != v46 )
      __fastfail(3u);
    v96 = v47;
    v97 = v46;
    *(_QWORD *)(v47 + 8) = &v96;
    *(_QWORD *)v46 = &v96;
    v43 = v95;
  }
  if ( !v43 )
    goto LABEL_84;
  v102[1] = v41;
  v102[0] = (__int64)(v43 + 8);
  HMAssignmentLock(v102);
  v48 = (struct tagMENU **)v95;
  SmartObjStackRef<tagPOPUPMENU>::Init(v102, (__int64)v95);
  LockPopupMenu(v102, v48 + 5, a1);
  v102[1] = v35;
  v102[0] = (__int64)(v95 + 56);
  HMAssignmentLock(v102);
  SmartObjStackRef<tagPOPUPMENU>::Init(v102, 0LL);
  SmartObjStackRef<tagPOPUPMENU>::Init(v108, (__int64)v95);
  MNMarkDelayedFreePopup(v108, v102);
  *((_QWORD *)v95 + 8) = v95;
  *(_DWORD *)v95 |= 8u;
  v49 = (v101 << 9) | *(_DWORD *)v95 & 0xFFFFFDFF;
  v50 = v98 != 0;
  v98 = -v98;
  *(_DWORD *)v95 = v49;
  *(_DWORD *)v95 = v49 & 0xFFFFFFBF | (v50 ? 0x40 : 0);
  if ( *(_DWORD *)(gpsi + 2040LL) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    *(_DWORD *)v95 |= 0x10u;
  *(_DWORD *)v95 ^= (*(_DWORD *)v95 ^ (16 * a2)) & 0x800;
  v99 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    *(_DWORD *)v95 |= 0x100u;
  *(_DWORD *)v95 ^= (*(_DWORD *)v95 ^ (a2 >> 7)) & 4;
  SmartObjStackRef<tagPOPUPMENU>::Init(v108, (__int64)v95);
  v51 = MNAllocMenuState(v108);
  v9 = (__int64)v51;
  if ( !v51 )
  {
LABEL_84:
    a2 |= 0x80u;
LABEL_190:
    xxxWindowEvent(5u, (__int64 *)a5, 0, 0, 0);
    xxxMNReleaseCapture(v9);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5, 530, (~a2 >> 9) & 1, 0);
    v89 = 1;
    v88 = 0;
    goto LABEL_194;
  }
  if ( gptiCurrent == *((_QWORD *)v51 + 4) )
  {
    ++*((_DWORD *)v51 + 10);
    v40 = (struct tagMENUSTATE *)v51;
  }
  v52 = v95;
  if ( (*(_DWORD *)v95 & 0x800) == 0 )
  {
    xxxSendMessage(a5, 529, ((unsigned int)~*(_DWORD *)v95 >> 2) & 1, 0);
    v52 = v95;
  }
  SmartObjStackRef<tagPOPUPMENU>::Init(v105, (__int64)v52);
  if ( !xxxMNStartMenu(v105, v9, -1) )
    goto LABEL_205;
  if ( (*(_DWORD *)(v9 + 8) & 0x400) != 0 )
  {
    v102[0] = *(_QWORD *)v35;
    xxxUserModeCallback(100LL, (__int64)v102, 8LL, v53, v93);
  }
  if ( (*(_DWORD *)v95 & 0x800) == 0 )
  {
    v54 = *((_QWORD *)v95 + 1);
    if ( v54 )
    {
      v107[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v107;
      v107[1] = v54;
      ++*(_DWORD *)(v54 + 8);
      xxxSendMessage(*((_QWORD *)v95 + 1), 279, *(_QWORD *)a1, ((*v95 >> 2) & 1) << 16);
      ThreadUnlock1(v56, v55);
      *(_DWORD *)v95 |= 0x200000u;
    }
  }
  if ( (*(_DWORD *)(v35 + 304) & 0x40000000) != 0 )
  {
    v57 = *(_DWORD *)(a1 + 68);
    v58 = 0;
    if ( v57 )
    {
      v59 = *(_QWORD *)(a1 + 96);
      while ( 1 )
      {
        v60 = 152LL * v58;
        if ( (*(_DWORD *)(v60 + v59) & 0x100) != 0 || *(_QWORD *)(v60 + v59 + 104) == -1LL )
          break;
        if ( ++v58 >= v57 )
          goto LABEL_109;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)v35);
    }
  }
LABEL_109:
  if ( (*(_DWORD *)(v35 + 304) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v35);
  }
  else if ( (*(_DWORD *)(v35 + 368) & 0xF) == 0
         && (v62 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v62 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(gpsi + 8678LL);
  }
  if ( WindowDpiLastNotify != *(_WORD *)(a1 + 84) )
  {
    *(_WORD *)(a1 + 84) = WindowDpiLastNotify;
    MNClearCachedPopupSizes(a1);
  }
  v63 = xxxSendMessage(v35, 482, 1, 0);
  if ( !v63 )
  {
LABEL_205:
    if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 && gpqForeground == *(_QWORD *)(v103 + 384) )
    {
      v90 = *(__int64 **)(gpqForeground + 80LL);
      if ( v90 )
        xxxWindowEvent(0x80000005, v90, 0, 1, 33);
    }
    goto LABEL_190;
  }
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3 )
  {
    *(_DWORD *)(v9 + 8) |= 0x20u;
    *(_DWORD *)(a1 + 56) |= 4u;
  }
  else
  {
    *(_DWORD *)(a1 + 56) &= ~4u;
  }
  v98 = (unsigned __int16)v63 + 6;
  v100 = HIWORD(v63) + 6;
  v102[0] = __PAIR64__(a4, a3);
  v64 = __PAIR64__(a4, a3);
  v65 = MonitorFromPoint(__SPAIR64__(a4, a3), 2u);
  v66 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & (*(_BYTE *)(a5 + 66) >> 6)) == 0 )
    v66 = a2;
  LODWORD(v102[0]) = v66;
  if ( (v66 & 8) != 0 )
  {
    a3 -= v98;
    *(_DWORD *)v95 = *(_DWORD *)v95 & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v66 & 4) != 0 )
  {
    a3 -= v98 >> 1;
  }
  else
  {
    *(_DWORD *)v95 = *(_DWORD *)v95 & 0xF07FFFFF | ((((*(_DWORD *)v95 & 0x10) != 0) + 1) << 23);
  }
  if ( (v66 & 0x20) != 0 )
  {
    a4 -= v100;
    *(_DWORD *)v95 |= 0x4000000u;
  }
  else if ( (v66 & 0x10) != 0 )
  {
    a4 -= v100 >> 1;
  }
  else
  {
    *(_DWORD *)v95 |= 0x2000000u;
  }
  if ( (v66 & 0x3C00) != 0 )
    *(_DWORD *)v95 = ((v66 & 0x3C00) << 13) | *(_DWORD *)v95 & 0xF07FFFFF;
  if ( !a6 )
  {
    v67 = v95;
    if ( *(_DWORD *)(*((_QWORD *)v95 + 2) + 320LL) == 1 )
    {
      if ( IsRectEmptyInl((const struct tagRECT *)(v65 + 472)) )
      {
        v69 = *(_DWORD *)(v35 + 368) & 0xF;
        if ( !v69
          && (v70 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 408LL)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v70 + 8) + 52LL) & 1) != 0 )
        {
          v68 = (int *)(*(_QWORD *)(v65 + 40) + 44LL);
        }
        else if ( v69 == 1
               && (v71 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 408LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v71 + 8) + 52LL) & 1) != 0 )
        {
          v68 = (int *)(*(_QWORD *)(v65 + 40) + 60LL);
        }
        else
        {
          v68 = (int *)(*(_QWORD *)(v65 + 40) + 28LL);
        }
      }
      else
      {
        v69 = *(_DWORD *)(v35 + 368) & 0xF;
        if ( !v69
          && (v72 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 408LL)) != 0
          && (*(_DWORD *)(**(_QWORD **)(v72 + 8) + 52LL) & 1) != 0 )
        {
          v68 = (int *)(v65 + 488);
        }
        else if ( v69 == 1 )
        {
          v73 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 408LL);
          if ( v73 )
          {
            if ( (*(_DWORD *)(**(_QWORD **)(v73 + 8) + 52LL) & 1) != 0 )
              v68 = (int *)(v65 + 504);
          }
        }
      }
      if ( !v69
        && (v74 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v74 + 8) + 52LL) & 1) != 0 )
      {
        v75 = (int *)(*(_QWORD *)(v65 + 40) + 44LL);
      }
      else if ( v69 == 1
             && (v76 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v76 + 8) + 52LL) & 1) != 0 )
      {
        v75 = (int *)(*(_QWORD *)(v65 + 40) + 60LL);
      }
      else
      {
        v75 = (int *)(*(_QWORD *)(v65 + 40) + 28LL);
      }
      SubtractRect((__int64)v104, v75, v68);
      *(_DWORD *)v67 |= 0x80000000;
    }
    else
    {
      *(_DWORD *)v95 &= ~0x80000000;
      v104[0] = 0LL;
      v104[1] = 0LL;
    }
    goto LABEL_170;
  }
  v77 = v95;
  if ( *(_DWORD *)(*((_QWORD *)v95 + 2) + 320LL) == 1 )
  {
    *(_DWORD *)v95 |= 0x80000000;
LABEL_170:
    v77 = v95;
  }
  SmartObjStackRef<tagPOPUPMENU>::Init(v105, (__int64)v77);
  v94 = v64;
  v78 = v102[0];
  BestPos = FindBestPos(
              a3,
              a4,
              v98,
              v100,
              (struct tagRECT *)v104,
              v102[0],
              (unsigned int **)v105,
              (struct tagMONITOR *)v65,
              v94);
  v81 = v95;
  v82 = BestPos;
  if ( (*(_BYTE *)(a5 + 66) & 0x40) != 0 && (*(_DWORD *)v95 & 0x1800000) != 0 )
  {
    *(_DWORD *)v95 ^= 0x1800000u;
    v81 = v95;
  }
  v83 = *(unsigned int *)v81;
  if ( (v83 & 0xF800000) != 0 && (v78 & 0x4000) == 0 )
  {
    LODWORD(v83) = v83 | 0x8000000;
    *(_DWORD *)v81 = v83;
  }
  xxxPlayEventSound(5LL, (__int64)v81, v83, v80);
  xxxSetWindowPos(
    (struct tagWND *)v35,
    ((*(_DWORD *)(v9 + 8) & 0x100) != 0) - 1LL,
    (unsigned int)(__int16)v82,
    (unsigned int)SHIWORD(v82),
    0,
    0,
    ~(unsigned __int8)(*(_DWORD *)(v9 + 8) >> 4) & 0x10 | 0x241);
  if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v84 = *(__int64 **)(gpqForeground + 80LL);
      if ( v84 )
      {
        if ( gpqForeground == *(_QWORD *)(v103 + 384) )
        {
          v85 = 33;
          if ( v84[2] == v103 )
            v84 = (__int64 *)v35;
          else
            v85 = 49;
          xxxWindowEvent(0x80000004, v84, 0, 1, v85);
        }
      }
    }
  }
  xxxWindowEvent(6u, (__int64 *)v35, -4, 0, 0);
  *(_DWORD *)(v9 + 8) = *(_DWORD *)(v9 + 8) & 0xFFFFFFF7 | (8 * v101);
  SmartObjStackRef<tagPOPUPMENU>::Init(v105, (__int64)v95);
  v88 = xxxMNLoop(v105, v9, 0LL, 0);
  if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 )
  {
    v89 = v99;
LABEL_194:
    if ( ThreadUnlock1(v87, v86) && *(char *)(v35 + 59) >= 0 )
      xxxDestroyWindow(v35, v91, v92);
    if ( v9 )
      xxxMNEndMenuState(v9);
    goto LABEL_199;
  }
  ThreadUnlock1(v87, v86);
  v89 = v99;
LABEL_199:
  if ( v89 )
    v12 = v88;
  if ( v40 )
    xxxUnlockMenuStateInternal(v40, 0);
LABEL_43:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v95);
  return v12;
}
