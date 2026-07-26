/*
 * XREFs of ndisNDKGlobalDisabled @ 0x1C00E3EB0
 * Callers:
 *     NdisReadConfiguration @ 0x1C00AE8B0 (NdisReadConfiguration.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 */

bool ndisNDKGlobalDisabled()
{
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v2[56]; // [rsp+68h] [rbp+1Fh] BYREF
  int v3; // [rsp+B0h] [rbp+67h] BYREF

  v3 = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))ndisReadRegParameters;
  QueryTable.Flags = 20;
  QueryTable.Name = L"NetworkDirectDisable";
  QueryTable.DefaultType = 4;
  memset(v2, 0, sizeof(v2));
  QueryTable.EntryContext = &v3;
  return RtlQueryRegistryValuesEx(1u, L"NDIS\\Parameters", &QueryTable, 0LL, 0LL) >= 0 && v3;
}
