/*
 * XREFs of PopBackgroundActivityPolicyCallback @ 0x14022A280
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPowerSettingValue @ 0x140072BB0 (PopGetPowerSettingValue.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopTraceBackgroundActivityPolicyUpdate @ 0x1406CEC10 (PopTraceBackgroundActivityPolicyUpdate.c)
 */

__int64 __fastcall PopBackgroundActivityPolicyCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  int PowerSettingValue; // edi
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // ebp
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+40h] [rbp-18h] BYREF
  WNF_CHANGE_STAMP v18[5]; // [rsp+44h] [rbp-14h] BYREF

  PowerSettingValue = 0;
  PopAcquirePolicyLock(SettingGuid, Value);
  v9 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v9 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v9 && ValueLength == 4 && Value )
  {
    v10 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_ACDC_POWER_SOURCE, v8, 3u, &v17, v16, v18);
    if ( PowerSettingValue < 0 )
      goto LABEL_22;
    v10 = v17;
  }
  v11 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v11 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v11 && ValueLength == 4 && Value )
  {
    v12 = *Value;
  }
  else
  {
    PowerSettingValue = PopGetPowerSettingValue((__int64)&GUID_LOW_POWER_EPOCH, v11, 3u, &v17, v16, v18);
    if ( PowerSettingValue < 0 )
      goto LABEL_22;
    v12 = v17;
  }
  if ( !v12 || (v13 = 1, v10 != 1) )
    v13 = 0;
  v14 = PopBackgroundActivityPolicy;
  if ( PopBackgroundActivityPolicy != v13 )
  {
    PopBackgroundActivityPolicy = v13;
    ZwUpdateWnfStateData(&WNF_PO_BACKGROUND_ACTIVITY_POLICY, &PopBackgroundActivityPolicy, 4u, 0LL, 0LL, 0, 0);
    PopTraceBackgroundActivityPolicyUpdate(v14);
  }
LABEL_22:
  PopReleasePolicyLock();
  return (unsigned int)PowerSettingValue;
}
