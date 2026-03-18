/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01326B0
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0132440 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D3460 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C009DA38 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00E8E14 (DwmAsyncNotifyAnimationChange.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0132E90 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0132F04 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C013304C (DwmAsyncGhostChange.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  char v2; // al
  int v3; // r12d
  BOOL v4; // r15d
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int MonitorFlagsFromWindow; // eax
  int v14; // r13d
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r12d
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rax
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // rax
  __int64 v38; // [rsp+40h] [rbp-20h] BYREF
  __int128 v39; // [rsp+48h] [rbp-18h] BYREF

  v2 = *((_BYTE *)a2 + 71);
  v3 = 0;
  v4 = 0;
  v7 = 99;
  if ( (v2 & 0x20) != 0 )
    v3 = 1;
  else
    v4 = (v2 & 1) != 0;
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 && (v9 = *(_QWORD *)(v8 + 384), v9 == gpqForeground) && *(struct tagWND **)(v9 + 88) == a2 )
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 440LL) |= 0x20u;
  else
    v7 = 115;
  if ( *((char *)a2 + 66) < 0 )
    SetOrClrWF(1, a1, 0xA80u, 1);
  v39 = *((_OWORD *)a2 + 8);
  xxxEnableChildWindowDpiMessageX(a1);
  if ( (*((_DWORD *)a2 + 92) & 0xF) != 2 )
  {
    v38 = ValidateHmonitor(*((_QWORD *)a2 + 45), v10, v11, v12);
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a2);
    LogicalToPhysicalDPIRect(&v39, &v39, MonitorFlagsFromWindow, &v38);
    if ( v4 )
      xxxSetWindowPos(a1, 0LL, (unsigned int)v39, DWORD1(v39), DWORD2(v39) - v39, HIDWORD(v39) - DWORD1(v39), 20);
    else
      v7 &= 0x7Cu;
  }
  v14 = 3;
  if ( v3 )
  {
    v15 = 7;
  }
  else
  {
    if ( !v4 )
      goto LABEL_16;
    v15 = 3;
  }
  xxxMinMaximizeEx(a1, v15, 1, 0LL, 0LL);
  _CopyWindowCheckpoint(a2, a1);
  v7 |= 2u;
LABEL_16:
  v20 = IsWindowDesktopComposed(a2);
  if ( v20 )
  {
    v21 = (void *)ReferenceDwmApiPort(v17, v16, v18, v19);
    DwmAsyncGhostChange(v21);
    v26 = (void *)ReferenceDwmApiPort(v23, v22, v24, v25);
    DwmAsyncNotifyAnimationChange(v26, 0, *(_QWORD *)a2);
    v31 = (void *)ReferenceDwmApiPort(v28, v27, v29, v30);
    DwmAsyncNotifyAnimationChange(v31, 0, *(_QWORD *)a1);
  }
  SetOrClrWF(0, a1, 0xE01u, 1);
  if ( (*((_BYTE *)a2 + 60) & 0x20) != 0 )
  {
    SetOrClrWF(0, a2, 0x420u, 1);
    SetOrClrWF(1, a1, 0x420u, 1);
    v32 = 1LL;
  }
  else
  {
    v32 = (__int64)a2;
  }
  SetVisible(a2, 16);
  if ( !gdwDeferWinEvent )
    v14 = 1;
  xxxWindowEvent(0x8003u, (__int64 *)a2, 0, 0, v14);
  xxxSetWindowPos(a1, v32, (unsigned int)v39, DWORD1(v39), DWORD2(v39) - v39, HIDWORD(v39) - DWORD1(v39), v7);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v20 )
  {
    v37 = (void *)ReferenceDwmApiPort(v34, v33, v35, v36);
    DwmAsyncNotifyAnimationChange(v37, 1, *(_QWORD *)a1);
  }
}
