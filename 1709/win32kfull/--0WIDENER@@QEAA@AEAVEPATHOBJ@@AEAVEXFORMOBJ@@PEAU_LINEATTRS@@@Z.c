/*
 * XREFs of ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E5198
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E93EC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00E4E48 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00E53B8 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bValid@WIDENER@@QEAAHXZ @ 0x1C00E5930 (-bValid@WIDENER@@QEAAHXZ.c)
 *     ??0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E5D14 (--0STYLER@@QEAA@AEAVEPATHOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

WIDENER *__fastcall WIDENER::WIDENER(WIDENER *this, __m128i **a2, struct MATRIX **a3, struct _LINEATTRS *a4)
{
  __int64 iEndCap; // rcx
  ULONG iJoin; // eax
  FLOAT_LONG v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  __m128i *v13; // rcx
  __m128i v14; // xmm1
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  __int32 v18; // [rsp+24h] [rbp-24h]
  int v19; // [rsp+28h] [rbp-20h]
  __int32 v20; // [rsp+2Ch] [rbp-1Ch]
  int v21; // [rsp+50h] [rbp+8h] BYREF

  STYLER::STYLER(this, (struct EPATHOBJ *)a2, a4);
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 824));
  *((_DWORD *)this + 238) = 0;
  *((_DWORD *)this + 246) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 992));
  *((_DWORD *)this + 280) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 1152));
  *((_DWORD *)this + 320) = 0;
  if ( !(unsigned int)WIDENER::bValid(this) )
    return this;
  iEndCap = a4->iEndCap;
  *((_DWORD *)this + 329) = iEndCap;
  iJoin = a4->iJoin;
  *((_DWORD *)this + 328) = iJoin;
  if ( iJoin || (unsigned int)iEndCap >= 2 )
    *((_DWORD *)this + 10) &= ~0x10u;
  else
    *((_DWORD *)this + 10) |= 0x10u;
  LODWORD(v10.e) = a4->elWidth;
  bFToL(iEndCap, &v21, 6LL);
  *((FLOAT_LONG *)this + 331) = v10;
  *((float *)this + 331) = *((float *)this + 331) * 0.5;
  if ( *((_DWORD *)this + 328) == 2 )
  {
    v11 = *((float *)this + 331);
    *((_DWORD *)this + 330) = LODWORD(a4->eMiterLimit);
    v12 = v11 * *((float *)this + 330);
    *((float *)this + 330) = v12;
    *((float *)this + 330) = *((float *)this + 330) * v12;
  }
  if ( a4->pstyle || *((_DWORD *)this + 329) == 1 || *((_DWORD *)this + 328) == 2 )
  {
    if ( EXFORMOBJ::bInverse((WIDENER *)((char *)this + 808), *a3) )
    {
      v13 = a2[1];
      v17 = _mm_cvtsi128_si32(_mm_srli_si128(v13[3], 8)) - v13[3].m128i_i32[0];
      v14 = v13[3];
      v15 = v13[3].m128i_i64[0];
      v19 = -v17;
      v18 = _mm_srli_si128(v14, 8).m128i_i32[1] - HIDWORD(v15);
      v20 = v18;
      if ( EXFORMOBJ::bXform((WIDENER *)((char *)this + 808), (struct _VECTORFX *)&v17, (struct _VECTORL *)&v17, 2uLL) )
        goto LABEL_11;
    }
    else
    {
      EngSetLastError(0x216u);
    }
    *((_DWORD *)this + 320) = 1;
  }
LABEL_11:
  if ( (unsigned int)WIDENER::bValid(this)
    && (!(unsigned int)WIDEPENOBJ::bPolygonizePen((WIDENER *)((char *)this + 824), (struct EXFORMOBJ *)a3, v21)
     || !(unsigned int)WIDENER::bWiden(this)) )
  {
    *((_DWORD *)this + 320) = 1;
  }
  return this;
}
