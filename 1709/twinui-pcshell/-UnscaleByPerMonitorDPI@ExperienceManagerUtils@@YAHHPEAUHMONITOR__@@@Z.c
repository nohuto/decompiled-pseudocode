/*
 * XREFs of ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB7C0
 * Callers:
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x1800AA088 (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800D77C8 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800DA514 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     InitDPI @ 0x1801C95D0 (InitDPI.c)
 */

int __fastcall ExperienceManagerUtils::UnscaleByPerMonitorDPI(ExperienceManagerUtils *this, __int64 a2, HMONITOR a3)
{
  int v4; // esi
  int v5; // edi
  int nDenominator; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v4 = (int)this;
  InitDPI();
  v5 = dword_1802B8FBC;
  if ( (int)GetDpiForMonitor(a2, 0LL, &nDenominator, &v8) >= 0 )
    v5 = nDenominator;
  return MulDiv(v4, 96, v5);
}
