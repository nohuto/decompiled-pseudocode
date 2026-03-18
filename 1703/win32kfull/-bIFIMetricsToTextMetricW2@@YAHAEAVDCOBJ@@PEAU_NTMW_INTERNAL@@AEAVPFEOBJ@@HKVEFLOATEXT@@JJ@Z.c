/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C002F2B4
 * Callers:
 *     cjCopyFontDataW @ 0x1C002EE8C (cjCopyFontDataW.c)
 * Callees:
 *     ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C002FABC (-fwdExternalLeading@IFIOBJ@@QEAAFXZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricW2(
        struct XDCOBJ *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8)
{
  unsigned int v8; // edi
  struct XDCOBJ *v10; // r11
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  float v19; // xmm1_4
  float v20; // xmm1_4
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int16 v27; // ax
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // ecx
  int v40; // edx
  char v41; // r9
  __int16 v42; // ax
  int v43; // eax
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _DWORD v54[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v55[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v56; // [rsp+38h] [rbp-18h] BYREF
  int v57; // [rsp+40h] [rbp-10h]
  int v58; // [rsp+44h] [rbp-Ch]
  int v59; // [rsp+88h] [rbp+38h] BYREF
  int v60; // [rsp+90h] [rbp+40h] BYREF

  v8 = 0;
  v10 = a1;
  v13 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v55[0] = v13;
  v14 = *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62);
  if ( v14 != 0 && *(_WORD *)(v13 + 56) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 48) & 0x3000010) != 0 )
    {
      LODWORD(v15) = 0;
      a5 = (float)v14 * a6;
      v16 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v16 <= 40 )
      {
        v17 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v18 = v16 < 0 ? v17 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v17 << v16;
        v15 = (v18 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 8) = v15;
      v19 = (float)(int)v15;
      LODWORD(v15) = 0;
      v20 = v19 / (float)(*(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62));
      a5 = (float)*(__int16 *)(v13 + 60) * v20;
      v21 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v21 <= 40 )
      {
        v22 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v23 = v21 < 0 ? v22 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v22 << v21;
        v15 = (v23 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 12) = v15;
      LODWORD(v15) = 0;
      a5 = (float)(__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56)) * v20;
      v24 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v24 <= 40 )
      {
        v25 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v26 = v24 < 0 ? v25 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v25 << v24;
        v15 = (v26 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v15) = -(int)v15;
      }
      *(_DWORD *)(a2 + 20) = v15;
      v27 = *(_WORD *)(v13 + 64)
          + *(_WORD *)(v13 + 68)
          - *(_WORD *)(v13 + 66)
          - *(_WORD *)(v13 + 62)
          - *(_WORD *)(v13 + 60);
      if ( v27 <= 0 )
        v27 = 0;
      LODWORD(v28) = 0;
      a5 = (float)v27 * v20;
      v29 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v29 <= 40 )
      {
        v30 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v31 = v29 >= 0 ? v30 << v29 : v30 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23));
        v28 = (v31 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v28) = -(int)v28;
      }
      *(_DWORD *)(a2 + 24) = v28;
      LODWORD(v28) = 0;
      a5 = (float)*(__int16 *)(v13 + 76) * v20;
      v32 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v32 <= 40 )
      {
        v33 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v34 = v32 < 0 ? v33 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v33 << v32;
        v28 = (v34 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v28) = -(int)v28;
      }
      *(_DWORD *)(a2 + 28) = v28;
      LODWORD(v28) = 0;
      a5 = (float)*(__int16 *)(v13 + 78) * v20;
      v35 = (unsigned __int8)(SLODWORD(a5) >> 23) - 118;
      if ( v35 <= 40 )
      {
        v36 = LODWORD(a5) & 0x7FFFFFLL | 0x800000;
        v37 = v35 < 0 ? v36 >> (118 - (unsigned __int8)(SLODWORD(a5) >> 23)) : v36 << v35;
        v28 = (v37 + 0x80000000LL) >> 32;
        if ( a5 < 0.0 )
          LODWORD(v28) = -(int)v28;
      }
      *(_DWORD *)(a2 + 32) = v28;
    }
    else
    {
      *(_DWORD *)(a2 + 8) = v14;
      *(_DWORD *)(a2 + 12) = *(__int16 *)(v13 + 60);
      *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v13 + 60) + *(_WORD *)(v13 + 62) - *(_WORD *)(v13 + 56));
      *(_DWORD *)(a2 + 24) = IFIOBJ::fwdExternalLeading((IFIOBJ *)v55);
      *(_DWORD *)(a2 + 28) = *(__int16 *)(v13 + 76);
      *(_DWORD *)(a2 + 32) = *(__int16 *)(v13 + 78);
    }
    v38 = *(_QWORD *)v10;
    v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 80LL) + 68LL);
    v58 = *(_DWORD *)(*(_QWORD *)(v38 + 80) + 312LL) & 1;
    EXFORMOBJ::vInit((EXFORMOBJ *)&v56, v10, 0x402u, 0);
    if ( v56 )
    {
      if ( (*(_DWORD *)(v56 + 32) & 2) == 0 )
      {
        v54[1] = 0;
        v54[0] = 1065353216;
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v56, (struct VECTORFL *)v54, (struct VECTORFL *)v54, 1uLL) )
          return v8;
        EFLOAT::eqLength(&v59, &a5, v54);
        v55[0] = 0x3F80000000000000LL;
        if ( (*(_DWORD *)(v56 + 32) & 2) == 0
          && !EXFORMOBJ::bXform((EXFORMOBJ *)&v56, (struct VECTORFL *)v55, (struct VECTORFL *)v55, 1uLL) )
        {
          return v8;
        }
        EFLOAT::eqLength(&v60, &a5, v55);
        a5 = 0.0;
        bFToL(v48, &a5, 0LL);
        *(float *)(a2 + 8) = a5;
        a5 = 0.0;
        bFToL(v49, &a5, 0LL);
        *(float *)(a2 + 12) = a5;
        a5 = 0.0;
        bFToL(v50, &a5, 0LL);
        *(float *)(a2 + 28) = a5;
        a5 = 0.0;
        bFToL(v51, &a5, 0LL);
        *(float *)(a2 + 32) = a5;
        a5 = 0.0;
        bFToL(v52, &a5, 0LL);
        *(float *)(a2 + 20) = a5;
        a5 = 0.0;
        bFToL(v53, &a5, 0LL);
        *(float *)(a2 + 24) = a5;
      }
      v39 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 44) = a7;
      *(_DWORD *)(a2 + 48) = a8;
      *(_DWORD *)(a2 + 16) = v39;
      *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v13 + 46);
      *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v13 + 52) & 1) != 0);
      *(_BYTE *)(a2 + 61) = *(_BYTE *)(v13 + 52) & 2;
      *(_BYTE *)(a2 + 62) = *(_BYTE *)(v13 + 52) & 0x10;
      *(_WORD *)(a2 + 52) = *(_WORD *)(v13 + 112);
      *(_WORD *)(a2 + 54) = *(_WORD *)(v13 + 114);
      *(_WORD *)(a2 + 56) = *(_WORD *)(v13 + 116);
      *(_WORD *)(a2 + 58) = *(_WORD *)(v13 + 118);
      *(_BYTE *)(a2 + 64) = *(_BYTE *)(v13 + 44);
      v40 = *(_DWORD *)(v13 + 48);
      v41 = *(_BYTE *)(v13 + 45);
      *(_DWORD *)(a2 + 40) = 0;
      *(_DWORD *)(a2 + 68) = 0;
      *(_BYTE *)(a2 + 63) = ((unsigned __int8)v40 >> 1) & 2 | ((v40 & 8) != 0 ? 0xA : 0) | (a4 != 0 ? 8 : 0) | ((v40 & 1) != 0 ? 6 : 0) | ((v40 & 0x401000) == 0) | v41 & 0xF0;
      v42 = *(_WORD *)(v13 + 52);
      if ( (v42 & 0x21) != 0 )
      {
        *(_DWORD *)(a2 + 68) = (v42 & 1) != 0;
        if ( (*(_BYTE *)(v13 + 52) & 0x20) != 0 )
          *(_DWORD *)(a2 + 68) |= 0x20u;
      }
      else
      {
        *(_DWORD *)(a2 + 68) = 64;
      }
      if ( (*(_DWORD *)(v13 + 48) & 0x20000000) != 0 )
        *(_DWORD *)(a2 + 68) |= 0x10000u;
      v43 = *(_DWORD *)(v13 + 48);
      if ( v43 < 0 )
      {
        if ( (v43 & 0x4000) != 0 )
          *(_DWORD *)(a2 + 68) |= 0x80000u;
        if ( (*(_DWORD *)(v13 + 48) & 0x4000000) != 0 )
          *(_DWORD *)(a2 + 68) |= 0x20000u;
        else
          *(_DWORD *)(a2 + 68) |= 0x100000u;
      }
      if ( (*(_DWORD *)(v13 + 48) & 0x40000) != 0 )
      {
        v44 = *(_DWORD *)(a2 + 68) | 0x200000;
        *(_DWORD *)(a2 + 68) = v44;
        if ( (*(_DWORD *)(v13 + 48) & 1) != 0 )
          *(_DWORD *)(a2 + 68) = v44 | 0x40000;
      }
      *(_DWORD *)(a2 + 72) = *(__int16 *)(v13 + 56);
      *(_DWORD *)(a2 + 76) = *(__int16 *)(v13 + 60) + *(__int16 *)(v13 + 62);
      *(_DWORD *)(a2 + 80) = *(__int16 *)(v13 + 76);
      *(_BYTE *)(a2 + 4) = *(_BYTE *)(v13 + 108);
      *(_BYTE *)(a2 + 5) = *(_BYTE *)(v13 + 109);
      *(_BYTE *)(a2 + 6) = *(_BYTE *)(v13 + 110);
      *(_BYTE *)(a2 + 7) = *(_BYTE *)(v13 + 111);
      v45 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
      if ( *(_DWORD *)(v45 + 4) > 4u && (v46 = *(int *)(v45 + 196), (_DWORD)v46) )
      {
        *(_OWORD *)(a2 + 84) = *(_OWORD *)(v46 + v13);
        *(_QWORD *)(a2 + 100) = *(_QWORD *)(v46 + v13 + 16);
      }
      else
      {
        *(_QWORD *)(a2 + 84) = 0LL;
        *(_QWORD *)(a2 + 92) = 0LL;
        *(_QWORD *)(a2 + 100) = 0LL;
      }
      return 1;
    }
  }
  return v8;
}
