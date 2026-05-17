/*
 * XREFs of RtlStringCchLengthW @ 0x180051880
 * Callers:
 *     LdrpMultiSZCchLength @ 0x180004F4C (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180004FEC (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpNameprepAsciiWorker @ 0x18004E6E4 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x18004EF00 (RtlIdnToUnicode.c)
 *     RtlGetParentLocaleName @ 0x180050A40 (RtlGetParentLocaleName.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180050B4C (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpValidAttribute @ 0x1800E8374 (RtlpValidAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthW(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 i; // r9
  __int64 result; // rax

  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    for ( i = a2; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( a3 )
    {
      if ( i )
        *a3 = a2 - i;
      else
        *a3 = 0LL;
    }
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
