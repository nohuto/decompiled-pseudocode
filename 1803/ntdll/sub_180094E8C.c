/*
 * XREFs of sub_180094E8C @ 0x180094E8C
 * Callers:
 *     sub_180094F40 @ 0x180094F40 (sub_180094F40.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x18006CF00 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180083380 (_errno.c)
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

__int64 __fastcall sub_180094E8C(_DWORD *a1, _BYTE *a2, unsigned __int64 a3, __int16 a4)
{
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  LOWORD(v7) = a4;
  if ( a2 || !a3 )
  {
    if ( a1 )
      *a1 = -1;
    if ( a3 > 0x7FFFFFFF )
    {
      sub_18008B020();
      return 22LL;
    }
    if ( a2 )
    {
      if ( (int)RtlUnicodeToMultiByteN(a2, a3, &v6, &v7, 2u) < 0 )
      {
        *errno() = 42;
        return (unsigned int)*errno();
      }
      if ( a1 )
        *a1 = v6;
    }
    else if ( a1 )
    {
      *a1 = dword_180156EF4;
    }
  }
  else if ( a1 )
  {
    *a1 = 0;
  }
  return 0LL;
}
