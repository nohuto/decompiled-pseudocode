/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C0113D50
 * Callers:
 *     NtUserPaintMonitor @ 0x1C01DDF30 (NtUserPaintMonitor.c)
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01ED8D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // edi
  __int64 StyleWindow; // rbx
  struct tagRECT *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  BOOL v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  BOOL v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  struct tagRECT v36; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v9 = (struct tagRECT *)(*(_QWORD *)(a1 + 40) + 92LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v9 = (struct tagRECT *)(*(_QWORD *)(a1 + 40) + 108LL);
  }
  else
  {
    v9 = (struct tagRECT *)(*(_QWORD *)(a1 + 40) + 76LL);
  }
  v36 = *v9;
  if ( a2 )
  {
    GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 32LL));
    v10 = LookupDC(a2, 0LL);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      if ( v11 && (*(_WORD *)(v11 + 82) & 0x3FFF) == 0x29D && *(PVOID *)(v11 + 24) == grpdeskLogon )
        v5 = 1;
      if ( (*(_DWORD *)(v10 + 64) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v11, 2848);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    if ( StyleWindow )
    {
      v31 = *(_DWORD *)(StyleWindow + 128);
      v32 = -*(_DWORD *)(StyleWindow + 132);
      v36.bottom -= *(_DWORD *)(StyleWindow + 132);
      v33 = -v31;
      v36.left += v33;
      v36.right += v33;
      v36.top += v32;
    }
  }
  if ( !*(_DWORD *)(gpsi + 2148LL) && !v5 )
  {
    if ( gbDesktopLocked )
    {
      v16 = 0;
    }
    else
    {
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      EnterRenderBlock();
      UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
      EnterSharedCrit(0LL, 1LL);
      EnterSharedRenderCrit();
      v16 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 5096LL)) != 0;
      LeaveRenderBlock();
      LeaveRenderCrit();
      UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
      EnterCrit(0LL, 1LL);
    }
    goto LABEL_23;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v16 = FillRect(a2, a3, ghbrBlack) != 0;
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  EnterCrit(0LL, 1LL);
  if ( !v5 )
  {
LABEL_23:
    if ( *(_DWORD *)(gpsi + 2148LL) )
    {
      v34 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( v34 )
        v35 = *(_QWORD *)(*(_QWORD *)(v34 + 8) + 160LL);
      else
        v35 = 0LL;
      v22 = v35 == 0;
    }
    else
    {
      v22 = 0;
    }
    if ( v22 )
      PaintWatermark(a2, &v36);
  }
  return v16;
}
