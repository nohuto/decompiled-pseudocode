/*
 * XREFs of sub_18009FB60 @ 0x18009FB60
 * Callers:
 *     sub_18009FC14 @ 0x18009FC14 (sub_18009FC14.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180043E30 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180088F50 (_errno.c)
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 */

__int64 __fastcall sub_18009FB60(_DWORD *a1, _BYTE *a2, unsigned __int64 a3, unsigned __int16 a4)
{
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = a4;
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
      *a1 = dword_180155E94;
    }
  }
  else if ( a1 )
  {
    *a1 = 0;
  }
  return 0LL;
}
