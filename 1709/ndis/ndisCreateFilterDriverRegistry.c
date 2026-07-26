/*
 * XREFs of ndisCreateFilterDriverRegistry @ 0x1C00C8068
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00206B0 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00E59DC (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterDriverRegistry(PCUNICODE_STRING Source, unsigned __int8 a2)
{
  unsigned int v3; // ebx
  wchar_t *PoolWithTag; // rax
  NTSTATUS RegistryValues; // eax
  NTSTATUS v7; // esi
  NTSTATUS v9; // eax
  int v10; // ecx
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-39h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+48h] [rbp-29h] BYREF
  int ValueData; // [rsp+D8h] [rbp+67h] BYREF

  v3 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x53u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)Source);
  DestinationString.MaximumLength = ndisParameterStr.Length + Source->Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.MaximumLength, 0x2020444Eu);
  DestinationString.Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    goto LABEL_10;
  }
  memset(PoolWithTag, 0, DestinationString.MaximumLength);
  RtlCopyUnicodeString(&DestinationString, Source);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
  if ( RtlCheckRegistryKey(1u, (PWSTR)DestinationString.Buffer)
    && RtlCreateRegistryKey(1u, (PWSTR)DestinationString.Buffer) )
  {
    goto LABEL_15;
  }
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].QueryRoutine = 0LL;
  QueryTable[1].Name = 0LL;
  QueryTable[0].Name = (wchar_t *)L"DefaultFilterSettings";
  QueryTable[0].EntryContext = &ValueData;
  QueryTable[0].Flags = a2 != 0 ? 292 : 36;
  QueryTable[0].DefaultType = a2 != 0 ? 0x4000000 : 0;
  RegistryValues = RtlQueryRegistryValuesEx(1u, (PCWSTR)DestinationString.Buffer, QueryTable, 0LL, 0LL);
  v7 = RegistryValues;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_dd(0x54u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, RegistryValues, a2);
  if ( !v7 )
    goto LABEL_8;
  if ( v7 != -1073741772 )
  {
LABEL_15:
    v3 = -1073741823;
  }
  else
  {
    v3 = ndisSetAllFilterDefaultParameters(Source);
    if ( !v3 )
    {
      ValueData = 1;
      v9 = RtlWriteRegistryValue(1u, (PCWSTR)DestinationString.Buffer, L"DefaultFilterSettings", 4u, &ValueData, 4u);
      v10 = 0;
      if ( v9 )
        v10 = -1073741823;
      v3 = v10;
    }
  }
LABEL_8:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_10:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x55u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)Source, v3);
  return v3;
}
