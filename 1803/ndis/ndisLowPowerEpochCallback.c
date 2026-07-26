/*
 * XREFs of ndisLowPowerEpochCallback @ 0x1C004FE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLowPowerEpochCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  unsigned __int8 v5; // r9
  __int64 result; // rax

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  v5 = ndisLowPowerEpoch;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( !v4 && ValueLength == 4 && Value )
    v5 = *Value != 0;
  result = 0LL;
  if ( ndisLowPowerEpoch != v5 )
    ndisLowPowerEpoch = v5;
  return result;
}
