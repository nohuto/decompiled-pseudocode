/*
 * XREFs of StopFade @ 0x1C013E090
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 *     EditionHandleSonarKeyEvent @ 0x1C010EA20 (EditionHandleSonarKeyEvent.c)
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 *     zzzAnimateFade @ 0x1C013DECC (zzzAnimateFade.c)
 *     EditionStopSonar @ 0x1C0142670 (EditionStopSonar.c)
 *     zzzStartSonar @ 0x1C01C574C (zzzStartSonar.c)
 *     MNAnimate @ 0x1C0216480 (MNAnimate.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     DeleteFadeSprite @ 0x1C013E1F0 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  __int64 v0; // rax
  int v1; // ecx
  LONG v2; // edi
  HDC DCEx; // rbx
  int v4; // esi
  unsigned __int8 Layout; // al
  __int64 StockObject; // rax
  __int64 result; // rax

  FindTimer(gTermIO[1], 65526LL, 2u, 1, 0LL);
  v0 = DeleteFadeSprite();
  v1 = gfade[6];
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
      v2 = gfade[3];
      v4 = HIDWORD(gfade[3]);
      DCEx = *(HDC *)(gpDispInfo + 48LL);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(DCEx, v2, v4, gfade[4], HIDWORD(gfade[4]), (HDC)gfade[1], 0, 0, (Layout << 31) + 13369376, 0, 0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(gfade[1], StockObject);
  GreCleanDC(gfade[1]);
  GreSetDCOwnerEx(gfade[1], 0LL, 0LL, 0LL);
  GreDeleteObject(gfade[2]);
  gfade[2] = 0LL;
  result = gfade[0];
  LODWORD(gfade[6]) = 0;
  return result;
}
