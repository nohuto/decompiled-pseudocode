/*
 * XREFs of ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0130728
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00EA768 (xInsertMetricsPlusRFONTOBJ.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0032444 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C008A6C8 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C008D508 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C0130968 (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetricsPlusPath(RFONTOBJ *this, struct _GLYPHDATA **a2, __int16 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned int v7; // r14d
  struct _GLYPHDATA *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r15d
  EPATHFONTOBJ *v11; // rax
  EPATHFONTOBJ *v12; // rsi
  EPATHOBJ *v13; // rcx
  __int64 result; // rax
  unsigned __int16 v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  struct _GLYPHDATA v20; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)this;
  LOWORD(v4) = a3;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL)
    || (result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2), (_DWORD)result) )
  {
    v7 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 2) != 0 )
    {
      v15 = v4;
      RFONTOBJ::vXlatGlyphArray(this, &v15, 1, &v16, 0, 0);
      v4 = v16;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
    v17 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
    if ( !v19 )
      goto LABEL_17;
    v8 = &v20;
    if ( !*(_DWORD *)(*(_QWORD *)this + 652LL) )
      v8 = *(struct _GLYPHDATA **)(v3 + 536);
    if ( (unsigned int)PDEVOBJ::QueryFontData(
                         (PDEVOBJ *)&v17,
                         *(struct DHPDEV__ **)(*(_QWORD *)this + 104LL),
                         *(struct _FONTOBJ **)this,
                         2u,
                         v4,
                         v8,
                         v18,
                         0) == -1 )
    {
LABEL_17:
      v7 = 0;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 652LL) )
      {
        v9 = *(_QWORD *)(v3 + 536);
        *(_OWORD *)v9 = *(_OWORD *)&v20.gdf.pgb;
        *(_QWORD *)(v9 + 16) = *(_QWORD *)&v20.fxA;
      }
      v10 = EPATHOBJ::cjSize((EPATHOBJ *)v18) + 440;
      v11 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v10);
      v12 = v11;
      if ( v11 )
      {
        EPATHFONTOBJ::vInit(v11, v10);
        EPATHOBJ::bClone(v13, (struct EPATHOBJ *)v18);
        **(_QWORD **)(v3 + 536) = v12;
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
      if ( v12 )
        *(_QWORD *)(v3 + 616) += v10;
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
    return v7;
  }
  return result;
}
