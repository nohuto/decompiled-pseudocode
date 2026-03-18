/*
 * XREFs of xxxTrackPopupMenuEx @ 0x1C0214E34
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1C01ECE40 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1C0210740 (xxxDoScrollMenu.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0066B60 (IsWindowBroadcastingDpiToChildrenX.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsWindowShellCloaked @ 0x1C00C8B24 (IsWindowShellCloaked.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E6578 (xxxEnableChildWindowDpiMessageX.c)
 *     SubtractRect @ 0x1C00FB1A0 (SubtractRect.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     xxxPlayEventSound @ 0x1C010EDC0 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C011DC24 (MNClearCachedPopupSizes.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01C3CB4 (IsChildWindowDpiMessageEnabledX.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01C3D0C (IsNonClientDpiScalingEnabledX.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F6A78 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C01F6ABC (MNAllocMenuState.c)
 *     MNMarkDelayedFreePopup @ 0x1C01F6F04 (MNMarkDelayedFreePopup.c)
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxUserModeCallback @ 0x1C0202EA4 (xxxUserModeCallback.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     LockPopupMenu @ 0x1C020580C (LockPopupMenu.c)
 *     xxxMNReleaseCapture @ 0x1C0209100 (xxxMNReleaseCapture.c)
 *     FindBestPos @ 0x1C021494C (FindBestPos.c)
 *     MNAnimate @ 0x1C0216480 (MNAnimate.c)
 *     GetMonitorMenuRectForWindow @ 0x1C023A7CC (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx
  int v26; // edi
  int v27; // r14d
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v30; // dl
  _DWORD *Window; // rax
  ULONG_PTR v32; // r14
  __int64 v33; // rdx
  volatile signed __int32 *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // eax
  struct tagMENUSTATE *v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  struct tagMENU **v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int *v56; // rdx
  unsigned int v57; // ecx
  bool v58; // cf
  _QWORD *v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned int v69; // r9d
  unsigned int v70; // ecx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int16 WindowDpiLastNotify; // ax
  __int64 v74; // rax
  unsigned __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // r8
  unsigned __int8 v78; // dl
  __int64 v79; // r10
  int v80; // r9d
  int v81; // r12d
  __int64 v82; // r9
  __int64 v83; // rax
  __int16 v84; // bx
  __int64 v85; // rdx
  int BestPos; // r12d
  ULONG_PTR v87; // rdx
  int v88; // ecx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned int v93; // ebx
  int v94; // r12d
  volatile signed __int32 *v95; // rdx
  unsigned __int64 v96; // [rsp+48h] [rbp-D0h]
  _QWORD v97[2]; // [rsp+98h] [rbp-80h] BYREF
  int v98; // [rsp+A8h] [rbp-70h]
  int v99; // [rsp+ACh] [rbp-6Ch]
  int v100; // [rsp+B0h] [rbp-68h]
  int v101; // [rsp+B4h] [rbp-64h]
  __int64 v102; // [rsp+B8h] [rbp-60h]
  __int64 v103; // [rsp+C0h] [rbp-58h]
  __int64 v104; // [rsp+C8h] [rbp-50h]
  __int64 v105; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v106[2]; // [rsp+D8h] [rbp-40h] BYREF
  __int128 v107; // [rsp+E8h] [rbp-30h]
  __int128 v108; // [rsp+F8h] [rbp-20h]
  __int128 v109; // [rsp+108h] [rbp-10h] BYREF
  _QWORD v110[2]; // [rsp+118h] [rbp+0h] BYREF
  __int128 v111; // [rsp+128h] [rbp+10h] BYREF
  __int64 *v112[2]; // [rsp+138h] [rbp+20h] BYREF
  __int64 *v113[2]; // [rsp+148h] [rbp+30h] BYREF
  _QWORD v114[2]; // [rsp+158h] [rbp+40h] BYREF
  __int64 *v115[2]; // [rsp+168h] [rbp+50h] BYREF
  __int128 v116; // [rsp+178h] [rbp+60h] BYREF
  __int128 v117; // [rsp+188h] [rbp+70h] BYREF
  __int64 v118[2]; // [rsp+198h] [rbp+80h] BYREF
  __int64 *v119[2]; // [rsp+1A8h] [rbp+90h] BYREF
  _QWORD v120[3]; // [rsp+1B8h] [rbp+A0h] BYREF
  _QWORD v121[3]; // [rsp+1D0h] [rbp+B8h] BYREF
  __int128 v122; // [rsp+1E8h] [rbp+D0h] BYREF
  _BYTE v123[64]; // [rsp+1F8h] [rbp+E0h] BYREF
  LONG v125; // [rsp+258h] [rbp+140h]
  LONG v126; // [rsp+260h] [rbp+148h]

  v126 = a4;
  v125 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v97, 0LL, a3, a4);
  v11 = 0LL;
  v100 = 0;
  v99 = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
    {
LABEL_5:
      v12 = 87LL;
LABEL_24:
      UserSetLastError(v12, v8);
LABEL_25:
      v14 = 0;
      goto LABEL_26;
    }
    *(_OWORD *)v106 = *(_OWORD *)(a6 + 4);
  }
  v104 = gptiCurrent;
  if ( gptiCurrent != *(_QWORD *)(a5 + 16) )
    goto LABEL_5;
  v13 = *(_QWORD *)(gptiCurrent + 584LL);
  v14 = 1;
  if ( v13 )
  {
    if ( (a2 & 1) == 0 )
    {
      v12 = 1446LL;
      goto LABEL_24;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v97, *(_QWORD *)v13);
    v17 = *(_QWORD *)(*(_QWORD *)v97[0] + 8LL);
    if ( (*(_DWORD *)(v13 + 8) & 4) == 0
      || (**(_DWORD **)v97[0] & 0x8000) != 0
      || !v17
      || v17 != a5
      || *(_QWORD *)(v13 + 32) != *(_QWORD *)(v17 + 16) )
    {
      goto LABEL_25;
    }
    MNAnimate(v13, 0LL);
    v18 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v97[0] + 56LL));
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 8);
    else
      v19 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v97, v19);
    if ( *(_QWORD *)v97[0] && (**(_DWORD **)v97[0] & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v97[0] + 16LL), 65534LL, 0, 1, 0LL);
      **(_DWORD **)v97[0] &= ~0x2000u;
    }
    if ( (*(_DWORD *)(v13 + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= ~0x100000u;
  }
  v98 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v101 = (unsigned __int16)GetKeyState(2u, v8, v9, v10) >> 15;
  else
    v101 = (unsigned __int16)GetKeyState(1u, v8, v9, v10) >> 15;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22, v23) & 0xF) == 2 )
  {
    v102 = __PAIR64__(v126, v125);
    v25 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(v126, v125), 2u, 0) + 40);
    v26 = *(_DWORD *)(v25 + 28);
    v27 = *(_DWORD *)(v25 + 32);
  }
  else
  {
    v26 = v100;
    v27 = v99;
  }
  v30 = 0;
  if ( PsGetCurrentProcessWin32Process(v25) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v30 = 1;
  }
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             0x80800000,
             v26,
             v27,
             0x64u,
             0x64u,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(a1 + 56) & 0x40000000) != 0)),
             0LL,
             *(_QWORD *)(a5 + 72),
             0LL,
             *(_DWORD *)(a5 + 320),
             0xA00u,
             v30,
             0LL);
  v32 = (ULONG_PTR)Window;
  if ( !Window )
    goto LABEL_25;
  v103 = safe_cast_fnid_to_PMENUWND((__int64)Window);
  if ( !v103 )
  {
    xxxDestroyWindow(v34, v33, v35);
    goto LABEL_25;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v35, v36);
  v120[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v120;
  v120[1] = v32;
  _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
  if ( (W32GetCurrentThreadDpiAwarenessContext(ThreadWin32Thread, v38, v39, v40) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v104 + 400) + 776LL) & 0x80000) != 0
      || ((a2 & 0x200) == 0
        ? (!(unsigned int)IsTopLevelWindow(a5)
         ? (v41 = IsChildWindowDpiMessageEnabledX(a5))
         : (v41 = IsWindowBroadcastingDpiToChildrenX(a5)))
        : (v41 = IsNonClientDpiScalingEnabledX(a5)),
          v41) )
    {
      xxxEnableChildWindowDpiMessageX((struct tagWND *)v32);
    }
  }
  else if ( (*(_DWORD *)(a1 + 56) & 0x40000000) == 0 )
  {
    xxxInheritWindowMonitor((struct tagWND *)v32, (struct tagWND *)a5, 0);
  }
  v42 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x40000000) == 0
    && (unsigned int)IsWindowShellCloaked((struct tagWND *)v32, 1)
    && !(unsigned int)IsWindowShellCloaked((struct tagWND *)a5, 0) )
  {
    zzzSetWindowCompositionCloak(v32, 0LL, 0);
  }
  if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(a5 + 66) >> 6)) == 0 )
    SetOrClrWF(1, (_DWORD *)v32, 0xA40u, 1);
  SetOrClrWF(0, (_DWORD *)v32, 0x408u, 1);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v97, *(_QWORD *)(v103 + 8));
  if ( !*(_QWORD *)v97[0] )
    goto LABEL_56;
  *((_QWORD *)&v107 + 1) = a5;
  *(_QWORD *)&v107 = *(_QWORD *)v97[0] + 8LL;
  v109 = v107;
  HMAssignmentLock(&v109);
  v43 = *(_QWORD *)v97[0];
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v110, *(_QWORD *)v97[0], v44, v45);
  v46 = (struct tagMENU **)(v43 + 40);
  v47 = a1;
  LockPopupMenu(v110, v46, a1);
  *((_QWORD *)&v108 + 1) = v32;
  *(_QWORD *)&v108 = *(_QWORD *)v97[0] + 56LL;
  v111 = v108;
  HMAssignmentLock(&v111);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v112, 0LL, v48, v49);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v113, *(_QWORD *)v97[0], v50, v51);
  MNMarkDelayedFreePopup(v113, v112, v52, v53);
  *(_QWORD *)(*(_QWORD *)v97[0] + 64LL) = *(_QWORD *)v97[0];
  **(_DWORD **)v97[0] |= 8u;
  v56 = *(unsigned int **)v97[0];
  v57 = (v101 << 9) | **(_DWORD **)v97[0] & 0xFFFFFDFF;
  v58 = v98 != 0;
  v98 = -v98;
  *v56 = v57;
  **(_DWORD **)v97[0] = **(_DWORD **)v97[0] & 0xFFFFFFBF | (v58 ? 0x40 : 0);
  if ( *(_DWORD *)(gpsi + 2040LL) || (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    **(_DWORD **)v97[0] |= 0x10u;
  **(_DWORD **)v97[0] ^= (**(_DWORD **)v97[0] ^ (16 * a2)) & 0x800;
  v100 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    **(_DWORD **)v97[0] |= 0x100u;
  **(_DWORD **)v97[0] ^= (**(_DWORD **)v97[0] ^ (a2 >> 7)) & 4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v114, *(_QWORD *)v97[0], v54, v55);
  v59 = MNAllocMenuState(v114);
  v11 = (__int64)v59;
  if ( !v59 )
  {
LABEL_56:
    LOBYTE(a2) = a2 | 0x80;
LABEL_134:
    xxxWindowEvent(5u, (volatile signed __int32 *)a5, 0LL, 0LL, 0);
    xxxMNReleaseCapture(v11);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage(a5);
    v94 = 1;
    v93 = 0;
    goto LABEL_138;
  }
  if ( gptiCurrent == v59[4] )
  {
    ++*((_DWORD *)v59 + 10);
    v42 = (struct tagMENUSTATE *)v59;
  }
  if ( (**(_DWORD **)v97[0] & 0x800) == 0 )
    xxxSendMessage(a5);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v115, *(_QWORD *)v97[0], v60, v61);
  if ( !xxxMNStartMenu(v115, v11, 0xFFFFFFFFLL) )
    goto LABEL_149;
  if ( (*(_DWORD *)(v11 + 8) & 0x400) != 0 )
  {
    v105 = *(_QWORD *)v32;
    xxxUserModeCallback(100LL, (__int64)&v105, 8u, v64);
  }
  if ( (**(_DWORD **)v97[0] & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v97[0] + 8LL) )
  {
    v65 = *(_QWORD *)(*(_QWORD *)v97[0] + 8LL);
    v66 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64);
    v121[0] = *(_QWORD *)(v66 + 392);
    *(_QWORD *)(v66 + 392) = v121;
    v121[1] = v65;
    _InterlockedAdd((volatile signed __int32 *)(v65 + 8), 1u);
    v47 = a1;
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)v97[0] + 8LL));
    ThreadUnlock1(v68, v67);
    **(_DWORD **)v97[0] |= 0x200000u;
  }
  if ( (*(_DWORD *)(v32 + 304) & 0x40000000) != 0 )
  {
    v69 = *(_DWORD *)(v47 + 68);
    v70 = 0;
    if ( v69 )
    {
      v71 = *(_QWORD *)(v47 + 96);
      while ( 1 )
      {
        v72 = 152LL * v70;
        if ( (*(_DWORD *)(v72 + v71) & 0x100) != 0 || *(_QWORD *)(v72 + v71 + 104) == -1LL )
          break;
        if ( ++v70 >= v69 )
          goto LABEL_81;
      }
      xxxEnableChildWindowDpiMessageX((struct tagWND *)v32);
    }
  }
LABEL_81:
  if ( (*(_DWORD *)(v32 + 304) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v32);
  }
  else if ( (*(_DWORD *)(v32 + 368) & 0xF) == 0
         && (v74 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 432LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v74 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 400LL) + 284LL);
  }
  if ( WindowDpiLastNotify != *(_WORD *)(v47 + 84) )
  {
    *(_WORD *)(v47 + 84) = WindowDpiLastNotify;
    MNClearCachedPopupSizes(v47);
  }
  v105 = xxxSendMessage(v32);
  if ( !(_DWORD)v105 )
  {
LABEL_149:
    if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 && gpqForeground == *(_QWORD *)(v104 + 408) )
    {
      v95 = *(volatile signed __int32 **)(gpqForeground + 112LL);
      if ( v95 )
        xxxWindowEvent(0x80000005, v95, 0LL, 1LL, 33);
    }
    goto LABEL_134;
  }
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3 )
  {
    *(_DWORD *)(v11 + 8) |= 0x20u;
    *(_DWORD *)(v47 + 56) |= 4u;
  }
  else
  {
    *(_DWORD *)(v47 + 56) &= ~4u;
  }
  v98 = (unsigned __int16)v105 + 6;
  v99 = WORD1(v105) + 6;
  v102 = __PAIR64__(v126, v125);
  v75 = __PAIR64__(v126, v125);
  v76 = MonitorFromPoint(__SPAIR64__(v126, v125), 2u, 0);
  v78 = *(_BYTE *)(a5 + 66) >> 6;
  v79 = v76;
  v103 = v76;
  v80 = a2 ^ 8;
  if ( (((a2 & 4) == 0) & v78) == 0 )
    v80 = a2;
  LODWORD(v102) = v80;
  if ( (v80 & 8) != 0 )
  {
    v125 -= v98;
    **(_DWORD **)v97[0] = **(_DWORD **)v97[0] & 0xF07FFFFF | 0x1000000;
  }
  else if ( (v80 & 4) != 0 )
  {
    v125 -= (unsigned int)v98 >> 1;
  }
  else
  {
    v77 = *(_QWORD *)v97[0];
    **(_DWORD **)v97[0] = **(_DWORD **)v97[0] & 0xF07FFFFF | ((((**(_DWORD **)v97[0] & 0x10) != 0) + 1) << 23);
  }
  v81 = v99;
  if ( (v80 & 0x20) != 0 )
  {
    v126 -= v99;
    **(_DWORD **)v97[0] |= 0x4000000u;
  }
  else if ( (v80 & 0x10) != 0 )
  {
    v126 -= (unsigned int)v99 >> 1;
  }
  else
  {
    **(_DWORD **)v97[0] |= 0x2000000u;
  }
  v82 = v80 & 0x3C00;
  if ( (_DWORD)v82 )
  {
    v82 = (unsigned int)((_DWORD)v82 << 13);
    **(_DWORD **)v97[0] = v82 | **(_DWORD **)v97[0] & 0xF07FFFFF;
  }
  v83 = *(_QWORD *)(*(_QWORD *)v97[0] + 16LL);
  if ( a6 )
  {
    if ( *(_DWORD *)(v83 + 320) != 1 )
      goto LABEL_115;
LABEL_114:
    **(_DWORD **)v97[0] |= 0x80000000;
    goto LABEL_115;
  }
  if ( *(_DWORD *)(v83 + 320) == 1 )
  {
    v117 = *GetMonitorRectForWindow(&v122, v79, (struct tagWND *)v32);
    v116 = *(_OWORD *)GetMonitorMenuRectForWindow(v123, v103, v32);
    SubtractRect((__int64)v106, (int *)&v117, (int *)&v116);
    goto LABEL_114;
  }
  v106[0] = 0LL;
  v106[1] = 0LL;
  **(_DWORD **)v97[0] &= ~0x80000000;
LABEL_115:
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v118, *(_QWORD *)v97[0], v77, v82);
  v96 = v75;
  v84 = v102;
  BestPos = FindBestPos(
              v125,
              v126,
              v98,
              v81,
              (struct tagRECT *)v106,
              v102,
              (__int64 **)v118,
              (struct tagMONITOR *)v103,
              v96);
  if ( (*(_BYTE *)(a5 + 66) & 0x40) != 0 )
  {
    v85 = *(_QWORD *)v97[0];
    if ( (**(_DWORD **)v97[0] & 0x1800000) != 0 )
    {
      v85 = *(_QWORD *)v97[0];
      **(_DWORD **)v97[0] ^= 0x1800000u;
    }
  }
  if ( (**(_DWORD **)v97[0] & 0xF800000) != 0 && (v84 & 0x4000) == 0 )
    **(_DWORD **)v97[0] |= 0x8000000u;
  xxxPlayEventSound(5LL, v85);
  xxxSetWindowPos(
    (struct tagWND *)v32,
    ((*(_DWORD *)(v11 + 8) >> 8) & 1) - 1LL,
    (unsigned int)(__int16)BestPos,
    (unsigned int)SHIWORD(BestPos),
    0,
    0,
    (16 * !(*(_DWORD *)(v11 + 8) & 0x100)) | 0x241);
  if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 )
  {
    if ( gpqForeground )
    {
      v87 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v87 )
      {
        if ( gpqForeground == *(_QWORD *)(v104 + 408) )
        {
          v88 = 33;
          if ( *(_QWORD *)(v87 + 16) == v104 )
            v87 = v32;
          else
            v88 = 49;
          xxxWindowEvent(0x80000004, (volatile signed __int32 *)v87, 0LL, 1LL, v88);
        }
      }
    }
  }
  xxxWindowEvent(6u, (volatile signed __int32 *)v32, 4294967292LL, 0LL, 0);
  *(_DWORD *)(v11 + 8) = (8 * v101) | *(_DWORD *)(v11 + 8) & 0xFFFFFFF7;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v119, *(_QWORD *)v97[0], v89, v90);
  v93 = xxxMNLoop(v119, v11, 0LL, 0);
  if ( (*(_DWORD *)(v11 + 8) & 0x100) == 0 )
  {
    v94 = v100;
LABEL_138:
    if ( ThreadUnlock1(v92, v91) && *(char *)(v32 + 59) >= 0 )
      xxxDestroyWindow((volatile signed __int32 *)v32, v17, v15);
    if ( v11 )
      xxxMNEndMenuState(v11, v17, v15, v16);
    goto LABEL_143;
  }
  ThreadUnlock1(v92, v91);
  v94 = v100;
LABEL_143:
  if ( v94 )
    v14 = v93;
  if ( v42 )
    xxxUnlockMenuStateInternal(v42, 0);
LABEL_26:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v97, v17, v15, v16);
  return v14;
}
