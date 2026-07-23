/*
 * XREFs of sub_1800474C8 @ 0x1800474C8
 * Callers:
 *     sub_18003BB58 @ 0x18003BB58 (sub_18003BB58.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180043750 (RtlAnsiStringToUnicodeString.c)
 *     sub_180047564 @ 0x180047564 (sub_180047564.c)
 *     RtlxOemStringToUnicodeSize @ 0x180089700 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall sub_1800474C8(unsigned __int16 *a1, const ANSI_STRING *a2)
{
  int v4; // edi
  int v5; // eax
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( a2->Length )
  {
    if ( NlsMbCodePageTag )
      v5 = RtlxOemStringToUnicodeSize(a2);
    else
      v5 = 2 * a2->Length + 2;
    v4 = sub_180047564(a1, v5 + (unsigned int)*a1);
    if ( v4 >= 0 )
    {
      v6 = *a1;
      v7 = *a1;
      DestinationString.Length = 0;
      DestinationString.Buffer = (PWCH)(*((_QWORD *)a1 + 1) + v7);
      DestinationString.MaximumLength = a1[1] - v6;
      RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
      *a1 += DestinationString.Length;
    }
  }
  return (unsigned int)v4;
}
