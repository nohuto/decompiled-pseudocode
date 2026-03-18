/*
 * XREFs of IsSmallerThanScreen @ 0x1C0115C10
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetSysMenu @ 0x1C007AD30 (xxxSetSysMenu.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     ?GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z @ 0x1C005F570 (-GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C023A6EC (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(struct tagWND *a1, _QWORD *a2)
{
  struct tagMONITOR *v4; // rbp
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v6; // xmm1
  __int64 v7; // rax
  unsigned __int64 v8; // xmm0_8
  int v9; // esi
  int v10; // edi
  unsigned __int16 WindowCompositedDpi; // ax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v4 = _MonitorFromWindowInternal(a1, 1, 0);
  MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v13, (__int64)v4, a1);
  v6 = *MonitorWorkRectForWindow;
  v7 = MonitorWorkRectForWindow->m128i_i64[0];
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v9 = v8 - v7;
  v10 = HIDWORD(v8) - HIDWORD(v7);
  if ( a2 )
  {
    WindowCompositedDpi = GetWindowCompositedDpi(a1);
    *a2 = GetMonitorRegionForDpi(v4, WindowCompositedDpi);
  }
  return *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32) < v9 || *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33) < v10;
}
