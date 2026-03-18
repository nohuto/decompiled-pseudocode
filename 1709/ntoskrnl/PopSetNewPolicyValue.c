/*
 * XREFs of PopSetNewPolicyValue @ 0x1404DF45C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404DF408 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PpmSetProfilePolicySetting @ 0x1404DEB98 (PpmSetProfilePolicySetting.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     PopStateIsSessionSpecific @ 0x1404DFFB8 (PopStateIsSessionSpecific.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall PopSetNewPolicyValue(__int64 a1, __int64 a2, __int64 a3)
{
  GUID *v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v8; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  v3 = (GUID *)(a1 + 20);
  LOBYTE(a3) = 1;
  v5 = 0;
  if ( (int)RtlStringFromGUIDEx(a1 + 20, &UnicodeString, a3) >= 0 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( !(unsigned __int8)PopStateIsSessionSpecific(v3) )
  {
    v6 = *(_QWORD *)(a1 + 36) - *(_QWORD *)&GUID_PROCESSOR_SETTINGS_SUBGROUP.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 44) - *(_QWORD *)GUID_PROCESSOR_SETTINGS_SUBGROUP.Data4;
    if ( v6 )
      return (unsigned int)PopSetPowerSettingValue(v3, (void *)(a1 + 60));
    v5 = PpmSetProfilePolicySetting((_QWORD *)(a1 + 4), v3, *(_DWORD *)(a1 + 52), a1 + 60, *(_DWORD *)(a1 + 56));
    if ( v5 == -1073741275 )
      v5 = 0;
    v8 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&NullGuid.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(a1 + 12) - *(_QWORD *)NullGuid.Data4;
    if ( !v8 )
      return (unsigned int)PopSetPowerSettingValue(v3, (void *)(a1 + 60));
  }
  return v5;
}
