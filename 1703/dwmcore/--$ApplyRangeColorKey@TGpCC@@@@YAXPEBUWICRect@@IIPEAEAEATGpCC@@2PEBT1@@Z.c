/*
 * XREFs of ??$ApplyRangeColorKey@TGpCC@@@@YAXPEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x1800CB910
 * Callers:
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801A1620 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyRangeColorKey<GpCC>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        __int64 a7)
{
  int v7; // r10d
  unsigned __int8 v9; // al
  _BYTE *v10; // rcx
  int v11; // edx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  __int64 v14; // rsi

  v7 = 0;
  if ( *(int *)(a1 + 12) > 0 )
  {
    v14 = a2;
    do
    {
      v11 = 0;
      if ( *(int *)(a1 + 8) > 0 )
      {
        v10 = (_BYTE *)(a4 + 1);
        do
        {
          v12 = v10[2];
          if ( a5[3] <= v12
            && v12 <= a6[3]
            && (v13 = v10[1], a5[2] <= v13)
            && v13 <= a6[2]
            && a5[1] <= *v10
            && *v10 <= a6[1]
            && (v9 = *(v10 - 1), *a5 <= v9)
            && v9 <= *a6 )
          {
            *(_DWORD *)(v10 - 1) = 0;
          }
          else if ( a7 )
          {
            v10[2] = *(_BYTE *)(a7 + 3);
          }
          v10 += 4;
          ++v11;
        }
        while ( v11 < *(_DWORD *)(a1 + 8) );
      }
      a4 += v14;
      ++v7;
    }
    while ( v7 < *(_DWORD *)(a1 + 12) );
  }
}
