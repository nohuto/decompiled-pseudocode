/*
 * XREFs of RtlEnumProcessHeaps @ 0x1800EB0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlEnumProcessHeaps(PRTL_ENUM_HEAPS_ROUTINE EnumRoutine, PVOID Parameter)
{
  return sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))EnumRoutine, (__int64)Parameter, 0);
}
