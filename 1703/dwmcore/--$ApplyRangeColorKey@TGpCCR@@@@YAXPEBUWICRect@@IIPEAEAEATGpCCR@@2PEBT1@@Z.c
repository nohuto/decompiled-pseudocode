/*
 * XREFs of ??$ApplyRangeColorKey@TGpCCR@@@@YAXPEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z @ 0x1801A1270
 * Callers:
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801A1620 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyRangeColorKey<GpCCR>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  int v6; // r8d
  __int64 v7; // rdi
  int v8; // r10d
  _BYTE *v9; // rax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl

  v6 = 0;
  if ( *(int *)(a1 + 12) > 0 )
  {
    v7 = a2;
    do
    {
      v8 = 0;
      if ( *(int *)(a1 + 8) > 0 )
      {
        v9 = (_BYTE *)(a4 + 1);
        do
        {
          v10 = v9[2];
          if ( a5[3] <= v10 && v10 <= a6[3] )
          {
            v11 = *(v9 - 1);
            if ( *a5 <= v11 && v11 <= *a6 && a5[1] <= *v9 && *v9 <= a6[1] )
            {
              v12 = v9[1];
              if ( a5[2] <= v12 && v12 <= a6[2] )
                *(_DWORD *)(v9 - 1) = 0;
            }
          }
          v9 += 4;
          ++v8;
        }
        while ( v8 < *(_DWORD *)(a1 + 8) );
      }
      a4 += v7;
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a1 + 12) );
  }
}
