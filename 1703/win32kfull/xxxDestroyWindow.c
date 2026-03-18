/*
 * XREFs of xxxDestroyWindow @ 0x1C005C5A0
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxRemoveShadow @ 0x1C005D088 (xxxRemoveShadow.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00C9E70 (xxxCreateDefaultImeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00DCC08 (xxxDW_DestroyOwnedWindows.c)
 *     NtUserDestroyWindow @ 0x1C00F9470 (NtUserDestroyWindow.c)
 *     xxxCancelCoolSwitch @ 0x1C010B1D4 (xxxCancelCoolSwitch.c)
 *     NtUserDisableThreadIme @ 0x1C010C180 (NtUserDisableThreadIme.c)
 *     xxxCsDdeInitialize @ 0x1C010FB1C (xxxCsDdeInitialize.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0111624 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0111B98 (xxxCleanupMotherDesktopWindow.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0118A10 (xxxDestroyThreadDDEObject.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxEndMenu @ 0x1C02132D4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     UpdateGlobalInputSinkHint @ 0x1C0003EF0 (UpdateGlobalInputSinkHint.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1C0006F28 (DisassociateShellFrameAppThreads2.c)
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxDW_SendDestroyMessages @ 0x1C00200BC (xxxDW_SendDestroyMessages.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxCallCtfHook @ 0x1C004DFF4 (xxxCallCtfHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     IsWindowGhosted @ 0x1C005CE98 (IsWindowGhosted.c)
 *     IsMotherDesktopWindow @ 0x1C005CF00 (IsMotherDesktopWindow.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     UnlinkWindow @ 0x1C005FA3C (UnlinkWindow.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzInternalDestroyCaret @ 0x1C00B031C (zzzInternalDestroyCaret.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     xxxFocusSetInputContext @ 0x1C00B56B0 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00B5DB8 (zzzInputFocusLostWindowEvent.c)
 *     xxxEnableWindow @ 0x1C00B7870 (xxxEnableWindow.c)
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C00C9C98 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00C9D04 (zzzImeCanDestroyDefIME.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00DCC08 (xxxDW_DestroyOwnedWindows.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00E65E0 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C00FC9BC (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0132100 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C01398BC (xxxHandleDestroyGhostWindow.c)
 *     QueueShutdownData @ 0x1C013B038 (QueueShutdownData.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01BC3BC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01EAAA8 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxFlushPalette @ 0x1C02029D0 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1C02132D4 (xxxEndMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDestroyWindow(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char v5; // dl
  int v6; // eax
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
  struct _LARGE_STRING *v20; // r9
  ULONG_PTR v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  struct tagMENUSTATE *i; // rcx
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rcx
  struct tagHOTKEYSTRUCT **v31; // rcx
  struct tagHOTKEYSTRUCT *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  struct tagWND *v35; // rcx
  int v36; // r8d
  __int64 j; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 k; // rcx
  __int64 v51; // rcx
  bool v52; // zf
  int v53; // ecx
  int CanDestroyDefIME; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int128 v60; // [rsp+50h] [rbp-49h]
  __int128 v61; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v62[3]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v63[3]; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v64[3]; // [rsp+A0h] [rbp+7h] BYREF
  _QWORD v65[7]; // [rsp+B8h] [rbp+1Fh] BYREF
  int v66; // [rsp+100h] [rbp+67h]
  struct tagMENUSTATE *v67; // [rsp+108h] [rbp+6Fh] BYREF
  int v68; // [rsp+110h] [rbp+77h]
  struct tagWND *v69; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  v68 = 0;
  v62[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v62;
  v62[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  v5 = *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL);
  v6 = v5 & 1;
  v66 = v6;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    if ( (v5 & 1) == 0 || (v5 & 2) == 0 )
    {
      UserSetLastError(5LL);
LABEL_17:
      if ( v66 )
      {
        v11 = v68 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
        *(_DWORD *)(gptiCurrent + 440LL) = v11;
      }
      LOBYTE(v3) = ThreadUnlock1(v11, v10) == 0;
      return v3;
    }
    HMChangeOwnerThread(a1, gptiCurrent);
    v6 = v66;
  }
  if ( v6 )
  {
    a3 = *(_DWORD *)(gptiCurrent + 440LL) & 0x10000000;
    v7 = *(_DWORD *)(gptiCurrent + 440LL) | 0x10000000;
    v68 = *(_DWORD *)(gptiCurrent + 440LL) & 0x10000000;
    *(_DWORD *)(gptiCurrent + 440LL) = v7;
  }
  v8 = *(_DWORD *)(a1 + 304);
  if ( (v8 & 0x4000) != 0 )
  {
    v9 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 304) = v8 & 0xFFFFBFFF;
    QueueShutdownData(v9, 0LL);
  }
  if ( !v66 && (*(_DWORD *)(gptiCurrent + 440LL) & 1) == 0 )
  {
    if ( (unsigned int)WantImeWindow(*(struct tagWND **)(a1 + 104), (struct tagWND *)a1) )
      xxxCallCtfHook(5, 4, *(_QWORD *)a1, 0LL);
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x40) != 0
      && (unsigned int)xxxCallHook(4, *(_QWORD *)a1, 0LL, 5u) )
    {
      goto LABEL_17;
    }
    if ( gihmodUserApiHook >= 0 )
      xxxSendMessage(a1, 144, 0, 0);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 528LL);
  if ( v13 )
  {
    if ( a1 == *(_QWORD *)(*(_QWORD *)v13 + 8LL) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 528LL);
      do
      {
        *(_DWORD *)(v13 + 8) &= ~4u;
        v13 = *(_QWORD *)(v13 + 48);
      }
      while ( v13 );
      if ( (*(_DWORD *)(v14 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v67,
          (struct tagMENUSTATE *)v14);
        xxxEndMenu(v15);
        if ( v67 )
          xxxUnlockMenuStateInternal(v67, 0);
      }
    }
  }
  if ( ghwndSwitch == *(_QWORD *)a1 )
    ghwndSwitch = 0LL;
  if ( (*(_BYTE *)(a1 + 71) & 0x40) == 0 && !*(_QWORD *)(a1 + 120) && (*(_BYTE *)(a1 + 58) & 0x20) != 0 )
    xxxFlushPalette(a1);
  v16 = *(_QWORD *)(a1 + 168);
  if ( *(_WORD *)(v16 + 8) != *(_WORD *)(gpsi + 882LL) && (*(_BYTE *)(a1 + 71) & 0xC0) != 0x40 )
  {
    v17 = *(_QWORD *)(a1 + 120);
    if ( v17 )
    {
      v16 = *(_QWORD *)(v17 + 16);
      v18 = *(_QWORD *)(a1 + 16);
      if ( v16 != v18 )
        zzzAttachThreadInput(v18, v16, 0LL);
    }
  }
  if ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 && (*(_BYTE *)(a1 + 64) & 4) == 0 && !(unsigned int)IsTopLevelWindow(a1) )
  {
    v19 = *(_QWORD *)(a1 + 104);
    if ( v19 )
    {
      v63[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v63;
      v63[1] = v19;
      ++*(_DWORD *)(v19 + 8);
      v20 = *(struct _LARGE_STRING **)a1;
      v21 = *(_QWORD *)(a1 + 104);
      v22 = (*(unsigned __int16 *)(a1 + 208) << 16) | 2;
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v21, 0x210u, v22, v20, 0, 0, 0LL, 1, 0);
      ThreadUnlock1(v24, v23);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow(a1, v16, a3) )
    SetOrClrWF(1, (_DWORD *)a1, 0x480u, 1);
  if ( (unsigned int)IsWindowGhosted(a1, v25) )
  {
    xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
  }
  else if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow((struct tagWND *)a1);
  }
  if ( (unsigned int)IsTopLevelWindow(a1) )
  {
    for ( i = *(struct tagMENUSTATE **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 16LL) + 112LL);
          ;
          i = (struct tagMENUSTATE *)*((_QWORD *)i + 11) )
    {
      v67 = i;
      if ( !i )
        break;
      if ( *((_QWORD *)i + 15) == a1 && gptiCurrent != *((_QWORD *)i + 2) && (*((_BYTE *)i + 71) & 0x10) != 0 )
      {
        if ( !gpqForeground || (v27 = 26LL, *(struct tagMENUSTATE **)(gpqForeground + 88LL) != i) )
          v27 = 29LL;
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v27, *(_QWORD *)i);
        i = v67;
      }
    }
  }
  v28 = *(_BYTE *)(a1 + 71);
  if ( (v28 & 0x10) != 0 )
  {
    if ( (v28 & 0x40) != 0 )
      xxxShowWindowEx((struct tagWND *)a1, 0, gdwPUDFlags & 0x10000);
    else
      xxxSetWindowPos((struct tagWND *)a1, 0, 0, (v66 << 13) + 151);
    if ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
    {
      SetVisible((_QWORD *)a1, 0);
      v29 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( v29 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v29 + 8) + 16LL) )
        {
          v30 = *(_QWORD *)(a1 + 104);
          if ( v30 )
            zzzLockDisplayAreaAndInvalidateDCCache(v30, 16LL, 0LL);
          xxxRedrawWindow(0LL);
        }
      }
    }
  }
  else if ( (unsigned int)IsTrayWindow(a1) && (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x2AA )
  {
    PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
  }
  if ( (*(_BYTE *)(a1 + 71) & 0x40) == 0 )
  {
    xxxDW_DestroyOwnedWindows(a1);
    if ( (*(_BYTE *)(a1 + 71) & 0x40) == 0 )
    {
      v31 = HotKeyHelper((struct tagWND *)a1);
      v32 = *v31;
      v67 = v32;
      if ( v32 )
      {
        *v31 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v32 + 2);
        HMAssignmentUnlock(v32);
        Win32FreePool(v67);
        --gcHotKey;
      }
    }
  }
  if ( !v66 )
  {
    v33 = *(_QWORD *)(gptiCurrent + 384LL);
    v34 = *(_QWORD *)(v33 + 88);
    if ( a1 == v34 )
    {
      if ( *(char *)(a1 + 71) < 0 )
      {
        v35 = *(struct tagWND **)(a1 + 120);
        v69 = v35;
        if ( v35 )
        {
          v36 = 2;
          goto LABEL_88;
        }
      }
    }
    else if ( v34 || gpqForeground != v33 )
    {
      goto LABEL_115;
    }
    v36 = 3;
    v69 = (struct tagWND *)a1;
    v35 = (struct tagWND *)a1;
LABEL_88:
    LODWORD(v67) = v36;
    if ( v35 )
    {
      if ( v36 == 2 && !(unsigned int)IsNonImmersiveBand(v35, 3LL) && *((char *)v35 + 60) < 0 )
      {
        for ( j = *((_QWORD *)v35 + 15); j; j = *(_QWORD *)(j + 120) )
        {
          if ( (*(_BYTE *)(j + 306) & 1) != 0 && *(char *)(j + 60) >= 0 )
          {
            v35 = (struct tagWND *)j;
            v69 = (struct tagWND *)j;
            break;
          }
        }
      }
      v64[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v64;
      v64[1] = v35;
      ++*((_DWORD *)v35 + 2);
      if ( v36 == 2 && (*((_BYTE *)v35 + 306) & 1) != 0 )
      {
        xxxEnableWindow(v35, 1);
        v35 = v69;
      }
      v38 = xxxActivateWindow(v35);
      v40 = (unsigned int)v67;
      if ( (!v38 || (_DWORD)v67 == 3 && a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL))
        && ((_DWORD)v67 == 3 || a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL)) )
      {
        HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        v41 = HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
        v43 = v41;
        v44 = gpsi;
        if ( (*gpsi & 4) != 0 && v41 )
        {
          v65[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v65;
          v65[1] = v41;
          ++*(_DWORD *)(v41 + 8);
          xxxFocusSetInputContext(v41, 0LL, 0LL);
          v43 = ThreadUnlock1(v46, v45);
        }
        v47 = gpqForeground;
        if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
        {
          if ( v43 )
            zzzInputFocusLostWindowEvent(v43, 9LL);
          xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
          xxxWindowEvent(3u, 0LL, 0, 0, 1);
        }
        zzzInternalDestroyCaret(v47, v44, v42, v43);
      }
      ThreadUnlock1(v40, v39);
    }
  }
LABEL_115:
  v48 = *(_QWORD *)(a1 + 120);
  v49 = v48;
  if ( v48 )
  {
    for ( k = *(_QWORD *)(v48 + 120); k; k = *(_QWORD *)(k + 120) )
      v49 = k;
    if ( a1 == *(_QWORD *)(v49 + 256) )
    {
      if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v49 + gSharedInfo[1] + 25LL) & 1) != 0 )
      {
        HMAssignmentUnlock(v49 + 256);
      }
      else
      {
        *(_QWORD *)&v60 = v49 + 256;
        *((_QWORD *)&v60 + 1) = *(_QWORD *)(a1 + 120);
        v61 = v60;
        HMAssignmentLock(&v61);
      }
    }
  }
  if ( !v66 )
  {
    if ( *(char *)(a1 + 59) >= 0 )
      xxxWindowEvent(0x8001u, (__int64 *)a1, 0, 0, 0);
    xxxDW_SendDestroyMessages(a1);
  }
  if ( (*gpsi & 4) == 0 )
    goto LABEL_144;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
    goto LABEL_144;
  if ( !*(_QWORD *)(gptiCurrent + 696LL) )
    goto LABEL_144;
  v51 = *(_QWORD *)(a1 + 168);
  if ( (*(_BYTE *)(v51 + 94) & 1) != 0 )
    goto LABEL_144;
  v52 = *(_WORD *)(v51 + 8) == *(_WORD *)(gpsi + 882LL);
  v53 = v66;
  if ( v52 || v66 )
    goto LABEL_145;
  if ( (*(_BYTE *)(a1 + 71) & 0x40) == 0 )
  {
    ++gdwDeferWinEvent;
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*(_QWORD *)(gptiCurrent + 696LL), a1);
    LODWORD(v67) = CanDestroyDefIME;
    if ( !--gdwDeferWinEvent && gpPendingNotifies )
    {
      xxxFlushDeferredWindowEvents();
      CanDestroyDefIME = (int)v67;
    }
    if ( !CanDestroyDefIME )
      goto LABEL_144;
    v55 = *(_QWORD *)(gptiCurrent + 696LL);
    if ( !v55 )
      goto LABEL_144;
    goto LABEL_143;
  }
  if ( !*(_QWORD *)(a1 + 104) )
    goto LABEL_145;
  if ( (unsigned int)ImeCanDestroyDefIMEforChild(*(_QWORD *)(gptiCurrent + 696LL), a1) )
  {
    v55 = *(_QWORD *)(gptiCurrent + 696LL);
LABEL_143:
    xxxDestroyWindow(v55);
  }
LABEL_144:
  v53 = v66;
LABEL_145:
  v56 = *(_QWORD *)(a1 + 104);
  if ( v56 && !v53 )
  {
    v67 = *(struct tagMENUSTATE **)(v56 + 16);
    if ( *((_QWORD *)v67 + 159) == a1 )
    {
      HMAssignmentUnlock((char *)v67 + 1272);
      DisassociateShellFrameAppThreads2((__int64)v67, gptiCurrent);
    }
    if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(a1) )
    {
      v57 = *(_QWORD *)(a1 + 16);
      v58 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL);
      if ( v57 != v58 )
        zzzAttachThreadInput(v57, v58, 0LL);
    }
    v59 = *(_QWORD *)(a1 + 104);
    if ( v59 )
      UnlinkWindow(a1, v59);
  }
  SetOrClrWF(1, (_DWORD *)a1, 0x380u, 1);
  if ( (*(_DWORD *)(a1 + 304) & 0x100000) != 0 )
  {
    UpdateGlobalInputSinkHint(0);
    *(_DWORD *)(a1 + 304) &= ~0x100000u;
  }
  xxxFreeWindow((struct tagWND *)a1);
  if ( v66 )
    *(_DWORD *)(gptiCurrent + 440LL) = v68 | *(_DWORD *)(gptiCurrent + 440LL) & 0xEFFFFFFF;
  return 1LL;
}
