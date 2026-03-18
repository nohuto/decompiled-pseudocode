/*
 * XREFs of ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C01280D4
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0128914 (-bIs16@EFLOAT@@QEAAHXZ.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H4(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        float a7,
        float a8)
{
  struct _GLYPHPOS *v11; // rdx
  unsigned __int16 *v12; // r9
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r12d
  int v17; // r13d
  __int64 v18; // rdx
  signed int v19; // r15d
  signed int v20; // esi
  int *v21; // rcx
  int v22; // r14d
  int v23; // r10d
  int v24; // r11d
  int v25; // edi
  int v26; // r8d
  int v27; // r9d
  int *v28; // rbx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // r10d
  bool v35; // zf
  int v36; // [rsp+40h] [rbp-20h]
  signed int v37; // [rsp+44h] [rbp-1Ch]
  int v38; // [rsp+48h] [rbp-18h] BYREF
  int v39; // [rsp+4Ch] [rbp-14h] BYREF
  int v40; // [rsp+50h] [rbp-10h]
  int v41; // [rsp+54h] [rbp-Ch]
  __int64 v42; // [rsp+58h] [rbp-8h]
  int v46; // [rsp+B8h] [rbp+58h]
  int v47; // [rsp+C0h] [rbp+60h]

  v42 = *((_QWORD *)a1 + 9);
  v40 = EFLOAT::bIs16((EFLOAT *)&a7);
  v41 = EFLOAT::bIs16((EFLOAT *)&a8);
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, (struct RFONTOBJ *)*a1, v11, v12, &v39, a2, (struct ESTROBJ *)a1);
  if ( (_DWORD)result )
  {
    if ( v39 )
    {
      v14 = *((_QWORD *)a1 + 9);
      a1[16] |= 2u;
      *((_QWORD *)a1 + 4) = v14;
    }
    v15 = *(_QWORD *)a3;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x40) != 0 )
    {
      v16 = -*(_DWORD *)(v15 + 312);
      v17 = -*(_DWORD *)(v15 + 308);
    }
    else
    {
      v16 = *(_DWORD *)(v15 + 308);
      v17 = *(_DWORD *)(v15 + 312);
    }
    v18 = v42;
    v19 = 0;
    v37 = 0;
    v20 = 0;
    v47 = a5 + 8;
    v46 = a4 + 8;
    v21 = (int *)(v42 + 16);
    v22 = 0;
    *(_DWORD *)(v42 + 16) = v46 >> 4;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    *(_DWORD *)(v18 + 20) = v47 >> 4;
    v27 = *a1;
    v28 = v21;
    v36 = v27;
    while ( 1 )
    {
      v29 = *((_QWORD *)v28 - 1);
      v30 = v26 + v16;
      v31 = v25 + *(_DWORD *)(v29 + 16);
      if ( v31 >= v37 )
        v31 = v37;
      v37 = v31;
      v32 = v25 + *(_DWORD *)(v29 + 20);
      if ( v32 <= v19 )
        v32 = v19;
      v19 = v32;
      if ( v30 <= v20 )
        v30 = v20;
      v20 = v30;
      v33 = v26 + v17;
      if ( v26 + v17 >= v22 )
        v33 = v22;
      v22 = v33;
      v34 = *a6 + v23;
      v24 += a6[1];
      a6 += 2;
      LODWORD(v42) = v34;
      v39 = v24;
      if ( v40 )
      {
        v25 = 16 * v34;
      }
      else
      {
        v38 = 0;
        bFToL((float)v34 * a7, &v38, 0);
        v24 = v39;
        v27 = v36;
        v25 = v38;
      }
      if ( v41 )
      {
        v26 = 16 * v24;
      }
      else
      {
        v38 = 0;
        bFToL((float)v24 * a8, &v38, 0);
        v24 = v39;
        v27 = v36;
        v26 = v38;
      }
      v35 = v27-- == 1;
      v36 = v27;
      if ( v35 )
        break;
      v28 += 6;
      v23 = v42;
      *v28 = (v25 + v46) >> 4;
      v28[1] = (v47 - v26) >> 4;
    }
    if ( v25 > v19 )
      v19 = v25;
    a1[26] = v37;
    a1[22] = v25;
    a1[23] = -v26;
    a1[28] = v19;
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL);
    if ( (result & 0x40) != 0 )
    {
      a1[27] = -v22;
      a1[29] = -v20;
    }
    else
    {
      a1[27] = v20;
      a1[29] = v22;
    }
    a1[16] |= 4u;
  }
  return result;
}
