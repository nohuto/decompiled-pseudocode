/*
 * XREFs of zzzStartFade @ 0x1C01C295C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01C2A28 (zzzStartSonar.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02034AC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00B21F0 (_SetSystemTimer.c)
 *     zzzShowFade @ 0x1C01C28F4 (zzzShowFade.c)
 */

__int64 zzzStartFade()
{
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 0LL);
  GreSetBitmapOwner(*(_QWORD *)&gfade[4], 0LL);
  zzzShowFade();
  gfade[11] = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
            - (40 * gfade[10] + 255) / 0xFF;
  return SetSystemTimer(gTermIO[1], 65526LL, (gfade[12] & 0x80u) != 0 ? 50 : 10, (int)xxxSystemTimerProc, 1);
}
