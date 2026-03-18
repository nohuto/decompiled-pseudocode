/*
 * XREFs of ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02AD9F0
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C01011A4 (xInsertGlyphbitsRFONTOBJ.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C0030DE8 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0038A38 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C013579C (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02ADC9C (-vFlushCache@RFONTOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbitsPath(struct _FONTOBJ **this, struct _GLYPHDATA *a2, int a3)
{
  struct _FONTOBJ *v3; // r12
  unsigned int v7; // ebx
  struct _FONTOBJ *v8; // r8
  struct DHPDEV__ *v9; // rdx
  unsigned int v10; // ebp
  EPATHFONTOBJ *v11; // rax
  GLYPHDEF v12; // rsi
  EPATHOBJ *v13; // rcx
  PVOID v15[2]; // [rsp+40h] [rbp-B8h] BYREF
  char v16[8]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A0h]

  v3 = *this;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v16);
  v7 = 0;
  if ( v17 )
  {
    v8 = *this;
    v9 = *(struct DHPDEV__ **)&(*this)[1].ulStyleSize;
    v15[0] = (*this)[1].pvProducer;
    if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)v15, v9, v8, 2u, a2->hg, 0LL, v16, 0) != -1 )
    {
      v10 = EPATHOBJ::cjSize((EPATHOBJ *)v16) + 440;
      while ( 1 )
      {
        v11 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache((RFONTOBJ *)this, v10);
        v12.pgb = (GLYPHBITS *)v11;
        if ( v11 )
          break;
        if ( !a3 )
          goto LABEL_8;
        RFONTOBJ::vFlushCache((RFONTOBJ *)this);
        a3 = 0;
      }
      EPATHFONTOBJ::vInit(v11, v10);
      EPATHOBJ::bClone(v13, (struct EPATHOBJ *)v16);
      a2->gdf = v12;
      v7 = 1;
      *(_QWORD *)&v3[9].ulStyleSize += v10;
    }
  }
LABEL_8:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v16);
  return v7;
}
