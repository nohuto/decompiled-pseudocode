/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x140519458
 * Callers:
 *     PopGetPowerSettingValue @ 0x140074EA4 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x140171BA4 (PopInitilizeAcDcSettings.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14051D710 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x140565F00 (PopGetSettingValue.c)
 *     PopQueryPowerSettingUlong @ 0x1405EEC60 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x1405194E0 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x140519554 (PopStateIsSessionSpecific.c)
 */

__int64 *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  __int64 **ListHead; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx

  ListHead = (__int64 **)PopGetListHead(a1);
  v5 = *ListHead;
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1) )
  {
    while ( v5 != (__int64 *)ListHead )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (*((_DWORD *)v5 + 13) & 4) == 0 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  else
  {
    while ( v5 != (__int64 *)ListHead )
    {
      v6 = v5[4] - *a1;
      if ( !v6 )
        v6 = v5[5] - a1[1];
      if ( !v6 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  return 0LL;
}
