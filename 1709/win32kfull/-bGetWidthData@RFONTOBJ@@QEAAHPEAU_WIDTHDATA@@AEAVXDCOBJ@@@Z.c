/*
 * XREFs of ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00328B0
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C00F4990 (NtGdiGetWidthTable.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0036620 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0135730 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetWidthData(RFONTOBJ *this, struct _WIDTHDATA *a2, struct XDCOBJ *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int16 fxD; // dx
  int v9; // r13d
  int v10; // r15d
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r8d
  _BYTE *v15; // rdx
  __int64 v17; // rbp
  struct _GLYPHPOS v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v19; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  LODWORD(v7) = 0;
  fxD = 0;
  v9 = *(_DWORD *)(*(_QWORD *)this + 464LL);
  v13 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  v10 = 16 * *(_DWORD *)(*(_QWORD *)this + 344LL);
  v11 = 16 * *(_DWORD *)(*(_QWORD *)this + 304LL);
  v12 = *(_QWORD *)(v13 + 32);
  LOBYTE(v13) = *(_BYTE *)(v12 + 44) + 0x80;
  if ( (unsigned __int8)v13 <= 8u && (v14 = 323, _bittest(&v14, v13)) )
  {
    if ( (*(_DWORD *)(v12 + 48) & 0x10000000) != 0 )
    {
      v19 = 12288;
      while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v18, &v19, a3, 0LL)
           && v18.hg != *(_DWORD *)(*(_QWORD *)this + 456LL) )
      {
        v7 = (unsigned int)(v7 + 1);
        v19 = word_1C02F0278[v7];
        if ( !v19 )
        {
          LODWORD(v17) = 0;
          LODWORD(v7) = WORD2(v18.pgdf[1].ppo);
          v19 = 12450;
          while ( (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, 1u, &v18, &v19, 0LL, 0LL) )
          {
            if ( WORD2(v18.pgdf[1].ppo) > (int)v7 )
              LODWORD(v7) = WORD2(v18.pgdf[1].ppo);
            v17 = (unsigned int)(v17 + 1);
            v19 = word_1C02F0280[v17];
            if ( !v19 )
            {
              fxD = RFONTOBJ::pgdDefault(this)->fxD;
              goto LABEL_3;
            }
          }
          return v3;
        }
      }
    }
  }
  else
  {
LABEL_3:
    if ( ((v10 | v11 | v9 | (unsigned int)v7) & 0xFFFF0000) == 0 )
    {
      *((_WORD *)a2 + 1) = v10;
      *((_WORD *)a2 + 2) = v11;
      *((_WORD *)a2 + 3) = v9;
      *((_WORD *)a2 + 6) = v7;
      *((_WORD *)a2 + 7) = fxD;
      v3 = 1;
      *(_WORD *)a2 = 16 * RFONTOBJ::lOverhang(this);
      v15 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL);
      *((_BYTE *)a2 + 8) = v15[108];
      *((_BYTE *)a2 + 9) = v15[109];
      *((_BYTE *)a2 + 11) = v15[110];
      *((_BYTE *)a2 + 10) = v15[111];
    }
  }
  return v3;
}
