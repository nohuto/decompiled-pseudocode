/*
 * XREFs of RtlIntegerToUnicodeString @ 0x180047220
 * Callers:
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     RtlConvertLCIDToString @ 0x1800EB9B0 (RtlConvertLCIDToString.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1800472B0 (RtlIntegerToChar.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

NTSTATUS __fastcall RtlIntegerToUnicodeString(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-38h] BYREF

  result = RtlIntegerToChar(a1, a2, 33LL, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(a3, &SourceString, 0);
  }
  return result;
}
