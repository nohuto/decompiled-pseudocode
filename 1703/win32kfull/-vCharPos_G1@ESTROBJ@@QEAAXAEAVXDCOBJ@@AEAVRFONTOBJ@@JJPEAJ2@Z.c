/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C029A140
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

void __fastcall ESTROBJ::vCharPos_G1(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int *a6,
        int *a7)
{
  __int64 v7; // rax
  __int64 v11; // xmm0_8
  int v12; // edi
  struct _GLYPHPOS *v13; // r14
  int v14; // r15d
  float v15; // xmm6_4
  unsigned __int16 *v16; // r9
  int v17; // esi
  int v18; // r13d
  struct RFONTOBJ *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v23; // rbx
  GLYPHDEF **p_pgdf; // rax
  GLYPHDEF *v26; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // r8d
  bool v30; // zf
  float v31; // xmm1_4
  float v32; // xmm0_4
  int v33; // eax
  float v34; // xmm1_4
  int v35; // r8d
  GLYPHDEF **v36; // rcx
  int v37; // r8d
  float v38; // xmm1_4
  int v39; // ecx
  __int64 v41; // [rsp+40h] [rbp-30h] BYREF
  int v42; // [rsp+48h] [rbp-28h] BYREF
  GLYPHDEF **v43; // [rsp+50h] [rbp-20h]
  __int64 v44; // [rsp+58h] [rbp-18h]

  v7 = *(_QWORD *)a3;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 652LL) )
    return;
  v11 = *(_QWORD *)(v7 + 392);
  v12 = 0;
  v13 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
  v14 = 0;
  v15 = *(float *)(v7 + 400);
  v16 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v17 = 0;
  v18 = 0;
  v13->ptl.y = a5;
  v13->ptl.x = a4;
  v19 = (struct RFONTOBJ *)*(unsigned int *)this;
  v44 = v11;
  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v19, v13, v16, &v42, a2, this) )
    return;
  if ( v42 )
  {
    v20 = *((_QWORD *)this + 9);
    *((_DWORD *)this + 16) |= 2u;
    *((_QWORD *)this + 4) = v20;
  }
  v41 = (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) != 0 && (*((_DWORD *)this + 16) & 0x1400) == 0;
  v21 = *(_DWORD *)this;
  v23 = v41;
  v42 = v21;
  p_pgdf = &v13->pgdf;
  v43 = p_pgdf;
  while ( 1 )
  {
    if ( v23 )
    {
      v26 = *p_pgdf;
      if ( v17 < v12 )
        v12 = v17;
      v27 = v17 + HIDWORD(v26[1].ppo);
      if ( v27 <= v14 )
        v27 = v14;
LABEL_19:
      v14 = v27;
      goto LABEL_20;
    }
    v28 = v17 + LODWORD((*p_pgdf)[2].pgb);
    if ( v28 >= v12 )
      v28 = v12;
    v12 = v28;
    v27 = v17 + HIDWORD((*p_pgdf)[2].ppo);
    if ( v27 > v14 )
      goto LABEL_19;
LABEL_20:
    v18 += *a6++;
    if ( a7 )
      *a7++ = v18;
    LODWORD(v41) = 0;
    bFToL((float)v18 * v15, (int *)&v41, 0);
    v30 = v42-- == 1;
    v17 = v41;
    v31 = (float)(int)v41;
    v32 = (float)(int)v41 * *(float *)&v44;
    if ( v30 )
      break;
    v43 += 3;
    LODWORD(v41) = v29 & v41;
    bFToL(v32, (int *)&v41, v29);
    v33 = v41 + a4;
    v34 = v31 * *((float *)&v44 + 1);
    LODWORD(v41) = v35 & v41;
    *((_DWORD *)v43 + 2) = v33;
    bFToL(v34, (int *)&v41, v35);
    v36 = v43;
    *((_DWORD *)v43 + 3) = v41 + a5;
    p_pgdf = v36;
  }
  if ( (int)v41 > v14 )
    v14 = v41;
  v42 &= v29;
  bFToL(v32, &v42, v29);
  v37 = v42;
  v38 = v31 * *((float *)&v44 + 1);
  v42 = 0;
  *((_DWORD *)this + 22) = v37;
  bFToL(v38, &v42, 0);
  *((_DWORD *)this + 23) = v42;
  *((_DWORD *)this + 26) = v12;
  *((_DWORD *)this + 28) = v14;
  *((_DWORD *)this + 27) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
  v39 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
  *((_DWORD *)this + 16) |= 4u;
  *((_DWORD *)this + 29) = v39;
}
