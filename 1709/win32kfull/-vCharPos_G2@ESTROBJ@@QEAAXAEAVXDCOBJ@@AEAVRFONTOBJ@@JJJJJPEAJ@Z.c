/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C000948C
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0035E18 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C00B34AC (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C011C5F4 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C023A224 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
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
  int v10; // r12d
  LONG v11; // r14d
  int *v14; // r15
  struct _GLYPHPOS *v15; // r8
  unsigned __int16 *v16; // r9
  POINTL *p_ptl; // rbx
  __int64 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // r13
  __int64 v21; // rax
  int v22; // r9d
  __int64 v23; // rsi
  int *v24; // r8
  POINTL v25; // rdx
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  bool v30; // zf
  int v31; // esi
  __int64 v32; // r14
  __int64 v33; // r13
  int v34; // ebx
  __m128i v35; // xmm2
  float v36; // xmm2_4
  __int64 v37; // rcx
  int v38; // eax
  int v39; // ecx
  __int64 v40; // r11
  int v41; // edx
  int v42; // ecx
  __int64 v43; // rbx
  __int64 v44; // r11
  int v45; // [rsp+48h] [rbp-49h] BYREF
  int v46; // [rsp+4Ch] [rbp-45h] BYREF
  int v47; // [rsp+50h] [rbp-41h]
  __int64 v48; // [rsp+58h] [rbp-39h] BYREF
  __int64 v49; // [rsp+60h] [rbp-31h] BYREF
  __int64 v50; // [rsp+68h] [rbp-29h]
  unsigned int v51; // [rsp+70h] [rbp-21h]
  __int64 v52; // [rsp+78h] [rbp-19h]
  __int64 v53; // [rsp+80h] [rbp-11h]

  v9 = *(_QWORD *)a3;
  v10 = 0;
  v11 = a4;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 652LL) )
  {
    v51 = 0;
    if ( a6 )
    {
      v46 = 0;
      bFToL(this, &v46, 0LL);
      *((_DWORD *)this + 31) = v46;
      v9 = *(_QWORD *)a3;
      EPOINTQF::operator=(&v49, *(_QWORD *)a3 + 392LL);
      v52 = v40 * v49;
      v53 = v40 * v50;
      v11 = a4;
    }
    else
    {
      v53 = v50;
      v52 = v49;
    }
    v14 = (int *)((char *)this + 128);
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(v9 + 400), a7, a8, (char *)this + 128) )
    {
      v41 = *((_DWORD *)this + 31);
      v42 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( *v14 + v42 + v41 < 0 )
        *v14 = -(v42 + v41);
      v43 = *(_QWORD *)a3;
      EPOINTQF::operator=(&v49, *(_QWORD *)a3 + 392LL);
      v44 = *v14;
      v48 = v44 * v49;
      v49 = v44 * v50;
      v51 = *(_DWORD *)(v43 + 460);
    }
    else
    {
      v49 = v50;
      v48 = v50;
    }
    v15 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v16 = (unsigned __int16 *)*((_QWORD *)this + 5);
    p_ptl = &v15->ptl;
    v15->ptl.y = a5;
    v15->ptl.x = v11;
    v18 = 0x80000000LL;
    v19 = *(_DWORD *)this;
    v20 = 0x80000000LL;
    v46 = 0;
    v47 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v19, v15, v16, &v45, a2, this) )
    {
      if ( *(float *)&v45 != 0.0 )
      {
        v21 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = v21;
      }
      v22 = *(_DWORD *)this;
      v23 = v48;
      v24 = a9;
      v45 = *(int *)this;
      while ( 1 )
      {
        v25 = p_ptl[-1];
        v26 = *(_DWORD *)(*(_QWORD *)&v25 + 12LL);
        v27 = v10 + *(_DWORD *)(*(_QWORD *)&v25 + 16LL);
        if ( v46 < v27 )
          v27 = v46;
        v46 = v27;
        v28 = v10 + *(_DWORD *)(*(_QWORD *)&v25 + 20LL);
        if ( v47 > v28 )
          v28 = v47;
        v10 += v26;
        v18 += *(_QWORD *)(*(_QWORD *)&v25 + 48LL);
        v20 += *(_QWORD *)(*(_QWORD *)&v25 + 56LL);
        v47 = v28;
        v29 = *((unsigned int *)this + 31);
        if ( (_DWORD)v29 && (int)v29 + v26 > 0 )
        {
          v18 += v52;
          v10 += v29;
          v20 += v53;
        }
        if ( *v14 )
        {
          v29 = v51;
          if ( p_ptl[-2].x == v51 )
          {
            v10 += *v14;
            v18 += v23;
            v20 += v49;
          }
        }
        if ( v24 )
        {
          LODWORD(v48) = 0;
          bFToL(v29, &v48, 0LL);
          v22 = v45;
          *a9++ = v48;
          v24 = a9;
        }
        v30 = v22-- == 1;
        v45 = v22;
        if ( v30 )
          break;
        p_ptl += 3;
        p_ptl->x = a4 + HIDWORD(v18);
        p_ptl->y = a5 + HIDWORD(v20);
      }
      v31 = v47;
      v32 = v18 >> 32;
      v33 = v20 >> 32;
      v34 = v47 - v10;
      v30 = v47 == v10;
      *((_DWORD *)this + 22) = v32;
      *((_DWORD *)this + 23) = v33;
      v35 = _mm_cvtsi32_si128(v32);
      if ( v34 < 0 || v30 )
        v34 = 0;
      v36 = _mm_cvtepi32_ps(v35).m128_f32[0];
      *(float *)&v45 = (float)((float)((float)(int)v33 * 0.0625) * (float)((float)(int)v33 * 0.0625))
                     + (float)((float)(v36 * 0.0625) * (float)(v36 * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v45);
      v30 = (unsigned int)bFToL(v37, &v48, 10LL) == 0;
      v38 = v46;
      if ( !v30 )
        v31 = v48;
      *((_DWORD *)this + 30) = v31;
      *((_DWORD *)this + 28) = v34 + v31;
      if ( v10 < v38 )
        v38 = v10;
      *((_DWORD *)this + 26) = v38;
      *((_DWORD *)this + 27) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
      v39 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 29) = v39;
    }
  }
}
