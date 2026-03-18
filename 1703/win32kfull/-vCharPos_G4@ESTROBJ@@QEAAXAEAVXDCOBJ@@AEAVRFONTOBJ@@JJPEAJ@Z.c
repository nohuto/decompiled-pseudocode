/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C029A860
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0128914 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C029AC8C (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, struct RFONTOBJ *a3, LONG a4, LONG a5, int *a6)
{
  __int64 v6; // r10
  unsigned int v7; // r12d
  __int64 v11; // xmm1_8
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  _BOOL8 v16; // rdi
  BOOL v17; // eax
  struct _GLYPHPOS *v18; // r8
  unsigned __int16 *v19; // r9
  int v20; // r15d
  __int64 v21; // r10
  POINTL *p_ptl; // r13
  int v23; // r14d
  struct RFONTOBJ *v24; // rdx
  RFONTOBJ *v25; // r11
  _DWORD *v26; // rdi
  int v27; // ebx
  char v28; // r8
  float v29; // xmm5_4
  int v30; // edx
  int v31; // eax
  int v32; // r8d
  float v33; // xmm5_4
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  int v37; // ebx
  int v38; // edx
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  signed int v42; // eax
  char v43; // r8
  float v44; // xmm5_4
  float v45; // xmm5_4
  int v46; // ecx
  char v47; // r8
  char v48; // r8
  char v49; // r8
  int v50; // eax
  int *v51; // rbx
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  char v56; // r8
  float v57; // xmm2_4
  char v58; // r8
  char v59; // r8
  int v60; // ecx
  __int128 v61; // xmm0
  int v62; // [rsp+48h] [rbp-89h] BYREF
  int v63; // [rsp+4Ch] [rbp-85h] BYREF
  float v64; // [rsp+50h] [rbp-81h] BYREF
  int v65; // [rsp+54h] [rbp-7Dh]
  int v66; // [rsp+58h] [rbp-79h]
  int v67; // [rsp+5Ch] [rbp-75h]
  int v68; // [rsp+60h] [rbp-71h]
  signed int v69; // [rsp+64h] [rbp-6Dh]
  __int64 v70; // [rsp+68h] [rbp-69h]
  __int64 v71; // [rsp+70h] [rbp-61h]
  __int128 v72; // [rsp+78h] [rbp-59h]
  float v73; // [rsp+88h] [rbp-49h] BYREF
  float v74; // [rsp+8Ch] [rbp-45h] BYREF
  int v75; // [rsp+90h] [rbp-41h] BYREF
  int v76; // [rsp+94h] [rbp-3Dh]
  BOOL v77; // [rsp+98h] [rbp-39h]
  _BOOL8 v78; // [rsp+A0h] [rbp-31h]
  float v79; // [rsp+138h] [rbp+67h] BYREF
  LONG v80; // [rsp+140h] [rbp+6Fh]

  v80 = a4;
  v6 = *(_QWORD *)a3;
  v7 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 652LL) )
  {
    v11 = *(_QWORD *)(v6 + 412);
    v12 = *(float *)(v6 + 448);
    v13 = *(float *)(v6 + 452);
    v14 = *(float *)(v6 + 440);
    v15 = *(float *)(v6 + 420);
    v70 = *(_QWORD *)(v6 + 432);
    v71 = v11;
    v73 = v12;
    v74 = v13;
    v79 = v14;
    v64 = v15;
    v16 = EFLOAT::bIs16((EFLOAT *)&v79);
    v17 = EFLOAT::bIs16((EFLOAT *)&v64);
    v18 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v19 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v77 = v17;
    v20 = 0;
    v66 = *(_DWORD *)(v21 + 308);
    p_ptl = &v18->ptl;
    v76 = *(_DWORD *)(v21 + 312);
    v18->ptl.y = a5;
    v18->ptl.x = a4;
    v23 = 0;
    v68 = 0x7FFFFFFF;
    LODWORD(v72) = 0x7FFFFFFF;
    v69 = 0x80000000;
    v67 = 0x80000000;
    *(_QWORD *)((char *)&v72 + 4) = 0x8000000080000000uLL;
    v24 = (struct RFONTOBJ *)*(unsigned int *)this;
    v65 = 0x7FFFFFFF;
    HIDWORD(v72) = 0x7FFFFFFF;
    v79 = 0.0;
    v64 = 0.0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v25, v24, v18, v19, &v62, a2, this) )
    {
      if ( v62 )
      {
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
      }
      if ( *(_DWORD *)this )
      {
        v78 = v16;
        do
        {
          v26 = (_DWORD *)p_ptl[-1];
          v27 = v26[3];
          vGenWidths(&v75, &v62, (struct EFLOAT *)&v74, (struct EFLOAT *)&v73, v27, v26[6], v26[7], v66);
          v63 = 0;
          bFToL((float)(v75 + v20) * v13, &v63, 0);
          v30 = v65;
          if ( v23 + v63 + v76 < v65 )
            v30 = v23 + v63 + v76;
          v31 = v67;
          v65 = v30;
          HIDWORD(v72) = v30;
          if ( v66 + v23 + v63 > v67 )
            v31 = v66 + v23 + v63;
          v63 = 0;
          v67 = v31;
          DWORD1(v72) = v31;
          bFToL(v29 * v12, &v63, v28);
          v34 = v26[4];
          v36 = v27 >> 31;
          v35 = v27;
          v62 = 0;
          v37 = v32 + 2;
          v38 = v63 - __SPAIR64__(v36, v35) / (v32 + 2);
          v39 = v68;
          v40 = v38 + v34 - 4;
          if ( v40 < v68 )
            v39 = v40;
          v41 = v26[5] + v38 + 4;
          v68 = v39;
          LODWORD(v72) = v39;
          v42 = v69;
          if ( v41 > v69 )
            v42 = v41;
          v69 = v42;
          DWORD2(v72) = v42;
          bFToL(v33 * *(float *)&v70, &v62, v32);
          v63 = 0;
          bFToL((float)v23 * *(float *)&v71, &v63, v43);
          v45 = v44 * *((float *)&v70 + 1);
          v46 = v63 - v26[13] / v37;
          v63 = 0;
          p_ptl->x = v80 + v62 + v46;
          bFToL(v45, &v63, v47);
          v62 = 0;
          bFToL((float)v23 * *((float *)&v71 + 1), &v62, v48);
          v50 = v26[15] / v37;
          v51 = a6;
          v52 = v62 - v50;
          v53 = LODWORD(v64);
          p_ptl->y = a5 + v63 + v52;
          v54 = v51[1] + LODWORD(v79);
          v55 = *v51 + v53;
          v64 = *(float *)&v55;
          v79 = *(float *)&v54;
          if ( v78 )
          {
            v20 = 16 * v55;
          }
          else
          {
            v62 = 0;
            bFToL((float)v55 * v14, &v62, v49);
            v54 = LODWORD(v79);
            v20 = v62;
          }
          if ( v77 )
          {
            v23 = 16 * v54;
          }
          else
          {
            v62 = 0;
            bFToL((float)v54 * v15, &v62, 0);
            v23 = v62;
          }
          ++v7;
          p_ptl += 3;
          a6 = v51 + 2;
        }
        while ( v7 < *(_DWORD *)this );
      }
      v79 = 0.0;
      bFToL((float)v20 * *(float *)&v70, (int *)&v79, 0);
      v64 = 0.0;
      bFToL((float)v23 * *(float *)&v71, (int *)&v64, v56);
      v57 = (float)v20 * *((float *)&v70 + 1);
      *((_DWORD *)this + 22) = LODWORD(v79) + LODWORD(v64);
      v79 = 0.0;
      bFToL(v57, (int *)&v79, v58);
      v64 = 0.0;
      bFToL((float)v23 * *((float *)&v71 + 1), (int *)&v64, v59);
      v60 = LODWORD(v79) + LODWORD(v64);
      v61 = v72;
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 23) = v60;
      *(_OWORD *)((char *)this + 104) = v61;
    }
  }
}
