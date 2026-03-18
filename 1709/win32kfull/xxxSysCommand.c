/*
 * XREFs of xxxSysCommand @ 0x1C011D2FC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     IsWindowDestroyed @ 0x1C008BC1C (IsWindowDestroyed.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     xxxPlayEventSound @ 0x1C010EDC0 (xxxPlayEventSound.c)
 *     xxxShowWindow @ 0x1C0111E58 (xxxShowWindow.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C01401B0 (DragOperationFromMaximizedAllowed.c)
 *     xxxIsDragging @ 0x1C0140348 (xxxIsDragging.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01C00AC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F6A78 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01F7708 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01F802C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F8220 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     MoveWithArrangementAllowed @ 0x1C01F82D4 (MoveWithArrangementAllowed.c)
 *     StartScreenSaver @ 0x1C01F8340 (StartScreenSaver.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(__int64 BugCheckParameter2, int a2, __int64 a3)
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
  int v20; // esi
  __int64 v21; // rcx
  unsigned int v22; // esi
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  int *v27; // rcx
  struct tagMENUSTATE *v28; // rax
  struct tagMENUSTATE *v29; // rbx
  __int64 *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct tagMENUSTATE *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rsi
  struct tagMENUSTATE *v52; // rax
  struct tagMENUSTATE *v53; // rsi
  _DWORD **v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 ThreadDesktopWindow; // rbx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  struct tagMENUSTATE *v65; // [rsp+50h] [rbp-69h] BYREF
  int v66; // [rsp+58h] [rbp-61h] BYREF
  struct tagMENUSTATE *v67; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v68[2]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v69[2]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v70[3]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v71[3]; // [rsp+A0h] [rbp-19h] BYREF
  int v72; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v73; // [rsp+C0h] [rbp+7h]
  int v74; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v75; // [rsp+D0h] [rbp+17h]

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v4 = a2 & 0xF;
  v5 = a3;
  v6 = a2 - v4;
  if ( a3 == 0x10000 )
    v5 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 408) + 104LL) || (*(_BYTE *)(BugCheckParameter2 + 71) & 8) != 0)
    && BugCheckParameter2 != gspwndFullScreen
    && (((v6 - 61744) & 0xFFFFFFAF) != 0 || v6 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 656LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v6, (unsigned int)v5, 5u)
    || (unsigned int)IsWindowDestroyed(BugCheckParameter2) )
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
                    GetKeyState(0x10u, 61440LL, v10, v11);
                    xxxSBTrackInit((struct tagWND *)BugCheckParameter2, v5);
                  }
                }
                else
                {
                  xxxSendMessage((ULONG_PTR)v9);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v5);
              }
              return;
            }
            v20 = 3;
            if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 1) != 0 )
              return;
            v21 = 12LL;
          }
          else
          {
            v20 = 6;
            if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x20) != 0 )
              return;
            v21 = 11LL;
          }
LABEL_96:
          xxxPlayEventSound(v21, v8);
          xxxShowWindow((struct tagWND *)BugCheckParameter2, v20 | gdwPUDFlags & 0x10000);
          return;
        }
        v22 = *(unsigned __int16 *)(gptiCurrent + 732LL) | (*(unsigned __int16 *)(gptiCurrent + 736LL) << 16);
        LODWORD(v65) = *(__int16 *)(gptiCurrent + 732LL);
        HIDWORD(v65) = SHIWORD(v22);
        if ( v4 && (!word_1C0327710 || qword_1C0327718 != v3) && !(unsigned int)xxxIsDragging(BugCheckParameter2, v65) )
        {
          xxxSetWindowPos((struct tagWND *)BugCheckParameter2, 0LL, 0LL, 0LL, 0, 0, 3);
          v23 = *(_BYTE *)(BugCheckParameter2 + 71);
          if ( (v23 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              (__int64 *)BugCheckParameter2,
              274LL,
              0xF100uLL,
              (struct _LARGE_STRING *)((v23 & 0x40) != 0 ? 45LL : 32LL),
              0,
              0,
              0LL,
              1u,
              0);
          }
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand((struct tagWND *)BugCheckParameter2, 61456) )
        {
          LODWORD(v24) = 10 - (v4 != 0);
          goto LABEL_37;
        }
        if ( (*(_BYTE *)(BugCheckParameter2 + 70) & 4) != 0
          && (*(_BYTE *)(BugCheckParameter2 + 71) & 1) != 0
          && !(unsigned int)DragOperationFromMaximizedAllowed(BugCheckParameter2) )
        {
          return;
        }
        v25 = v22;
        v24 = 10 - (unsigned int)(v4 != 0);
      }
      else
      {
        if ( v4 > 0xA )
          return;
        v26 = ShouldApplyShellWindowingBehaviorToSysCommand(v9, 61440);
        v24 = v4;
        if ( v26 )
        {
LABEL_37:
          DelegateMoveSizeToShell((struct tagWND *)BugCheckParameter2, v24);
          return;
        }
        v25 = *(unsigned __int16 *)(gptiCurrent + 732LL) | (*(unsigned __int16 *)(gptiCurrent + 736LL) << 16);
      }
      xxxMoveSize(BugCheckParameter2, v24, v25);
      return;
    }
    goto LABEL_63;
  }
  switch ( v6 )
  {
    case 0xF100u:
      v52 = (struct tagMENUSTATE *)xxxMNStartMenuState(BugCheckParameter2, 61696LL, v5);
      v53 = v52;
      if ( !v52 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v67, v52);
      **v54 |= 0x80000000;
      if ( gspwndFullScreen == BugCheckParameter2 )
      {
        ThreadDesktopWindow = GetThreadDesktopWindow(0LL, (int)v54);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60);
        v71[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v71;
        v71[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v63, v62);
      }
      v64 = *(_QWORD *)v53;
      *((_DWORD *)v53 + 2) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v69, v64, v55, v56);
      xxxMNKeyFilter(v69, v53, (unsigned int)v5);
      if ( (*((_DWORD *)v53 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v53);
      v33 = v67;
LABEL_105:
      if ( v33 )
        xxxUnlockMenuStateInternal(v33, 0);
      return;
    case 0xF120u:
      v20 = 9;
      if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x21) == 1 )
      {
        MoveWithArrangementAllowed(BugCheckParameter2);
        v21 = 10LL;
      }
      else
      {
        v21 = 9LL;
      }
      goto LABEL_96;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
        || (v49 = **(_QWORD **)(gptiCurrent + 440LL),
            v50 = *(_DWORD *)(gptiCurrent + 656LL),
            (((unsigned __int16)v50 | (unsigned __int16)*(_DWORD *)(v49 + 16)) & 0x800) == 0)
        && !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL) + 184LL) )
      {
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
        }
        return;
      }
      if ( (((unsigned __int16)v50 | (unsigned __int16)*(_DWORD *)(v49 + 16)) & 0x800) != 0 )
        xxxCallHook(7, *(_QWORD *)BugCheckParameter2, 0LL, 0xAu);
      v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL) + 184LL);
      if ( !v51 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v51 + 16), 0);
      if ( v5 == 0xFFFFFFFFLL )
        v48 = -1LL;
      else
        v48 = *(_QWORD *)BugCheckParameter2;
      v45 = 7LL;
      v46 = v51;
      v47 = *(unsigned int *)(gpsi + 912LL);
LABEL_79:
      PostMessage(v46, v47, v45, (struct _LARGE_STRING *)v48);
      return;
    case 0xF140u:
      LOBYTE(v8) = 1;
      v44 = HMValidateHandleNoSecure(ghwndSwitch, v8, v10, v11);
      if ( !v44 || BugCheckParameter2 == v44 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v45 = 61760LL;
      v46 = v44;
      v47 = 274LL;
      v48 = (*gpsi >> 9) & 1;
      goto LABEL_79;
    case 0xF150u:
      v34 = ValidateHwnd(v5);
      v38 = v34;
      if ( v34 )
      {
        v39 = *(_QWORD *)(v34 + 256);
        CurrentThread = KeGetCurrentThread();
        if ( !v39 )
          v39 = v38;
        if ( v39 )
          v38 = v39;
        v41 = W32GetThreadWin32Thread((__int64)CurrentThread, v35, v36, v37);
        v70[0] = *(_QWORD *)(v41 + 392);
        *(_QWORD *)(v41 + 392) = v70;
        v70[1] = v38;
        _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
        xxxSetForegroundWindow((struct tagWND *)v38, 0);
        if ( (*(_BYTE *)(v38 + 71) & 0x20) != 0 )
          PostMessage(v38, 274LL, 0xF120uLL, 0LL);
        ThreadUnlock1(v43, v42);
      }
      break;
    case 0xF160u:
LABEL_63:
      if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 408LL) != gpqForeground )
        return;
      v28 = (struct tagMENUSTATE *)xxxMNStartMenuState(BugCheckParameter2, v6, v5);
      v29 = v28;
      if ( !v28 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v65, v28);
      *(_DWORD *)*v30 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v68, *v30, v31, v32);
      xxxMNLoop(v68, v29, v5, v6 == 61792);
      if ( (*((_DWORD *)v29 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v29);
      v33 = v65;
      goto LABEL_105;
    case 0xF170u:
      if ( v5 == -1 )
      {
        v74 = 4;
        v27 = &v74;
        v75 = 3LL;
      }
      else
      {
        if ( v5 != 2 )
          return;
        v72 = 5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v66) )
          v73 = v66;
        else
          v73 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v27 = &v72;
      }
      QueuePowerRequest(v27, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(BugCheckParameter2);
      break;
  }
}
