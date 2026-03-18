/*
 * XREFs of RtlQueryRegistryValues @ 0x140556410
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable);
}
