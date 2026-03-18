/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x1404C2204
 * Callers:
 *     PopGetPowerSettingValue @ 0x140072BB0 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x1401557BC (PopInitilizeAcDcSettings.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14041A050 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1404C2C70 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1404C4DF4 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x1404C79F0 (PopGetSettingValue.c)
 * Callees:
 *     PopGetListHead @ 0x1404C228C (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1404C2300 (PopStateIsSessionSpecific.c)
 */

_QWORD *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  _QWORD *ListHead; // rbx
  _QWORD *j; // rdx
  __int64 v6; // rcx
  _QWORD *i; // rcx

  ListHead = (_QWORD *)PopGetListHead(a1);
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1) )
  {
    for ( i = (_QWORD *)*ListHead; i != ListHead; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i + 12) == a2 && (*((_DWORD *)i + 13) & 4) == 0 )
        return i;
    }
  }
  else
  {
    for ( j = (_QWORD *)*ListHead; j != ListHead; j = (_QWORD *)*j )
    {
      v6 = j[4] - *a1;
      if ( !v6 )
        v6 = j[5] - a1[1];
      if ( !v6 )
        return j;
    }
  }
  return 0LL;
}
