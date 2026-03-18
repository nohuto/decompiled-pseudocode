/*
 * XREFs of sfac_GetLongGlyphIDs @ 0x1C02C9BB8
 * Callers:
 *     sfac_GetWinNTGlyphIDs @ 0x1C02CA41C (sfac_GetWinNTGlyphIDs.c)
 * Callees:
 *     InvokeGlyphMappingF @ 0x1C02C8ECC (InvokeGlyphMappingF.c)
 */

__int64 __fastcall sfac_GetLongGlyphIDs(
        int a1,
        _WORD *a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int a7,
        __int64 a8,
        _DWORD *a9)
{
  int v12; // r11d
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // bp
  _DWORD *v16; // rsi
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // bp
  _DWORD *v19; // rbx
  __int64 v20; // rsi
  unsigned __int16 v21; // ax

  v12 = a1;
  if ( a8 )
  {
    v18 = a5;
    if ( a5 )
    {
      v19 = a9;
      v20 = a8 - (_QWORD)a9;
      while ( (unsigned int)(a7 + *(_DWORD *)((char *)v19 + v20)) <= 0xFFFF )
      {
        v21 = InvokeGlyphMappingF(v12, a2, (unsigned __int16)a7 + *(_WORD *)((char *)v19 + v20), a3);
        *v19 = v21;
        if ( v21 >= (unsigned int)a4 )
          *v19 = 0;
        v12 = a1;
        ++v19;
        if ( !--v18 )
          return 0LL;
      }
      return 4108LL;
    }
  }
  else
  {
    v13 = a5;
    v14 = a6;
    if ( a5 + (unsigned int)a6 > 0xFFFF )
      return 4108LL;
    if ( a5 )
    {
      v16 = a9;
      do
      {
        v17 = InvokeGlyphMappingF(v12, a2, v14, a3);
        *v16 = v17;
        if ( v17 >= (unsigned int)a4 )
          *v16 = 0;
        v12 = a1;
        ++v16;
        ++v14;
        --v13;
      }
      while ( v13 );
    }
  }
  return 0LL;
}
