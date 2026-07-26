/*
 * XREFs of ndisSetFilterDefaultParameter @ 0x1C00DBC48
 * Callers:
 *     ndisSetAllFilterDefaultParameters @ 0x1C00DB9CC (ndisSetAllFilterDefaultParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 */

__int64 __fastcall ndisSetFilterDefaultParameter(__int64 a1, const WCHAR *a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v5; // edi
  char v9; // r14
  NTSTATUS RegistryValues; // eax
  NTSTATUS v11; // ebx
  wchar_t *Buffer; // rcx
  unsigned int v13; // ebx
  const WCHAR *v14; // rdx
  NTSTATUS v15; // eax
  int v16; // ecx
  __int64 ValueLength; // [rsp+28h] [rbp-D8h]
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[5]; // [rsp+70h] [rbp-90h] BYREF

  v5 = 0;
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&String2.Length = 0;
  v9 = 1;
  String2.Buffer = 0LL;
  Value = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x5Eu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, a2, a3);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = *(wchar_t **)(a3 + 8);
  QueryTable[0].QueryRoutine = 0LL;
  QueryTable[1].QueryRoutine = 0LL;
  QueryTable[2].QueryRoutine = 0LL;
  QueryTable[1].Name = L"Optional";
  QueryTable[3].QueryRoutine = 0LL;
  QueryTable[4].Name = 0LL;
  QueryTable[1].Flags = a4 != 0 ? 288 : 32;
  QueryTable[1].EntryContext = &String;
  QueryTable[2].Flags = QueryTable[1].Flags;
  QueryTable[2].Name = L"Default";
  QueryTable[2].EntryContext = &DestinationString;
  QueryTable[3].Name = L"Type";
  QueryTable[3].Flags = QueryTable[1].Flags;
  QueryTable[3].EntryContext = &String2;
  QueryTable[0].Flags = 1;
  QueryTable[1].DefaultType = a4 != 0 ? 0x1000000 : 0;
  QueryTable[2].DefaultType = QueryTable[1].DefaultType;
  QueryTable[3].DefaultType = QueryTable[1].DefaultType;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, a2, QueryTable, 0LL, 0LL);
  v11 = RegistryValues;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_dd(0x5Fu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, RegistryValues, a4);
  if ( v11 )
  {
    v5 = -1073741823;
  }
  else
  {
    if ( String.Buffer )
      RtlUnicodeStringToInteger(&String, 0xAu, &Value);
    if ( !Value )
    {
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        if ( !String2.Buffer )
          goto LABEL_17;
        v13 = 0;
        while ( RtlCompareUnicodeString((PCUNICODE_STRING)((char *)&unk_1C007BD70 + 24 * v13), &String2, 1u) )
        {
          if ( ++v13 >= 6 )
            goto LABEL_17;
        }
        v14 = (const WCHAR *)&unk_1C007D350;
        if ( (unsigned int)(*((_DWORD *)&unk_1C007BD70 + 6 * v13 + 4) - 4) > 1 )
LABEL_17:
          v14 = L"0";
        RtlInitUnicodeString(&DestinationString, v14);
        Buffer = DestinationString.Buffer;
        v9 = 0;
      }
      v15 = RtlWriteRegistryValue(
              1u,
              *(PCWSTR *)(a1 + 8),
              *(PCWSTR *)(a3 + 8),
              1u,
              Buffer,
              DestinationString.Length + 2);
      v16 = 0;
      if ( v15 )
        v16 = -1073741823;
      v5 = v16;
    }
  }
  if ( String.Buffer )
    ExFreePoolWithTag(String.Buffer, 0);
  if ( DestinationString.Buffer && v9 )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(ValueLength) = v5;
    WPP_SF_qqqL(0x60u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, a2, a3, ValueLength);
  }
  return v5;
}
