/*
 * XREFs of sub_1800CA0F0 @ 0x1800CA0F0
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_1800C9EEC @ 0x1800C9EEC (sub_1800C9EEC.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x18006CD90 (RtlPrefixUnicodeString.c)
 *     sub_1800C9BC0 @ 0x1800C9BC0 (sub_1800C9BC0.c)
 */

__int64 __fastcall sub_1800CA0F0(
        _QWORD *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 ***a6,
        __int64 a7)
{
  unsigned int v7; // edi
  _UNICODE_STRING *v9; // rsi
  BOOLEAN v11; // al
  _UNICODE_STRING *v12; // rcx
  __int64 **i; // rbx

  v7 = 0;
  v9 = a2;
  *a6 = 0LL;
  if ( (a4 & 0x20) != 0 )
  {
    if ( RtlEqualUnicodeString((PUNICODE_STRING)&stru_1801111C0, a2, 1u) )
    {
      if ( a5 == a1[14] || a5 == a1[15] )
        v9 = (_UNICODE_STRING *)&unk_180111200;
    }
    else
    {
      v11 = RtlPrefixUnicodeString((PUNICODE_STRING)&stru_1801111D0, v9, 1u);
      v12 = (_UNICODE_STRING *)&unk_180111200;
      if ( !v11 )
        v12 = v9;
      v9 = v12;
    }
  }
  for ( i = (__int64 **)a1[11]; ; i = (__int64 **)*i )
  {
    if ( i == a1 + 11 )
      return (unsigned int)sub_1800C9BC0(a1, (const void **)v9, a4, 8, a3, a5, a6, a7);
    if ( RtlEqualUnicodeString(v9, (PUNICODE_STRING)i[22], 1u) )
      break;
  }
  *a6 = i;
  return v7;
}
