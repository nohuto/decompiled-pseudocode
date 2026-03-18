/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     AdjustWindowRectExInternal @ 0x1C003E718 (AdjustWindowRectExInternal.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetWindowFrameMetricInternal @ 0x1C00418B0 (GetWindowFrameMetricInternal.c)
 *     GetResizeBorderWidthInternal @ 0x1C0042D24 (GetResizeBorderWidthInternal.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     GetCaptionHeight @ 0x1C0043588 (GetCaptionHeight.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     GetWindowNCMetricsForDpi @ 0x1C0044D04 (GetWindowNCMetricsForDpi.c)
 *     xxxGetMenuBarInfo @ 0x1C00C2D68 (xxxGetMenuBarInfo.c)
 *     _SystemParametersInfoForDpi @ 0x1C00F6100 (_SystemParametersInfoForDpi.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C0210C2C (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(unsigned int a1)
{
  _DWORD *v1; // rdx
  int v2; // eax
  __int64 v4; // r8
  int DpiDepSysMetCachePlateauSlot; // eax
  _QWORD *v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  _OWORD *v9; // rsi
  unsigned __int64 v10; // rbx
  int v11; // eax
  _OWORD v13[3]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v14[4]; // [rsp+50h] [rbp-58h] BYREF

  v1 = v14;
  v2 = 30;
  v13[0] = _mm_load_si128((const __m128i *)&_xmm);
  v13[2] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = 4LL;
  v13[1] = _mm_load_si128((const __m128i *)&_xmm);
  do
  {
    *v1++ = v2++;
    --v4;
  }
  while ( v4 );
  v14[1] = _mm_load_si128((const __m128i *)&_xmm);
  v14[3] = _mm_load_si128((const __m128i *)&_xmm);
  v14[2] = _mm_load_si128((const __m128i *)&_xmm);
  DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a1);
  v6 = (_QWORD *)gpsi;
  v7 = 28LL;
  v8 = 112LL * DpiDepSysMetCachePlateauSlot;
  v9 = &v13[v8 / 0xFFFFFFFFFFFFFFF0uLL];
  v10 = v8 + 3044;
  do
  {
    if ( *(_DWORD *)(v10 + *v6) == -1 )
    {
      v11 = ScaleSystemMetricForDPIWithoutCache(*(unsigned int *)((char *)v9 + v10 - 3044), a1);
      v6 = (_QWORD *)gpsi;
      *(_DWORD *)(v10 + gpsi) = v11;
    }
    v10 += 4LL;
    --v7;
  }
  while ( v7 );
  return 1LL;
}
