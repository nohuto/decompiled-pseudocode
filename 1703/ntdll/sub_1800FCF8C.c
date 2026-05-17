/*
 * XREFs of sub_1800FCF8C @ 0x1800FCF8C
 * Callers:
 *     sub_1800FCB2C @ 0x1800FCB2C (sub_1800FCB2C.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_180046DAC @ 0x180046DAC (sub_180046DAC.c)
 */

__int64 __fastcall sub_1800FCF8C(__int64 a1, _DWORD *a2, unsigned __int16 a3, wchar_t *a4)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rdi
  _WORD v7[4]; // [rsp+20h] [rbp-18h] BYREF
  wchar_t *String2; // [rsp+28h] [rbp-10h]

  v4 = -1073741823;
  if ( !a1 || !a4 || !a2 )
    return 3221225485LL;
  if ( a2[1] == 7 )
  {
    v5 = (wchar_t *)((char *)a2 + (unsigned int)a2[2]);
    if ( a2[3] && v5 && *v5 )
    {
      if ( !a3 )
        return 0;
      String2 = a4;
      v7[1] = 170;
      if ( RtlLCIDToCultureName(a3, (__int64)v7) )
      {
        if ( sub_180046DAC(v5, String2) )
          return 0;
      }
    }
    else
    {
      return a3 != 0 ? 0xC0000001 : 0;
    }
  }
  return v4;
}
