/*
 * XREFs of xxxMoveSize @ 0x1C01F8110
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002114 (IsAdaptiveQueueDetachExempted.c)
 *     SlowAppThreadInShellFrame @ 0x1C0006E3C (SlowAppThreadInShellFrame.c)
 *     bSetDevDragWidth @ 0x1C000B440 (bSetDevDragWidth.c)
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     xxxTranslateMessage @ 0x1C00F8AB8 (xxxTranslateMessage.c)
 *     zzzShowCursor @ 0x1C0115E10 (zzzShowCursor.c)
 *     xxxCallMsgFilter @ 0x1C013DDF4 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ChangeComposableCursor @ 0x1C0195E08 (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01BCD5C (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01BD408 (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01EFAF4 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F44F8 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F4560 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F56B4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(__int64 a1, int a2, unsigned int a3)
{
  int v6; // r15d
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 *v13; // rdx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rax
  struct tagTHREADINFO *v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *SessionSystemDpiServerInfo; // rax
  _QWORD v24[2]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-19h] BYREF
  unsigned __int64 v26[7]; // [rsp+60h] [rbp-1h] BYREF
  int v27; // [rsp+D0h] [rbp+6Fh] BYREF

  memset(v26, 0, 0x30uLL);
  v6 = 0;
  result = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(result + 384) == v8 && !*(_QWORD *)(gptiCurrent + 592LL) )
  {
    v9 = *(_QWORD *)(v8 + 80);
    if ( v9 )
    {
      if ( (*(_WORD *)(v9 + 82) & 0x3FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 104);
        if ( !v9 || (*(_WORD *)(v9 + 82) & 0x3FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v25;
        v25[1] = v9;
        ++*(_DWORD *)(v9 + 8);
        xxxSendMessage(v9, 335, 0, 0);
        ThreadUnlock1(v11, v10);
      }
    }
    result = Win32AllocPoolWithQuotaZInit(328LL, 1936552789LL);
    v12 = result;
    if ( result )
    {
      v24[0] = result;
      v24[1] = a1;
      *(_QWORD *)(gptiCurrent + 592LL) = result;
      HMAssignmentLock(v24);
      *(_DWORD *)(v12 + 180) = *(_DWORD *)(v12 + 180) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v12 + 292) = *(_QWORD *)(gptiCurrent + 684LL);
      AdjustProcessPriorityForDrag((struct tagWND **)v12);
      xxxInitializeMoveSizeData(a1, v12, a2, a3, 0);
      if ( (*(_DWORD *)(v12 + 180) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(a1 + 70) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 32LL), 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)v12);
      if ( gpqForeground )
      {
        v13 = *(__int64 **)(gpqForeground + 80LL);
        if ( v13 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
          {
            v14 = 33;
            if ( v13[2] == gptiCurrent )
              v13 = (__int64 *)a1;
            else
              v14 = 49;
            xxxWindowEvent(0x80000004, v13, 0, 2, v14);
          }
        }
      }
      xxxWindowEvent(0xAu, (__int64 *)a1, 0, 0, 0);
      xxxWindowEvent(0x19u, (__int64 *)a1, 0, a2, 0);
      xxxDrawDragRectEx((struct tagRECT **)v12, 0LL, 0, (struct tagRECT *)(v12 + 8));
      *(_DWORD *)(gptiCurrent + 440LL) |= 0x10u;
      v26[3] = (*(unsigned __int16 *)(v12 + 288) << 16) | *(unsigned __int16 *)(v12 + 284);
      zzzSetFMouseMoved();
      xxxSendMessage(a1, 561, 0, 0);
      xxxCapture(gptiCurrent, a1, 6);
      zzzShowCursor(1);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        if ( gProtocolType || gbRemoteFxSession )
        {
          v15 = 0;
        }
        else
        {
          ChangeComposableCursor(1);
          v15 = 1;
        }
        *(_DWORD *)(v12 + 180) = (v15 << 27) | *(_DWORD *)(v12 + 180) & 0xF7FFFFFF;
      }
      while ( (*(_DWORD *)(v12 + 180) & 8) == 0 )
      {
        while ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) == a1 )
        {
          if ( (unsigned int)xxxInternalGetMessage((__int64)v26, 0LL, 0, 0, 1u, 0) )
          {
            if ( (unsigned int)(LODWORD(v26[1]) - 256) <= 9
              || LODWORD(v26[1]) == 35
              || (unsigned int)(LODWORD(v26[1]) - 512) <= 0xE )
            {
              *(_QWORD *)(v12 + 292) = *(_QWORD *)(gptiCurrent + 684LL);
              if ( !v6 )
              {
                v6 = ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x1800000) != 0) + 1;
                if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x1800000) != 0 )
                  *(_DWORD *)(v12 + 180) ^= (*(_DWORD *)(v12 + 180) ^ ((*(_DWORD *)(v12 + 180) & 0xFFFF8000) + 0x8000)) & 0x38000;
              }
              break;
            }
            if ( !(unsigned int)xxxCallMsgFilter((__int64)v26, (unsigned int)(a2 != 9) + 3) )
            {
              xxxTranslateMessage((__int64)v26, 0);
              *(_DWORD *)(gptiCurrent + 440LL) |= 0x8000u;
              xxxDispatchMessage(v26);
              *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000u;
            }
          }
          else
          {
            if ( (*(_DWORD *)(v12 + 180) & 8) != 0 )
              break;
            if ( gfShellFrameHangResilient
              && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0
              && !IsAdaptiveQueueDetachExempted(gptiCurrent) )
            {
              v16 = 200;
              if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) <= 1u )
                v16 = 5000;
              if ( !(unsigned int)xxxWaitMessageEx(15367LL, v16, (enum SLEEP_STATUS *)&v27) && !v27 )
                break;
              if ( v27 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) > 1u )
                {
                  v17 = *(_QWORD *)(gptiCurrent + 416LL);
                  if ( !*(_QWORD *)(v17 + 40) && !*(_QWORD *)(v17 + 48) )
                  {
                    v18 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v18 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v18, v27 == 2, 1);
                  }
                }
              }
            }
            else if ( !(unsigned int)xxxWaitMessageEx(15615LL, 0, 0LL) )
            {
              break;
            }
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 )
        {
          xxxMS_TrackMove(a1, 256, 0x1BuLL, 1uLL, (struct _MOVESIZEDATA *)v12);
          break;
        }
        if ( (*(_DWORD *)(v12 + 180) & 8) != 0 )
        {
          *(_DWORD *)(v12 + 180) &= ~8u;
          break;
        }
        if ( LODWORD(v26[1]) == 35 )
          xxxCallHook(2, 0, 0LL, 5u);
        if ( (*(_DWORD *)(v12 + 180) & 1) != 0
          && !(unsigned int)xxxTrackInitSize((struct tagWND *)a1, v26[1], v26[2], v26[3], (struct _MOVESIZEDATA *)v12) )
        {
          break;
        }
        if ( (*(_DWORD *)(v12 + 180) & 1) == 0 )
          xxxMS_TrackMove(
            a1,
            v26[1],
            v26[2],
            (unsigned __int16)(WORD2(v26[4]) + *(_WORD *)(v12 + 152)) | ((unsigned __int16)(LOWORD(v26[5])
                                                                                          + *(_WORD *)(v12 + 156)) << 16),
            (struct _MOVESIZEDATA *)v12);
      }
      if ( gpqForeground )
      {
        v19 = *(__int64 **)(gpqForeground + 80LL);
        if ( v19 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
            xxxWindowEvent(0x80000005, v19, 0, 2, 33);
        }
      }
      xxxWindowEvent(0xBu, (__int64 *)a1, 0, 0, 0);
      xxxSendMessage(a1, 562, 0, 0);
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v12, v20, v21, v22);
      if ( (*(_DWORD *)(v12 + 180) & 0x8000000) != 0 )
        ChangeComposableCursor(0);
      *(_DWORD *)(v12 + 180) &= 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct tagWND **)v12);
      if ( (*(_BYTE *)(a1 + 70) & 4) == 0 )
      {
        SessionSystemDpiServerInfo = (_DWORD *)GetSessionSystemDpiServerInfo();
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 32LL), *SessionSystemDpiServerInfo + 3);
      }
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
      if ( (*(_DWORD *)(v12 + 180) & 0x20) != 0 )
      {
        if ( ghrgnUpdateSave )
        {
          GreDeleteObject(ghrgnUpdateSave);
          ghrgnUpdateSave = 0LL;
          gnUpdateSave = 0;
        }
      }
      gdwPUDFlags &= ~0x10000000u;
      *(_QWORD *)(gptiCurrent + 592LL) = 0LL;
      HMAssignmentUnlock(v12);
      Win32FreePool(v12);
      return zzzShowCursor(0);
    }
  }
  return result;
}
