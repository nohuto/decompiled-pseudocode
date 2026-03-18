/*
 * XREFs of ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0135568
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00F9AB8 (xInsertMetricsPlusRFONTOBJ.c)
 * Callees:
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C0030DE8 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0033408 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0038A38 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C013579C (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetricsPlusPath(RFONTOBJ *this, struct _GLYPHDATA **a2, __int16 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v8; // rdx
  struct _GLYPHDATA *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r15d
  EPATHFONTOBJ *v12; // rax
  EPATHFONTOBJ *v13; // r14
  EPATHOBJ *v14; // rcx
  __int64 result; // rax
  unsigned __int16 v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  struct _GLYPHDATA v21; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  LOWORD(v5) = a3;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL)
    || (result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2), (_DWORD)result) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
    {
      v16 = v5;
      RFONTOBJ::vXlatGlyphArray(this, &v16, 1, &v17, 0, 0);
      v5 = v17;
    }
    else
    {
      v5 = (unsigned __int16)v5;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v19);
    if ( v20 )
    {
      v8 = *(_QWORD *)this;
      v18 = *(_QWORD *)(*(_QWORD *)this + 120LL);
      v9 = &v21;
      if ( !*(_DWORD *)(v8 + 652) )
        v9 = *(struct _GLYPHDATA **)(v3 + 536);
      if ( (unsigned int)PFFOBJ::QueryFontData(
                           (PFFOBJ *)&v18,
                           *(struct DHPDEV__ **)(v8 + 104),
                           (struct _FONTOBJ *)v8,
                           2u,
                           v5,
                           v9,
                           v19,
                           0) != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
        {
          v10 = *(_QWORD *)(v3 + 536);
          *(_OWORD *)v10 = *(_OWORD *)&v21.gdf.pgb;
          *(_QWORD *)(v10 + 16) = *(_QWORD *)&v21.fxA;
        }
        v11 = EPATHOBJ::cjSize((EPATHOBJ *)v19) + 440;
        v12 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v11);
        v13 = v12;
        if ( v12 )
        {
          EPATHFONTOBJ::vInit(v12, v11);
          EPATHOBJ::bClone(v14, (struct EPATHOBJ *)v19);
          **(_QWORD **)(v3 + 536) = v13;
        }
        else
        {
          **(_QWORD **)(v3 + 536) = 0LL;
        }
        *a2 = *(struct _GLYPHDATA **)(v3 + 536);
        if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
          *(_QWORD *)(v3 + 536) += 24LL;
        else
          *(_QWORD *)(v3 + 536) += 64LL;
        if ( v13 )
          *(_QWORD *)(v3 + 616) += v11;
        v4 = 1;
      }
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v19);
    return v4;
  }
  return result;
}
