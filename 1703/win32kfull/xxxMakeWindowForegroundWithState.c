/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C0019E40
 * Callers:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C013B470 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C01E7D70 (xxxbFullscreenSwitch.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(__int64 a1, char a2)
{
  int v2; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DesktopWindow; // rdi
  struct tagWND *v9; // rsi
  unsigned __int8 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // [rsp+28h] [rbp-39h] BYREF
  __int128 v22; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v24[24]; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v25[4]; // [rsp+78h] [rbp+17h] BYREF

  v2 = 0;
  v5 = 1;
  if ( a1 )
  {
    if ( a2 == 2 )
    {
      *(_QWORD *)&v21 = &gspwndShouldBeForeground;
      *((_QWORD *)&v21 + 1) = a1;
      HMAssignmentLock(&v21);
    }
    SetOrClrWF(0LL, a1, 1799LL, 1LL);
    SetOrClrWF(1LL, a1, a2 & 7 | 0x700u, 1LL);
    if ( a2 == 1 && (!gpqForeground || *(_QWORD *)(gpqForeground + 88LL) != a1) )
    {
      SetOrClrWF(0LL, a1, 1799LL, 1LL);
      SetOrClrWF(1LL, a1, 1796LL, 1LL);
    }
  }
  if ( ghSwitcher )
  {
    gfRedoFullScreenSwitch = 1;
    return v5;
  }
  ghSwitcher = PsGetCurrentThreadId();
  v7 = gptiCurrent;
  v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v23;
  v23[1] = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    gfRedoFullScreenSwitch = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, v23);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( gpqForeground && (DesktopWindow = *(_QWORD *)(gpqForeground + 88LL)) != 0 )
    {
      if ( (*(_BYTE *)(DesktopWindow + 63) & 3) == 0 )
        DesktopWindow = GetDesktopWindow(DesktopWindow, v6);
    }
    else
    {
      v7 = grpdeskRitInput;
      DesktopWindow = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
    }
    v9 = gspwndFullScreen;
    if ( (struct tagWND *)DesktopWindow == gspwndFullScreen )
      break;
    v11 = *(_BYTE *)(DesktopWindow + 63) & 7;
    ThreadLockExchange(DesktopWindow, v23);
    v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v25;
    v25[1] = v9;
    if ( v9 )
      ++*((_DWORD *)v9 + 2);
    *(_QWORD *)&v21 = &gspwndFullScreen;
    *((_QWORD *)&v21 + 1) = DesktopWindow;
    v22 = v21;
    HMAssignmentLock(&v22);
    gbFullScreen = v11;
    if ( (v9 || gbRemoteSession) && gbFullScreen == 2 && v11 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
      ThreadUnlock1(v15, v14);
    }
    else
    {
      if ( v9 )
      {
        v13 = (unsigned int)gbFullScreen - 1;
        if ( gbFullScreen == 1 )
        {
          if ( (*((_BYTE *)v9 + 63) & 7) == 1 )
          {
            SetOrClrWF(0LL, v9, 1799LL, 1LL);
            SetOrClrWF(1LL, v9, 1796LL, 1LL);
          }
          xxxSendMessage(v9, 58LL, 0LL, 0LL);
          v17 = *((_QWORD *)v9 + 2);
          if ( v17 != gptiCurrent )
          {
            LockW32Thread(v17, v24);
            v2 = 1;
          }
          xxxCapture(*((_QWORD *)v9 + 2), 0LL, 5LL);
          if ( v2 )
          {
            PopAndFreeW32ThreadLock(v24);
            v2 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2(v9);
          v16 = (_DWORD *)gdwPUDFlags;
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress )
            goto LABEL_53;
          if ( !(unsigned int)SafeDisableMDEV(2LL) )
          {
            v16 = (_DWORD *)gdwPUDFlags;
LABEL_53:
            *v16 &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL);
            *((_QWORD *)&v21 + 1) = v9;
            *(_QWORD *)&v21 = &gspwndFullScreen;
            v22 = v21;
            HMAssignmentLock(&v22);
            ThreadUnlock1(v20, v19);
            v5 = 0;
            break;
          }
          gfGdiEnabled = 0;
          v13 = gpsi;
          gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 5368LL);
        }
      }
      ThreadUnlock1(v13, v12);
      v7 = (unsigned int)v11 - 1;
      if ( v11 == 1 )
      {
        v18 = *(_QWORD *)(DesktopWindow + 16);
        if ( v18 != gptiCurrent )
        {
          LockW32Thread(v18, v24);
          v2 = 1;
        }
        xxxCapture(*(_QWORD *)(DesktopWindow + 16), DesktopWindow, 5LL);
        if ( v2 )
          PopAndFreeW32ThreadLock(v24);
        xxxSendMessage(DesktopWindow, 58LL, 1LL, 0LL);
LABEL_51:
        v2 = 0;
        continue;
      }
      if ( v11 != 2 )
        goto LABEL_51;
      SafeEnableMDEV(2LL);
      v2 = 0;
      gfGdiEnabled = 1;
      gpcurPhysCurrent = 0LL;
      gpqCursor = 0LL;
      gpcurLogCurrent = 0LL;
      SetPointer(0LL);
      gptSSCursor = gptCursorFullScreen;
      zzzInternalSetCursorPos((unsigned int)gptCursorFullScreen.x, (unsigned int)gptCursorFullScreen.y, 2LL);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL);
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
    }
  }
  while ( gfRedoFullScreenSwitch );
  ThreadUnlock1(v7, v6);
  ghSwitcher = 0LL;
  return v5;
}
