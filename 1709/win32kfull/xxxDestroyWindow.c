/*
 * XREFs of xxxDestroyWindow @ 0x1C005F7A0
 * Callers:
 *     NtUserDestroyWindow @ 0x1C005DBA0 (NtUserDestroyWindow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C005ED5C (xxxDW_DestroyOwnedWindows.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxRemoveShadow @ 0x1C0060220 (xxxRemoveShadow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00CD8AC (xxxCreateDefaultImeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxCancelCoolSwitch @ 0x1C0115384 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C0115B10 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C01189A4 (xxxCsDdeInitialize.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011B920 (xxxCleanupMotherDesktopWindow.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0121820 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C0214754 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     UpdateGlobalInputSinkHint @ 0x1C00088E4 (UpdateGlobalInputSinkHint.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C000C188 (DisassociateShellFrameAppThreads2.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C005ED5C (xxxDW_DestroyOwnedWindows.c)
 *     DWP_SetHotKey @ 0x1C005EE8C (DWP_SetHotKey.c)
 *     xxxDW_SendDestroyMessages @ 0x1C005F5B0 (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C0060008 (IsWindowGhosted.c)
 *     IsMotherDesktopWindow @ 0x1C0060098 (IsMotherDesktopWindow.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     UnlinkWindow @ 0x1C0062338 (UnlinkWindow.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0072D6C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C00849D4 (zzzInternalDestroyCaret.c)
 *     xxxFocusSetInputContext @ 0x1C008585C (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0085FF4 (zzzInputFocusLostWindowEvent.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     xxxEnableWindow @ 0x1C009DF50 (xxxEnableWindow.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C00CD6D0 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00CD740 (zzzImeCanDestroyDefIME.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0124C98 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C013420C (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C013FA7C (xxxHandleDestroyGhostWindow.c)
 *     QueueShutdownData @ 0x1C0141F74 (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01C00AC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F6A78 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C02044E0 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1C0214754 (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  char v6; // dl
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  ULONG_PTR v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 i; // rax
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  volatile signed __int32 *v28; // rax
  struct tagWND *v29; // rcx
  __int64 v30; // r8
  __int64 j; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 k; // rcx
  __int64 v45; // rcx
  bool v46; // zf
  int v47; // ecx
  int CanDestroyDefIME; // ebx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  struct tagMENUSTATE *v54; // [rsp+58h] [rbp-51h] BYREF
  __int128 v55; // [rsp+60h] [rbp-49h]
  __int128 v56; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v57[3]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v58[3]; // [rsp+98h] [rbp-11h] BYREF
  _QWORD v59[3]; // [rsp+B0h] [rbp+7h] BYREF
  _QWORD v60[7]; // [rsp+C8h] [rbp+1Fh] BYREF
  int v61; // [rsp+110h] [rbp+67h]
  __int64 v62; // [rsp+118h] [rbp+6Fh]
  unsigned int v63; // [rsp+118h] [rbp+6Fh]
  __int64 v64; // [rsp+118h] [rbp+6Fh]
  int v65; // [rsp+120h] [rbp+77h]
  struct tagWND *v66; // [rsp+128h] [rbp+7Fh]

  v3 = 0;
  v65 = 0;
  v5 = gptiCurrent;
  v57[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v57;
  v57[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v6 = *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*a1 + gSharedInfo[1] + 25LL);
  v7 = v6 & 1;
  v61 = v7;
  if ( gptiCurrent != *((_QWORD *)a1 + 2) )
  {
    if ( (v6 & 1) == 0 || (v6 & 2) == 0 )
    {
      UserSetLastError(5LL);
LABEL_17:
      if ( v61 )
      {
        v11 = v65 | *(_DWORD *)(gptiCurrent + 464LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 464LL) = v11;
      }
      LOBYTE(v3) = ThreadUnlock1(v11, v10) == 0;
      return v3;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
    v7 = v61;
  }
  if ( v7 )
  {
    a3 = *(_DWORD *)(gptiCurrent + 464LL) & 0x10000000;
    v65 = *(_DWORD *)(gptiCurrent + 464LL) & 0x10000000;
    *(_DWORD *)(gptiCurrent + 464LL) |= 0x10000000u;
  }
  v8 = *((_DWORD *)a1 + 76);
  if ( (v8 & 0x4000) != 0 )
  {
    v9 = *(_QWORD *)a1;
    *((_DWORD *)a1 + 76) = v8 & 0xFFFFBFFF;
    QueueShutdownData(v9, 0LL);
  }
  if ( !v61 && (*(_DWORD *)(gptiCurrent + 464LL) & 1) == 0 )
  {
    if ( (unsigned int)WantImeWindow(*((struct tagWND **)a1 + 13), (struct tagWND *)a1) )
      xxxCallCtfHook(5, 4, *(_QWORD *)a1, 0LL);
    if ( ((*(_BYTE *)(gptiCurrent + 656LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4LL, *(_QWORD *)a1, 0LL, 5LL) )
    {
      goto LABEL_17;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 144LL, 0LL, 0LL);
  }
  v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 584LL);
  if ( v13 )
  {
    if ( a1 == *(volatile signed __int32 **)(*(_QWORD *)v13 + 8LL) )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 584LL);
      do
      {
        *(_DWORD *)(v13 + 8) &= ~4u;
        v13 = *(_QWORD *)(v13 + 48);
      }
      while ( v13 );
      if ( (*(_DWORD *)(v14 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v54,
          (struct tagMENUSTATE *)v14);
        xxxEndMenu(v15);
        if ( v54 )
          xxxUnlockMenuStateInternal(v54, 0);
      }
    }
  }
  if ( ghwndSwitch == *(_QWORD *)a1 )
    ghwndSwitch = 0LL;
  if ( (*((_BYTE *)a1 + 71) & 0x40) == 0 && !*((_QWORD *)a1 + 15) && (*((_BYTE *)a1 + 58) & 0x20) != 0 )
    xxxFlushPalette(a1, v13, a3);
  v16 = *((_QWORD *)a1 + 21);
  if ( *(_WORD *)(v16 + 8) != *(_WORD *)(gpsi + 882LL) && (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
  {
    v17 = *((_QWORD *)a1 + 15);
    if ( v17 )
    {
      v16 = *(_QWORD *)(v17 + 16);
      v18 = *((_QWORD *)a1 + 2);
      if ( v16 != v18 )
        zzzAttachThreadInput(v18, v16, 0LL);
    }
  }
  if ( (*((_BYTE *)a1 + 71) & 0x40) != 0 && (a1[16] & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v19 = *((_QWORD *)a1 + 13);
    if ( v19 )
    {
      v58[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v58;
      v58[1] = v19;
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v20 = *((_QWORD *)a1 + 13);
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v20, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v22, v21);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1, v16, a3) )
    SetOrClrWF(1LL, a1, 1152LL, 1LL);
  if ( (unsigned int)IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*((_WORD *)a1 + 41) & 0x3FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 16LL) + 112LL); ; i = *(_QWORD *)(i + 88) )
    {
      v62 = i;
      if ( !i )
        break;
      if ( *(volatile signed __int32 **)(i + 120) == a1 && gptiCurrent != *(_QWORD *)(i + 16) )
      {
        PostUnownedNotification((struct tagWND *)i);
        i = v62;
      }
    }
  }
  v24 = *((_BYTE *)a1 + 71);
  if ( (v24 & 0x10) != 0 )
  {
    if ( (v24 & 0x40) != 0 )
      xxxShowWindowEx((struct tagWND *)a1);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0, 0, (v61 << 13) + 151);
    if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
    {
      SetVisible((struct tagWND *)a1);
      v25 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( v25 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v25 + 8) + 16LL) )
        {
          v26 = *((_QWORD *)a1 + 13);
          if ( v26 )
            zzzLockDisplayAreaAndInvalidateDCCache(v26, 16LL);
          xxxRedrawWindow(0LL);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow(a1) && (*((_WORD *)a1 + 41) & 0x3FFF) != 0x2AA )
  {
    PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
  }
  if ( (*((_BYTE *)a1 + 71) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows((__int64)a1);
    DWP_SetHotKey((struct tagWND *)a1, 0);
  }
  if ( !v61 )
  {
    v27 = *(_QWORD *)(gptiCurrent + 408LL);
    v28 = *(volatile signed __int32 **)(v27 + 120);
    if ( a1 == v28 )
    {
      if ( *((char *)a1 + 71) < 0 )
      {
        v29 = (struct tagWND *)*((_QWORD *)a1 + 15);
        v66 = v29;
        if ( v29 )
        {
          v30 = 2LL;
          goto LABEL_82;
        }
      }
    }
    else if ( v28 || gpqForeground != v27 )
    {
      goto LABEL_109;
    }
    v29 = (struct tagWND *)a1;
    v30 = 3LL;
    v66 = (struct tagWND *)a1;
LABEL_82:
    v63 = v30;
    if ( v29 )
    {
      if ( (_DWORD)v30 == 2 && !(unsigned int)IsNonImmersiveBand(v29, 3LL, v30) && *((char *)v29 + 60) < 0 )
      {
        for ( j = *((_QWORD *)v29 + 15); j; j = *(_QWORD *)(j + 120) )
        {
          if ( (*(_BYTE *)(j + 306) & 1) != 0 && *(char *)(j + 60) >= 0 )
          {
            v29 = (struct tagWND *)j;
            v66 = (struct tagWND *)j;
            break;
          }
        }
      }
      v59[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v59;
      v59[1] = v29;
      _InterlockedIncrement((volatile signed __int32 *)v29 + 2);
      if ( (_DWORD)v30 == 2 && (*((_BYTE *)v29 + 306) & 1) != 0 )
      {
        xxxEnableWindow(v29, 1);
        v29 = v66;
      }
      v32 = xxxActivateWindow(v29);
      v34 = v63;
      if ( (!v32 || v63 == 3 && a1 == *(volatile signed __int32 **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL))
        && (v63 == 3 || a1 == *(volatile signed __int32 **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
        v35 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 408LL) + 112LL);
        v37 = v35;
        v38 = gpsi;
        if ( (*gpsi & 4) != 0 && v35 )
        {
          v60[0] = *(_QWORD *)(gptiCurrent + 392LL);
          *(_QWORD *)(gptiCurrent + 392LL) = v60;
          v60[1] = v35;
          _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
          xxxFocusSetInputContext(v35, 0LL, 0LL);
          v37 = ThreadUnlock1(v40, v39);
        }
        v41 = gpqForeground;
        if ( *(_QWORD *)(gptiCurrent + 408LL) == gpqForeground )
        {
          if ( v37 )
            zzzInputFocusLostWindowEvent(v37, 9LL);
          xxxWindowEvent(32773, 0, -4, 0, 0);
          xxxWindowEvent(3, 0, 0, 0, 1);
        }
        zzzInternalDestroyCaret(v41, v38, v36, v37);
      }
      ThreadUnlock1(v34, v33);
    }
  }
LABEL_109:
  v42 = *((_QWORD *)a1 + 15);
  v43 = v42;
  if ( v42 )
  {
    for ( k = *(_QWORD *)(v42 + 120); k; k = *(_QWORD *)(k + 120) )
      v43 = k;
    if ( a1 == *(volatile signed __int32 **)(v43 + 256) )
    {
      if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v43 + gSharedInfo[1] + 25LL) & 1) != 0 )
      {
        HMAssignmentUnlock(v43 + 256);
      }
      else
      {
        *(_QWORD *)&v55 = v43 + 256;
        *((_QWORD *)&v55 + 1) = v42;
        v56 = v55;
        HMAssignmentLock(&v56);
      }
    }
  }
  if ( !v61 )
  {
    if ( *((char *)a1 + 59) >= 0 )
      xxxWindowEvent(32769, (_DWORD)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages((__int64)a1);
  }
  if ( (*gpsi & 4) == 0 )
    goto LABEL_135;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 1) != 0 )
    goto LABEL_135;
  if ( !*(_QWORD *)(gptiCurrent + 752LL) )
    goto LABEL_135;
  v45 = *((_QWORD *)a1 + 21);
  if ( (*(_BYTE *)(v45 + 102) & 1) != 0 )
    goto LABEL_135;
  v46 = *(_WORD *)(v45 + 8) == *(_WORD *)(gpsi + 882LL);
  v47 = v61;
  if ( v46 || v61 )
    goto LABEL_136;
  if ( (*((_BYTE *)a1 + 71) & 0x40) == 0 )
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD *)(gptiCurrent + 752LL), a1);
    zzzEndDeferWinEventNotify();
    v46 = CanDestroyDefIME == 0;
    v5 = gptiCurrent;
    if ( v46 )
      goto LABEL_135;
    v49 = *(_QWORD *)(gptiCurrent + 752LL);
    if ( !v49 )
      goto LABEL_135;
    goto LABEL_134;
  }
  if ( !*((_QWORD *)a1 + 13) )
    goto LABEL_136;
  if ( (unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 752LL), a1) )
  {
    v49 = *(_QWORD *)(gptiCurrent + 752LL);
LABEL_134:
    xxxDestroyWindow(v49);
  }
LABEL_135:
  v47 = v61;
LABEL_136:
  v50 = *((_QWORD *)a1 + 13);
  if ( v50 && !v47 )
  {
    v64 = *(_QWORD *)(v50 + 16);
    if ( *(volatile signed __int32 **)(v64 + 1360) == a1 )
    {
      HMAssignmentUnlock(v64 + 1360);
      DisassociateShellFrameAppThreads2(v64, v5);
    }
    if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v51 = *((_QWORD *)a1 + 2);
      v52 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL);
      if ( v51 != v52 )
        zzzAttachThreadInput(v51, v52, 0LL);
    }
    v53 = *((_QWORD *)a1 + 13);
    if ( v53 )
      UnlinkWindow(a1, v53);
  }
  SetOrClrWF(1LL, a1, 896LL, 1LL);
  if ( (a1[76] & 0x100000) != 0 )
  {
    UpdateGlobalInputSinkHint(0);
    *((_DWORD *)a1 + 76) &= ~0x100000u;
  }
  xxxFreeWindow((struct tagWND *)a1);
  if ( v61 )
    *(_DWORD *)(v5 + 464) = v65 | *(_DWORD *)(v5 + 464) & 0xEFFFFFFF;
  return 1LL;
}
