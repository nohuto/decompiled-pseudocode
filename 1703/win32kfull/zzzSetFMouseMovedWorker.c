/*
 * XREFs of zzzSetFMouseMovedWorker @ 0x1C01BD5C8
 * Callers:
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     ProcessQueuedMouseEvents @ 0x1C00FF6A4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     zzzUpdateCursorImage @ 0x1C0049A60 (zzzUpdateCursorImage.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     UpdateRawMouseMode @ 0x1C004A46C (UpdateRawMouseMode.c)
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     DetermineMouseInputTarget @ 0x1C005F7F4 (DetermineMouseInputTarget.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     PostMove @ 0x1C00CC9B8 (PostMove.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00F2A40 (GetAppCompatFlags2QuadWord.c)
 *     EditionMouseMoveShellResilience @ 0x1C00F4740 (EditionMouseMoveShellResilience.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C011AEA8 (DwmAsyncTopLevelMouseLeave.c)
 *     IsPointerPromotedMouseMessage @ 0x1C01A0894 (IsPointerPromotedMouseMessage.c)
 *     ?PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z @ 0x1C01BC4F8 (-PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetFMouseMovedWorker(__int64 a1, _QWORD *a2, int a3, unsigned __int64 *a4, int a5)
{
  __int64 v8; // rax
  __int128 v9; // rcx
  struct tagPOINT v11; // rax
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rax
  BOOL v32; // eax
  _QWORD *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned int v36; // edx
  __int64 v37; // rcx
  _QWORD v38[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v39; // [rsp+50h] [rbp-10h] BYREF
  struct tagPOINT v40; // [rsp+88h] [rbp+28h] BYREF

  v40 = *(struct tagPOINT *)(gpsi + 5368LL);
  *(_QWORD *)&v39 = *(_QWORD *)(gpsi + 5360LL);
  if ( a2 )
    v38[0] = *a2;
  else
    SetSystemInputSource(v38);
  v8 = DetermineMouseInputTarget(&v40, (struct _SUBPIXELS *)&v39, a1, 0LL, 0, 0);
  *((_QWORD *)&v9 + 1) = v8;
  if ( !v8 )
    return 0LL;
  if ( a5 )
  {
    v11 = LogicalQmsgCursorPos(v8, 0LL);
    if ( v11 == v40 )
      return 0LL;
  }
  MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(*((__int64 *)&v9 + 1));
  UpdateLogicalCursorPos(v13, MonitorFlagsFromWindow);
  if ( (unsigned int)IsPointerPromotedMouseMessage(512, v38) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)&v9 + 1) + 16LL);
    v15 = gbEnforceUIPI;
    v16 = *(_QWORD *)(*(_QWORD *)(v14 + 376) + 824LL);
    v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v18 <= (unsigned int)v16 )
      {
        if ( (_DWORD)v18 != (_DWORD)v16
          || (v19 = HIDWORD(v18), v16 >>= 32, (_DWORD)v19 != (_DWORD)v16) && (_DWORD)v19 != -1 && (_DWORD)v16 != -1 )
        {
          v20 = *(_QWORD *)(v14 + 384);
          v21 = gptiCurrent;
LABEL_16:
          EtwTraceUIPIInputError(v21, v14, v20, *(_QWORD *)(v20 + 380), 1);
          return 0LL;
        }
      }
    }
  }
  if ( (unsigned int)IsDwmInputThread(v15, v14, v16, v17) )
  {
    if ( a4 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)&v9 + 1) + 16LL);
      v23 = *a4;
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 376) + 824LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v23 <= (unsigned int)v24 )
        {
          if ( (_DWORD)v23 != (_DWORD)v24
            || (v25 = HIDWORD(v23), v26 = HIDWORD(v24), (_DWORD)v25 != (_DWORD)v26)
            && (_DWORD)v25 != -1
            && (_DWORD)v26 != -1 )
          {
            v14 = *(_QWORD *)(*((_QWORD *)&v9 + 1) + 16LL);
            v20 = *(_QWORD *)(v22 + 384);
            v21 = gptiCurrent;
            goto LABEL_16;
          }
        }
      }
    }
  }
  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (*((_QWORD *)&v9 + 1) != gspwndCursorNC || PtInRect((_DWORD *)(*((_QWORD *)&v9 + 1) + 144LL), *(_QWORD *)&v40)) )
  {
    v31 = (void *)ReferenceDwmApiPort(v28, v27, v29, v30);
    DwmAsyncTopLevelMouseLeave(v31, *(_QWORD *)gspwndCursorNC);
  }
  v32 = PtInRect((_DWORD *)(*((_QWORD *)&v9 + 1) + 144LL), *(_QWORD *)&v40);
  *(_QWORD *)&v9 = &gspwndCursorNC;
  if ( v32 )
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  else
  {
    v39 = v9;
    HMAssignmentLock(&v39);
  }
  *((_QWORD *)&v39 + 1) = *((_QWORD *)&v9 + 1);
  *(_QWORD *)&v39 = &gspwndCursor;
  v33 = (_QWORD *)HMAssignmentLock(&v39);
  v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v9 + 1) + 16LL) + 384LL);
  ++gdwDeferWinEvent;
  if ( v34 != gpqCursor )
  {
    if ( gpqCursor )
    {
      if ( *(_QWORD *)(gpqCursor + 72LL) )
      {
        CoalesceInputSourceMouseMoves(gpqCursor, v38);
        *(_DWORD *)(gpqCursor + 340LL) |= 0x20u;
        EtwTraceWakePump(*(_QWORD *)(*(_QWORD *)(gpqCursor + 72LL) + 16LL), 0LL, 512LL);
        SetWakeBit(*(_QWORD *)(*(_QWORD *)(gpqCursor + 72LL) + 16LL), 2u);
      }
      if ( v33 )
      {
        if ( *v33 != **((_QWORD **)&v9 + 1) )
        {
          v35 = v33[3];
          v36 = *(_DWORD *)(v35 + 48);
          if ( (v36 & 0x5C0) != 0 )
          {
            PostEventMessageEx(
              *(_QWORD *)(*(_QWORD *)(v35 + 184) + 16LL),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 184) + 16LL) + 384LL),
              0xBu,
              *(_QWORD *)(v35 + 184),
              v36,
              *(int *)(v35 + 192),
              1472LL,
              0LL);
            *(_DWORD *)(v35 + 48) &= 0xFFFFFA3F;
          }
        }
      }
    }
    gpqCursor = v34;
    zzzUpdateCursorImage();
  }
  CoalesceInputSourceMouseMoves(v34, v38);
  *(_DWORD *)(v34 + 340) |= 0x20u;
  *(_QWORD *)(v34 + 56) = *(_QWORD *)(*((_QWORD *)&v9 + 1) + 16LL);
  UpdateRawMouseMode(v34);
  EditionMouseMoveShellResilience(*((__int64 *)&v9 + 1));
  EtwTraceWakePump(*(_QWORD *)(v34 + 56), *((_QWORD *)&v9 + 1), 512LL);
  *(struct tagPOINT *)(v34 + 152) = v40;
  if ( IsCompositionInputWindow(*((struct tagWND **)&v9 + 1)) )
    PostMoveToPwnd((struct tagQ *)v34, *((struct tagWND **)&v9 + 1), a3);
  WakeSomeone(v34, 0LL, 512LL, 0LL);
  v37 = *(_QWORD *)(v34 + 104);
  if ( v37 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v37 + 16)) & 0x2000000000000LL) != 0 )
    PostMove((struct tagQ *)v34, 0);
  gdwMouseMoveExtraInfo = 0LL;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return v34;
}
