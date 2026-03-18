/*
 * XREFs of xxxMakeWindowForegroundWithState @ 0x1C0055114
 * Callers:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     PowerOnGdi @ 0x1C0141FF0 (PowerOnGdi.c)
 *     xxxbFullscreenSwitch @ 0x1C01F3D7C (xxxbFullscreenSwitch.c)
 * Callees:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMakeWindowForegroundWithState(__int64 a1, char a2)
{
  int v2; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DesktopWindow; // rdi
  ULONG_PTR v9; // rsi
  unsigned __int8 v11; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // [rsp+28h] [rbp-59h]
  __int128 v22; // [rsp+28h] [rbp-59h]
  __int128 v23; // [rsp+28h] [rbp-59h]
  _QWORD v24[3]; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v25[24]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v26; // [rsp+68h] [rbp-19h] BYREF
  __int128 v27; // [rsp+78h] [rbp-9h] BYREF
  __int128 v28; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v29[4]; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v5 = 1;
  if ( a1 )
  {
    if ( a2 == 2 )
    {
      *(_QWORD *)&v22 = &gspwndShouldBeForeground;
      *((_QWORD *)&v22 + 1) = a1;
      v26 = v22;
      HMAssignmentLock(&v26);
    }
    SetOrClrWF(0LL, a1, 1799LL, 1LL);
    SetOrClrWF(1LL, a1, a2 & 7 | 0x700u, 1LL);
    if ( a2 == 1 && (!gpqForeground || *(_QWORD *)(gpqForeground + 120LL) != a1) )
    {
      SetOrClrWF(0LL, a1, 1799LL, 1LL);
      SetOrClrWF(1LL, a1, 1796LL, 1LL);
    }
  }
  if ( WPP_MAIN_CB.DeviceQueue.Lock )
  {
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 1;
    return v5;
  }
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)PsGetCurrentThreadId();
  v7 = gptiCurrent;
  v24[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v24;
  v24[1] = 0LL;
  do
  {
    DesktopWindow = gspwndShouldBeForeground;
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
    if ( gspwndShouldBeForeground )
    {
      ThreadLockExchange(gspwndShouldBeForeground, v24);
      HMAssignmentUnlock(&gspwndShouldBeForeground);
    }
    else if ( gpqForeground && (DesktopWindow = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
    {
      if ( (*(_BYTE *)(DesktopWindow + 63) & 3) == 0 )
        DesktopWindow = GetDesktopWindow(DesktopWindow);
    }
    else
    {
      v7 = grpdeskRitInput;
      DesktopWindow = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
    }
    v9 = gspwndFullScreen;
    if ( DesktopWindow == gspwndFullScreen )
      break;
    v11 = *(_BYTE *)(DesktopWindow + 63) & 7;
    ThreadLockExchange(DesktopWindow, v24);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v29[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v29;
    v29[1] = v9;
    if ( v9 )
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    *(_QWORD *)&v21 = &gspwndFullScreen;
    *((_QWORD *)&v21 + 1) = DesktopWindow;
    v27 = v21;
    HMAssignmentLock(&v27);
    gbFullScreen = v11;
    if ( (v9 || gbRemoteSession) && gbFullScreen == 2 && v11 == 2 )
    {
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
      ThreadUnlock1(v16, v15);
    }
    else
    {
      if ( v9 )
      {
        v14 = (unsigned int)gbFullScreen - 1;
        if ( gbFullScreen == 1 )
        {
          if ( (*(_BYTE *)(v9 + 63) & 7) == 1 )
          {
            SetOrClrWF(0LL, v9, 1799LL, 1LL);
            SetOrClrWF(1LL, v9, 1796LL, 1LL);
          }
          xxxSendMessage(v9, 58LL, 0LL, 0LL);
          v17 = *(_QWORD *)(v9 + 16);
          if ( v17 != gptiCurrent )
          {
            LockW32Thread(v17, v25);
            v2 = 1;
          }
          xxxCapture(*(_QWORD **)(v9 + 16), 0LL, 5);
          if ( v2 )
          {
            PopAndFreeW32ThreadLock(v25);
            v2 = 0;
          }
        }
        else if ( gbFullScreen == 2 )
        {
          zzzLockWindowUpdate2((struct tagWND *)v9);
          gdwPUDFlags |= 0x20000000u;
          if ( gProtocolType || gfSwitchInProgress || !(unsigned int)SafeDisableMDEV(2LL) )
          {
            gdwPUDFlags &= ~0x20000000u;
            zzzLockWindowUpdate2(0LL);
            *((_QWORD *)&v23 + 1) = v9;
            *(_QWORD *)&v23 = &gspwndFullScreen;
            v28 = v23;
            HMAssignmentLock(&v28);
            ThreadUnlock1(v20, v19);
            v5 = 0;
            break;
          }
          v14 = gpsi;
          gptCursorFullScreen = *(struct tagPOINT *)(gpsi + 4944LL);
          gfGdiEnabled = 0;
        }
      }
      ThreadUnlock1(v14, v13);
      v7 = (unsigned int)v11 - 1;
      if ( v11 == 1 )
      {
        v18 = *(_QWORD *)(DesktopWindow + 16);
        if ( v18 != gptiCurrent )
        {
          LockW32Thread(v18, v25);
          v2 = 1;
        }
        xxxCapture(*(_QWORD **)(DesktopWindow + 16), DesktopWindow, 5);
        if ( v2 )
          PopAndFreeW32ThreadLock(v25);
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
      SetPointer(0);
      gptSSCursor = gptCursorFullScreen;
      zzzInternalSetCursorPos(gptCursorFullScreen.x, gptCursorFullScreen.y, 2, 0);
      gdwPUDFlags &= ~0x20000000u;
      zzzLockWindowUpdate2(0LL);
      xxxRedrawWindow((struct tagWND *)DesktopWindow);
    }
  }
  while ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) );
  ThreadUnlock1(v7, v6);
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  return v5;
}
