/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C02967F0
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0035E18 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

void __fastcall ESTROBJ::vCharPos_G1(ESTROBJ *this, struct XDCOBJ *a2, float **a3, LONG a4, LONG a5, int *a6, int *a7)
{
  float *v9; // rax
  struct _GLYPHPOS *v11; // r14
  int v12; // edi
  float v13; // xmm8_4
  float v14; // xmm6_4
  int v15; // r15d
  float v16; // xmm7_4
  int v17; // esi
  unsigned __int16 *v18; // r9
  __int64 v19; // rax
  bool v20; // zf
  int v21; // eax
  int v22; // r12d
  __int64 v24; // rbx
  GLYPHDEF **p_pgdf; // rax
  GLYPHDEF *v27; // rax
  int v28; // ecx
  int v29; // ecx
  int v30; // r8d
  float v31; // xmm1_4
  float v32; // xmm0_4
  int v33; // eax
  int v34; // r8d
  GLYPHDEF **v35; // rcx
  int v36; // r8d
  int v37; // ecx
  int v38; // [rsp+48h] [rbp-41h] BYREF
  int v39; // [rsp+4Ch] [rbp-3Dh] BYREF
  GLYPHDEF **v40; // [rsp+50h] [rbp-39h]
  __int64 v41; // [rsp+58h] [rbp-31h]

  v9 = *a3;
  if ( *((_DWORD *)*a3 + 163) )
    return;
  v11 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
  v12 = 0;
  v13 = v9[100];
  v14 = v9[98];
  v15 = 0;
  v16 = v9[99];
  v17 = 0;
  v18 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v11->ptl.y = a5;
  v11->ptl.x = a4;
  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(
                        (RFONTOBJ *)a3,
                        (struct RFONTOBJ *)*(unsigned int *)this,
                        v11,
                        v18,
                        &v39,
                        a2,
                        this) )
    return;
  if ( v39 )
  {
    v19 = *((_QWORD *)this + 9);
    *((_DWORD *)this + 16) |= 2u;
    *((_QWORD *)this + 4) = v19;
  }
  if ( ((_DWORD)(*a3)[67] & 0x10) == 0 || (v20 = (*((_DWORD *)this + 16) & 0x1400) == 0, v41 = 1LL, !v20) )
    v41 = 0LL;
  v21 = *(_DWORD *)this;
  v22 = 0;
  v24 = v41;
  v39 = v21;
  p_pgdf = &v11->pgdf;
  v40 = p_pgdf;
  while ( 1 )
  {
    if ( v24 )
    {
      v27 = *p_pgdf;
      if ( v17 < v12 )
        v12 = v17;
      v28 = v17 + HIDWORD(v27[1].ppo);
      if ( v28 <= v15 )
        v28 = v15;
LABEL_18:
      v15 = v28;
      goto LABEL_19;
    }
    v29 = v17 + LODWORD((*p_pgdf)[2].pgb);
    if ( v29 >= v12 )
      v29 = v12;
    v12 = v29;
    v28 = v17 + HIDWORD((*p_pgdf)[2].ppo);
    if ( v28 > v15 )
      goto LABEL_18;
LABEL_19:
    v22 += *a6++;
    if ( a7 )
      *a7++ = v22;
    v38 = 0;
    bFToL((float)v22 * v13, &v38, 0);
    v20 = v39-- == 1;
    v17 = v38;
    v31 = (float)v38;
    v32 = (float)v38 * v14;
    if ( v20 )
      break;
    v40 += 3;
    v38 &= v30;
    bFToL(v32, &v38, v30);
    v33 = v38 + a4;
    v38 &= v34;
    *((_DWORD *)v40 + 2) = v33;
    bFToL(v31 * v16, &v38, v34);
    v35 = v40;
    *((_DWORD *)v40 + 3) = v38 + a5;
    p_pgdf = v35;
  }
  if ( v38 > v15 )
    v15 = v38;
  v39 &= v30;
  bFToL(v32, &v39, v30);
  v36 = v39;
  v39 = 0;
  *((_DWORD *)this + 22) = v36;
  bFToL(v31 * v16, &v39, 0);
  *((_DWORD *)this + 23) = v39;
  *((_DWORD *)this + 26) = v12;
  *((_DWORD *)this + 28) = v15;
  *((float *)this + 27) = (*a3)[77];
  v37 = *((_DWORD *)*a3 + 78);
  *((_DWORD *)this + 16) |= 4u;
  *((_DWORD *)this + 29) = v37;
}
