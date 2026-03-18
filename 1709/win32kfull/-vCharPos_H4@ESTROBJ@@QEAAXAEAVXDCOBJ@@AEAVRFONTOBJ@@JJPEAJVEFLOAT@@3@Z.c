/*
 * XREFs of ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C012E3E4
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0035E18 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C012E724 (-bIs16@EFLOAT@@QEAAHXZ.c)
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
  int v19; // r11d
  signed int v20; // r15d
  signed int v21; // esi
  int v22; // r14d
  int *v23; // rcx
  int v24; // r9d
  int v25; // r10d
  int v26; // edi
  int v27; // r8d
  int v28; // eax
  int *v29; // rbx
  __int64 v30; // rdx
  int v31; // eax
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // r9d
  int v36; // [rsp+40h] [rbp-30h] BYREF
  int v37; // [rsp+44h] [rbp-2Ch] BYREF
  int v38; // [rsp+48h] [rbp-28h]
  int v39; // [rsp+4Ch] [rbp-24h]
  int v40; // [rsp+50h] [rbp-20h]
  __int64 v41; // [rsp+58h] [rbp-18h]
  int v42; // [rsp+60h] [rbp-10h]
  int v43; // [rsp+64h] [rbp-Ch]
  int v47; // [rsp+C8h] [rbp+58h]

  v41 = *((_QWORD *)a1 + 9);
  v42 = EFLOAT::bIs16((EFLOAT *)&a7);
  v43 = EFLOAT::bIs16((EFLOAT *)&a8);
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, (struct RFONTOBJ *)*a1, v11, v12, &v37, a2, (struct ESTROBJ *)a1);
  if ( (_DWORD)result )
  {
    if ( v37 )
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
    v18 = v41;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v40 = a5 + 8;
    v22 = 0;
    v23 = (int *)(v41 + 16);
    v24 = 0;
    v47 = a4 + 8;
    v25 = 0;
    v26 = 0;
    *(_DWORD *)(v41 + 16) = v47 >> 4;
    v27 = 0;
    *(_DWORD *)(v18 + 20) = v40 >> 4;
    v28 = *a1;
    v29 = v23;
    v39 = v28;
    while ( 1 )
    {
      v30 = *((_QWORD *)v29 - 1);
      v31 = v27 + v16;
      v32 = v26 + *(_DWORD *)(v30 + 16);
      if ( v32 >= v19 )
        v32 = v19;
      v37 = v32;
      v33 = v26 + *(_DWORD *)(v30 + 20);
      if ( v33 <= v20 )
        v33 = v20;
      v20 = v33;
      if ( v31 <= v21 )
        v31 = v21;
      v21 = v31;
      v34 = v27 + v17;
      if ( v27 + v17 >= v22 )
        v34 = v22;
      v22 = v34;
      v35 = *a6 + v24;
      v25 += a6[1];
      a6 += 2;
      LODWORD(v41) = v35;
      v38 = v25;
      if ( v42 )
      {
        v26 = 16 * v35;
      }
      else
      {
        v36 = 0;
        bFToL((float)v35 * a7, &v36, 0);
        v25 = v38;
        v26 = v36;
      }
      if ( v43 )
      {
        v27 = 16 * v25;
      }
      else
      {
        v36 = 0;
        bFToL((float)v25 * a8, &v36, 0);
        v25 = v38;
        v27 = v36;
      }
      if ( !--v39 )
        break;
      v29 += 6;
      v24 = v41;
      v19 = v37;
      *v29 = (v26 + v47) >> 4;
      v29[1] = (v40 - v27) >> 4;
    }
    if ( v26 > v20 )
      v20 = v26;
    a1[26] = v37;
    a1[22] = v26;
    a1[23] = -v27;
    a1[28] = v20;
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL);
    if ( (result & 0x40) != 0 )
    {
      a1[27] = -v22;
      a1[29] = -v21;
    }
    else
    {
      a1[27] = v21;
      a1[29] = v22;
    }
    a1[16] |= 4u;
  }
  return result;
}
