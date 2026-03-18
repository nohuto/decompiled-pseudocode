/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0004120
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C007DAB4 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C0114AF0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C0238C64 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G2(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int *a9)
{
  __int64 v9; // rbx
  LONG v10; // r14d
  int *v14; // r13
  struct _GLYPHPOS *v15; // r8
  unsigned __int16 *v16; // r9
  __m128i si128; // xmm0
  POINTL *p_ptl; // rbx
  int v19; // r14d
  unsigned int v20; // edx
  __int64 v21; // rax
  int v22; // r10d
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rsi
  int *v26; // r8
  POINTL v27; // rdx
  int v28; // eax
  int v29; // r9d
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rcx
  bool v33; // zf
  int v34; // esi
  __int64 v35; // r12
  __int64 v36; // r15
  int v37; // ebx
  __m128i v38; // xmm2
  float v39; // xmm2_4
  __int64 v40; // rcx
  int v41; // eax
  int v42; // ecx
  __int64 v43; // r11
  int v44; // edx
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // r11
  int v48; // [rsp+48h] [rbp-59h] BYREF
  int v49; // [rsp+4Ch] [rbp-55h] BYREF
  int v50; // [rsp+50h] [rbp-51h]
  __int64 v51; // [rsp+58h] [rbp-49h] BYREF
  __int64 v52; // [rsp+60h] [rbp-41h] BYREF
  __int64 v53; // [rsp+68h] [rbp-39h]
  unsigned int v54; // [rsp+70h] [rbp-31h]
  __int64 v55; // [rsp+78h] [rbp-29h]
  __int64 v56; // [rsp+80h] [rbp-21h]
  __m128i v57; // [rsp+88h] [rbp-19h]

  v9 = *(_QWORD *)a3;
  v10 = a4;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 652LL) )
  {
    v54 = 0;
    if ( a6 )
    {
      v49 = 0;
      bFToL(this, &v49, 0LL);
      *((_DWORD *)this + 31) = v49;
      v9 = *(_QWORD *)a3;
      EPOINTQF::operator=(&v52, *(_QWORD *)a3 + 392LL);
      v55 = v43 * v52;
      v56 = v43 * v53;
      v10 = a4;
    }
    else
    {
      v56 = v53;
      v55 = v52;
    }
    v14 = (int *)((char *)this + 128);
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(v9 + 400), a7, a8, (char *)this + 128) )
    {
      v44 = *((_DWORD *)this + 31);
      v45 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( v44 + v45 + *v14 < 0 )
        *v14 = -(v45 + v44);
      v46 = *(_QWORD *)a3;
      EPOINTQF::operator=(&v52, *(_QWORD *)a3 + 392LL);
      v47 = *v14;
      v54 = *(_DWORD *)(v46 + 460);
      v51 = v47 * v52;
      v52 = v47 * v53;
    }
    else
    {
      v52 = v53;
      v51 = v53;
    }
    v15 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v16 = (unsigned __int16 *)*((_QWORD *)this + 5);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    p_ptl = &v15->ptl;
    v15->ptl.y = a5;
    v15->ptl.x = v10;
    v19 = 0;
    v20 = *(_DWORD *)this;
    v57 = si128;
    v49 = 0;
    v50 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v20, v15, v16, &v48, a2, this) )
    {
      if ( *(float *)&v48 != 0.0 )
      {
        v21 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = v21;
      }
      v22 = *(_DWORD *)this;
      v23 = v57.m128i_i64[1];
      v24 = v57.m128i_i64[0];
      v25 = v51;
      v26 = a9;
      v48 = *(int *)this;
      while ( 1 )
      {
        v27 = p_ptl[-1];
        v28 = v49;
        v29 = *(_DWORD *)(*(_QWORD *)&v27 + 12LL);
        if ( v49 >= v19 + *(_DWORD *)(*(_QWORD *)&v27 + 16LL) )
          v28 = v19 + *(_DWORD *)(*(_QWORD *)&v27 + 16LL);
        v30 = v19 + *(_DWORD *)(*(_QWORD *)&v27 + 20LL);
        v49 = v28;
        v31 = v50;
        if ( v50 <= v30 )
          v31 = v30;
        v24 += *(_QWORD *)(*(_QWORD *)&v27 + 48LL);
        v23 += *(_QWORD *)(*(_QWORD *)&v27 + 56LL);
        v19 += v29;
        v32 = *((unsigned int *)this + 31);
        v50 = v31;
        if ( (_DWORD)v32 && v29 + (int)v32 > 0 )
        {
          v24 += v55;
          v19 += v32;
          v23 += v56;
        }
        if ( *v14 )
        {
          v32 = v54;
          if ( p_ptl[-2].x == v54 )
          {
            v19 += *v14;
            v24 += v25;
            v23 += v52;
          }
        }
        if ( v26 )
        {
          LODWORD(v51) = 0;
          bFToL(v32, &v51, 0LL);
          v22 = v48;
          *a9++ = v51;
          v26 = a9;
        }
        v33 = v22-- == 1;
        v48 = v22;
        if ( v33 )
          break;
        p_ptl += 3;
        p_ptl->x = a4 + HIDWORD(v24);
        p_ptl->y = a5 + HIDWORD(v23);
      }
      v34 = v50;
      v35 = v24 >> 32;
      v36 = v23 >> 32;
      v37 = v50 - v19;
      v33 = v50 == v19;
      *((_DWORD *)this + 22) = v35;
      *((_DWORD *)this + 23) = v36;
      v38 = _mm_cvtsi32_si128(v35);
      if ( v37 < 0 || v33 )
        v37 = 0;
      v39 = _mm_cvtepi32_ps(v38).m128_f32[0];
      *(float *)&v48 = (float)((float)((float)(int)v36 * 0.0625) * (float)((float)(int)v36 * 0.0625))
                     + (float)((float)(v39 * 0.0625) * (float)(v39 * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v48);
      v33 = (unsigned int)bFToL(v40, &v51, 10LL) == 0;
      v41 = v49;
      if ( !v33 )
        v34 = v51;
      *((_DWORD *)this + 30) = v34;
      *((_DWORD *)this + 28) = v37 + v34;
      if ( v19 < v41 )
        v41 = v19;
      *((_DWORD *)this + 26) = v41;
      *((_DWORD *)this + 27) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
      v42 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 29) = v42;
    }
  }
}
