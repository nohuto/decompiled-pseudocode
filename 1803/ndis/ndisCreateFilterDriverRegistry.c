/*
 * XREFs of ndisCreateFilterDriverRegistry @ 0x1C00B63CC
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00162A0 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00E7230 (ndisSetAllFilterDefaultParameters.c)
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
    WPP_SF_q(0x53u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, (__int64)Source);
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
    WPP_SF_dd(0x54u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, RegistryValues, a2);
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
    WPP_SF_qD(0x55u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, (__int64)Source, v3);
  return v3;
}
