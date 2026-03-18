/*
 * XREFs of xxxSetWindowPlacement @ 0x1C0101008
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C0100F10 (NtUserSetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C001D3E8 (UpdateCheckpoint.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C0101490 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C0101708 (WPUpdateCheckPointSettings.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  int v2; // r13d
  __int64 v5; // r14
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  int v8; // r12d
  char CurrentThreadDpiAwarenessContext; // al
  int v10; // ecx
  struct tagPOINT v11; // rax
  struct tagPOINT v12; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r14d
  __int64 updated; // rax
  __int64 v18; // r8
  unsigned int v19; // edx
  int v20; // edx
  int v21; // ecx
  char v22; // al
  int v23; // edi
  __int64 v24; // r8
  int v25; // edi
  __int64 v27; // r10
  struct tagPOINT v28; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v29; // [rsp+48h] [rbp-28h] BYREF
  int v30; // [rsp+50h] [rbp-20h]
  struct tagRECT v31; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 1;
  if ( !a1
    || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) != 0
    || (CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(),
        v10 = *((_DWORD *)a1 + 92) & 0xF,
        v30 = 1,
        (CurrentThreadDpiAwarenessContext & 0xF) == v10) )
  {
    v30 = 0;
  }
  v31 = *(struct tagRECT *)(a2 + 28);
  if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
  {
    v5 = MonitorFromRect(&v31.left, 1u);
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v6 = (_DWORD *)(*(_QWORD *)(v5 + 40) + 92LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v6 = (_DWORD *)(*(_QWORD *)(v5 + 40) + 108LL);
    }
    else
    {
      v6 = (_DWORD *)(*(_QWORD *)(v5 + 40) + 76LL);
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v7 = (_DWORD *)(*(_QWORD *)(v5 + 40) + 44LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v7 = (_DWORD *)(*(_QWORD *)(v5 + 40) + 60LL);
    }
    else
    {
      v7 = (_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL);
    }
  }
  v11 = *(struct tagPOINT *)(a2 + 12);
  v29 = v11;
  if ( v11.x == -1 || v11.y == -1 )
    v8 = 0;
  v12 = *(struct tagPOINT *)(a2 + 20);
  v28 = v12;
  if ( v12.x != -1 && v12.y != -1 )
    v2 = 1;
  if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) && *((char *)a1 + 64) >= 0 )
  {
    v14 = v6[1] - v7[1];
    v15 = *v6 - *v7;
    v31.left += v15;
    v31.right += v15;
    v31.bottom += v14;
    v31.top += v14;
    if ( v8 )
    {
      v29.x = *v6 - *v7 + v13;
      v29.y += v6[1] - v7[1];
    }
    CheckPlacementBounds(&v31, &v29, &v28, (struct tagMONITOR *)v5);
  }
  v16 = v30;
  if ( v30 )
    TransformRectBetweenCoordinateSpaces(&v31, &v31, a1, 0LL);
  updated = UpdateCheckpoint((__int64)a1);
  v18 = updated;
  if ( updated )
  {
    v19 = *(_DWORD *)(updated + 32) & 0xFFFFFFF7;
    *(struct tagRECT *)updated = v31;
    *(struct tagPOINT *)(updated + 16) = v29;
    v20 = (8 * v8) | v19;
    *(_DWORD *)(updated + 32) = v20;
    v21 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    *(_DWORD *)(updated + 32) = v21;
    *(struct tagPOINT *)(updated + 24) = v28;
    *(_DWORD *)(updated + 32) = (16 * v2) | v21 & 0xFFFFFFED;
  }
  v22 = *((_BYTE *)a1 + 71);
  v23 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  if ( (v22 & 0x20) != 0 )
  {
    if ( (!v18 || (*(_DWORD *)(v18 + 32) & 1) != 0) && v8 )
    {
      if ( v16 )
        TransformPointBetweenCoordinateSpaces(&v29, &v29, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v29.x, (unsigned int)v29.y, 0, 0, v23 | 1);
    }
  }
  else if ( (v22 & 1) != 0 )
  {
    if ( v18 )
    {
      if ( (*((_BYTE *)a1 + 59) & 0x40) != 0 )
        *(_DWORD *)(v18 + 32) &= ~0x10u;
      if ( (*(_DWORD *)(v18 + 32) & 0x10) != 0 )
      {
        if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
        {
          v28.x += *v6;
          v28.y += v6[1];
        }
        if ( v16 )
          TransformPointBetweenCoordinateSpaces(&v28, &v28, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v28.x, (unsigned int)v28.y, 0, 0, v23 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v31.left,
      (unsigned int)v31.top,
      v31.right - v31.left,
      v31.bottom - v31.top,
      v23);
  }
  v24 = *(unsigned int *)(a2 + 4);
  if ( (v24 & 4) == 0 || (v27 = *((_QWORD *)a1 + 2), *(_QWORD *)(v27 + 384) == *(_QWORD *)(gptiCurrent + 384LL)) )
  {
    v25 = 0;
    xxxShowWindowEx(a1, *(_WORD *)(a2 + 8), 0);
  }
  else
  {
    v25 = 1;
    PostEventMessageEx(
      v27,
      *(_QWORD *)(v27 + 384),
      1u,
      (__int64)a1,
      0,
      v24,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 && !v25 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
