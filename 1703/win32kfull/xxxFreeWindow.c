/*
 * XREFs of xxxFreeWindow @ 0x1C005DD44
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005D85C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00144F0 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     CleanupIAMAccess @ 0x1C00153D0 (CleanupIAMAccess.c)
 *     DwmAsyncShellWindowChange @ 0x1C0016728 (DwmAsyncShellWindowChange.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0017DDC (xxxClientFreeWindowClassExtraBytes.c)
 *     DeleteProperties @ 0x1C0019090 (DeleteProperties.c)
 *     DecPaintCount @ 0x1C001C338 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     GetClassPtr @ 0x1C0035DD0 (GetClassPtr.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     FindQMsg @ 0x1C0052B70 (FindQMsg.c)
 *     SfnDWORD @ 0x1C0054BC0 (SfnDWORD.c)
 *     DwmAsyncChildDestroy @ 0x1C005CF28 (DwmAsyncChildDestroy.c)
 *     DwmAsyncOwnerChange @ 0x1C005CFBC (DwmAsyncOwnerChange.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxRemoveShadow @ 0x1C005D088 (xxxRemoveShadow.c)
 *     xxxRemoveFullScreen @ 0x1C005D114 (xxxRemoveFullScreen.c)
 *     MagpFindThreadContext @ 0x1C005D1E4 (MagpFindThreadContext.c)
 *     DestroyWindowsHotKeys @ 0x1C005D200 (DestroyWindowsHotKeys.c)
 *     ClearSendMessages @ 0x1C005D298 (ClearSendMessages.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C005D454 (GreDeleteSpriteOverlapPresent.c)
 *     DereferenceClass @ 0x1C005D600 (DereferenceClass.c)
 *     FreeClientOnWindowDestruction @ 0x1C005D650 (FreeClientOnWindowDestruction.c)
 *     _FindActivationFilterWindow @ 0x1C005D6DC (_FindActivationFilterWindow.c)
 *     UpdatePointerRedirIsAlive @ 0x1C005D710 (UpdatePointerRedirIsAlive.c)
 *     FreeWindowMessageFilter @ 0x1C005D758 (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C005D7A4 (FreeWindowGCData.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005D85C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     xxxResetTooltip @ 0x1C00AFC70 (xxxResetTooltip.c)
 *     FreeTimer @ 0x1C00B2040 (FreeTimer.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00B5DB8 (zzzInputFocusLostWindowEvent.c)
 *     DestroyWindowSmIcon @ 0x1C00C1AA4 (DestroyWindowSmIcon.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C69FC (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00C8944 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     DeleteHrgnClip @ 0x1C00E3280 (DeleteHrgnClip.c)
 *     InvalidateDCE @ 0x1C00E34E4 (InvalidateDCE.c)
 *     SetShellWndManagementWindow @ 0x1C00F67E0 (SetShellWndManagementWindow.c)
 *     IPostQuitMessage @ 0x1C00FE028 (IPostQuitMessage.c)
 *     UnlockWndMenu @ 0x1C010B5A8 (UnlockWndMenu.c)
 *     _DeregisterShellHookWindow @ 0x1C0116A60 (_DeregisterShellHookWindow.c)
 *     RemoveSwitchWindowInfo @ 0x1C013DEB0 (RemoveSwitchWindowInfo.c)
 *     IsSysShadow @ 0x1C013E2CC (IsSysShadow.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ChangeComposableCursor @ 0x1C0195E08 (ChangeComposableCursor.c)
 *     safe_cast_fnid_to_PSWITCHWND @ 0x1C01B2C2C (safe_cast_fnid_to_PSWITCHWND.c)
 *     _NotifyOverlayWindow @ 0x1C01B5980 (_NotifyOverlayWindow.c)
 *     ?UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z @ 0x1C01CD6F4 (-UnlinkAndFreeEntry@@YAXPEAUtagINPUTTRANSFORMENTRY@@@Z.c)
 *     FindSpb @ 0x1C01E3B40 (FindSpb.c)
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
 *     xxxDDETrackWindowDying @ 0x1C01E5FCC (xxxDDETrackWindowDying.c)
 *     xxxDeferredDesktopRotation @ 0x1C01E7BD0 (xxxDeferredDesktopRotation.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01EBBB0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C01ED5BC (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DwmAsyncMagnDestroy @ 0x1C024B1F0 (DwmAsyncMagnDestroy.c)
 *     GreDeleteWnd @ 0x1C02683A0 (GreDeleteWnd.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int16 __fastcall xxxFreeWindow(struct tagWND *a1, struct tagSwitchWndInfo *a2, __int64 a3, int a4)
{
  int v5; // esi
  __int64 v6; // rcx
  struct tagWND **v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 **v15; // rcx
  __int64 v16; // rbx
  void *v17; // rax
  __int64 v18; // rax
  struct tagWND **v19; // rcx
  __int64 v20; // rax
  struct tagWND **v21; // rcx
  struct tagWND **v22; // rax
  struct tagWND **v23; // rcx
  struct tagWND **v24; // rcx
  struct tagWND **v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  struct tagINPUTTRANSFORMENTRY **i; // rbx
  _QWORD *ActivationFilterWindow; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  CompositionObject *v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // r9d
  __int16 v37; // dx
  __int64 v38; // rcx
  char *v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  struct tagWND **v45; // rcx
  struct tagWND **v46; // rcx
  struct tagWND **v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  struct tagWND **v50; // rcx
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct tagSHADOW **v56; // rcx
  struct tagSHADOW *v57; // rbx
  __int64 Prop; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rbx
  TOKEN_TYPE v63; // eax
  void *v64; // rcx
  _QWORD *ThreadContext; // rax
  _QWORD *v66; // rbx
  __int64 LensContext; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rsi
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  void *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  _QWORD *v77; // rbx
  struct tagTIMER *v78; // rcx
  __int64 *QMsg; // rax
  struct tagMENU *v80; // rbx
  char *v81; // rdx
  struct tagMENU *v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  EWNDOBJ *v86; // rbx
  __int64 v87; // rcx
  __int64 *v88; // rsi
  __int64 v89; // rbx
  int v90; // edx
  __int64 v91; // rcx
  __int64 Spb; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rcx
  void *v96; // r8
  void *v97; // r8
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  char *v101; // rsi
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  void *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rbx
  __int64 v120; // rdx
  __int64 v121; // rcx
  _QWORD *v122; // rax
  _QWORD *v123; // rdx
  _QWORD *v124; // r8
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  void *v130; // rax
  __int64 v131; // rbx
  __int64 v132; // rsi
  __int64 *ThreadWin32Thread; // rax
  void *v134; // rcx
  __int64 v135; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 *ClassPtr; // rax
  __int64 v138; // rcx
  _QWORD v140[4]; // [rsp+48h] [rbp-79h] BYREF
  __int128 v141; // [rsp+68h] [rbp-59h]
  __int128 v142; // [rsp+78h] [rbp-49h]
  __int128 v143; // [rsp+88h] [rbp-39h] BYREF
  __int128 v144; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v145[3]; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD v146[3]; // [rsp+C0h] [rbp-1h] BYREF
  _QWORD v147[4]; // [rsp+D8h] [rbp+17h] BYREF
  struct tagSwitchWndInfo *v148; // [rsp+130h] [rbp+6Fh] BYREF

  v148 = a2;
  v5 = 0;
  v6 = *((_QWORD *)a1 + 3);
  if ( !v6 )
    goto LABEL_28;
  v7 = *(struct tagWND ***)(v6 + 8);
  if ( a1 == v7[20] )
  {
    CleanupIAMAccess((struct tagDESKTOP *)v6);
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
    *(_QWORD *)(*(_QWORD *)v8 + 24LL) = 0LL;
    HMAssignmentUnlock(v8 + 160);
    v9 = *((_QWORD *)a1 + 3);
    v10 = gaptiShellMiP;
    v11 = 6LL;
    do
    {
      if ( *v10 && *(_QWORD *)(*v10 + 408LL) == v9 )
        *v10 = 0LL;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v15 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 8LL);
      v16 = **v15;
      v17 = (void *)ReferenceDwmApiPort(v15, v12, v13, v14);
      DwmAsyncShellWindowChange(v17, 0LL, v16);
    }
    v7 = *(struct tagWND ***)(*((_QWORD *)a1 + 3) + 8LL);
    v5 = (*((unsigned __int8 *)*v7 + 52) >> 1) & 1;
  }
  if ( v7[22] == a1 )
    HMAssignmentUnlock(v7 + 22);
  v18 = *((_QWORD *)a1 + 3);
  v19 = (struct tagWND **)(*(_QWORD *)(v18 + 8) + 184LL);
  if ( *v19 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v18 + 8) + 32LL) = 0LL;
    HMAssignmentUnlock(v19);
  }
  v20 = *((_QWORD *)a1 + 3);
  v21 = (struct tagWND **)(*(_QWORD *)(v20 + 8) + 192LL);
  if ( *v21 == a1 )
  {
    *(_QWORD *)(**(_QWORD **)(v20 + 8) + 40LL) = 0LL;
    HMAssignmentUnlock(v21);
  }
  v22 = (struct tagWND **)*((_QWORD *)a1 + 3);
  v23 = v22 + 38;
  if ( v22[38] == a1 )
  {
LABEL_35:
    HMAssignmentUnlock(v23);
    goto LABEL_20;
  }
  if ( v22[41] != a1 )
  {
    v23 = v22 + 37;
    if ( a1 != v22[37] )
    {
      ActivationFilterWindow = FindActivationFilterWindow((__int64)a1);
      v30 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v31 = *ActivationFilterWindow;
        v32 = (_QWORD *)ActivationFilterWindow[1];
        if ( *(_QWORD **)(v31 + 8) != v30 || (_QWORD *)*v32 != v30 )
          __fastfail(3u);
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        HMAssignmentUnlock(v30 + 2);
        Win32FreePool(v30);
      }
      goto LABEL_20;
    }
    goto LABEL_35;
  }
  SetShellWndManagementWindow(*((_QWORD *)a1 + 3), 0LL);
LABEL_20:
  v24 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 248LL);
  if ( *v24 == a1 )
    HMAssignmentUnlock(v24);
  UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
  v25 = (struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 224LL);
  if ( *v25 == a1 )
    HMAssignmentUnlock(v25);
  if ( (*((_BYTE *)a1 + 63) & 0x40) != 0 )
    DeregisterShellHookWindow(a1);
  if ( (*((_BYTE *)a1 + 56) & 0x20) != 0 )
  {
    v26 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
    --*(_DWORD *)(v26 + 48);
    SetOrClrWF(0, a1, 0x20u, 1);
  }
LABEL_28:
  if ( *((_DWORD *)a1 + 84) )
    ScrubDelegatedWindow(a1);
  v27 = *((_QWORD *)a1 + 44);
  if ( v27 )
  {
    for ( i = (struct tagINPUTTRANSFORMENTRY **)(v27 + 8); *i != (struct tagINPUTTRANSFORMENTRY *)i; UnlinkAndFreeEntry(*i) )
      ;
    v33 = *(CompositionObject **)(*((_QWORD *)a1 + 44) + 96LL);
    if ( v33 )
    {
      CompositionObject::Release(v33);
      *(_QWORD *)(*((_QWORD *)a1 + 44) + 96LL) = 0LL;
    }
    Win32FreePool(*((_QWORD *)a1 + 44));
    *((_QWORD *)a1 + 44) = 0LL;
  }
  FreeWindowMessageFilter(a1, (unsigned __int64)a2, a3, a4);
  FreeWindowGCData(a1, v34, v35, v36);
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
    HMChangeOwnerThread(a1, gptiCurrent);
  if ( v5 )
    xxxDeferredDesktopRotation();
  xxxFW_DestroyAllChildren(a1);
  xxxSendMessage((int)a1, 130, 0, 0);
  xxxRemoveFullScreen((__int64)a1);
  v37 = *((_WORD *)a1 + 41);
  v38 = 0x3FFFLL;
  LOWORD(v38) = v37 & 0x3FFF;
  if ( (v37 & 0x3FFFu) >= 0x29A && (v37 & 0x4000) == 0 )
  {
    if ( (unsigned __int16)v38 > 0x2A0u )
    {
      if ( (unsigned __int16)v38 <= 0x2AAu && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
        SfnDWORD((__int64 *)a1, 0x70u, 0LL, 0LL, 0LL, *(_QWORD *)(gpsi + 8LL * ((unsigned __int16)v38 - 673) + 760));
    }
    else
    {
      ((void (__fastcall *)(struct tagWND *, __int64, _QWORD))mpFnidPfn[((_BYTE)v37 + 6) & 0x1F])(a1, 112LL, 0LL);
    }
    *((_WORD *)a1 + 41) |= 0x4000u;
  }
  v39 = (char *)*((_QWORD *)a1 + 48);
  *((_WORD *)a1 + 41) |= 0x8000u;
  if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v39);
    }
    else if ( (*(_DWORD *)(PsGetCurrentProcess(v38) + 772) & 0x40000008) == 0
           && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
    {
      xxxClientFreeWindowClassExtraBytes(*((_QWORD *)a1 + 48), v40, v41, v42);
    }
    *((_QWORD *)a1 + 48) = 0LL;
  }
  v43 = *((_QWORD *)a1 + 15);
  if ( v43 )
  {
    v44 = v43 + 256;
    if ( *(struct tagWND **)(v43 + 256) == a1 )
    {
      if ( *(char *)(v43 + 59) < 0 || *(char *)(v43 + 60) < 0 )
        v43 = 0LL;
      *(_QWORD *)&v141 = v44;
      *((_QWORD *)&v141 + 1) = v43;
      v143 = v141;
      HMAssignmentLock(&v143);
    }
  }
  if ( (*gpsi & 4) != 0 && a1 == *(struct tagWND **)(gptiCurrent + 696LL) )
    HMAssignmentUnlock(gptiCurrent + 696LL);
  if ( *(struct tagWND **)(gptiCurrent + 1264LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1264LL);
  if ( *(struct tagWND **)(gptiCurrent + 1336LL) == a1 )
    HMAssignmentUnlock(gptiCurrent + 1336LL);
  v45 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
  if ( a1 == *v45 )
  {
    HMAssignmentUnlock(v45);
    if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
      zzzInputFocusLostWindowEvent(a1, 10LL);
  }
  v46 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL);
  if ( a1 == *v46 )
    HMAssignmentUnlock(v46);
  v47 = (struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  if ( a1 == *v47 )
    HMAssignmentUnlock(v47);
  v48 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( a1 == *(struct tagWND **)(v48 + 104) )
  {
    HMAssignmentUnlock(v48 + 104);
    *(_BYTE *)(v48 + 112) = 0;
  }
  if ( a1 == gspwndActivate )
    HMAssignmentUnlock(&gspwndActivate);
  if ( a1 == (struct tagWND *)gspwndBSDR )
    HMAssignmentUnlock(&gspwndBSDR);
  v49 = *((_QWORD *)a1 + 3);
  if ( v49 )
  {
    if ( a1 == *(struct tagWND **)(v49 + 88) )
      HMAssignmentUnlock(v49 + 88);
    v50 = (struct tagWND **)(*((_QWORD *)a1 + 3) + 96LL);
    if ( a1 == *v50 )
      HMAssignmentUnlock(v50);
    if ( a1 == *(struct tagWND **)(*((_QWORD *)a1 + 3) + 184LL) )
    {
      xxxNotifyShellWindowBorderExitIfEntered(a1);
      v51 = *((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(v51 + 48) & 0x200) != 0 )
      {
        v52 = (__int64 *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v51 + 112));
        if ( v52 )
        {
          v53 = *v52;
          if ( *v52 )
          {
            v145[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v145;
            v145[1] = v53;
            ++*(_DWORD *)(v53 + 8);
            xxxResetTooltip(v52);
            ThreadUnlock1(v55, v54);
          }
        }
      }
      HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 184LL);
      *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFA3F;
    }
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
  {
    v56 = &gpshadowFirst;
    if ( gpshadowFirst )
    {
      while ( 1 )
      {
        v57 = *v56;
        if ( *((struct tagWND **)*v56 + 1) == a1 )
          break;
        v56 = (struct tagSHADOW **)((char *)v57 + 16);
        if ( !*((_QWORD *)v57 + 2) )
          goto LABEL_109;
      }
      *v56 = (struct tagSHADOW *)*((_QWORD *)v57 + 2);
      HMAssignmentUnlock(v57);
      HMAssignmentUnlock((char *)v57 + 8);
      Win32FreePool(v57);
    }
  }
  else
  {
    xxxRemoveShadow((__int64)a1);
  }
LABEL_109:
  if ( *((_QWORD *)a1 + 23) )
  {
    DestroyWindowSmIcon(a1);
    InternalRemoveProp(a1, *(unsigned __int16 *)(gpsi + 1358LL), 1LL);
    Prop = GetProp(a1, (unsigned __int16)atomDDETrack, 1LL);
    if ( Prop )
    {
      v146[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v146;
      v146[1] = Prop;
      ++*(_DWORD *)(Prop + 8);
      xxxDDETrackWindowDying(v146, Prop);
      ThreadUnlock1(v60, v59);
    }
    v61 = InternalRemoveProp(a1, (unsigned __int16)atomDDEImp, 1LL);
    v62 = v61;
    if ( v61 )
    {
      *(_WORD *)(v61 + 88) = 0;
      if ( !*(_WORD *)(v61 + 90) )
      {
        v63 = SeTokenType(*(PACCESS_TOKEN *)(v61 + 32));
        v64 = *(void **)(v62 + 32);
        if ( v63 == TokenPrimary || v64 )
          ObfDereferenceObject(v64);
        Win32FreePool(v62);
      }
    }
    InternalRemoveProp(a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  }
  if ( (*((_BYTE *)a1 + 306) & 2) != 0 )
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 18LL, *(_QWORD *)a1);
  HandleFullWindowDestruction(a1);
  if ( a1 == (struct tagWND *)gspwndMouseOwner )
    HMAssignmentUnlock(gspwndMouseOwner);
  if ( a1 == (struct tagWND *)gspwndCursor )
    HMAssignmentUnlock(&gspwndCursor);
  if ( a1 == (struct tagWND *)gspwndCursorNC )
    HMAssignmentUnlock(&gspwndCursorNC);
  ThreadContext = MagpFindThreadContext(*(_QWORD **)&gMagnContext, gptiCurrent);
  v66 = ThreadContext;
  if ( ThreadContext )
  {
    LensContext = MagpFindLensContext(ThreadContext, a1, 2LL);
    v70 = LensContext;
    if ( LensContext )
    {
      v71 = *(_QWORD *)LensContext;
      v72 = *(_QWORD **)(LensContext + 8);
      if ( *(_QWORD *)(*(_QWORD *)LensContext + 8LL) != LensContext || *v72 != LensContext )
        __fastfail(3u);
      *v72 = v71;
      *(_QWORD *)(v71 + 8) = v72;
      if ( (*(_DWORD *)(LensContext + 16) & 0x40) != 0 )
      {
        ChangeComposableCursor(0LL);
        *(_DWORD *)(v70 + 16) &= ~0x40u;
      }
      if ( (*(_DWORD *)(v70 + 16) & 0x20) == 0 )
      {
        v73 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(v66[2] + 408LL) + 8LL), v71, v68, v69);
        DwmAsyncMagnDestroy(v73);
      }
      if ( (unsigned __int64)(*(_QWORD *)(v70 + 24) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        HMAssignmentUnlock(v70 + 24);
      v74 = *(_QWORD *)(v70 + 232);
      if ( v74 )
        Win32FreePool(v74);
      v75 = *(_QWORD *)(v70 + 256);
      if ( v75 )
        Win32FreePool(v75);
      Win32FreePool(v70);
    }
  }
  v76 = (_QWORD *)gtmrListHead[0];
  v77 = (_QWORD *)gtmrListHead[0];
  while ( v77 != v76 )
  {
    v78 = (struct tagTIMER *)(v77 - 9);
    v77 = (_QWORD *)*v77;
    if ( *((struct tagWND **)v78 + 11) == a1 )
    {
      FreeTimer(v78);
      v76 = (_QWORD *)gtmrListHead[0];
    }
  }
  DestroyWindowsHotKeys((__int64)a1);
  if ( !gbInSMSCleanup )
    ClearSendMessages((__int64)a1);
  if ( (*((_BYTE *)a1 + 66) & 8) != 0 )
    UnsetLayeredWindow(a1, 1);
  if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1);
    SetOrClrWF(0, a1, 0xB02u, 1);
  }
  if ( (*((_DWORD *)a1 + 76) & 4) != 0 )
  {
    UnsetRedirectedWindow(a1);
    *((_DWORD *)a1 + 76) &= ~4u;
  }
  if ( *((_QWORD *)a1 + 22) || (*((_BYTE *)a1 + 57) & 0x10) != 0 )
  {
    DecPaintCount((__int64)a1);
    DeleteMaybeSpecialRgn(*((_QWORD *)a1 + 22));
    *((_QWORD *)a1 + 22) = 0LL;
    SetOrClrWF(0, a1, 0x110u, 1);
  }
  if ( (*((_BYTE *)a1 + 57) & 0xA) != 0 )
  {
    SetOrClrWF(0, a1, 0x108u, 1);
    SetOrClrWF(0, a1, 0x102u, 1);
  }
  ClearHungFlag(a1);
  ClearHungFlag(a1);
  if ( *(_QWORD *)(gptiCurrent + 728LL) )
  {
    QMsg = FindQMsg(gptiCurrent, (__int64 **)(gptiCurrent + 728LL), a1, 0x12u, 0x12u, 1);
    if ( QMsg )
      IPostQuitMessage(gptiCurrent, *((unsigned int *)QMsg + 8));
  }
  if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
  {
    v80 = (struct tagMENU *)*((_QWORD *)a1 + 26);
    if ( v80 )
    {
      if ( UnlockWndMenu(a1, (char *)a1 + 208) )
        DestroyMenu(v80);
    }
  }
  v81 = (char *)a1 + 200;
  v82 = (struct tagMENU *)*((_QWORD *)a1 + 25);
  if ( v82 )
  {
    if ( v82 == *(struct tagMENU **)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenu(a1, v81);
    }
    else if ( UnlockWndMenu(a1, v81) )
    {
      DestroyMenu(v82);
    }
  }
  v83 = *((_QWORD *)a1 + 3);
  if ( v83 )
  {
    v84 = *(_QWORD *)(v83 + 56);
    if ( v84 && a1 == *(struct tagWND **)(v84 + 88) )
    {
      v85 = *(_QWORD *)(v83 + 56);
LABEL_178:
      UnlockNotifyWindow((struct tagMENU *)v85);
      goto LABEL_179;
    }
    v85 = *(_QWORD *)(v83 + 64);
    if ( v85 && a1 == *(struct tagWND **)(v85 + 88) )
      goto LABEL_178;
  }
LABEL_179:
  if ( gcountPWO )
  {
    v86 = (EWNDOBJ *)InternalRemoveProp(a1, (unsigned __int16)atomWndObj, 1LL);
    if ( v86 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      GreDeleteWnd(v86);
      --gcountPWO;
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    }
  }
  GreLockSprite(*(_QWORD *)(gpDispInfo + 32LL));
  GreDeleteSpriteOverlapPresent(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1);
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 32LL));
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v87 = gpDispInfo;
  v88 = (__int64 *)(gpDispInfo + 16LL);
  v89 = *(_QWORD *)(gpDispInfo + 16LL);
  if ( v89 )
  {
    while ( 1 )
    {
      v90 = *(_DWORD *)(v89 + 64);
      if ( (v90 & 0x400800) != 0 )
      {
LABEL_195:
        v88 = (__int64 *)v89;
        goto LABEL_196;
      }
      v91 = *(_QWORD *)(v89 + 16);
      if ( (struct tagWND *)v91 == a1 || *(struct tagWND **)(v89 + 24) == a1 || *(struct tagWND **)(v89 + 32) == a1 )
      {
        if ( (v90 & 2) == 0 )
        {
          if ( v89 == *(_QWORD *)(*(_QWORD *)(v91 + 168) + 24LL) || v89 != *(_QWORD *)(v91 + 312) )
          {
            if ( (v90 & 0xC0) != 0 )
              DeleteHrgnClip(v89);
LABEL_193:
            InvalidateDCE(v89);
            goto LABEL_194;
          }
          *(_QWORD *)(v91 + 312) = 0LL;
          goto LABEL_227;
        }
        if ( (v90 & 0x1000) != 0 )
        {
          if ( *(_QWORD *)(v89 + 72) == gptiCurrent )
          {
            v102 = ReleaseCacheDC(*(_QWORD *)(v89 + 8), 0LL);
          }
          else
          {
            DestroyCacheDC(v88, *(_QWORD *)(v89 + 8));
            v102 = 1;
          }
        }
        else
        {
          if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v89 + 8), 2147483666LL, 0LL, 1LL) )
            goto LABEL_193;
          v102 = 2;
        }
        if ( v102 != 1 )
        {
          if ( v102 != 2 )
            goto LABEL_193;
LABEL_227:
          DestroyCacheDC(v88, *(_QWORD *)(v89 + 8));
        }
      }
LABEL_194:
      if ( v89 == *v88 )
        goto LABEL_195;
LABEL_196:
      v89 = *v88;
      if ( !*v88 )
      {
        v87 = gpDispInfo;
        break;
      }
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v87 + 32LL));
  if ( a1 == gspwndLockUpdate )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    HMAssignmentUnlock(&gspwndLockUpdate);
    gptiLockUpdate = 0LL;
  }
  if ( *((char *)a1 + 56) < 0 )
  {
    v93 = FindSpb(a1);
    FreeSpb(v93);
  }
  v94 = *((_QWORD *)a1 + 27);
  if ( v94 && (*((_BYTE *)a1 + 61) & 8) == 0 && (*((_WORD *)a1 + 41) & 0x3FFF) != 0x29D )
  {
    GreDeleteObject(v94);
    *((_QWORD *)a1 + 27) = 0LL;
  }
  v95 = *((_QWORD *)a1 + 28);
  if ( v95 )
  {
    GreDeleteObject(v95);
    *((_QWORD *)a1 + 28) = 0LL;
  }
  v96 = (void *)*((_QWORD *)a1 + 24);
  if ( v96 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v96);
    *((_QWORD *)a1 + 24) = 0LL;
  }
  if ( (*((_DWORD *)a1 + 76) & 0x400) != 0 )
    NotifyOverlayWindow(a1, 0LL);
  v97 = (void *)*((_QWORD *)a1 + 30);
  if ( v97 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v97);
    *((_QWORD *)a1 + 30) = 0LL;
    *((_DWORD *)a1 + 58) = 0;
  }
  v98 = *((_QWORD *)a1 + 36);
  if ( v98 )
  {
    Win32FreePool(v98);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v99 = *((_QWORD *)a1 + 3);
  if ( !v99 || (v100 = *(_QWORD *)(v99 + 8), a1 == *(struct tagWND **)(v100 + 16)) )
  {
    v101 = (char *)a1 + 104;
    HMAssignmentUnlock((char *)a1 + 104);
  }
  else
  {
    *((_QWORD *)&v142 + 1) = *(_QWORD *)(v100 + 16);
    v101 = (char *)a1 + 104;
    *(_QWORD *)&v142 = (char *)a1 + 104;
    v144 = v142;
    HMAssignmentLock(&v144);
  }
  HMAssignmentUnlock((char *)a1 + 112);
  HMAssignmentUnlock((char *)a1 + 120);
  HMAssignmentUnlock((char *)a1 + 256);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v107 = (void *)ReferenceDwmApiPort(v104, v103, v105, v106);
    DwmAsyncOwnerChange(v107, *(_QWORD *)a1, 0LL);
  }
  DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL), (__int64)a1);
  HMMarkObjectDestroy(a1);
  v108 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  *(_BYTE *)(v108 + gSharedInfo[1] + 25) |= 2u;
  v112 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v108, v109) + 632);
  if ( v112 )
  {
    if ( *(struct tagWND **)(v112 + 64) == a1 )
    {
      HMAssignmentUnlock(v112 + 64);
      *(_QWORD *)(v112 + 48) = 0LL;
    }
    if ( *(struct tagWND **)(v112 + 80) == a1 )
      HMAssignmentUnlock(v112 + 80);
    v111 = v112 + 72;
    if ( *(struct tagWND **)(v112 + 72) == a1 )
      HMAssignmentUnlock(v111);
  }
  if ( (*((_DWORD *)a1 + 76) & 1) != 0 )
    _RemoveClipboardFormatListener(a1);
  v113 = ThreadUnlock1(v111, v110);
  if ( v113 )
  {
    FreeClientOnWindowDestruction((struct _LIST_ENTRY *)a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      if ( *((_QWORD *)a1 + 23) )
        DeleteProperties((__int64)a1);
      if ( (*((_WORD *)a1 + 41) & 0x3FFF) == 0x2A0 )
      {
        v116 = safe_cast_fnid_to_PSWITCHWND(a1);
        v117 = v116;
        if ( v116 )
        {
          v148 = *(struct tagSwitchWndInfo **)(v116 + 8);
          if ( v148 )
          {
            RemoveSwitchWindowInfo(&v148);
            *(_QWORD *)(v117 + 8) = 0LL;
          }
        }
      }
      v118 = safe_cast_fnid_to_PMENUWND((__int64)a1);
      v119 = v118;
      if ( v118 )
      {
        v120 = *(_QWORD *)(v118 + 16);
        if ( v120 )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(v147, v120);
          v121 = v147[0];
          if ( (*(_DWORD *)v147[0] & 0x20000000) != 0 )
          {
            *(_DWORD *)v147[0] &= ~0x40000000u;
          }
          else if ( (void *const)v147[0] == gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
          }
          else
          {
            v122 = (_QWORD *)(v147[0] + 88LL);
            while ( (_QWORD *)*v122 != v122 )
            {
              v123 = *(_QWORD **)(v121 + 96);
              v124 = (_QWORD *)v123[1];
              if ( (_QWORD *)*v123 != v122 || (_QWORD *)*v124 != v123 )
                __fastfail(3u);
              *(_QWORD *)(v121 + 96) = v124;
              *v124 = v122;
              *(v123 - 1) = 0LL;
            }
            Win32FreePool(v121);
            *(_QWORD *)(v119 + 16) = 0LL;
          }
          SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v147);
        }
      }
      v125 = *((_QWORD *)a1 + 49);
      if ( v125 )
      {
        Win32FreePool(v125);
        *((_QWORD *)a1 + 49) = 0LL;
      }
      --*(_DWORD *)(gptiCurrent + 780LL);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v130 = (void *)ReferenceDwmApiPort(v127, v126, v128, v129);
        DwmAsyncChildDestroy(v130, *(_QWORD *)a1);
      }
      HMAssignmentUnlock(v101);
      v131 = 0LL;
      v132 = *((_QWORD *)a1 + 3);
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v131 = *ThreadWin32Thread;
      v140[0] = *(_QWORD *)(v131 + 16);
      *(_QWORD *)(v131 + 16) = v140;
      v134 = (void *)*((_QWORD *)a1 + 3);
      v140[1] = v132;
      v140[2] = UserDereferenceObject;
      if ( v134 )
        ObfReferenceObject(v134);
      HMFreeObject(a1);
      LOWORD(v113) = PopAndFreeW32ThreadLock(v140);
    }
    else
    {
      v135 = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 20) = 0LL;
      if ( v135 )
        CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v135 + 40) + 24LL) + 16LL) + 376LL);
      else
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v115, v114);
      ClassPtr = (__int64 *)GetClassPtr(*(unsigned __int16 *)(gpsi + 894LL), CurrentProcessWin32Process, hModuleWin);
      v138 = *ClassPtr;
      *((_QWORD *)a1 + 21) = *ClassPtr;
      ++*(_DWORD *)(v138 + 88);
      SetOrClrWF(1, a1, 0x204u, 1);
      SetOrClrWF(0, a1, 0x220u, 1);
      SetOrClrWF(0, a1, 0xFC0u, 1);
      LOWORD(v113) = SetOrClrWF(1, a1, 0xF00u, 1);
      *((_QWORD *)a1 + 26) = 0LL;
    }
  }
  return v113;
}
