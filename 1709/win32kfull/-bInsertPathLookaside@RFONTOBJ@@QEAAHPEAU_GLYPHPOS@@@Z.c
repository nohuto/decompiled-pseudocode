/*
 * XREFs of ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02ADB08
 * Callers:
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02AD8FC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0038A38 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C013579C (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInsertPathLookaside(struct _FONTOBJ **this, struct _GLYPHPOS *a2)
{
  unsigned int v4; // ebx
  struct _FONTOBJ *v5; // r8
  struct DHPDEV__ *v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // esi
  PVOID pvProducer; // rcx
  GLYPHDEF *v10; // rdi
  EPATHOBJ *v11; // rcx
  PVOID v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v14[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h]
  struct _GLYPHDATA v16; // [rsp+D0h] [rbp-30h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v14);
  v4 = 0;
  if ( v15 )
  {
    v5 = *this;
    v6 = *(struct DHPDEV__ **)&(*this)[1].ulStyleSize;
    v13[0] = (*this)[1].pvProducer;
    if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)v13, v6, v5, 2u, a2->hg, &v16, v14, 0) != -1 )
    {
      v8 = EPATHOBJ::cjSize((EPATHOBJ *)v14) + 504;
      if ( *(_QWORD *)&(*this)[10].iUniq < (unsigned __int64)v8 )
      {
        pvProducer = (*this)[9].pvProducer;
        if ( pvProducer )
        {
          Win32FreePool(pvProducer, v7);
          (*this)[9].pvProducer = 0LL;
          *(_QWORD *)&(*this)[10].iUniq = 0LL;
        }
      }
      if ( (*this)[9].pvProducer )
        goto LABEL_9;
      (*this)[9].pvProducer = PALLOCMEM2(v8, 1667326791LL, 1);
      if ( (*this)[9].pvProducer )
      {
        *(_QWORD *)&(*this)[10].iUniq = v8;
LABEL_9:
        v10 = (GLYPHDEF *)(*this)[9].pvProducer;
        EPATHFONTOBJ::vInit((EPATHFONTOBJ *)&v10[8], v8 - 64);
        EPATHOBJ::bClone(v11, (struct EPATHOBJ *)v14);
        *(struct _GLYPHDATA *)&v10->pgb = v16;
        a2->pgdf = v10;
        v10->pgb = (GLYPHBITS *)&v10[8];
        v4 = 1;
      }
    }
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v14);
  return v4;
}
