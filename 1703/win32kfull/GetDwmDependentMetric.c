/*
 * XREFs of GetDwmDependentMetric @ 0x1C003E228
 * Callers:
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0005D90 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     _GetClientRect @ 0x1C003C920 (_GetClientRect.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F18E0 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     _GetMouseMovePointsEx @ 0x1C01A19C4 (_GetMouseMovePointsEx.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01A3358 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01BF2E0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C0710 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C0C58 (VirtualizeMultiMonDigitizerSize.c)
 *     _GetWindowRect @ 0x1C02392D4 (_GetWindowRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDwmDependentMetric(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  v4 = (int)a1;
  if ( a2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL);
    if ( !v6 )
      goto LABEL_16;
    v7 = *(_DWORD *)(**(_QWORD **)(v6 + 8) + 52LL);
  }
  else
  {
    if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), 0LL, a3, a4) + 408) )
      goto LABEL_16;
    a1 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v14, v15, v16) + 408) + 8LL);
    v7 = *(_DWORD *)(a1 + 52);
  }
  if ( (v7 & 1) != 0 )
  {
    v8 = 1;
    goto LABEL_6;
  }
LABEL_16:
  v8 = 0;
LABEL_6:
  if ( v8 )
  {
    if ( a2 )
      v9 = *(_DWORD *)(a2 + 368);
    else
      LOBYTE(v9) = W32GetCurrentThreadDpiAwarenessContext(a1);
    v10 = v9 & 0xF;
    if ( v10 == 1 )
    {
      v12 = gpsi + 2656LL;
      return *(unsigned int *)(v12 + 4 * v4);
    }
    v11 = gpsi;
    if ( !v10 )
    {
      v12 = gpsi + 2268LL;
      return *(unsigned int *)(v12 + 4 * v4);
    }
  }
  else
  {
    v11 = gpsi;
  }
  v12 = v11 + 1880;
  return *(unsigned int *)(v12 + 4 * v4);
}
