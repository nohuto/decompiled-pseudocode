/*
 * XREFs of xxxSysCommand @ 0x1C0112C2C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     IsWindowDestroyed @ 0x1C001DD34 (IsWindowDestroyed.c)
 *     xxxShowWindow @ 0x1C0020664 (xxxShowWindow.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 *     xxxPlayEventSound @ 0x1C01044C0 (xxxPlayEventSound.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C0139664 (DragOperationFromMaximizedAllowed.c)
 *     xxxIsDragging @ 0x1C0139758 (xxxIsDragging.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01BC3BC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01EAAA8 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01EB83C (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01EDB90 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01EDD84 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     MoveWithArrangementAllowed @ 0x1C01EDE38 (MoveWithArrangementAllowed.c)
 *     StartScreenSaver @ 0x1C01EDEA0 (StartScreenSaver.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r15
  unsigned int v6; // esi
  __int64 v8; // rdx
  struct tagWND *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // esi
  unsigned int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // esi
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  int *v26; // rcx
  struct tagMENUSTATE *v27; // rax
  struct tagMENUSTATE *v28; // rbx
  __int64 *v29; // rdx
  struct tagMENUSTATE *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct tagWND *v38; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rsi
  struct tagMENUSTATE *v46; // rax
  struct tagMENUSTATE *v47; // rsi
  _DWORD **v48; // rdx
  __int64 ThreadDesktopWindow; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  struct tagMENUSTATE *v53; // [rsp+50h] [rbp-89h] BYREF
  int v54; // [rsp+58h] [rbp-81h] BYREF
  struct tagMENUSTATE *v55; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v56[3]; // [rsp+68h] [rbp-71h] BYREF
  _QWORD v57[3]; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v58[4]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v59[4]; // [rsp+B8h] [rbp-21h] BYREF
  int v60; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v61; // [rsp+E0h] [rbp+7h]
  int v62; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 v63; // [rsp+F0h] [rbp+17h]

  v3 = *((_QWORD *)a1 + 2);
  v4 = a2 & 0xF;
  v5 = a3;
  v6 = a2 - v4;
  if ( a3 == 0x10000 )
    v5 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 384) + 72LL) || (*((_BYTE *)a1 + 71) & 8) != 0)
    && a1 != gspwndFullScreen
    && (((v6 - 61744) & 0xFFFFFFAF) != 0 || v6 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 600LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v6, (unsigned int)v5, 5u)
    || (unsigned int)IsWindowDestroyed((__int64)a1) )
  {
    return;
  }
  if ( v6 <= 0xF090 )
  {
    if ( v6 != 61584 )
    {
      v8 = 61440LL;
      v12 = v6 - 61440;
      if ( v12 )
      {
        v13 = v12 - 16;
        if ( v13 )
        {
          v14 = v13 - 16;
          if ( v14 )
          {
            v15 = v14 - 16;
            if ( v15 )
            {
              v16 = v15 - 16;
              if ( v16 && (v17 = v16 - 16) != 0 )
              {
                v18 = v17 - 16;
                if ( v18 )
                {
                  v19 = v18 - 16;
                  if ( !v19 || v19 == 16 )
                  {
                    GetKeyState(0x10u);
                    xxxSBTrackInit(a1, v5);
                  }
                }
                else
                {
                  xxxSendMessage((int)v9, 16, 0, 0);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v5);
              }
              return;
            }
            if ( (*((_BYTE *)a1 + 71) & 1) != 0 )
              return;
            v20 = 12LL;
          }
          else
          {
            if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 )
              return;
            v20 = 11LL;
          }
LABEL_96:
          xxxPlayEventSound(v20, v8, v10, v11);
          xxxShowWindow(a1);
          return;
        }
        v21 = *(unsigned __int16 *)(*(_QWORD *)v10 + 676LL) | (*(unsigned __int16 *)(*(_QWORD *)v10 + 680LL) << 16);
        LODWORD(v53) = *(__int16 *)(*(_QWORD *)v10 + 676LL);
        HIDWORD(v53) = SHIWORD(v21);
        if ( v4 && (!word_1C032C490 || qword_1C032C498 != v3) && !(unsigned int)xxxIsDragging(v9, v53) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          v22 = *((_BYTE *)a1 + 71);
          if ( (v22 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              (ULONG_PTR)a1,
              0x112u,
              0xF100uLL,
              (struct _LARGE_STRING *)((v22 & 0x40) != 0 ? 45LL : 32LL),
              0,
              0,
              0LL,
              1,
              0);
          }
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          LODWORD(v23) = 10 - (v4 != 0);
          goto LABEL_37;
        }
        if ( (*((_BYTE *)a1 + 70) & 4) != 0
          && (*((_BYTE *)a1 + 71) & 1) != 0
          && !(unsigned int)DragOperationFromMaximizedAllowed(a1) )
        {
          return;
        }
        v24 = v21;
        v23 = 10 - (unsigned int)(v4 != 0);
      }
      else
      {
        if ( v4 > 0xA )
          return;
        v25 = ShouldApplyShellWindowingBehaviorToSysCommand(v9, 61440);
        v23 = v4;
        if ( v25 )
        {
LABEL_37:
          DelegateMoveSizeToShell(a1, v23);
          return;
        }
        v24 = *(unsigned __int16 *)(gptiCurrent + 676LL) | (*(unsigned __int16 *)(gptiCurrent + 680LL) << 16);
      }
      xxxMoveSize(a1, v23, v24);
      return;
    }
    goto LABEL_63;
  }
  switch ( v6 )
  {
    case 0xF100u:
      v46 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v5);
      v47 = v46;
      if ( !v46 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v55, v46);
      **v48 |= 0x80000000;
      if ( gspwndFullScreen == a1 )
      {
        ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
        v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v57;
        v57[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          ++*(_DWORD *)(ThreadDesktopWindow + 8);
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v51, v50);
      }
      v52 = *(_QWORD *)v47;
      *((_DWORD *)v47 + 2) |= 0x20u;
      SmartObjStackRef<tagPOPUPMENU>::Init(v59, v52);
      xxxMNKeyFilter(v59, v47, (unsigned int)v5);
      if ( (*((_DWORD *)v47 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v47);
      v30 = v55;
LABEL_105:
      if ( v30 )
        xxxUnlockMenuStateInternal(v30, 0);
      return;
    case 0xF120u:
      if ( (*((_BYTE *)a1 + 71) & 0x21) == 1 )
      {
        MoveWithArrangementAllowed(a1);
        v20 = 10LL;
      }
      else
      {
        v20 = 9LL;
      }
      goto LABEL_96;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
        || (v43 = **(_QWORD **)(*(_QWORD *)v10 + 416LL),
            v44 = *(_DWORD *)(*(_QWORD *)v10 + 600LL),
            (((unsigned __int16)v44 | (unsigned __int16)*(_DWORD *)(v43 + 16)) & 0x800) == 0)
        && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
      {
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
        }
        return;
      }
      if ( (((unsigned __int16)v44 | (unsigned __int16)*(_DWORD *)(v43 + 16)) & 0x800) != 0 )
        xxxCallHook(7, *(_QWORD *)a1, 0LL, 0xAu);
      v45 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL);
      if ( !v45 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v45 + 16), 0);
      if ( v5 == 0xFFFFFFFFLL )
        v42 = -1LL;
      else
        v42 = *(_QWORD *)a1;
      v39 = 7LL;
      v40 = v45;
      v41 = *(unsigned int *)(gpsi + 912LL);
LABEL_79:
      PostMessage(v40, v41, v39, (struct _LARGE_STRING *)v42);
      return;
    case 0xF140u:
      v38 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, 1);
      if ( !v38 || a1 == v38 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v39 = 61760LL;
      v40 = (__int64)v38;
      v41 = 274LL;
      v42 = (*gpsi >> 9) & 1;
      goto LABEL_79;
    case 0xF150u:
      v31 = ValidateHwnd(v5);
      v34 = v31;
      if ( v31 )
      {
        v35 = *(_QWORD *)(v31 + 256);
        if ( !v35 )
          v35 = v34;
        if ( v35 )
          v34 = v35;
        v56[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v56;
        v56[1] = v34;
        ++*(_DWORD *)(v34 + 8);
        xxxSetForegroundWindow((struct tagWND *)v34, 0LL, v32, v33);
        if ( (*(_BYTE *)(v34 + 71) & 0x20) != 0 )
          PostMessage(v34, 274LL, 61728LL, 0LL);
        ThreadUnlock1(v37, v36);
      }
      break;
    case 0xF160u:
LABEL_63:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != gpqForeground )
        return;
      v27 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v6, v5);
      v28 = v27;
      if ( !v27 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v53, v27);
      *(_DWORD *)*v29 |= 0x80000000;
      SmartObjStackRef<tagPOPUPMENU>::Init(v58, *v29);
      xxxMNLoop(v58, v28, v5, v6 == 61792);
      if ( (*((_DWORD *)v28 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v28);
      v30 = v53;
      goto LABEL_105;
    case 0xF170u:
      if ( v5 == -1 )
      {
        v62 = 4;
        v26 = &v62;
        v63 = 3LL;
      }
      else
      {
        if ( v5 != 2 )
          return;
        v60 = 5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v54) )
          v61 = v54;
        else
          v61 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v26 = &v60;
      }
      QueuePowerRequest(v26, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
