/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x1404DFEBC
 * Callers:
 *     PopGetPowerSettingValue @ 0x1400B16E8 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x140139D88 (PopInitilizeAcDcSettings.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x14057CFF0 (PopGetSettingValue.c)
 *     PopQueryPowerSettingUlong @ 0x140701348 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x1404DFF44 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1404DFFB8 (PopStateIsSessionSpecific.c)
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
