/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F7D60
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C011E940 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 DPIServerInfo; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebp
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagSIZE v15; // [rsp+90h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( gbGreTextReady && *(_DWORD *)(gpsi + 2148LL) )
  {
    DPIServerInfo = GetDPIServerInfo((__int64)a1, (__int64)a2, gpsi, a4);
    v8 = *(_QWORD *)(DPIServerInfo + 8);
    if ( v8 )
      v6 = GreSelectFont((__int64)a1, v8);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v10, v9);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v11 = GreSetBkMode(a1, 1);
    v12 = GreSetTextColor(a1, 0xFFFFFF);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v15, 1) )
    {
      GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(a1, a2->right - v15.cx, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(
        a1,
        a2->right - v15.cx,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
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
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0LL,
        0LL,
        0);
    }
    GreSetBkMode(a1, v11);
    GreSetTextColor(a1, v12);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v14, v13);
    EnterCrit(0LL, 1LL);
    if ( v6 )
      GreSelectFont((__int64)a1, v6);
  }
}
