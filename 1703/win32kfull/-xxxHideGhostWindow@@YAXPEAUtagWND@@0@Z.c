/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0132100 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0132440 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C01398BC (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D3460 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00E8E14 (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0132E90 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0132F04 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  BOOL v7; // r15d
  int v8; // r14d
  char v9; // al
  __int128 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  char v13; // al
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  void *v20; // rax
  int v21; // r12d
  __int64 v22; // rbx
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r12d
  __int64 v33; // rbx
  __int64 v34; // rbx
  void *v35; // rax
  __int64 v36; // rax
  unsigned int v37; // edx
  char *v38; // rax
  __int64 v39; // rbx
  __int128 *v40; // rax
  __int128 v41; // xmm1
  struct tagPOINT v42; // rax
  int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch]
  int v45; // [rsp+68h] [rbp-98h]
  _QWORD v46[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v47[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v48[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v49[192]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v50; // [rsp+160h] [rbp+60h] BYREF
  __int128 v51; // [rsp+170h] [rbp+70h] BYREF
  __int128 v52; // [rsp+180h] [rbp+80h]
  __int128 v53; // [rsp+190h] [rbp+90h]
  __int128 v54; // [rsp+1A0h] [rbp+A0h]
  __int128 v55; // [rsp+1B0h] [rbp+B0h]
  __int128 v56; // [rsp+1C0h] [rbp+C0h]
  __int128 v57; // [rsp+1D0h] [rbp+D0h]
  __int128 v58; // [rsp+1E0h] [rbp+E0h]
  __int128 v59; // [rsp+1F0h] [rbp+F0h]
  __int128 v60; // [rsp+200h] [rbp+100h]
  __int128 v61; // [rsp+210h] [rbp+110h]
  __int128 v62; // [rsp+220h] [rbp+120h]

  v45 = 0;
  v5 = 0;
  v50 = 0uLL;
  v7 = 0;
  v8 = 49185;
  v43 = *(_DWORD *)(gptiCurrent + 440LL) & 1;
  v9 = *((_BYTE *)a1 + 71);
  if ( (v9 & 0x20) != 0 )
    v5 = 1;
  else
    v7 = (v9 & 1) != 0;
  if ( (gdwMitConfig & 1) != 0 )
  {
    v10 = (__int128 *)INPUTDEST_FROM_PWND(v49, a1);
    v51 = *v10;
    v52 = v10[1];
    v53 = v10[2];
    v54 = v10[3];
    v55 = v10[4];
    v56 = v10[5];
    v57 = v10[6];
    v58 = v10[7];
    v59 = v10[8];
    v60 = v10[9];
    v61 = v10[10];
    v62 = v10[11];
    v44 = IsCapturedBySystem(&v51);
  }
  else
  {
    v44 = gspwndMouseOwner == (_QWORD)a1;
  }
  v11 = *((_QWORD *)a2 + 2);
  v12 = *((_QWORD *)a1 + 2);
  if ( v11 && v12 )
  {
    a3 = *(_QWORD *)(v12 + 384);
    if ( a3 == gpqForeground && *(struct tagWND **)(a3 + 88) == a1
      || gpqForeground && (v36 = *(_QWORD *)(gpqForeground + 88LL)) != 0 && *(struct tagWND **)(v36 + 120) == a1 )
    {
      *(_DWORD *)(v11 + 440) |= 0x20u;
    }
    else
    {
      v8 = 49201;
    }
  }
  v13 = *((_DWORD *)a2 + 92) & 0xF;
  v50 = *((_OWORD *)a1 + 8);
  if ( v13 != 2 )
  {
    v46[0] = ValidateHmonitor(*((_QWORD *)a1 + 45), v11, a3, a4);
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a2);
    PhysicalToLogicalDPIRect(&v50, &v50, MonitorFlagsFromWindow, v46);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v45 = IsWindowDesktopComposed(a2);
    if ( v45 )
    {
      v19 = *(_QWORD *)a1;
      v20 = (void *)ReferenceDwmApiPort(v16, v15, v17, v18);
      DwmAsyncNotifyAnimationChange(v20, 0, v19);
    }
  }
  v21 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v22 = *((_QWORD *)a1 + 2);
    if ( v22 )
    {
      xxxWindowEvent(0x8003u, (__int64 *)a1, 0, 0, 3);
      PostEventMessageEx(v22, *(_QWORD *)(v22 + 384), 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v23) )
  {
    v24 = v43 << 17;
    if ( v5 )
    {
      if ( (*((_BYTE *)a2 + 71) & 0x20) != 0 )
        goto LABEL_23;
      v37 = 7;
    }
    else
    {
      if ( !v7 )
      {
        if ( (*((_BYTE *)a2 + 71) & 0x21) == 0 )
          goto LABEL_25;
        v38 = CkptRestore((__int64)a2, &v50);
        if ( v38 )
          *(_OWORD *)v38 = v50;
        xxxMinMaximizeEx(a2, 9u, v24 | 1, 0LL, 0LL);
LABEL_24:
        v8 |= 2u;
LABEL_25:
        v25 = v8 | 0x40;
        if ( (*((_BYTE *)a2 + 65) & 8) == 0 )
          v25 = v8;
        v8 = v25;
        if ( (_QWORD)v50 == *((_QWORD *)a2 + 16) )
          v8 = v25 | 2;
        goto LABEL_29;
      }
      if ( (*((_BYTE *)a2 + 71) & 1) != 0 )
      {
LABEL_23:
        _CopyWindowCheckpoint(a1, a2);
        goto LABEL_24;
      }
      v37 = 3;
    }
    xxxMinMaximizeEx(a2, v37, v24 | 1, 0LL, 0LL);
    goto LABEL_23;
  }
LABEL_29:
  if ( v43
    || !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v26) && (v8 & 0x40) != 0 )
  {
    SetVisible(a1, 0);
  }
  else
  {
    xxxShowWindowEx(a1, 0, 0);
  }
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)a2) )
  {
    PostShellHookMessagesEx(2u, *(_QWORD *)a1, 0LL);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x12u, *(_QWORD *)a1);
    if ( (*((_BYTE *)a2 + 65) & 8) != 0 )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 0x12u, *(_QWORD *)a2);
  }
  else
  {
    if ( (unsigned int)IsTopLevelWindow(v27) )
    {
      v32 = 0;
      if ( (*((_BYTE *)a1 + 60) & 0x20) != 0 )
      {
        SetOrClrWF(0, a1, 0x420u, 1);
        SetOrClrWF(1, a2, 0x420u, 1);
        v33 = 1LL;
      }
      else
      {
        v33 = *((_QWORD *)a1 + 12);
        if ( v33 )
        {
          if ( (struct tagWND *)v33 == a2 )
          {
            v33 = 0LL;
            v8 |= 4u;
          }
          else
          {
            v48[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v48;
            v48[1] = v33;
            v32 = 1;
            ++*(_DWORD *)(v33 + 8);
          }
        }
      }
      if ( (v8 & 0x40) != 0 )
        SetVisible(a2, 1);
      xxxSetWindowPos(a2, v33, (unsigned int)v50, DWORD1(v50), 0, 0, v8);
      if ( v32 )
        ThreadUnlock1(v29, v28);
      if ( (v8 & 0x40) != 0 )
        xxxRedrawWindow(a2, 0LL, 0LL, 1157);
      if ( (v8 & 0x10) == 0 && !v43 )
        xxxActivateWindow(a2, 1LL);
      if ( v44 )
      {
        v39 = *((_QWORD *)a2 + 2);
        if ( v39 )
        {
          if ( (gdwMitConfig & 1) != 0 )
          {
            v40 = (__int128 *)INPUTDEST_FROM_PWND(v49, a2);
            v51 = *v40;
            v52 = v40[1];
            v53 = v40[2];
            v54 = v40[3];
            v55 = v40[4];
            v56 = v40[5];
            v57 = v40[6];
            v41 = v40[7];
            v40 += 8;
            v58 = v41;
            v59 = *v40;
            v60 = v40[1];
            v61 = v40[2];
            v62 = v40[3];
            ForceCapture(0LL);
          }
          else
          {
            v46[0] = gspwndMouseOwner;
            v46[1] = a2;
            HMAssignmentLock(v46);
          }
          SetSystemInputSource(v47);
          v42 = LogicalQmsgCursorPos((__int64)a2, 0LL);
          PostInputMessage(
            *(struct tagMLIST **)(v39 + 384),
            a2,
            0x201u,
            0LL,
            (LOWORD(v42.y) << 16) | LOWORD(v42.x),
            0,
            0LL,
            0LL,
            0,
            (struct tagINPUT_MESSAGE_SOURCE *)v47,
            0LL,
            0LL);
        }
      }
    }
    else if ( (*((_BYTE *)a2 + 65) & 8) != 0 )
    {
      SetVisible(a2, 17);
      if ( !gdwDeferWinEvent )
        v21 = 1;
      xxxWindowEvent(0x8002u, (__int64 *)a2, 0, 0, v21);
      xxxRedrawWindow(a2, 0LL, 0LL, 1157);
    }
    if ( v45 )
    {
      v34 = *(_QWORD *)a2;
      v35 = (void *)ReferenceDwmApiPort(v29, v28, v30, v31);
      DwmAsyncNotifyAnimationChange(v35, 1, v34);
    }
    xxxNotifyShellOfWindowSwap(a1, a2);
  }
}
