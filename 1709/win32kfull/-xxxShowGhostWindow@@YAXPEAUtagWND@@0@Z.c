/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0134590 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D7730 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C004BEA8 (DwmAsyncNotifyAnimationChange.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E6578 (xxxEnableChildWindowDpiMessageX.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0135050 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C013510C (DwmAsyncGhostChange.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01351A0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  char v2; // al
  int v3; // r13d
  BOOL v4; // r14d
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // r13d
  __int64 v14; // rcx
  int v15; // r12d
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int128 v25; // [rsp+48h] [rbp-18h] BYREF

  v2 = *((_BYTE *)a2 + 71);
  v3 = 0;
  v4 = 0;
  v7 = 99;
  if ( (v2 & 0x20) != 0 )
    v3 = 1;
  else
    v4 = (v2 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 408), v9 == gpqForeground) && *(struct tagWND **)(v9 + 120) == a2 )
  {
    v10 = 96;
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 464LL) |= 0x20u;
  }
  else
  {
    v7 = 115;
    v10 = 112;
  }
  if ( *((char *)a2 + 66) < 0 )
    SetOrClrWF(1, a1, 0xA80u, 1);
  v25 = *((_OWORD *)a2 + 8);
  xxxEnableChildWindowDpiMessageX(a1);
  if ( (*((_DWORD *)a2 + 92) & 0xF) != 2 )
  {
    v11 = ValidateHmonitor(*((_QWORD *)a2 + 45));
    v12 = *((unsigned int *)a2 + 92);
    v24 = v11;
    LogicalToPhysicalDPIRect(&v25, &v25, v12, &v24);
    if ( v4 )
      xxxSetWindowPos(a1, 0LL, (unsigned int)v25, DWORD1(v25), DWORD2(v25) - v25, HIDWORD(v25) - DWORD1(v25), 20);
    else
      v7 = v10;
  }
  if ( v3 )
  {
    xxxMinMaximizeEx(a1, 7u, 1, 0LL, 0LL);
    _CopyWindowCheckpoint(a2, a1);
    v7 |= 2u;
    goto LABEL_14;
  }
  if ( !v4 )
  {
LABEL_14:
    v13 = 3;
    goto LABEL_15;
  }
  v13 = 3;
  xxxMinMaximizeEx(a1, 3u, 1, 0LL, 0LL);
  _CopyWindowCheckpoint(a2, a1);
  v7 |= 2u;
LABEL_15:
  v15 = IsWindowDesktopComposed(a2);
  if ( v15 )
  {
    v16 = (void *)ReferenceDwmApiPort(v14);
    DwmAsyncGhostChange(v16);
    v18 = (void *)ReferenceDwmApiPort(v17);
    DwmAsyncNotifyAnimationChange(v18, 0, *(_QWORD *)a2);
    v20 = (void *)ReferenceDwmApiPort(v19);
    DwmAsyncNotifyAnimationChange(v20, 0, *(_QWORD *)a1);
  }
  SetOrClrWF(0, a1, 0xE01u, 1);
  if ( (*((_BYTE *)a2 + 60) & 0x20) != 0 )
  {
    SetOrClrWF(0, a2, 0x420u, 1);
    SetOrClrWF(1, a1, 0x420u, 1);
    v21 = 1LL;
  }
  else
  {
    v21 = (__int64)a2;
  }
  SetVisible(a2, 16);
  if ( !gdwDeferWinEvent )
    v13 = 1;
  xxxWindowEvent(0x8003u, (volatile signed __int32 *)a2, 0LL, 0LL, v13);
  xxxSetWindowPos(a1, v21, (unsigned int)v25, DWORD1(v25), DWORD2(v25) - v25, HIDWORD(v25) - DWORD1(v25), v7);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v15 )
  {
    v23 = (void *)ReferenceDwmApiPort(v22);
    DwmAsyncNotifyAnimationChange(v23, 1, *(_QWORD *)a1);
  }
}
