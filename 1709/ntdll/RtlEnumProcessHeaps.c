/*
 * XREFs of RtlEnumProcessHeaps @ 0x1800EEEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEnumProcessHeaps(__int64 (__fastcall *a1)(_QWORD, _QWORD), __int64 a2)
{
  return RtlpEnumProcessHeaps(a1, a2, 0);
}
