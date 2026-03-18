/*
 * XREFs of ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0033408
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0024D08 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0025170 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0032534 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00329AC (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0033A10 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0033A60 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0035370 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0035E18 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0135568 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0135730 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0282C84 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned int v6; // r15d
  unsigned int *v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  char *v15; // r12
  __int64 v16; // rdx
  unsigned __int16 *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int16 *v31; // rdi
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // [rsp+28h] [rbp-50h]
  int v37; // [rsp+80h] [rbp+8h]
  unsigned int v38; // [rsp+88h] [rbp+10h]
  unsigned int v39; // [rsp+90h] [rbp+18h]
  int v40; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)this;
  v4 = 0LL;
  v5 = 0LL;
  v40 = 2 * *(_DWORD *)(*(_QWORD *)this + 648LL);
  v37 = *(_DWORD *)(*(_QWORD *)this + 68LL) & 2;
  if ( v37 )
  {
    v5 = *(_QWORD *)(v2 + 472);
    v6 = *(_DWORD *)(v5 + 12);
    v7 = (unsigned int *)(v5 + 8);
  }
  else
  {
    v28 = *(_QWORD *)(v2 + 112);
    v4 = *(_QWORD *)(v28 + 80);
    if ( !v4 )
      return 0LL;
    v6 = *(_DWORD *)(v4 + 4);
    v7 = *(unsigned int **)(v28 + 80);
  }
  v8 = 16LL * v6;
  v38 = *v7;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = 8LL * *v7;
  if ( v9 > 0xFFFFFFFF || (unsigned int)(v8 + 16) < 0x10 || (int)v8 + 16 + (int)v9 < (unsigned int)(v8 + 16) )
    return 0LL;
  v10 = (v8 + 16 + v9 + 7) & 0xFFFFFFF8;
  v39 = v10;
  v11 = v10 + (*(_DWORD *)(v2 + 652) != 0 ? 768 : 2048);
  if ( v11 + 8 > 0xC00 )
  {
    v11 = (v10 + 4095) & 0xFFFFF000;
    if ( v11 - v10 < 0x80 )
      v11 += 4096;
  }
  v12 = PALLOCMEM2(v11);
  v36 = v12;
  v13 = *(_QWORD *)this;
  if ( !v12 )
  {
    *(_DWORD *)(v13 + 68) |= 8u;
    return 0LL;
  }
  *(_QWORD *)(v13 + 480) = v12;
  v14 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v15 = (char *)(v14 + v8 + 16);
  *(_QWORD *)(v14 + 8) = 0LL;
  *(_DWORD *)v14 = v6;
  memset(v15, 0, 8LL * v38);
  if ( v37 )
  {
    if ( v6 )
    {
      v16 = v6;
      v17 = (unsigned __int16 *)(v5 + 18);
      v18 = v14 - v5;
      do
      {
        *(_QWORD *)((char *)v17 + v18 + 6) = v15;
        *(_DWORD *)((char *)v17 + v18 - 2) = *(v17 - 1);
        v19 = *v17;
        *(_DWORD *)((char *)v17 + v18 + 2) = v19;
        v17 += 8;
        v15 += 8 * v19;
        --v16;
      }
      while ( v16 );
    }
  }
  else if ( v6 )
  {
    v29 = v6;
    v30 = v14 + 20;
    v31 = (unsigned __int16 *)(v4 + 8);
    do
    {
      *(_QWORD *)(v30 + 4) = v15;
      v32 = *v31;
      v31 += 2;
      *(_DWORD *)(v30 - 4) = v32;
      v33 = *(v31 - 1);
      *(_DWORD *)v30 = v33;
      v30 += 16LL;
      v15 += 8 * v33;
      --v29;
    }
    while ( v29 );
  }
  v20 = (_QWORD *)(v36 + v39);
  *(_QWORD *)(v2 + 560) = v20;
  *v20 = 0LL;
  v21 = v36 + v11;
  *(_QWORD *)(v2 + 536) = *(_QWORD *)(v2 + 560) + 16LL;
  *(_QWORD *)(v2 + 552) = v21;
  *(_QWORD *)(v2 + 544) = v21;
  v22 = *(_DWORD *)(*(_QWORD *)this + 72LL);
  if ( !v22 || (*(_DWORD *)(*(_QWORD *)this + 68LL) & 1) != 0 )
    goto LABEL_25;
  if ( v22 == 2 )
  {
    *(_DWORD *)(v2 + 572) = v40;
    *(_DWORD *)(v2 + 576) = v40;
    goto LABEL_24;
  }
  v23 = *(_DWORD *)(v2 + 648);
  v24 = 16 * v23;
  v25 = (16 * v23 + 4095) & 0xFFFFF000;
  if ( v25 <= 0x2000 )
  {
    if ( v24 >= 0xC00 )
      v24 = (v24 + 4095) & 0xFFFFF000;
    *(_DWORD *)(v2 + 572) = v24;
  }
  else
  {
    if ( (unsigned int)(8 * v23) <= 0x2000 )
    {
      *(_DWORD *)(v2 + 572) = 0x2000;
      *(_DWORD *)(v2 + 576) = 0x2000;
      goto LABEL_24;
    }
    v25 = 0x10000;
    if ( ((8 * v23 + 4095) & 0xFFFFF000) < 0x10000 )
      v25 = (8 * v23 + 4095) & 0xFFFFF000;
    *(_DWORD *)(v2 + 572) = v25;
  }
  *(_DWORD *)(v2 + 576) = v25;
LABEL_24:
  *(_DWORD *)(v2 + 580) = ((v38 + 1023) >> 10 << 16) / *(_DWORD *)(v2 + 576);
LABEL_25:
  v26 = **(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( v26 > 0xC8 )
  {
    v34 = v26 - 1;
    *(_DWORD *)(v2 + 656) = v34;
    if ( (v34 & 0xF000) != 0 )
    {
      v35 = acBits[((__int64)v34 >> 12) & 0xF] + 12;
    }
    else if ( (v34 & 0xF00) != 0 )
    {
      v35 = acBits[((__int64)v34 >> 8) & 0xF] + 8;
    }
    else if ( (v34 & 0xF0) != 0 )
    {
      v35 = acBits[((__int64)v34 >> 4) & 0xF] + 4;
    }
    else
    {
      v35 = acBits[v34 & 0xF];
    }
    *(_DWORD *)(v2 + 664) = v35;
    *(_DWORD *)(v2 + 660) = *((_DWORD *)&aiStart + v35);
  }
  else
  {
    *(_DWORD *)(v2 + 656) = 0;
  }
  return 1LL;
}
