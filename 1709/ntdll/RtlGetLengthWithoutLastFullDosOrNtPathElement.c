/*
 * XREFs of RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x18006D170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetLengthWithoutLastFullDosOrNtPathElement(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpGetLengthWithoutLastPathElement(a1, a2, a2, a3);
}
