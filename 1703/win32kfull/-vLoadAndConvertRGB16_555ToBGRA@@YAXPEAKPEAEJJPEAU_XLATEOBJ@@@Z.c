/*
 * XREFs of ?vLoadAndConvertRGB16_555ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02A0FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertRGB16_555ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r10d
  unsigned __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // ecx

  v4 = a4;
  v6 = (unsigned __int64)&a2[2 * a3];
  if ( (v6 & 2) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 += 2LL;
    *a1++ = (v7 >> 2) & 7 | (2
                           * (v7 & 0x380 | (4
                                          * (v7 & 0x1F | (2
                                                        * (v7 & 0x7000 | (4
                                                                        * (v7 & 0x3E0 | (8 * (v7 & 0xFC00 | 0xFFFF8000))))))))));
    v4 = a4 - 1;
  }
  v8 = 0LL;
  v9 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  v10 = (2 * v9 + 3) >> 2;
  if ( v6 > v6 + 2 * v9 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *(_DWORD *)v6;
      ++v8;
      v12 = *(_DWORD *)v6 & 0x3E0;
      v13 = *(_DWORD *)v6 & 0x7C00 | 0xFFFF8000;
      v6 += 4LL;
      *a1 = (v11 >> 2) & 7 | (2 * (v11 & 0x380 | (4 * (v11 & 0x1F | (2 * (v11 & 0x7000 | (4 * (v12 | (8 * v13)))))))));
      a1[1] = ((v11 & 0xFC00007F | ((v11 & 0x3E00000 | ((v11 & 0x70000000 | ((v11 & 0x1F0000 | ((v11 & 0x3800000 | (v11 >> 3) & 0x38000) >> 2)) >> 1)) >> 2)) >> 3)) >> 7) | 0xFF000000;
      a1 += 2;
    }
    while ( v8 != v10 );
  }
  if ( (v4 & 1) != 0 )
    *a1 = (*(unsigned __int16 *)v6 >> 2) & 7 | (2
                                              * (*(_WORD *)v6 & 0x380 | (4
                                                                       * (*(_WORD *)v6 & 0x1F | (2
                                                                                               * (*(_WORD *)v6 & 0x7000 | (4 * (*(_WORD *)v6 & 0x3E0 | (8 * (*(_WORD *)v6 & 0xFC00 | 0xFFFF8000))))))))));
}
