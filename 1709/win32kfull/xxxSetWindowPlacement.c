/*
 * XREFs of xxxSetWindowPlacement @ 0x1C004A88C
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C004A790 (NtUserSetWindowPlacement.c)
 * Callees:
 *     WPUpdateCheckPointSettings @ 0x1C0049A34 (WPUpdateCheckPointSettings.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C004A37C (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     UpdateCheckpoint @ 0x1C004B848 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v2; // rdi
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  BOOL v8; // r14d
  struct tagPOINT v9; // rcx
  struct tagPOINT v10; // rax
  int v11; // r12d
  __int64 DesktopWindow; // rax
  int v13; // r13d
  __int64 v14; // rcx
  __int64 updated; // rax
  __int64 v16; // r8
  unsigned int v17; // edx
  int v18; // edx
  int v19; // ecx
  char v20; // al
  int v21; // edi
  __int64 v22; // r8
  int v23; // edi
  __int64 v25; // r10
  struct tagPOINT v26; // [rsp+40h] [rbp-29h] BYREF
  struct tagPOINT v27; // [rsp+48h] [rbp-21h] BYREF
  __int128 v28; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v29[16]; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v30; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0LL;
  v5 = 1;
  v8 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 224LL) & 1) == 0 )
    {
      v7 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
      if ( (*(_BYTE *)(v7 + 224) & 0x20) == 0
        && ((*((_DWORD *)a1 + 92) >> 8) & 0x1FF) != (((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v7, v6) >> 8) & 0x1FF) )
      {
        v8 = 1;
      }
    }
  }
  v30 = *(struct tagRECT *)(a2 + 28);
  if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect(&v30);
    v28 = *(_OWORD *)GetMonitorWorkRect(&v28, v2);
  }
  v9 = *(struct tagPOINT *)(a2 + 12);
  v26 = v9;
  if ( v9.x == -1 || v9.y == -1 )
    v5 = 0;
  v10 = *(struct tagPOINT *)(a2 + 20);
  v27 = v10;
  if ( v10.x == -1 || v10.y == -1 )
    v11 = 0;
  else
    v11 = 16;
  DesktopWindow = GetDesktopWindow(a1);
  v13 = DWORD1(v28);
  if ( *((_QWORD *)a1 + 13) == DesktopWindow && *((char *)a1 + 64) >= 0 )
  {
    v14 = *(_QWORD *)GetMonitorRect(v29, v2);
    v30.bottom += v13 - HIDWORD(v14);
    v30.left += v28 - v14;
    v30.right += v28 - v14;
    v30.top += v13 - HIDWORD(v14);
    if ( v5 )
    {
      v26.x += v28 - v14;
      v26.y += v13 - HIDWORD(v14);
    }
    CheckPlacementBounds(&v30, &v26, &v27, v2);
  }
  if ( v8 )
    TransformRectBetweenCoordinateSpaces(&v30, &v30, a1, 0LL);
  updated = UpdateCheckpoint(a1);
  v16 = updated;
  if ( updated )
  {
    v17 = *(_DWORD *)(updated + 32) & 0xFFFFFFF7;
    *(struct tagRECT *)updated = v30;
    *(struct tagPOINT *)(updated + 16) = v26;
    v18 = (8 * v5) | v17;
    *(_DWORD *)(updated + 32) = v18;
    v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    *(_DWORD *)(updated + 32) = v19;
    *(struct tagPOINT *)(updated + 24) = v27;
    *(_DWORD *)(updated + 32) = v11 & 0xFFFFFFFD | v19 & 0xFFFFFFED;
  }
  v20 = *((_BYTE *)a1 + 71);
  v21 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  if ( (v20 & 0x20) != 0 )
  {
    if ( v16 && (*(_DWORD *)(v16 + 32) & 1) == 0 || !v5 )
      goto LABEL_24;
    if ( v8 )
      TransformPointBetweenCoordinateSpaces(&v26, &v26, a1, 0LL);
    goto LABEL_46;
  }
  if ( (v20 & 1) == 0 )
  {
    xxxSetWindowPos(a1, v30.right - v30.left, v30.bottom - v30.top, v21);
    goto LABEL_24;
  }
  if ( v16 )
  {
    if ( (*((_BYTE *)a1 + 59) & 0x40) != 0 )
      *(_DWORD *)(v16 + 32) &= ~0x10u;
    if ( (*(_DWORD *)(v16 + 32) & 0x10) != 0 )
    {
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
      {
        v27.x += v28;
        v27.y += v13;
      }
      if ( v8 )
        TransformPointBetweenCoordinateSpaces(&v27, &v27, a1, 0LL);
LABEL_46:
      xxxSetWindowPos(a1, 0, 0, v21 | 1);
    }
  }
LABEL_24:
  v22 = *(unsigned int *)(a2 + 4);
  if ( (v22 & 4) == 0 || (v25 = *((_QWORD *)a1 + 2), *(_QWORD *)(v25 + 408) == *(_QWORD *)(gptiCurrent + 408LL)) )
  {
    v23 = 0;
    xxxShowWindowEx(a1);
  }
  else
  {
    v23 = 1;
    PostEventMessageEx(
      (struct tagTHREADINFO *)v25,
      0,
      v22,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 && !v23 )
    WPUpdateCheckPointSettings((__int64)a1, *(_DWORD *)(a2 + 4));
  return 1LL;
}
