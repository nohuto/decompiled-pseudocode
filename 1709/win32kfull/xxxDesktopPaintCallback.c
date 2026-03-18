/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C011E940
 * Callers:
 *     NtUserPaintMonitor @ 0x1C01EA020 (NtUserPaintMonitor.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F7D60 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // edi
  __int64 StyleWindow; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  BOOL v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  BOOL v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  struct tagRECT v26; // [rsp+30h] [rbp-28h] BYREF
  __int128 v27; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  v26 = (struct tagRECT)*GetMonitorWorkRect(&v27, a1);
  if ( a2 )
  {
    GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 32LL));
    v8 = LookupDC(a2, 0LL);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 && (*(_WORD *)(v9 + 82) & 0x3FFF) == 0x29D && *(PVOID *)(v9 + 24) == grpdeskLogon )
        v5 = 1;
      if ( (*(_DWORD *)(v8 + 64) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v9, 2848);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    if ( StyleWindow )
    {
      v21 = *(_DWORD *)(StyleWindow + 128);
      v22 = -*(_DWORD *)(StyleWindow + 132);
      v26.bottom -= *(_DWORD *)(StyleWindow + 132);
      v23 = -v21;
      v26.left += v23;
      v26.right += v23;
      v26.top += v22;
    }
  }
  if ( !*(_DWORD *)(gpsi + 2148LL) && !v5 )
  {
    if ( gbDesktopLocked )
    {
      v12 = 0;
    }
    else
    {
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      EnterRenderBlock();
      UserSessionSwitchLeaveCrit(v18, v17);
      EnterSharedCrit(0LL, 1LL);
      EnterSharedRenderCrit();
      v12 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 4688LL)) != 0;
      LeaveRenderBlock();
      LeaveRenderCrit();
      UserSessionSwitchLeaveCrit(v20, v19);
      EnterCrit(0LL, 1LL);
    }
    goto LABEL_20;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v11, v10);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v12 = FillRect(a2, a3, ghbrBlack) != 0;
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v14, v13);
  EnterCrit(0LL, 1LL);
  if ( !v5 )
  {
LABEL_20:
    if ( *(_DWORD *)(gpsi + 2148LL) )
    {
      v24 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( v24 )
        v25 = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 160LL);
      else
        v25 = 0LL;
      v16 = v25 == 0;
    }
    else
    {
      v16 = 0;
    }
    if ( v16 )
      PaintWatermark(a2, &v26);
  }
  return v12;
}
