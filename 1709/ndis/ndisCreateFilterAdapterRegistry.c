/*
 * XREFs of ndisCreateFilterAdapterRegistry @ 0x1C00C4630
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C00E59DC (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterAdapterRegistry(PCUNICODE_STRING Source, __int64 a2)
{
  unsigned int v2; // edi
  const GUID *v5; // rcx
  NTSTATUS v6; // ebx
  wchar_t *PoolWithTag; // rax
  PVOID Environment; // [rsp+28h] [rbp-79h]
  _UNICODE_STRING Destination; // [rsp+38h] [rbp-69h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  _UNICODE_STRING GuidString; // [rsp+58h] [rbp-49h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+68h] [rbp-39h] BYREF
  int v14; // [rsp+110h] [rbp+6Fh] BYREF

  v2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  v14 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x56u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Source, a2);
  v5 = *(const GUID **)(a2 + 16);
  if ( v5 )
  {
    if ( !RtlStringFromGUID(v5 + 252, &GuidString) )
    {
      v6 = RtlUpcaseUnicodeString(&DestinationString, &GuidString, 1u);
      RtlFreeUnicodeString(&GuidString);
      if ( !v6 )
      {
        Destination.MaximumLength = DestinationString.Length
                                  + ndisParameterStr.Length
                                  + ndisFilterAdapterStr.Length
                                  + Source->Length
                                  + 2;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
        Destination.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, Destination.MaximumLength);
          RtlCopyUnicodeString(&Destination, Source);
          RtlAppendUnicodeStringToString(&Destination, &ndisParameterStr);
          if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
          {
            memset(QueryTable, 0, sizeof(QueryTable));
            QueryTable[0].Name = L"SkipNdisAdaptersKeyGeneration";
            QueryTable[0].QueryRoutine = 0LL;
            QueryTable[0].EntryContext = &v14;
            QueryTable[0].Flags = 292;
            QueryTable[0].DefaultType = 0x4000000;
            QueryTable[1].Name = 0LL;
            if ( !RtlQueryRegistryValuesEx(1u, (PCWSTR)Destination.Buffer, QueryTable, 0LL, 0LL) && v14 == 1 )
              goto LABEL_10;
          }
          RtlAppendUnicodeStringToString(&Destination, &ndisFilterAdapterStr);
          if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer)
            || !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
          {
            RtlAppendUnicodeStringToString(&Destination, &DestinationString);
            if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
              goto LABEL_10;
            if ( !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
            {
              v2 = ndisSetAllFilterDefaultParameters(Source);
              goto LABEL_10;
            }
          }
          v2 = -1073741823;
        }
        else
        {
          v2 = -1073741670;
        }
LABEL_10:
        RtlFreeUnicodeString(&DestinationString);
        goto LABEL_11;
      }
    }
    v2 = -1073741823;
  }
  else
  {
    v2 = -1073741811;
  }
LABEL_11:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    LODWORD(Environment) = v2;
    WPP_SF_qqd(0x57u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, Source, a2, Environment);
  }
  return v2;
}
