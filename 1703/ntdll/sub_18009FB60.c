/*
 * XREFs of sub_18009FB60 @ 0x18009FB60
 * Callers:
 *     sub_18009FC14 @ 0x18009FC14 (sub_18009FC14.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180043E30 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180088F50 (_errno.c)
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 */

__int64 __fastcall sub_18009FB60(ULONG *a1, CHAR *a2, unsigned __int64 a3, WCHAR a4)
{
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = a4;
  if ( a2 || !a3 )
  {
    if ( a1 )
      *a1 = -1;
    if ( a3 > 0x7FFFFFFF )
    {
      sub_180095DE0();
      return 22LL;
    }
    if ( a2 )
    {
      if ( RtlUnicodeToMultiByteN(a2, a3, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
      {
        *errno() = 42;
        return (unsigned int)*errno();
      }
      if ( a1 )
        *a1 = BytesInMultiByteString;
    }
    else if ( a1 )
    {
      *a1 = dword_180155E94;
    }
  }
  else if ( a1 )
  {
    *a1 = 0;
  }
  return 0LL;
}
