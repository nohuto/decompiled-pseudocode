/*
 * XREFs of xxxShowWindowEx @ 0x1C00218A8
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxShowWindow @ 0x1C0020664 (xxxShowWindow.c)
 *     NtUserShowWindow @ 0x1C00217D0 (NtUserShowWindow.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxShowScrollBar @ 0x1C00D5F08 (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C0101008 (xxxSetWindowPlacement.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01D2BBC (xxxSetInternalWindowPos.c)
 *     xxxbFullscreenSwitch @ 0x1C01E7D70 (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxCheckFocus @ 0x1C0020200 (xxxCheckFocus.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D58 (IsShellWndManagementBehaviorEnabled.c)
 *     _FChildVisible @ 0x1C0021D80 (_FChildVisible.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendSizeMessage @ 0x1C003C8A0 (xxxSendSizeMessage.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C010F4A0 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C01112BC (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01B5B6C (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B608C (xxxNotifyShellTrackedWindowPosChanged.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
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
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v18; // rcx
  char v19; // cl
  unsigned int v20; // r8d
  char v21; // al
  int v22; // edx
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // edx
  int v26; // esi
  int v27; // esi
  int v28; // [rsp+50h] [rbp-68h] BYREF
  __int128 v29; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v30; // [rsp+68h] [rbp-50h] BYREF

  v4 = 3;
  v5 = *((_BYTE *)a1 + 71);
  v8 = 0;
  v9 = v5 & 0x10 | *((_BYTE *)a1 + 65) & 8;
  v10 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( (*(_DWORD *)(v10 + 760) & 1) != 0
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
    if ( (*(_DWORD *)(v10 + 760) & 1) != 0 )
    {
      a2 = *(_BYTE *)(v10 + 764);
      v8 = 1;
      if ( a2 != 10 )
        goto LABEL_66;
    }
    a2 = 1;
  }
  if ( v8 )
  {
LABEL_66:
    *(_DWORD *)(v10 + 760) &= 0xFFFFFFF8;
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
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 88LL) == a1 )
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
    v11 = xxxCallIAMShowWindowPolicyHandler(a1, a2, &v28, &v30);
    if ( v11 && v28 )
    {
      switch ( v28 )
      {
        case 1:
          a2 = -1;
          break;
        case 2:
          a2 = (unsigned __int8)(a2 - 7) <= 1u ? 17 : 3;
          break;
        case 3:
          if ( (unsigned int)xxxEndSetWindowArrangement(a1, &v30) )
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
  v13 = 128LL;
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
        goto LABEL_36;
      case 0xBu:
        xxxMinimizeHungWindow(a1);
        return v9;
      case 0x11u:
        v27 = a3 | 0xC0;
        break;
      case 0x12u:
        v26 = a3 | 0xC0;
        goto LABEL_108;
      case 0x13u:
        v27 = a3 | 0x1C0;
        break;
      case 0x14u:
        v26 = a3 | 0x1C0;
LABEL_108:
        v20 = v26;
        LODWORD(v14) = 9;
        goto LABEL_52;
      default:
        goto LABEL_106;
    }
    v20 = v27;
    LODWORD(v14) = 3;
    goto LABEL_52;
  }
  if ( !a2 )
  {
    if ( !v9 )
      return v9;
    v14 = (unsigned int)v13 | v4;
    v15 = v14 | 0x14;
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) )
      v15 = v14;
    goto LABEL_18;
  }
  if ( a2 == 1 )
    goto LABEL_36;
  if ( a2 <= 1u )
    goto LABEL_106;
  if ( a2 <= 3u )
  {
LABEL_51:
    v20 = a3;
    goto LABEL_52;
  }
  if ( a2 == 4 )
  {
LABEL_36:
    v19 = *((_BYTE *)a1 + 305) & 3;
    if ( (*((_BYTE *)a1 + 71) & 0x21) == 0 && !v19 )
    {
      if ( v9 )
        return v9;
      v15 = v4 | 0x40;
      if ( a2 == 4 )
        v15 |= 0x14u;
      goto LABEL_18;
    }
    v20 = a3 | (v19 != 0 ? 4 : 0);
LABEL_52:
    xxxShowWindowViaMinMax(a1, v14, v20);
    return v9;
  }
  if ( a2 != 5 )
  {
    if ( a2 <= 7u )
      goto LABEL_51;
LABEL_106:
    UserSetLastError(1449LL);
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
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 93LL) & 8) == 0 || ((a2 - 1) & 0xFB) != 0 )
      goto LABEL_23;
    xxxActivateWindow(a1);
  }
  v15 |= 0x14u;
LABEL_23:
  if ( (unsigned int)FChildVisible(a1, v14, v12, v13) )
  {
    xxxSetWindowPos(a1, 0, 0, v15);
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
    v21 = *((_BYTE *)a1 + 71);
    if ( (v21 & 0x20) != 0 )
    {
      v22 = 1;
    }
    else if ( (v21 & 1) != 0 )
    {
      v22 = 2;
    }
    else
    {
      v22 = 0;
    }
    xxxSendSizeMessage((_DWORD)a1, v22);
    v23 = *((_QWORD *)a1 + 13);
    v29 = *(_OWORD *)(v23 + 144);
    TransformRectBetweenCoordinateSpaces(&v29, &v29, a1, v23);
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, v24) )
      v25 = *((unsigned __int16 *)a1 + 72) | (*((unsigned __int16 *)a1 + 74) << 16);
    else
      v25 = (unsigned __int16)(*((_WORD *)a1 + 72) - v29) | ((unsigned __int16)(*((_WORD *)a1 + 74) - WORD2(v29)) << 16);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((int)a1, 3, 0, v25, 0, 0, 0LL, 1, 0);
  }
  if ( !a2 )
  {
    v18 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( a1 == *(struct tagWND **)(v18 + 88) && v18 == gpqForeground )
      xxxActivateWindow(a1);
    else
      xxxCheckFocus((__int64)a1, v16);
  }
  return v9;
}
