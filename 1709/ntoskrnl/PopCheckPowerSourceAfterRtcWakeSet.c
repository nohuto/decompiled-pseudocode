/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeSet @ 0x14024417C
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 */

_BOOL8 PopCheckPowerSourceAfterRtcWakeSet()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  KeResetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted);
  v1[1] = -1LL;
  v1[0] = 0LL;
  return KeSetTimer2(
           (__int64)&PopCheckPowerSourceAfterRtcWakeTimer,
           -10000000LL * (unsigned int)PopCheckPowerSourceAfterRtcWakeTime,
           0LL,
           (__int64)v1);
}
