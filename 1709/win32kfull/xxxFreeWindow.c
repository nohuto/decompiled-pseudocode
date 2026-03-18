/*
 * XREFs of xxxFreeWindow @ 0x1C0060AD0
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C0044EC4 (DwmAsyncShellWindowChange.c)
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C005AC34 (xxxClientFreeWindowClassExtraBytes.c)
 *     DeleteProperties @ 0x1C005D700 (DeleteProperties.c)
 *     DestroyWindowSmIcon @ 0x1C005D7C8 (DestroyWindowSmIcon.c)
 *     DwmAsyncChildDestroy @ 0x1C00600C0 (DwmAsyncChildDestroy.c)
 *     DwmAsyncOwnerChange @ 0x1C0060154 (DwmAsyncOwnerChange.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxRemoveShadow @ 0x1C0060220 (xxxRemoveShadow.c)
 *     xxxRemoveFullScreen @ 0x1C00602AC (xxxRemoveFullScreen.c)
 *     MagpFindThreadContext @ 0x1C006037C (MagpFindThreadContext.c)
 *     ClearSendMessages @ 0x1C0060394 (ClearSendMessages.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0060550 (GreDeleteSpriteOverlapPresent.c)
 *     DereferenceClass @ 0x1C0060640 (DereferenceClass.c)
 *     FreeClientOnWindowDestruction @ 0x1C00606A0 (FreeClientOnWindowDestruction.c)
 *     _FindActivationFilterWindow @ 0x1C006072C (_FindActivationFilterWindow.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0060760 (UpdatePointerRedirIsAlive.c)
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x1C00607A8 (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     FreeWindowMessageFilter @ 0x1C0060840 (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C006088C (FreeWindowGCData.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     InvalidateDCE @ 0x1C0072E04 (InvalidateDCE.c)
 *     GetClassPtr @ 0x1C0072FE0 (GetClassPtr.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     DecPaintCount @ 0x1C0080D20 (DecPaintCount.c)
 *     xxxResetTooltip @ 0x1C0084370 (xxxResetTooltip.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0085FF4 (zzzInputFocusLostWindowEvent.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C00A86D0 (FindQMsg.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00C3550 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00CC1EC (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     CleanupIAMAccess @ 0x1C00D5CB0 (CleanupIAMAccess.c)
 *     SetShellWndManagementWindow @ 0x1C00D6330 (SetShellWndManagementWindow.c)
 *     IPostQuitMessage @ 0x1C00D7230 (IPostQuitMessage.c)
 *     FreeTimer @ 0x1C00D7A70 (FreeTimer.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00D7DBC (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DeleteHrgnClip @ 0x1C00FAE40 (DeleteHrgnClip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C01142DC (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     UnlockWndMenu @ 0x1C011598C (UnlockWndMenu.c)
 *     _DeregisterShellHookWindow @ 0x1C011FAE0 (_DeregisterShellHookWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     IsSysShadow @ 0x1C0144434 (IsSysShadow.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ChangeComposableCursor @ 0x1C01A0F94 (ChangeComposableCursor.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01A7FA4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01B5C44 (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01B8C10 (_NotifyOverlayWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C01D0100 (RemoveSwitchWindowInfo.c)
 *     FindSpb @ 0x1C01EFB5C (FindSpb.c)
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01F2000 (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F3BC0 (xxxDeferredDesktopRotation.c)
 *     NullifyLookasideRef @ 0x1C01F69F4 (NullifyLookasideRef.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01F7A48 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C024CA50 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C0267160 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rcx
  struct tagWND **v6; // rdx
  __int64 v7; // rcx
  __int64 **v8; // rcx
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rax
  struct tagWND **v12; // rcx
  __int64 v13; // rax
  struct tagWND **v14; // rcx
  struct tagWND **v15; // rax
  struct tagWND **v16; // rcx
  struct tagWND **v17; // rcx
  struct tagWND **v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r9d
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  char *v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  struct tagWND **v38; // rcx
  struct tagWND **v39; // rcx
  struct tagWND **v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  struct tagWND **v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rsi
  __int64 v47; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct tagSHADOW **v51; // rcx
  struct tagSHADOW *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 Prop; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rbx
  TOKEN_TYPE v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  void *v63; // rcx
  _QWORD *ThreadContext; // rax
  _QWORD *v65; // rbx
  _QWORD *LensContext; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  _QWORD *v69; // rsi
  __int64 v70; // rcx
  _QWORD *v71; // rax
  void *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 QMsg; // rax
  __int64 v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  EWNDOBJ *v81; // rbx
  _QWORD *v82; // rsi
  int v83; // edx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 Spb; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  void *v91; // r8
  void *v92; // r8
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  char *v96; // r14
  int v97; // eax
  __int64 v98; // rcx
  void *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 result; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // rsi
  _DWORD *v114; // rcx
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rcx
  __int64 v119; // rcx
  void *v120; // rax
  __int64 v121; // r14
  __int64 v122; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 *v128; // rax
  void *v129; // rcx
  __int64 v130; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *ClassPtr; // rax
  __int64 v133; // rcx
  _QWORD v134[2]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v135; // [rsp+58h] [rbp-59h] BYREF
  __int64 v136; // [rsp+60h] [rbp-51h]
  __int64 (*v137)(void); // [rsp+68h] [rbp-49h]
  __int128 v138; // [rsp+78h] [rbp-39h]
  __int128 v139; // [rsp+88h] [rbp-29h]
  __int128 v140; // [rsp+98h] [rbp-19h] BYREF
  __int128 v141; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD v142[3]; // [rsp+B8h] [rbp+7h] BYREF
  _QWORD v143[3]; // [rsp+D0h] [rbp+1Fh] BYREF
  struct tagSwitchWndInfo *v144; // [rsp+120h] [rbp+6Fh] BYREF

  v144 = a2;
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 )
    goto LABEL_23;
  v6 = *(struct tagWND ***)(v5 + 8);
  if ( a1 == v6[20] )
  {
    CleanupIAMAccess((struct tagDESKTOP *)v5);
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v7 + 24LL) = 0LL;
    HMAssignmentUnlock(v7 + 160);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v8 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 8LL);
      v9 = **v8;
      v10 = (void *)ReferenceDwmApiPort(v8);
      DwmAsyncShellWindowChange(v10, 0LL, v9);
    }
    v6 = *(struct tagWND ***)(*((_QWORD *)a1 + 3) + 8LL);
    v4 = (*((unsigned __int8 *)*v6 + 52) >> 1) & 1;
  }
  if ( v6[22] == a1 )
    HMAssignmentUnlock(v6 + 22);
  v11 = *((_QWORD *)a1 + 3);
  v12 = (struct tagWND **)(*(_QWORD *)(v11 + 8) + 184LL);
  if ( *v12 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v11 + 8) + 32LL) = 0LL;
    HMAssignmentUnlock(v12);
  }
  v13 = *((_QWORD *)a1 + 3);
  v14 = (struct tagWND **)(*(_QWORD *)(v13 + 8) + 192LL);
  if ( *v14 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v13 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v14);
  }
  v15 = (struct tagWND **)*((_QWORD *)a1 + 3);
  v16 = v15 + 38;
  if ( v15[38] == a1 )
  {
LABEL_34:
    HMAssignmentUnlock(v16);
    goto LABEL_15;
  }
  if ( v15[41] != a1 )
  {
    v16 = v15 + 37;
    if ( a1 != v15[37] )
    {
      ActivationFilterWindow = FindActivationFilterWindow((__int64)a1);
      v30 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v31 = *ActivationFilterWindow;
        if ( *(_QWORD **)(v31 + 8) != v30 || (v32 = (_QWORD *)v30[1], (_QWORD *)*v32 != v30) )
          __fastfail(3u);
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        HMAssignmentUnlock(v30 + 2);
        Win32FreePool(v30, v33, v34);
      }
      goto LABEL_15;
    }
    goto LABEL_34;
  }
  SetShellWndManagementWindow(*((_QWORD *)a1 + 3), 0LL);
LABEL_15:
  v17 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 248LL);
  if ( *v17 == a1 )
    HMAssignmentUnlock(v17);
  UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
  v18 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 224LL);
  if ( *v18 == a1 )
    HMAssignmentUnlock(v18);
  if ( (*((_BYTE *)a1 + 63) & 0x40) != 0 )
    DeregisterShellHookWindow(a1);
  if ( (*((_BYTE *)a1 + 56) & 0x20) != 0 )
  {
    v19 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
    --*(_DWORD *)(v19 + 48);
    SetOrClrWF(0LL, a1, 32LL, 1LL);
  }
LABEL_23:
  if ( *((_DWORD *)a1 + 84) )
    ScrubDelegatedWindow(a1);
  InputTransform::ClearTransforms(a1, a2, a3);
  FreeWindowMessageFilter(a1, v20, v21, v22);
  FreeWindowGCData(a1, v23, v24, v25);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v4 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage(a1, 130LL, 0LL, 0LL);
  xxxRemoveFullScreen((__int64)a1);
  v26 = *((_WORD *)a1 + 41);
  v27 = v26;
  LOWORD(v27) = v26 & 0x3FFF;
  v28 = 666LL;
  if ( (v26 & 0x3FFFu) >= 0x29A && (v26 & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v27 > 0x2A0u )
    {
      if ( (unsigned __int16)v27 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 464LL) & 1) == 0 )
        SfnDWORD((_DWORD)a1, 112, 0, 0, 0LL, *(_QWORD *)(gpsi + 8LL * (unsigned __int16)v27 - 4624));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v26 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *((_WORD *)a1 + 41) |= 0x4000u;
  }
  v35 = (char *)*((_QWORD *)a1 + 48);
  *((_WORD *)a1 + 41) |= 0x8000u;
  if ( (unsigned __int64)(v35 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v35);
    }
    else if ( (*(_DWORD *)(PsGetCurrentProcess(v27, v28) + 772) & 0x40000008) == 0
           && (*(_DWORD *)(gptiCurrent + 464LL) & 1) == 0 )
    {
      xxxClientFreeWindowClassExtraBytes(*((_QWORD *)a1 + 48));
    }
    *((_QWORD *)a1 + 48) = 0LL;
  }
  v36 = *((_QWORD *)a1 + 15);
  if ( v36 )
  {
    v37 = v36 + 256;
    if ( *(struct tagWND **)(v36 + 256) == a1 )
    {
      if ( *(char *)(v36 + 59) < 0 || *(char *)(v36 + 60) < 0 )
        v36 = 0LL;
      *(_QWORD *)&v138 = v37;
      *((_QWORD *)&v138 + 1) = v36;
      v140 = v138;
      HMAssignmentLock(&v140);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 752LL) )
    HMAssignmentUnlock(gptiCurrent + 752LL);
  if ( *(struct tagWND **)(gptiCurrent + 1352LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1352LL);
  if ( *(struct tagWND **)(gptiCurrent + 1424LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1424LL);
  v38 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
  if ( a1 == *v38 )
  {
    HMAssignmentUnlock(v38);
    if ( *(_QWORD *)(gptiCurrent + 408LL) == gpqForeground )
      zzzInputFocusLostWindowEvent(a1, 10LL);
  }
  v39 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 128LL);
  if ( a1 == *v39 )
    HMAssignmentUnlock(v39);
  v40 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
  if ( a1 == *v40 )
    HMAssignmentUnlock(v40);
  v41 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( a1 == *(struct tagWND **)(v41 + 136) )
  {
    HMAssignmentUnlock(v41 + 136);
    *(_BYTE *)(v41 + 144) = 0;
  }
  if ( a1 == (struct tagWND *)gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == (struct tagWND *)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v42 = *((_QWORD *)a1 + 3);
  if ( v42 )
  {
    if ( a1 == *(struct tagWND **)(v42 + 88) )
      HMAssignmentUnlock(v42 + 88);
    v43 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 96LL);
    if ( a1 == *v43 )
      HMAssignmentUnlock(v43);
    if ( a1 == *(struct tagWND **)(*((_QWORD *)a1 + 3) + 184LL) )
    {
      xxxNotifyShellWindowBorderExitIfEntered(a1);
      v44 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(v44 + 48) & 0x200) != 0 )
      {
        v45 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v44 + 112));
        v46 = v45;
        if ( v45 )
        {
          v47 = *v45;
          if ( *v45 )
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v142[0] = *(_QWORD *)(ThreadWin32Thread + 392);
            *(_QWORD *)(ThreadWin32Thread + 392) = v142;
            v142[1] = v47;
            _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
            xxxResetTooltip(v46);
            ThreadUnlock1(v50, v49);
          }
        }
      }
      HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 184LL);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
  {
    v51 = &gpshadowFirst;
    if ( gpshadowFirst )
    {
      while ( 1 )
      {
        v52 = *v51;
        if ( *((struct tagWND **)*v51 + 1) == a1 )
          break;
        v51 = (struct tagSHADOW **)((char *)v52 + 16);
        if ( !*((_QWORD *)v52 + 2) )
          goto LABEL_97;
      }
      *v51 = (struct tagSHADOW *)*((_QWORD *)v52 + 2);
      HMAssignmentUnlock(v52);
      HMAssignmentUnlock((char *)v52 + 8);
      Win32FreePool(v52, v53, v54);
    }
  }
  else
  {
    xxxRemoveShadow((__int64)a1);
  }
LABEL_97:
  if ( *((_QWORD *)a1 + 23) )
  {
    DestroyWindowSmIcon((__int64)a1);
    InternalRemoveProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
    Prop = GetProp(a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v143[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v143;
      v143[1] = Prop;
      _InterlockedAdd((volatile signed __int32 *)(Prop + 8), 1u);
      xxxDDETrackWindowDying(v143, Prop);
      ThreadUnlock1(v57, v56);
    }
    v58 = InternalRemoveProp(a1, (unsigned __int16)atomDDEImp, 1LL);
    v59 = v58;
    if ( v58 )
    {
      *(_WORD *)(v58 + 88) = 0;
      if ( !*(_WORD *)(v58 + 90) )
      {
        v60 = SeTokenType(*(PACCESS_TOKEN *)(v58 + 32));
        v63 = *(void **)(v59 + 32);
        if ( v60 == TokenPrimary || v63 )
          ObfDereferenceObject(v63);
        Win32FreePool(v59, v61, v62);
      }
    }
    InternalRemoveProp(a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  }
  if ( (*((_BYTE *)a1 + 306) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 18LL, *(_QWORD *)a1);
  HandleFullWindowDestruction(a1);
  if ( a1 == (struct tagWND *)gspwndMouseOwner )
    HMAssignmentUnlock(gspwndMouseOwner);
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD **)&gMagnContext, gptiCurrent);
  v65 = ThreadContext;
  if ( ThreadContext )
  {
    LensContext = (_QWORD *)MagpFindLensContext(ThreadContext, a1, 2LL);
    v69 = LensContext;
    if ( LensContext )
    {
      v70 = *LensContext;
      if ( *(_QWORD **)(*LensContext + 8LL) != LensContext || (v71 = (_QWORD *)LensContext[1], (_QWORD *)*v71 != v69) )
        __fastfail(3u);
      *v71 = v70;
      *(_QWORD *)(v70 + 8) = v71;
      if ( (v69[2] & 0x40) != 0 )
      {
        ChangeComposableCursor(0LL);
        *((_DWORD *)v69 + 4) &= ~0x40u;
      }
      if ( (v69[2] & 0x20) == 0 )
      {
        v72 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(v65[2] + 432LL) + 8LL));
        DwmAsyncMagnDestroy(v72);
      }
      if ( (unsigned __int64)(v69[3] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        HMAssignmentUnlock(v69 + 3);
      v73 = v69[29];
      if ( v73 )
        Win32FreePool(v73, v67, v68);
      v74 = v69[32];
      if ( v74 )
        Win32FreePool(v74, v67, v68);
      Win32FreePool(v69, v67, v68);
    }
  }
  HKRemoveMatchingHotkeys(0LL, a1, 0LL, 1LL);
  if ( !gbInSMSCleanup )
    ClearSendMessages();
  if ( (*((_BYTE *)a1 + 66) & 8) != 0 )
    UnsetLayeredWindow(a1);
  if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1);
    SetOrClrWF(0LL, a1, 2818LL, 1LL);
  }
  if ( (*((_DWORD *)a1 + 76) & 4) != 0 )
  {
    UnsetRedirectedWindow(a1);
    *((_DWORD *)a1 + 76) &= ~4u;
  }
  if ( *((_QWORD *)a1 + 22) || (*((_BYTE *)a1 + 57) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    DeleteMaybeSpecialRgn(*((_QWORD *)a1 + 22));
    *((_QWORD *)a1 + 22) = 0LL;
    SetOrClrWF(0LL, a1, 272LL, 1LL);
  }
  if ( (*((_BYTE *)a1 + 57) & 0xA) != 0 )
  {
    SetOrClrWF(0LL, a1, 264LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 784LL) )
  {
    QMsg = FindQMsg(gptiCurrent, (struct tagMLIST *)(gptiCurrent + 784LL), 18, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *(unsigned int *)(QMsg + 32));
  }
  if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
  {
    v76 = *((_QWORD *)a1 + 26);
    if ( v76 )
    {
      if ( UnlockWndMenu(a1) )
        DestroyMenu(v76);
    }
  }
  v77 = *((_QWORD *)a1 + 25);
  if ( v77 )
  {
    if ( v77 == *(_QWORD *)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenu(a1);
    }
    else if ( UnlockWndMenu(a1) )
    {
      DestroyMenu(v77);
    }
  }
  v78 = *((_QWORD *)a1 + 3);
  if ( !v78 )
    goto LABEL_163;
  v79 = *(_QWORD *)(v78 + 56);
  if ( v79 && a1 == *(struct tagWND **)(v79 + 88) )
  {
    v80 = *(_QWORD *)(v78 + 56);
  }
  else
  {
    v80 = *(_QWORD *)(v78 + 64);
    if ( !v80 || a1 != *(struct tagWND **)(v80 + 88) )
      goto LABEL_163;
  }
  UnlockNotifyWindow((struct tagMENU *)v80);
LABEL_163:
  if ( gcountPWO )
  {
    v81 = (EWNDOBJ *)InternalRemoveProp(a1, (unsigned __int16)atomWndObj, 1LL);
    if ( v81 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      GreDeleteWnd(v81);
      --gcountPWO;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 32LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 32LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v82 = (_QWORD *)(gpDispInfo + 16LL);
  while ( 1 )
  {
    v85 = *v82;
    if ( !*v82 )
      break;
    v83 = *(_DWORD *)(v85 + 64);
    if ( (v83 & 0x400800) != 0 )
      goto LABEL_179;
    v84 = *(_QWORD *)(v85 + 16);
    if ( (struct tagWND *)v84 == a1 || *(struct tagWND **)(v85 + 24) == a1 || *(struct tagWND **)(v85 + 32) == a1 )
    {
      if ( (v83 & 2) == 0 )
      {
        if ( v85 != *(_QWORD *)(*(_QWORD *)(v84 + 168) + 24LL) && v85 == *(_QWORD *)(v84 + 312) )
        {
          *(_QWORD *)(v84 + 312) = 0LL;
LABEL_210:
          DestroyCacheDC(v82, *(_QWORD *)(v85 + 8));
          goto LABEL_178;
        }
        if ( (v83 & 0xC0) != 0 )
          DeleteHrgnClip(*v82);
        goto LABEL_177;
      }
      if ( (v83 & 0x1000) != 0 )
      {
        if ( *(_QWORD *)(v85 + 72) == gptiCurrent )
        {
          v97 = ReleaseCacheDC(*(_QWORD *)(v85 + 8), 0LL);
        }
        else
        {
          DestroyCacheDC(v82, *(_QWORD *)(v85 + 8));
          v97 = 1;
        }
      }
      else
      {
        if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v85 + 8), 2147483666LL, 0LL, 1LL) )
        {
LABEL_177:
          InvalidateDCE(v85);
          goto LABEL_178;
        }
        v97 = 2;
      }
      if ( v97 == 1 )
        goto LABEL_178;
      if ( v97 == 2 )
        goto LABEL_210;
      goto LABEL_177;
    }
LABEL_178:
    if ( v85 == *v82 )
LABEL_179:
      v82 = (_QWORD *)v85;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  if ( *((char *)a1 + 56) < 0 )
  {
    v88 = FindSpb(a1);
    FreeSpb(v88);
  }
  v89 = *((_QWORD *)a1 + 27);
  if ( v89 && (*((_BYTE *)a1 + 61) & 8) == 0 && (*((_WORD *)a1 + 41) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(v89);
    *((_QWORD *)a1 + 27) = 0LL;
  }
  v90 = *((_QWORD *)a1 + 28);
  if ( v90 )
  {
    GreDeleteObject(v90);
    *((_QWORD *)a1 + 28) = 0LL;
  }
  v91 = (void *)*((_QWORD *)a1 + 24);
  if ( v91 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v91);
    *((_QWORD *)a1 + 24) = 0LL;
  }
  if ( (*((_DWORD *)a1 + 76) & 0x400) != 0 )
    NotifyOverlayWindow(a1, 0LL);
  v92 = (void *)*((_QWORD *)a1 + 30);
  if ( v92 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v92);
    *((_QWORD *)a1 + 30) = 0LL;
    *((_DWORD *)a1 + 58) = 0;
  }
  v93 = *((_QWORD *)a1 + 36);
  if ( v93 )
  {
    Win32FreePool(v93, v86, v92);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v94 = *((_QWORD *)a1 + 3);
  if ( !v94 || (v95 = *(_QWORD *)(v94 + 8), a1 == *(struct tagWND **)(v95 + 16)) )
  {
    v96 = (char *)a1 + 104;
    HMAssignmentUnlock((char *)a1 + 104);
  }
  else
  {
    *((_QWORD *)&v139 + 1) = *(_QWORD *)(v95 + 16);
    v96 = (char *)a1 + 104;
    *(_QWORD *)&v139 = (char *)a1 + 104;
    v141 = v139;
    HMAssignmentLock(&v141);
  }
  HMAssignmentUnlock((char *)a1 + 112);
  HMAssignmentUnlock((char *)a1 + 120);
  HMAssignmentUnlock((char *)a1 + 256);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v99 = (void *)ReferenceDwmApiPort(v98);
    DwmAsyncOwnerChange(v99, *(_QWORD *)a1, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 400LL), (__int64)a1);
  HMMarkObjectDestroy(a1);
  v100 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  *(_BYTE *)(v100 + gSharedInfo[1] + 25) |= 2u;
  v103 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v100) + 640);
  if ( v103 )
  {
    if ( *(struct tagWND **)(v103 + 64) == a1 )
    {
      HMAssignmentUnlock(v103 + 64);
      *(_QWORD *)(v103 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v103 + 80) == a1 )
      HMAssignmentUnlock(v103 + 80);
    v102 = v103 + 72;
    if ( *(struct tagWND **)(v103 + 72) == a1 )
      HMAssignmentUnlock(v102);
  }
  if ( (*((_DWORD *)a1 + 76) & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  result = ThreadUnlock1(v102, v101);
  if ( result )
  {
    FreeClientOnWindowDestruction((struct _LIST_ENTRY *)a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 23) )
        DeleteProperties((__int64)a1, v105, v107);
      if ( (*((_WORD *)a1 + 41) & 0x3FFF) == 0x2A0 )
      {
        v108 = safe_cast_fnid_to_PSWITCHWND(a1);
        v109 = v108;
        if ( v108 )
        {
          v144 = *(struct tagSwitchWndInfo **)(v108 + 8);
          if ( v144 )
          {
            RemoveSwitchWindowInfo(&v144);
            *(_QWORD *)(v109 + 8) = 0LL;
          }
        }
      }
      v110 = safe_cast_fnid_to_PMENUWND((__int64)a1);
      v113 = v110;
      if ( v110 )
      {
        v111 = *(_QWORD *)(v110 + 16);
        if ( v111 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v134);
          v114 = *(_DWORD **)v134[0];
          if ( (**(_DWORD **)v134[0] & 0x20000000) != 0 )
          {
            *v114 &= ~0x40000000u;
          }
          else if ( v114 == gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
            NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
          }
          else
          {
            v115 = *(_QWORD *)v134[0];
            NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v134[0] + 88LL));
            Win32FreePool(v115, v116, v117);
            *(_QWORD *)(v113 + 16) = 0LL;
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v134);
        }
      }
      v118 = *((_QWORD *)a1 + 49);
      if ( v118 )
      {
        Win32FreePool(v118, v111, v112);
        *((_QWORD *)a1 + 49) = 0LL;
      }
      --*(_DWORD *)(gptiCurrent + 868LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v120 = (void *)ReferenceDwmApiPort(v119);
        DwmAsyncChildDestroy(v120, *(_QWORD *)a1);
      }
      HMAssignmentUnlock(v96);
      v121 = *((_QWORD *)a1 + 3);
      v122 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v125, v124, v126, v127) )
      {
        v128 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v128 )
          v122 = *v128;
      }
      v135 = *(_QWORD *)(v122 + 16);
      *(_QWORD *)(v122 + 16) = &v135;
      v129 = (void *)*((_QWORD *)a1 + 3);
      v136 = v121;
      v137 = (__int64 (*)(void))UserDereferenceObject;
      if ( v129 )
        ObfReferenceObject(v129);
      HMFreeObject(a1);
      result = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(result + 16) = v135;
      if ( v136 )
        return v137();
    }
    else
    {
      v130 = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 20) = 0LL;
      if ( v130 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v130 + 40) + 24LL) + 16LL) + 400LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v106);
      ClassPtr = (__int64 *)GetClassPtr(*(unsigned __int16 *)(gpsi + 894LL), CurrentProcessWin32Process, hModuleWin);
      v133 = *ClassPtr;
      *((_QWORD *)a1 + 21) = *ClassPtr;
      ++*(_DWORD *)(v133 + 96);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      SetOrClrWF(0LL, a1, 544LL, 1LL);
      SetOrClrWF(0LL, a1, 4032LL, 1LL);
      result = SetOrClrWF(1LL, a1, 3840LL, 1LL);
      *((_QWORD *)a1 + 26) = 0LL;
    }
  }
  return result;
}
