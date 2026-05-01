/*
 * XREFs of ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180095304
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180063DB0 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x18015FB1C (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801862DC (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     InitDPI @ 0x18008F21C (InitDPI.c)
 */

int __fastcall ExperienceManagerUtils::UnscaleByPerMonitorDPI(ExperienceManagerUtils *this, __int64 a2, HMONITOR a3)
{
  int v4; // esi
  int v5; // edi
  int nDenominator; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v4 = (int)this;
  InitDPI();
  v5 = nNumerator;
  if ( (int)GetDpiForMonitor(a2, 0LL, &nDenominator, &v8) >= 0 )
    v5 = nDenominator;
  return MulDiv(v4, 96, v5);
}
