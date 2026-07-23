/*
 * XREFs of RtlQueryRegistryValues @ 0x1800E7460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return sub_18000A6BC(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context, Environment, 0);
}
