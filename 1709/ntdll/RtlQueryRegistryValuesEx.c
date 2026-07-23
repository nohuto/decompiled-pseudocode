/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x180066A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180066AA0 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable, Context, Environment, v6);
}
