/*
 * XREFs of RtlEnumProcessHeaps @ 0x1800EF320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlEnumProcessHeaps(PRTL_ENUM_HEAPS_ROUTINE EnumRoutine, PVOID Parameter)
{
  return sub_1800059EC((__int64)EnumRoutine, (__int64)Parameter, 0);
}
