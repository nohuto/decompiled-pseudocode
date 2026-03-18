/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C029A384
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C0114AF0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C029AC8C (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G3(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        int a8,
        int *a9,
        int *a10)
{
  __int64 v13; // rax
  int *v14; // r13
  float v15; // xmm6_4
  float v16; // xmm7_4
  int v17; // r14d
  float v18; // xmm8_4
  float v19; // xmm9_4
  int *v20; // rsi
  int v21; // ecx
  __int64 v22; // rax
  int v23; // edx
  int v24; // eax
  struct _GLYPHPOS *v25; // r8
  signed int v26; // r14d
  unsigned __int16 *v27; // r9
  int v28; // esi
  POINTL *p_ptl; // r12
  int v30; // r15d
  __int64 v31; // rax
  struct RFONTOBJ *v32; // rdx
  int *v33; // rdi
  int v34; // r15d
  int v35; // r8d
  float v36; // xmm5_4
  int v37; // ecx
  signed int v38; // ecx
  float v39; // xmm5_4
  int v40; // edx
  int v41; // ecx
  signed int v42; // ecx
  float v43; // xmm5_4
  float v44; // xmm5_4
  int v45; // eax
  int v46; // ecx
  int v47; // r8d
  int v48; // eax
  int v49; // eax
  int v50; // r8d
  float v51; // xmm1_4
  __int128 v52; // xmm0
  int v53; // r8d
  int v54; // [rsp+30h] [rbp-B1h]
  int v55; // [rsp+38h] [rbp-A9h]
  int v56; // [rsp+48h] [rbp-99h] BYREF
  int v57; // [rsp+4Ch] [rbp-95h] BYREF
  int v58; // [rsp+50h] [rbp-91h] BYREF
  int v59; // [rsp+54h] [rbp-8Dh]
  int v60; // [rsp+58h] [rbp-89h]
  float v61; // [rsp+5Ch] [rbp-85h] BYREF
  float v62; // [rsp+60h] [rbp-81h] BYREF
  int v63; // [rsp+64h] [rbp-7Dh]
  int v64; // [rsp+68h] [rbp-79h]
  signed int v65; // [rsp+6Ch] [rbp-75h]
  __int128 v66; // [rsp+70h] [rbp-71h]
  __int64 v67; // [rsp+80h] [rbp-61h]
  int v68; // [rsp+88h] [rbp-59h]
  int v69; // [rsp+8Ch] [rbp-55h]
  _DWORD *v70; // [rsp+90h] [rbp-51h]
  _BOOL8 v71; // [rsp+98h] [rbp-49h]
  int v73; // [rsp+138h] [rbp+57h] BYREF
  LONG v74; // [rsp+140h] [rbp+5Fh]

  v74 = a4;
  v13 = *(_QWORD *)a3;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 652LL) )
    return;
  v14 = a9;
  v15 = *(float *)(v13 + 448);
  v16 = *(float *)(v13 + 452);
  v17 = *(_DWORD *)(v13 + 308);
  v18 = *(float *)(v13 + 440);
  v19 = *(float *)(v13 + 444);
  v67 = *(_QWORD *)(v13 + 432);
  v61 = v15;
  v62 = v16;
  v64 = v17;
  if ( a9 )
  {
    v24 = v73;
LABEL_10:
    v60 = v24;
    goto LABEL_11;
  }
  v20 = (int *)((char *)this + 128);
  *((_DWORD *)this + 31) = 0;
  v21 = a6;
  *v20 = 0;
  v60 = 0;
  if ( v21 )
  {
    v22 = *(_QWORD *)a3;
    v73 = 0;
    bFToL((float)v21 * *(float *)(v22 + 440), &v73, 0);
    *((_DWORD *)this + 31) = v73;
  }
  if ( bCalcBreakExtra(*(_DWORD *)(*(_QWORD *)a3 + 440LL), a7, a8, v20) )
  {
    vGenWidths(
      &v58,
      &v73,
      (struct EFLOAT *)&v62,
      (struct EFLOAT *)&v61,
      *(_DWORD *)(*(_QWORD *)a3 + 464LL),
      v17,
      0,
      v17);
    v23 = *((_DWORD *)this + 31);
    if ( v73 + v58 + v23 + *v20 < 0 )
      *v20 = -(v73 + v23 + v58);
    v24 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
    goto LABEL_10;
  }
LABEL_11:
  v25 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
  v26 = 0x80000000;
  v27 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v28 = 0x7FFFFFFF;
  v25->ptl.y = a5;
  p_ptl = &v25->ptl;
  v25->ptl.x = a4;
  v30 = 0;
  v31 = *(_QWORD *)a3;
  v32 = (struct RFONTOBJ *)*(unsigned int *)this;
  LODWORD(v66) = 0x7FFFFFFF;
  v68 = *(_DWORD *)(v31 + 312);
  v65 = 0x80000000;
  *(_QWORD *)((char *)&v66 + 4) = 0x8000000080000000uLL;
  v63 = 0x7FFFFFFF;
  HIDWORD(v66) = 0x7FFFFFFF;
  v59 = 0;
  if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v32, v25, v27, &v57, a2, this) )
  {
    if ( v57 )
    {
      *((_DWORD *)this + 16) |= 2u;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
    }
    v71 = (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) != 0 && (*((_DWORD *)this + 16) & 0x1400) == 0;
    v57 = 0;
    if ( *(_DWORD *)this )
    {
      v33 = a10;
      while ( 1 )
      {
        v70 = (_DWORD *)p_ptl[-1];
        v55 = v70[7];
        v54 = v70[6];
        v69 = v70[3];
        vGenWidths(&v58, &v73, (struct EFLOAT *)&v62, (struct EFLOAT *)&v61, v69, v54, v55, v64);
        v34 = v58 + v30;
        v56 = 0;
        bFToL((float)v34 * v16, &v56, 0);
        v37 = v63;
        if ( v56 + v68 < v63 )
          v37 = v56 + v68;
        v63 = v37;
        HIDWORD(v66) = v37;
        v38 = v65;
        if ( v56 + v64 > v65 )
          v38 = v56 + v64;
        v56 &= v35;
        v65 = v38;
        DWORD1(v66) = v38;
        bFToL(v36 * v15, &v56, v35);
        v40 = v56 - v69 / 2;
        if ( v71 )
        {
          if ( v40 - 4 < v28 )
            v28 = v40 - 4;
          LODWORD(v66) = v28;
          if ( v40 + v69 + 4 > v26 )
          {
            v26 = v40 + v69 + 4;
            DWORD2(v66) = v26;
          }
        }
        else
        {
          if ( v40 + v70[4] - 4 < v28 )
            v28 = v40 + v70[4] - 4;
          v41 = v70[5] + 4;
          LODWORD(v66) = v28;
          v42 = v40 + v41;
          if ( v42 > v26 )
            v26 = v42;
          DWORD2(v66) = v26;
        }
        v56 = 0;
        bFToL(v39 * *(float *)&v67, &v56, 0);
        v44 = v43 * *((float *)&v67 + 1);
        v45 = v70[13] / 2;
        v46 = v56;
        v56 = 0;
        p_ptl->x = v74 + v46 - v45;
        bFToL(v44, &v56, 0);
        p_ptl->y = a5 + v56 - v70[15] / (v47 + 2);
        if ( !v14 )
          break;
        v48 = *v14++ + v59;
        v56 &= v47;
        v59 = v48;
        bFToL((float)v48 * v18, &v56, v47);
        v30 = v56;
        if ( v33 )
        {
          *v33 = v59;
LABEL_42:
          ++v33;
        }
LABEL_43:
        p_ptl += 3;
        if ( (unsigned int)++v57 >= *(_DWORD *)this )
          goto LABEL_44;
      }
      v30 = v73 + *((_DWORD *)this + 31) + v34;
      v49 = *((_DWORD *)this + 32);
      if ( v49 )
      {
        if ( p_ptl[-2].x == v60 )
          v30 += v49;
      }
      if ( !v33 )
        goto LABEL_43;
      v56 &= v47;
      bFToL((float)v30 * v19, &v56, v47);
      *v33 = v56;
      goto LABEL_42;
    }
LABEL_44:
    v73 = 0;
    bFToL((float)v30 * *(float *)&v67, &v73, 0);
    v50 = v73;
    v51 = (float)v30 * *((float *)&v67 + 1);
    v73 = 0;
    *((_DWORD *)this + 22) = v50;
    bFToL(v51, &v73, 0);
    v52 = v66;
    v53 = v73;
    *((_DWORD *)this + 16) |= 4u;
    *(_OWORD *)((char *)this + 104) = v52;
    *((_DWORD *)this + 23) = v53;
  }
}
