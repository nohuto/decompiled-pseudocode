/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x18000A0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
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
  return sub_18000A6BC(RelativeTo, Path, QueryTable, Context, Environment, v6);
}
