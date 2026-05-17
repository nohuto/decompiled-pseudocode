/*
 * XREFs of RtlLengthSid @ 0x180070DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthSid(__int64 a1)
{
  return 4 * (unsigned int)*(unsigned __int8 *)(a1 + 1) + 8;
}
