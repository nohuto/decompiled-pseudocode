/*
 * XREFs of ConvertToAndFromWideCharSymCP @ 0x1C02582F8
 * Callers:
 *     ConvertToAndFromWideChar @ 0x1C00F1C50 (ConvertToAndFromWideChar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToAndFromWideCharSymCP(_WORD *a1, int a2, _BYTE *a3, int a4, int a5)
{
  unsigned int v6; // r9d
  int v8; // eax
  int v9; // r11d
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // rdx
  unsigned __int16 v13; // ax

  v6 = 0;
  if ( a2 && !a1 || a4 && !a3 )
    return 0LL;
  v8 = a2 / 2;
  if ( a5 )
  {
    v9 = a2 / 2;
    if ( a4 < v8 )
      v9 = a4;
    v10 = v9;
    if ( v9 > 0 )
    {
      do
      {
        LOBYTE(v11) = *a3;
        if ( *a3 >= 0x20u )
          v11 = (unsigned __int8)v11 | 0xF000;
        else
          v11 = (char)v11;
        *a1 = v11;
        ++a3;
        ++a1;
        --v10;
      }
      while ( v10 );
    }
    return (unsigned int)(2 * v9);
  }
  else
  {
    v12 = 0LL;
    if ( v8 < a4 )
      a4 = v8;
    if ( a4 <= 0 )
    {
      return (unsigned int)a4;
    }
    else
    {
      while ( 1 )
      {
        v13 = a1[v12];
        if ( v13 >= 0x20u && (unsigned __int16)(v13 + 4064) > 0xDFu )
          break;
        ++v6;
        a3[v12] = a1[v12];
        if ( ++v12 >= a4 )
          return (unsigned int)a4;
      }
      return v6;
    }
  }
}
