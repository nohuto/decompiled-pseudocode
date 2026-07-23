/*
 * XREFs of PopSetNewPolicyValue @ 0x140518BB4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140518B54 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PpmSetProfilePolicySetting @ 0x140518648 (PpmSetProfilePolicySetting.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopStateIsSessionSpecific @ 0x140519554 (PopStateIsSessionSpecific.c)
 */

__int64 __fastcall PopSetNewPolicyValue(__int64 a1)
{
  GUID *v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v6; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  v1 = (GUID *)(a1 + 20);
  v3 = 0;
  if ( RtlStringFromGUIDEx((PGUID)(a1 + 20), &UnicodeString, 1u) >= 0 )
    RtlFreeAnsiString(&UnicodeString);
  if ( !(unsigned __int8)PopStateIsSessionSpecific(v1) )
  {
    v4 = *(_QWORD *)(a1 + 36) - *(_QWORD *)&GUID_PROCESSOR_SETTINGS_SUBGROUP.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(a1 + 44) - *(_QWORD *)GUID_PROCESSOR_SETTINGS_SUBGROUP.Data4;
    if ( v4 )
      return (unsigned int)PopSetPowerSettingValue(v1, (void *)(a1 + 60));
    v3 = PpmSetProfilePolicySetting((_QWORD *)(a1 + 4), v1, *(_DWORD *)(a1 + 52), a1 + 60, *(_DWORD *)(a1 + 56));
    if ( v3 == -1073741275 )
      v3 = 0;
    v6 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&NullGuid.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 12) - *(_QWORD *)NullGuid.Data4;
    if ( !v6 )
      return (unsigned int)PopSetPowerSettingValue(v1, (void *)(a1 + 60));
  }
  return v3;
}
