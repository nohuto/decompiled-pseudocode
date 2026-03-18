/*
 * XREFs of ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C013420C (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0134590 (xxxRegisterGhostWindow.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C013FA7C (xxxHandleDestroyGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D7730 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C004BEA8 (DwmAsyncNotifyAnimationChange.c)
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0135050 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01351A0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall xxxHideGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  int v3; // r13d
  BOOL v5; // r15d
  int v6; // r14d
  char v7; // al
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  void *v17; // rax
  int v18; // r12d
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r12d
  __int64 v30; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  void *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // edx
  char *v37; // rax
  __int64 v38; // rbx
  _OWORD *v39; // rax
  __int128 v40; // xmm1
  __int64 v41; // rax
  __int64 v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch]
  int v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v47[8]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v50[3]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v51[192]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v52[192]; // [rsp+178h] [rbp+78h] BYREF
  __int128 v53; // [rsp+238h] [rbp+138h] BYREF
  _OWORD v54[24]; // [rsp+250h] [rbp+150h] BYREF

  v45 = 0;
  v3 = 0;
  v53 = 0uLL;
  v5 = 0;
  v6 = 49185;
  v43 = *(_DWORD *)(gptiCurrent + 464LL) & 1;
  v7 = *((_BYTE *)a1 + 71);
  if ( (v7 & 0x20) != 0 )
    v3 = 1;
  else
    v5 = (v7 & 1) != 0;
  if ( (gdwMitConfig & 1) != 0 )
  {
    v8 = (_OWORD *)INPUTDEST_FROM_PWND(v51, a1);
    v54[0] = *v8;
    v54[1] = v8[1];
    v54[2] = v8[2];
    v54[3] = v8[3];
    v54[4] = v8[4];
    v54[5] = v8[5];
    v54[6] = v8[6];
    v54[7] = v8[7];
    v54[8] = v8[8];
    v54[9] = v8[9];
    v54[10] = v8[10];
    v54[11] = v8[11];
    v44 = IsCapturedBySystem(v54);
  }
  else
  {
    v44 = gspwndMouseOwner == (_QWORD)a1;
  }
  v9 = *((_QWORD *)a2 + 2);
  if ( v9 )
  {
    v10 = *((_QWORD *)a1 + 2);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 408);
      if ( v11 == gpqForeground && *(struct tagWND **)(v11 + 120) == a1
        || gpqForeground && (v35 = *(_QWORD *)(gpqForeground + 120LL)) != 0 && *(struct tagWND **)(v35 + 120) == a1 )
      {
        *(_DWORD *)(v9 + 464) |= 0x20u;
      }
      else
      {
        v6 = 49201;
      }
    }
  }
  v12 = *((_DWORD *)a2 + 92) & 0xF;
  v53 = *((_OWORD *)a1 + 8);
  if ( v12 != 2 )
  {
    v13 = ValidateHmonitor(*((_QWORD *)a1 + 45));
    v14 = *((unsigned int *)a2 + 92);
    v46 = v13;
    PhysicalToLogicalDPIRect(&v53, &v53, v14, &v46);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v45 = IsWindowDesktopComposed(a2);
    if ( v45 )
    {
      v16 = *(_QWORD *)a1;
      v17 = (void *)ReferenceDwmApiPort(v15);
      DwmAsyncNotifyAnimationChange(v17, 0, v16);
    }
  }
  v18 = 3;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v19 = *((_QWORD *)a1 + 2);
    if ( v19 )
    {
      xxxWindowEvent(0x8003u, (volatile signed __int32 *)a1, 0LL, 0LL, 3);
      PostEventMessageEx((struct tagTHREADINFO *)v19, *(_QWORD *)(v19 + 408), 8u, 0LL, 0, *(_QWORD *)a1, 0LL, 0LL);
    }
  }
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v20) )
  {
    v21 = v43 << 17;
    if ( v3 )
    {
      if ( (*((_BYTE *)a2 + 71) & 0x20) != 0 )
        goto LABEL_25;
      v36 = 7;
    }
    else
    {
      if ( !v5 )
      {
        if ( (*((_BYTE *)a2 + 71) & 0x21) == 0 )
          goto LABEL_27;
        v37 = CkptRestore((__int64)a2, &v53);
        if ( v37 )
          *(_OWORD *)v37 = v53;
        xxxMinMaximizeEx(a2, 9u, v21 | 1, 0LL, 0LL);
LABEL_26:
        v6 |= 2u;
LABEL_27:
        v22 = v6 | 0x40;
        if ( (*((_BYTE *)a2 + 65) & 8) == 0 )
          v22 = v6;
        v6 = v22;
        if ( (_QWORD)v53 == *((_QWORD *)a2 + 16) )
          v6 = v22 | 2;
        goto LABEL_31;
      }
      if ( (*((_BYTE *)a2 + 71) & 1) != 0 )
      {
LABEL_25:
        _CopyWindowCheckpoint(a1, a2);
        goto LABEL_26;
      }
      v36 = 3;
    }
    xxxMinMaximizeEx(a2, v36, v21 | 1, 0LL, 0LL);
    goto LABEL_25;
  }
LABEL_31:
  if ( v43
    || !(unsigned int)IsWindowBeingDestroyed((__int64)a2) && (unsigned int)IsTopLevelWindow(v23) && (v6 & 0x40) != 0 )
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
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 0x12u, *(_QWORD *)a1);
    if ( (*((_BYTE *)a2 + 65) & 8) != 0 )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 0x12u, *(_QWORD *)a2);
  }
  else
  {
    if ( (unsigned int)IsTopLevelWindow(v24) )
    {
      v29 = 0;
      if ( (*((_BYTE *)a1 + 60) & 0x20) != 0 )
      {
        SetOrClrWF(0, a1, 0x420u, 1);
        SetOrClrWF(1, a2, 0x420u, 1);
        v30 = 1LL;
      }
      else
      {
        v30 = *((_QWORD *)a1 + 12);
        if ( v30 )
        {
          if ( (struct tagWND *)v30 == a2 )
          {
            v30 = 0LL;
            v6 |= 4u;
          }
          else
          {
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v27, v28);
            v50[0] = *(_QWORD *)(ThreadWin32Thread + 392);
            *(_QWORD *)(ThreadWin32Thread + 392) = v50;
            v50[1] = v30;
            _InterlockedAdd((volatile signed __int32 *)(v30 + 8), 1u);
            v29 = 1;
          }
        }
      }
      if ( (v6 & 0x40) != 0 )
        SetVisible(a2, 1);
      xxxSetWindowPos(a2, v30, (unsigned int)v53, DWORD1(v53), 0, 0, v6);
      if ( v29 )
        ThreadUnlock1(v26, v32);
      if ( (v6 & 0x40) != 0 )
        xxxRedrawWindow(a2, 0LL, 0LL, 1157LL);
      if ( (v6 & 0x10) == 0 && !v43 )
        xxxActivateWindow(a2, 1LL);
      if ( v44 )
      {
        v38 = *((_QWORD *)a2 + 2);
        if ( v38 )
        {
          if ( (gdwMitConfig & 1) != 0 )
          {
            v39 = (_OWORD *)INPUTDEST_FROM_PWND(v52, a2);
            v54[12] = *v39;
            v54[13] = v39[1];
            v54[14] = v39[2];
            v54[15] = v39[3];
            v54[16] = v39[4];
            v54[17] = v39[5];
            v54[18] = v39[6];
            v40 = v39[7];
            v39 += 8;
            v54[19] = v40;
            v54[20] = *v39;
            v54[21] = v39[1];
            v54[22] = v39[2];
            v54[23] = v39[3];
            ForceCapture(0LL);
          }
          else
          {
            *(_QWORD *)&v48 = gspwndMouseOwner;
            *((_QWORD *)&v48 + 1) = a2;
            v49 = v48;
            HMAssignmentLock(&v49);
          }
          SetSystemInputSource(v47);
          v41 = LogicalQmsgCursorPos((__int64)a2, 0LL);
          LODWORD(v42) = 0;
          PostInputMessage(
            *(_QWORD *)(v38 + 408),
            (__int64)a2,
            0x201u,
            0LL,
            (WORD2(v41) << 16) | (unsigned __int16)v41,
            v42,
            0LL,
            0LL,
            0,
            v47,
            0LL,
            0LL);
        }
      }
    }
    else if ( (*((_BYTE *)a2 + 65) & 8) != 0 )
    {
      SetVisible(a2, 17);
      if ( !gdwDeferWinEvent )
        v18 = 1;
      xxxWindowEvent(0x8002u, (volatile signed __int32 *)a2, 0LL, 0LL, v18);
      xxxRedrawWindow(a2, 0LL, 0LL, 1157LL);
    }
    if ( v45 )
    {
      v33 = *(_QWORD *)a2;
      v34 = (void *)ReferenceDwmApiPort(v26);
      DwmAsyncNotifyAnimationChange(v34, 1, v33);
    }
    xxxNotifyShellOfWindowSwap(a1, a2);
  }
}
