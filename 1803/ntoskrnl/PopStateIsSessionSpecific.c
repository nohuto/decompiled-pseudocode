/*
 * XREFs of PopStateIsSessionSpecific @ 0x140519554
 * Callers:
 *     PopSetNewPolicyValue @ 0x140518BB4 (PopSetNewPolicyValue.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140519458 (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x1405194E0 (PopGetListHead.c)
 *     PoRegisterPowerSettingCallback @ 0x14051D710 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 * Callees:
 *     <none>
 */

char __fastcall PopStateIsSessionSpecific(_QWORD *a1)
{
  char v1; // dl
  GUID **v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // r8

  v1 = 0;
  v2 = PopSessionSpecificGuids;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)&(*v2)->Data1 - *a1;
    if ( !v4 )
      v4 = *(_QWORD *)(*v2)->Data4 - a1[1];
    if ( !v4 )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 2 )
      return v1;
  }
  return 1;
}
