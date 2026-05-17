/*
 * XREFs of RtlCompareUnicodeString @ 0x180022B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  return RtlCompareUnicodeStrings(
           *((_QWORD *)a1 + 1),
           (unsigned __int64)*a1 >> 1,
           *((_QWORD *)a2 + 1),
           (unsigned __int64)*a2 >> 1,
           a3);
}
