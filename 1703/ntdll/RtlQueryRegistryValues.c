/*
 * XREFs of RtlQueryRegistryValues @ 0x1800EB5F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return sub_180056454(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context, Environment, 0);
}
