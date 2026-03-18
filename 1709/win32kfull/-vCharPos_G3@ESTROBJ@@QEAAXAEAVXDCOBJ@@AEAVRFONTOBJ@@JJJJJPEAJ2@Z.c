/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C0296A50
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0035E18 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C011C5F4 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02973E0 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
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
  float v15; // xmm8_4
  float v16; // xmm9_4
  int v17; // r14d
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  int *v22; // rsi
  int v23; // ecx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  struct _GLYPHPOS *v27; // r8
  signed int v28; // r14d
  unsigned __int16 *v29; // r9
  int v30; // esi
  POINTL *p_ptl; // r12
  int v32; // r15d
  __int64 v33; // rax
  struct RFONTOBJ *v34; // rdx
  int *v35; // rdi
  int v36; // r15d
  int v37; // r8d
  float v38; // xmm5_4
  int v39; // ecx
  int v40; // ecx
  float v41; // xmm5_4
  int v42; // edx
  int v43; // ecx
  signed int v44; // ecx
  float v45; // xmm5_4
  int v46; // eax
  int v47; // ecx
  int v48; // r8d
  int v49; // eax
  int v50; // eax
  int v51; // r8d
  __int128 v52; // xmm0
  int v53; // r8d
  int v54; // [rsp+30h] [rbp-C1h]
  int v55; // [rsp+38h] [rbp-B9h]
  int v56; // [rsp+48h] [rbp-A9h] BYREF
  int v57; // [rsp+4Ch] [rbp-A5h] BYREF
  int v58; // [rsp+50h] [rbp-A1h] BYREF
  int v59; // [rsp+54h] [rbp-9Dh]
  int v60; // [rsp+58h] [rbp-99h]
  float v61; // [rsp+5Ch] [rbp-95h] BYREF
  float v62; // [rsp+60h] [rbp-91h] BYREF
  int v63; // [rsp+64h] [rbp-8Dh]
  int v64; // [rsp+68h] [rbp-89h]
  signed int v65; // [rsp+6Ch] [rbp-85h]
  int v66[4]; // [rsp+70h] [rbp-81h]
  int v67; // [rsp+80h] [rbp-71h]
  int v68; // [rsp+84h] [rbp-6Dh]
  _DWORD *v69; // [rsp+88h] [rbp-69h]
  _BOOL8 v70; // [rsp+90h] [rbp-61h]
  int v72; // [rsp+148h] [rbp+57h] BYREF
  LONG v73; // [rsp+150h] [rbp+5Fh]

  v73 = a4;
  v13 = *(_QWORD *)a3;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 652LL) )
    return;
  v14 = a9;
  v15 = *(float *)(v13 + 448);
  v16 = *(float *)(v13 + 452);
  v17 = *(_DWORD *)(v13 + 308);
  v18 = *(float *)(v13 + 432);
  v19 = *(float *)(v13 + 436);
  v20 = *(float *)(v13 + 440);
  v21 = *(float *)(v13 + 444);
  v61 = v15;
  v62 = v16;
  v64 = v17;
  if ( a9 )
  {
    v26 = v72;
LABEL_10:
    v60 = v26;
    goto LABEL_11;
  }
  v22 = (int *)((char *)this + 128);
  *((_DWORD *)this + 31) = 0;
  v23 = a6;
  *v22 = 0;
  v60 = 0;
  if ( v23 )
  {
    v24 = *(_QWORD *)a3;
    v72 = 0;
    bFToL((float)v23 * *(float *)(v24 + 440), &v72, 0);
    *((_DWORD *)this + 31) = v72;
  }
  if ( bCalcBreakExtra(*(_DWORD *)(*(_QWORD *)a3 + 440LL), a7, a8, v22) )
  {
    vGenWidths(
      &v58,
      &v72,
      (struct EFLOAT *)&v62,
      (struct EFLOAT *)&v61,
      *(_DWORD *)(*(_QWORD *)a3 + 464LL),
      v17,
      0,
      v17);
    v25 = *((_DWORD *)this + 31);
    if ( v72 + v58 + v25 + *v22 < 0 )
      *v22 = -(v72 + v25 + v58);
    v26 = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
    goto LABEL_10;
  }
LABEL_11:
  v27 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
  v28 = 0x80000000;
  v29 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v30 = 0x7FFFFFFF;
  v27->ptl.y = a5;
  p_ptl = &v27->ptl;
  v27->ptl.x = a4;
  v32 = 0;
  v33 = *(_QWORD *)a3;
  v34 = (struct RFONTOBJ *)*(unsigned int *)this;
  v66[0] = 0x7FFFFFFF;
  v67 = *(_DWORD *)(v33 + 312);
  v65 = 0x80000000;
  *(_QWORD *)&v66[1] = 0x8000000080000000uLL;
  v63 = 0x7FFFFFFF;
  v66[3] = 0x7FFFFFFF;
  v59 = 0;
  if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v34, v27, v29, &v57, a2, this) )
  {
    if ( v57 )
    {
      *((_DWORD *)this + 16) |= 2u;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
    }
    v70 = (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) != 0 && (*((_DWORD *)this + 16) & 0x1400) == 0;
    v57 = 0;
    if ( *(_DWORD *)this )
    {
      v35 = a10;
      while ( 1 )
      {
        v69 = (_DWORD *)p_ptl[-1];
        v55 = v69[7];
        v54 = v69[6];
        v68 = v69[3];
        vGenWidths(&v58, &v72, (struct EFLOAT *)&v62, (struct EFLOAT *)&v61, v68, v54, v55, v64);
        v36 = v58 + v32;
        v56 = 0;
        bFToL((float)v36 * v16, &v56, 0);
        v39 = v63;
        if ( v56 + v67 < v63 )
          v39 = v56 + v67;
        v63 = v39;
        v66[3] = v39;
        v40 = v65;
        if ( v56 + v64 > v65 )
          v40 = v56 + v64;
        v56 &= v37;
        v65 = v40;
        v66[1] = v40;
        bFToL(v38 * v15, &v56, v37);
        v42 = v56 - v68 / 2;
        if ( v70 )
        {
          if ( v42 - 4 < v30 )
            v30 = v42 - 4;
          v66[0] = v30;
          if ( v42 + v68 + 4 > v28 )
          {
            v28 = v42 + v68 + 4;
            v66[2] = v28;
          }
        }
        else
        {
          if ( v42 + v69[4] - 4 < v30 )
            v30 = v42 + v69[4] - 4;
          v43 = v69[5] + 4;
          v66[0] = v30;
          v44 = v42 + v43;
          if ( v44 > v28 )
            v28 = v44;
          v66[2] = v28;
        }
        v56 = 0;
        bFToL(v41 * v18, &v56, 0);
        v46 = v69[13] / 2;
        v47 = v56;
        v56 = 0;
        p_ptl->x = v73 + v47 - v46;
        bFToL(v45 * v19, &v56, 0);
        p_ptl->y = a5 + v56 - v69[15] / (v48 + 2);
        if ( !v14 )
          break;
        v49 = *v14++ + v59;
        v56 &= v48;
        v59 = v49;
        bFToL((float)v49 * v20, &v56, v48);
        v32 = v56;
        if ( v35 )
        {
          *v35 = v59;
LABEL_42:
          ++v35;
        }
LABEL_43:
        p_ptl += 3;
        if ( (unsigned int)++v57 >= *(_DWORD *)this )
          goto LABEL_44;
      }
      v32 = v72 + *((_DWORD *)this + 31) + v36;
      v50 = *((_DWORD *)this + 32);
      if ( v50 )
      {
        if ( p_ptl[-2].x == v60 )
          v32 += v50;
      }
      if ( !v35 )
        goto LABEL_43;
      v56 &= v48;
      bFToL((float)v32 * v21, &v56, v48);
      *v35 = v56;
      goto LABEL_42;
    }
LABEL_44:
    v72 = 0;
    bFToL((float)v32 * v18, &v72, 0);
    v51 = v72;
    v72 = 0;
    *((_DWORD *)this + 22) = v51;
    bFToL((float)v32 * v19, &v72, 0);
    v52 = *(_OWORD *)v66;
    v53 = v72;
    *((_DWORD *)this + 16) |= 4u;
    *(_OWORD *)((char *)this + 104) = v52;
    *((_DWORD *)this + 23) = v53;
  }
}
