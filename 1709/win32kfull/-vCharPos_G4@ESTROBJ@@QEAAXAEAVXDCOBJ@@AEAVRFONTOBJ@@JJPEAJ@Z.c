/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C0296F58
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0035E18 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C012E724 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02973E0 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, float **a3, LONG a4, LONG a5, int *a6)
{
  float *v6; // r10
  unsigned int v7; // r12d
  float v11; // xmm12_4
  float v12; // xmm13_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  _BOOL8 v19; // rdi
  BOOL v20; // eax
  struct _GLYPHPOS *v21; // r8
  unsigned __int16 *v22; // r9
  int v23; // r15d
  __int64 v24; // r10
  POINTL *p_ptl; // r13
  int v26; // r14d
  struct RFONTOBJ *v27; // rdx
  RFONTOBJ *v28; // r11
  _DWORD *v29; // rdi
  int v30; // ebx
  char v31; // r8
  float v32; // xmm5_4
  int v33; // edx
  int v34; // eax
  int v35; // r8d
  float v36; // xmm5_4
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // ebx
  int v41; // edx
  int v42; // eax
  int v43; // ecx
  int v44; // ecx
  int v45; // eax
  char v46; // r8
  float v47; // xmm5_4
  char v48; // r8
  char v49; // r8
  char v50; // r8
  int v51; // eax
  int *v52; // rbx
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  char v57; // r8
  char v58; // r8
  char v59; // r8
  int v60; // ecx
  __int128 v61; // xmm0
  int v62; // [rsp+48h] [rbp-C0h] BYREF
  int v63; // [rsp+4Ch] [rbp-BCh] BYREF
  float v64; // [rsp+50h] [rbp-B8h] BYREF
  int v65; // [rsp+54h] [rbp-B4h]
  int v66; // [rsp+58h] [rbp-B0h]
  int v67; // [rsp+5Ch] [rbp-ACh]
  int v68; // [rsp+60h] [rbp-A8h]
  _BYTE v69[20]; // [rsp+64h] [rbp-A4h]
  float v70; // [rsp+78h] [rbp-90h] BYREF
  float v71; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v72; // [rsp+80h] [rbp-88h] BYREF
  int v73; // [rsp+84h] [rbp-84h]
  BOOL v74; // [rsp+88h] [rbp-80h]
  _BOOL8 v75; // [rsp+90h] [rbp-78h]
  float v76; // [rsp+168h] [rbp+60h] BYREF
  LONG v77; // [rsp+170h] [rbp+68h]

  v77 = a4;
  v6 = *a3;
  v7 = 0;
  if ( !*((_DWORD *)*a3 + 163) )
  {
    v11 = v6[112];
    v12 = v6[113];
    v13 = v6[110];
    v14 = v6[105];
    v15 = v6[108];
    v16 = v6[109];
    v17 = v6[103];
    v18 = v6[104];
    v70 = v11;
    v71 = v12;
    v76 = v13;
    v64 = v14;
    v19 = EFLOAT::bIs16((EFLOAT *)&v76);
    v20 = EFLOAT::bIs16((EFLOAT *)&v64);
    v21 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v22 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v74 = v20;
    v23 = 0;
    v66 = *(_DWORD *)(v24 + 308);
    p_ptl = &v21->ptl;
    v73 = *(_DWORD *)(v24 + 312);
    v21->ptl.y = a5;
    v21->ptl.x = a4;
    v26 = 0;
    v68 = 0x7FFFFFFF;
    *(_QWORD *)v69 = 0x7FFFFFFF80000000LL;
    *(_DWORD *)&v69[12] = 0x80000000;
    v67 = 0x80000000;
    *(_DWORD *)&v69[8] = 0x80000000;
    v27 = (struct RFONTOBJ *)*(unsigned int *)this;
    v65 = 0x7FFFFFFF;
    *(_DWORD *)&v69[16] = 0x7FFFFFFF;
    v76 = 0.0;
    v64 = 0.0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v28, v27, v21, v22, &v62, a2, this) )
    {
      if ( v62 )
      {
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
      }
      if ( *(_DWORD *)this )
      {
        v75 = v19;
        do
        {
          v29 = (_DWORD *)p_ptl[-1];
          v30 = v29[3];
          vGenWidths(&v72, &v62, (struct EFLOAT *)&v71, (struct EFLOAT *)&v70, v30, v29[6], v29[7], v66);
          v63 = 0;
          bFToL((float)(v72 + v23) * v12, &v63, 0);
          v33 = v65;
          if ( v26 + v63 + v73 < v65 )
            v33 = v26 + v63 + v73;
          v34 = v67;
          v65 = v33;
          *(_DWORD *)&v69[16] = v33;
          if ( v66 + v26 + v63 > v67 )
            v34 = v66 + v26 + v63;
          v63 = 0;
          v67 = v34;
          *(_DWORD *)&v69[8] = v34;
          bFToL(v32 * v11, &v63, v31);
          v37 = v29[4];
          v39 = v30 >> 31;
          v38 = v30;
          v62 = 0;
          v40 = v35 + 2;
          v41 = v63 - __SPAIR64__(v39, v38) / (v35 + 2);
          v42 = v68;
          v43 = v41 + v37 - 4;
          if ( v43 < v68 )
            v42 = v43;
          v44 = v29[5] + v41 + 4;
          v68 = v42;
          *(_DWORD *)&v69[4] = v42;
          v45 = *(_DWORD *)v69;
          if ( v44 > *(int *)v69 )
            v45 = v44;
          *(_DWORD *)v69 = v45;
          *(_DWORD *)&v69[12] = v45;
          bFToL(v36 * v15, &v62, v35);
          v63 = 0;
          bFToL((float)v26 * v17, &v63, v46);
          p_ptl->x = v77 + v62 + v63 - v29[13] / v40;
          v63 = 0;
          bFToL(v47 * v16, &v63, v48);
          v62 = 0;
          bFToL((float)v26 * v18, &v62, v49);
          v51 = v29[15] / v40;
          v52 = a6;
          v53 = v62 - v51;
          v54 = LODWORD(v64);
          p_ptl->y = a5 + v63 + v53;
          v55 = v52[1] + LODWORD(v76);
          v56 = *v52 + v54;
          v64 = *(float *)&v56;
          v76 = *(float *)&v55;
          if ( v75 )
          {
            v23 = 16 * v56;
          }
          else
          {
            v62 = 0;
            bFToL((float)v56 * v13, &v62, v50);
            v55 = LODWORD(v76);
            v23 = v62;
          }
          if ( v74 )
          {
            v26 = 16 * v55;
          }
          else
          {
            v62 = 0;
            bFToL((float)v55 * v14, &v62, 0);
            v26 = v62;
          }
          ++v7;
          p_ptl += 3;
          a6 = v52 + 2;
        }
        while ( v7 < *(_DWORD *)this );
      }
      v76 = 0.0;
      bFToL((float)v23 * v15, (int *)&v76, 0);
      v64 = 0.0;
      bFToL((float)v26 * v17, (int *)&v64, v57);
      *((_DWORD *)this + 22) = LODWORD(v76) + LODWORD(v64);
      v76 = 0.0;
      bFToL((float)v23 * v16, (int *)&v76, v58);
      v64 = 0.0;
      bFToL((float)v26 * v18, (int *)&v64, v59);
      v60 = LODWORD(v76) + LODWORD(v64);
      v61 = *(_OWORD *)&v69[4];
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 23) = v60;
      *(_OWORD *)((char *)this + 104) = v61;
    }
  }
}
