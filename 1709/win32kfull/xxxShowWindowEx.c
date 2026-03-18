/*
 * XREFs of xxxShowWindowEx @ 0x1C00934A8
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C004A88C (xxxSetWindowPlacement.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     NtUserShowWindow @ 0x1C00933D0 (NtUserShowWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxShowScrollBar @ 0x1C010A558 (xxxShowScrollBar.c)
 *     xxxShowWindow @ 0x1C0111E58 (xxxShowWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2EAC (xxxSetInternalWindowPos.c)
 *     xxxbFullscreenSwitch @ 0x1C01F3D7C (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00435EC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C0049940 (xxxSendSizeMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxCheckFocus @ 0x1C005F708 (xxxCheckFocus.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     _FChildVisible @ 0x1C009339C (_FChildVisible.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009690C (IsShellWndManagementBehaviorEnabled.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C011A590 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01B8DFC (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B9320 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 */

__int64 __fastcall xxxShowWindowEx(struct tagWND *a1, unsigned __int8 a2, unsigned int a3)
{
  int v4; // ebp
  char v5; // cl
  int v8; // edx
  unsigned int v9; // edi
  __int64 v10; // r9
  int v11; // r12d
  __int64 v12; // r8
  int v13; // r9d
  unsigned int v14; // edx
  int v15; // ebp
  __int64 v16; // rdx
  int v18; // edx
  __int64 v19; // rcx
  char v20; // cl
  unsigned int v21; // r8d
  __int64 v22; // r9
  int v23; // esi
  int v24; // esi
  int v25; // [rsp+50h] [rbp-68h] BYREF
  __int128 v26; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v27; // [rsp+68h] [rbp-50h] BYREF

  v4 = 3;
  v5 = *((_BYTE *)a1 + 71);
  v8 = 0;
  v9 = v5 & 0x10 | *((_BYTE *)a1 + 65) & 8;
  v10 = *(_QWORD *)(gptiCurrent + 400LL);
  if ( (*(_DWORD *)(v10 + 768) & 1) != 0
    && (v5 & 0xC0) != 0x40
    && (*((_BYTE *)a1 + 70) & 0xC0) == 0xC0
    && !*((_QWORD *)a1 + 15) )
  {
    v8 = 1;
    if ( a2 == 1 || a2 == 5 )
      a2 = 10;
  }
  if ( a2 == 10 )
  {
    if ( (*(_DWORD *)(v10 + 768) & 1) != 0 )
    {
      a2 = *(_BYTE *)(v10 + 772);
      v8 = 1;
      if ( a2 != 10 )
        goto LABEL_60;
    }
    a2 = 1;
  }
  if ( v8 )
  {
LABEL_60:
    *(_DWORD *)(v10 + 768) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
  }
  if ( (*((_BYTE *)a1 + 63) & 7) != 0 && *((_QWORD *)a1 + 3) == grpdeskRitInput && ((a2 - 1) & 0xF5) == 0 && a2 != 11 )
  {
    a2 = 2;
    if ( (*((_BYTE *)a1 + 63) & 7) == 4 )
    {
      SetOrClrWF(0, a1, 0x707u, 1);
      SetOrClrWF(1, a1, 0x701u, 1);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0);
  }
  v11 = 0;
  if ( (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 1LL) )
  {
    v11 = 1;
    if ( a2 > 7u )
    {
      if ( a2 < 8u || a2 > 9u )
        goto LABEL_6;
    }
    else if ( a2 == 7 || !a2 || a2 != 1 && (a2 <= 2u || a2 > 5u) )
    {
      goto LABEL_6;
    }
    v11 = xxxCallIAMShowWindowPolicyHandler(a1, a2, &v25, &v27);
    if ( v11 && v25 )
    {
      switch ( v25 )
      {
        case 1:
          a2 = -1;
          break;
        case 2:
          a2 = (unsigned __int8)(a2 - 7) <= 1u ? 17 : 3;
          break;
        case 3:
          if ( (unsigned int)xxxEndSetWindowArrangement(a1, &v27) )
            a2 = -1;
          else
            v11 = 0;
          break;
        default:
          v11 = 0;
          break;
      }
    }
  }
LABEL_6:
  if ( a2 == 0xFF )
    return v9;
  v13 = 128;
  if ( v11 && (unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 16LL, v12, 128LL) )
  {
    a3 |= v13;
    v4 = 2097155;
  }
  v14 = a2;
  if ( a2 == 8 )
  {
    v15 = v4 | 0x50;
    goto LABEL_18;
  }
  if ( a2 > 8u )
  {
    switch ( a2 )
    {
      case 9u:
        goto LABEL_37;
      case 0xBu:
        xxxMinimizeHungWindow(a1);
        return v9;
      case 0x11u:
        v24 = a3 | 0xC0;
        break;
      case 0x12u:
        v23 = a3 | 0xC0;
        goto LABEL_102;
      case 0x13u:
        v24 = a3 | 0x1C0;
        break;
      case 0x14u:
        v23 = a3 | 0x1C0;
LABEL_102:
        v21 = v23;
        v14 = 9;
        goto LABEL_53;
      default:
        goto LABEL_100;
    }
    v21 = v24;
    v14 = 3;
    goto LABEL_53;
  }
  if ( !a2 )
  {
    if ( !v9 )
      return v9;
    v18 = v13 | v4;
    v15 = v13 | v4 | 0x14;
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL) )
      v15 = v18;
    goto LABEL_18;
  }
  if ( a2 == 1 )
    goto LABEL_37;
  if ( a2 <= 1u )
    goto LABEL_100;
  if ( a2 <= 3u )
  {
LABEL_52:
    v21 = a3;
    goto LABEL_53;
  }
  if ( a2 == 4 )
  {
LABEL_37:
    v20 = *((_BYTE *)a1 + 305) & 3;
    if ( (*((_BYTE *)a1 + 71) & 0x21) == 0 && !v20 )
    {
      if ( v9 )
        return v9;
      v15 = v4 | 0x40;
      if ( a2 == 4 )
        v15 |= 0x14u;
      goto LABEL_18;
    }
    v21 = a3 | (v20 != 0 ? 4 : 0);
LABEL_53:
    xxxShowWindowViaMinMax(a1, v14, v21);
    return v9;
  }
  if ( a2 != 5 )
  {
    if ( a2 <= 7u )
      goto LABEL_52;
LABEL_100:
    UserSetLastError(1449LL, a2);
    return v9;
  }
  if ( v9 )
    return v9;
  v15 = v4 | 0x40;
LABEL_18:
  if ( (a2 != 0) != v9 )
  {
    xxxSendMessage(a1, 24LL, a2 != 0, 0LL);
    if ( (*((_BYTE *)a1 + 61) & 1) == 0 )
      xxxSendMessage(a1, 9LL, a2 != 0, 0LL);
  }
  if ( (*((_BYTE *)a1 + 71) & 0xC0) != 0x40 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 101LL) & 8) == 0 || ((a2 - 1) & 0xFB) != 0 )
      goto LABEL_23;
    xxxActivateWindow(a1);
  }
  v15 |= 0x14u;
LABEL_23:
  if ( (unsigned int)FChildVisible((__int64)a1) )
  {
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v15);
    if ( (v15 & 0x200000) != 0 )
      xxxNotifyShellTrackedWindowPosChanged(a1, 1LL);
  }
  else
  {
    SetVisible(a1, a2 != 0);
  }
  if ( (*((_BYTE *)a1 + 56) & 0x10) != 0 )
  {
    SetOrClrWF(0, a1, 0x10u, 1);
    xxxSendSizeMessage((ULONG_PTR)a1);
    v22 = *((_QWORD *)a1 + 13);
    v26 = *(_OWORD *)(v22 + 144);
    TransformRectBetweenCoordinateSpaces(&v26, &v26, a1, v22);
    GetDesktopWindow((__int64)a1);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
  }
  if ( !a2 )
  {
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( a1 == *(struct tagWND **)(v19 + 120) && v19 == gpqForeground )
      xxxActivateWindow(a1);
    else
      xxxCheckFocus((__int64)a1, v16);
  }
  return v9;
}
