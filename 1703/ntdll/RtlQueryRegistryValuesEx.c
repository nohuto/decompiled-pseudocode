/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x180056380
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
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
  return sub_180056454(RelativeTo, Path, QueryTable, Context, Environment, v6);
}
