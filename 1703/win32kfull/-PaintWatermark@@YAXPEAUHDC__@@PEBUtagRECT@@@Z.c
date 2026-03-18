/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01ED8D4
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C0113D50 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v4; // rbp
  __int64 DPIServerInfo; // r14
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagSIZE v17; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( gbGreTextReady && *(_DWORD *)(gpsi + 2148LL) )
  {
    DPIServerInfo = GetDPIServerInfo((__int64)a1);
    v6 = *(_QWORD *)(DPIServerInfo + 8);
    if ( v6 )
      v4 = GreSelectFontInternal(a1, v6, 1);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v11 = GreSetBkMode(a1, 1);
    v12 = GreSetTextColor(a1, 0xFFFFFF);
    GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v17, 1);
    GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
    GreExtTextOutWInternal(a1, a2->right - v17.cx, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
    GreExtTextOutWInternal(
      a1,
      a2->right - v17.cx,
      a2->bottom - *(_DWORD *)(DPIServerInfo + 64),
      0,
      0LL,
      gwszSafeModeStr,
      gSafeModeStrLen,
      0LL,
      0LL,
      0);
    GreExtTextOutWInternal(
      a1,
      a2->left,
      a2->bottom - *(_DWORD *)(DPIServerInfo + 64),
      0,
      0LL,
      gwszSafeModeStr,
      gSafeModeStrLen,
      0LL,
      0LL,
      0);
    GreSetBkMode(a1, v11);
    GreSetTextColor(a1, v12);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
    EnterCrit(0LL, 1LL);
    if ( v4 )
      GreSelectFontInternal(a1, v4, 1);
  }
}
