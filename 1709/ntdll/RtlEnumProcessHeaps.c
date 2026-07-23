/*
 * XREFs of RtlEnumProcessHeaps @ 0x1800EEEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlEnumProcessHeaps(PRTL_ENUM_HEAPS_ROUTINE EnumRoutine, PVOID Parameter)
{
  return RtlpEnumProcessHeaps((__int64 (__fastcall *)(_QWORD, _QWORD))EnumRoutine, (__int64)Parameter, 0);
}
