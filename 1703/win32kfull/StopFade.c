/*
 * XREFs of StopFade @ 0x1C01C2190
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00A15E0 (xxxDwmStopRedirection.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     EditionHandleSonarKeyEvent @ 0x1C01031D0 (EditionHandleSonarKeyEvent.c)
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 *     EditionStopSonar @ 0x1C013B8B0 (EditionStopSonar.c)
 *     ?ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z @ 0x1C019CEF8 (-ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z.c)
 *     zzzAnimateFade @ 0x1C01C27AC (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01C2A28 (zzzStartSonar.c)
 *     MNAnimate @ 0x1C0215560 (MNAnimate.c)
 * Callees:
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     DeleteFadeSprite @ 0x1C01C1F70 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  __int64 v0; // rax
  unsigned int v1; // ecx
  int v2; // edi
  HDC DCEx; // rbx
  int v4; // esi
  unsigned __int8 Layout; // al
  __int64 StockObject; // rax
  __int64 result; // rax

  FindTimer(gTermIO[1], 65526LL, 2u, 1, 0LL);
  v0 = DeleteFadeSprite();
  v1 = gfade[12];
  if ( (v1 & 2) == 0 && (v1 & 1) != 0 )
  {
    if ( v0 )
    {
      v2 = 0;
      DCEx = (HDC)_GetDCEx(v0, 0LL, 3LL);
      v4 = 0;
    }
    else
    {
      v2 = gfade[6];
      v4 = gfade[7];
      DCEx = *(HDC *)(gpDispInfo + 48LL);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(DCEx, v2, v4, gfade[8], gfade[9], *(HDC *)&gfade[2], 0, 0, (Layout << 31) + 13369376, 0, 0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)&gfade[2], StockObject);
  GreCleanDC(*(_QWORD *)&gfade[2]);
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 0LL);
  GreDeleteObject(*(_QWORD *)&gfade[4]);
  *(_QWORD *)&gfade[4] = 0LL;
  result = *(_QWORD *)gfade;
  gfade[12] = 0;
  return result;
}
