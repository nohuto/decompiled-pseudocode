/*
 * XREFs of RtlConvertLCIDToString @ 0x1800EB9B0
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800ECBD0 (RtlpConvertCultureNamesToLCIDs.c)
 * Callees:
 *     RtlIntegerToUnicodeString @ 0x180047220 (RtlIntegerToUnicodeString.c)
 *     sub_1800563A0 @ 0x1800563A0 (sub_1800563A0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __cdecl RtlConvertLCIDToString(LCID LcidValue, ULONG Base, ULONG Padding, PWSTR pResultBuf, ULONG Size)
{
  ULONG v9; // ebx
  NTSTATUS result; // eax
  NTSTATUS v11; // esi
  ULONG i; // eax
  _UNICODE_STRING String; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v14[1024]; // [rsp+30h] [rbp-428h] BYREF

  memset(v14, 0, sizeof(v14));
  v9 = Size;
  if ( Size >= 0x200 )
    return -2147483643;
  String.Length = 2 * Size;
  String.MaximumLength = 2 * Size;
  String.Buffer = (PWCH)v14;
  result = RtlIntegerToUnicodeString(LcidValue, Base, &String);
  v11 = 0;
  if ( result >= 0 )
  {
    for ( i = String.Length >> 1; i < Padding; ++i )
    {
      if ( !v9 )
        return -1073741823;
      *pResultBuf++ = 48;
      --v9;
    }
    if ( (int)sub_1800563A0(pResultBuf, v9, (__int64)String.Buffer) < 0 )
      return -1073741823;
    return v11;
  }
  return result;
}
