/*
 * XREFs of sub_180041ACC @ 0x180041ACC
 * Callers:
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 *     sub_1800C9EEC @ 0x1800C9EEC (sub_1800C9EEC.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x18003B0F0 (RtlAnsiStringToUnicodeString.c)
 *     sub_180041B68 @ 0x180041B68 (sub_180041B68.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800E51A0 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall sub_180041ACC(unsigned __int16 *a1, const ANSI_STRING *a2)
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
    v4 = sub_180041B68(a1, v5 + (unsigned int)*a1);
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
