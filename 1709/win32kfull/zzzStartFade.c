/*
 * XREFs of zzzStartFade @ 0x1C013DD98
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01C574C (zzzStartSonar.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 *     zzzShowFade @ 0x1C013DE64 (zzzShowFade.c)
 */

__int64 zzzStartFade()
{
  GreSetDCOwnerEx(gfade[1], 0LL, 0LL, 0LL);
  GreSetBitmapOwner(gfade[2], 0LL);
  zzzShowFade();
  HIDWORD(gfade[5]) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - (40 * LODWORD(gfade[5]) + 255) / 0xFFu;
  return SetSystemTimer(gTermIO[1], 65526, (LODWORD(gfade[6]) & 0x80u) != 0 ? 50 : 10, (int)xxxSystemTimerProc, 1);
}
