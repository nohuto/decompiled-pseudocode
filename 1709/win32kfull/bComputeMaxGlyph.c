/*
 * XREFs of bComputeMaxGlyph @ 0x1C023168C
 * Callers:
 *     bNewXform @ 0x1C02320A8 (bNewXform.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     CJGD @ 0x1C022DA74 (CJGD.c)
 *     fxPtSize @ 0x1C02327D0 (fxPtSize.c)
 *     vAdjustGrayStateAndBoldOptions__FONTCONTEXT @ 0x1C0232C10 (vAdjustGrayStateAndBoldOptions__FONTCONTEXT.c)
 *     vFindHdmxTable @ 0x1C0232EDC (vFindHdmxTable.c)
 *     vSetClearTypeState__FONTCONTEXT @ 0x1C0233000 (vSetClearTypeState__FONTCONTEXT.c)
 *     vSetGrayState__FONTCONTEXT @ 0x1C02331A4 (vSetGrayState__FONTCONTEXT.c)
 *     vQuantizeXform @ 0x1C0233DF8 (vQuantizeXform.c)
 *     bFDXform @ 0x1C023A250 (bFDXform.c)
 *     bXformUnitVector @ 0x1C023A380 (bXformUnitVector.c)
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall bComputeMaxGlyph(__int64 a1)
{
  __int64 v1; // r10
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int16 v9; // ax
  unsigned int v10; // r14d
  __int32 v11; // ebx
  __int32 v12; // r15d
  unsigned int v13; // r11d
  __int64 v14; // r8
  char v15; // al
  int v16; // r13d
  int fixed; // r14d
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r8
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // r12d
  int v27; // eax
  unsigned int v28; // r11d
  __int64 v29; // r8
  int v30; // eax
  int v31; // r10d
  int v32; // r11d
  int v33; // ecx
  unsigned int v34; // ecx
  int v35; // r10d
  int v36; // r15d
  int v37; // eax
  int v38; // r15d
  __m128i v39; // xmm0
  int v40; // ecx
  int v41; // eax
  int v42; // esi
  int v43; // r14d
  int v44; // r13d
  int *v45; // r9
  int v46; // ecx
  int v47; // edx
  int v48; // r8d
  __int64 v49; // r10
  int v50; // eax
  int v51; // r13d
  int v52; // ebx
  float v53; // xmm1_4
  char v54; // r8
  float v55; // xmm3_4
  float v56; // xmm2_4
  int v57; // r8d
  int v58; // ecx
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm1_4
  int v62; // r8d
  int v63; // eax
  __int64 v64; // rdx
  int v65; // r9d
  int v66; // eax
  unsigned int v67; // r15d
  __int64 v68; // rdx
  int v69; // eax
  int v70; // r8d
  int v72; // [rsp+38h] [rbp-29h] BYREF
  int v73; // [rsp+3Ch] [rbp-25h] BYREF
  int v74; // [rsp+40h] [rbp-21h]
  int v75; // [rsp+44h] [rbp-1Dh]
  int v76; // [rsp+48h] [rbp-19h]
  __m128i si128; // [rsp+50h] [rbp-11h] BYREF
  __int32 v78; // [rsp+60h] [rbp-1h]
  int v79; // [rsp+64h] [rbp+3h]
  __int32 v80; // [rsp+68h] [rbp+7h]
  int v81; // [rsp+6Ch] [rbp+Bh]
  int v82; // [rsp+70h] [rbp+Fh] BYREF
  int v83; // [rsp+74h] [rbp+13h]
  char v84; // [rsp+7Ch] [rbp+1Bh] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 192);
  v4 = *(_QWORD *)(v1 + 64);
  v5 = *(unsigned int *)(v3 + 64);
  v6 = (_WORD *)(v4 + *(unsigned int *)(v3 + 16));
  if ( (_DWORD)v5 )
    v7 = v4 + v5;
  else
    v7 = 0LL;
  if ( v7 && (*(_DWORD *)(a1 + 116) & 3) != 0 )
  {
    v8 = (__int16)__ROR2__(*(_WORD *)(v7 + 76), 8);
    v9 = *(_WORD *)(v7 + 74);
  }
  else
  {
    v9 = v6[21];
    v8 = -(__int16)__ROR2__(v6[19], 8);
  }
  v10 = -(__int16)__ROR2__(v9, 8);
  if ( (int)v10 >= (int)v8 )
    return 0LL;
  v11 = (__int16)__ROR2__(v6[18], 8);
  v12 = (__int16)__ROR2__(v6[20], 8);
  v72 = *(_DWORD *)(a1 + 40);
  if ( (v72 & 0x4000) != 0 )
  {
    v11 -= FixMul(v8, 22272LL, v4);
    v12 -= FixMul(v10, v13, v14);
  }
  if ( v11 >= v12 )
    return 0LL;
  v15 = *(_DWORD *)(a1 + 116) & 9;
  *(_QWORD *)(a1 + 124) = 0LL;
  *(_DWORD *)(a1 + 404) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( v15 == 1 )
  {
    v16 = *(_DWORD *)(a1 + 96);
    v72 = *(_DWORD *)(a1 + 80);
    fixed = FixMul((unsigned int)v16, v10, v4);
    v19 = FixMul((unsigned int)v16, v8, v18);
    v21 = v19;
    if ( v16 <= 0 )
    {
      *(_DWORD *)(a1 + 144) = fixed;
      v22 = -v19;
      *(_DWORD *)(a1 + 160) = v21;
      *(_DWORD *)(a1 + 164) = fixed;
    }
    else
    {
      vQuantizeXform(a1);
      if ( (*(_DWORD *)(a1 + 116) & 4) == 0 )
      {
        *(_DWORD *)(a1 + 160) = fixed;
        *(_DWORD *)(a1 + 164) = v21;
      }
      *(_DWORD *)(a1 + 144) = -*(_DWORD *)(a1 + 160);
      v22 = *(_DWORD *)(a1 + 164);
    }
    *(_DWORD *)(a1 + 148) = v22;
    if ( !*(_DWORD *)(a1 + 124) )
    {
      v23 = FixMul((unsigned int)v16, (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 408LL), v20);
      *(_DWORD *)(a1 + 124) = v23;
      if ( v23 < 0 )
        *(_DWORD *)(a1 + 124) = -v23;
    }
    v24 = CompDiv(*(unsigned int *)(a1 + 48), 72LL * (int)(*(_DWORD *)(a1 + 124) << 16));
    v26 = *(_DWORD *)(a1 + 164) - *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 128) = v24;
    v27 = *(_DWORD *)(a1 + 96);
    if ( *(_DWORD *)(a1 + 80) == v27 && v27 > 0 )
    {
      *(_DWORD *)(a1 + 116) |= 0x10u;
      vFindHdmxTable(a1);
    }
    FixMul((unsigned int)(16 * v11), (unsigned int)v72, v25);
    v30 = FixMul((unsigned int)(16 * v12), v28, v29);
    if ( v32 < 0 )
    {
      v33 = v31;
      v31 = v30;
      v30 = v33;
    }
    v34 = -1;
    v35 = (v31 >> 4) - 2;
    *(_DWORD *)(a1 + 220) = 0;
    *(_DWORD *)(a1 + 152) = v35;
    v36 = ((v30 + 15) >> 4) + 1;
    *(_DWORD *)(a1 + 256) = 0;
    *(_DWORD *)(a1 + 156) = v36;
    v37 = 1;
    v38 = v36 - v35;
    *(_DWORD *)(a1 + 200) = 0;
    if ( v32 <= 0 )
      v37 = -1;
    if ( v16 <= 0 )
      v34 = 1;
    *(float *)(a1 + 216) = (float)v37;
    v39 = _mm_cvtsi32_si128(v34);
    v40 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 260) = _mm_cvtepi32_ps(v39).m128_u32[0];
    if ( v40 <= 0 || *(int *)(a1 + 148) <= 0 )
    {
      if ( *(int *)(a1 + 96) <= 0 )
        *(_DWORD *)(a1 + 204) = (v40 - *(_DWORD *)(a1 + 148)) >> 1;
      else
        *(_DWORD *)(a1 + 204) = (*(_DWORD *)(a1 + 148) - v40) >> 1;
    }
    else
    {
      *(_DWORD *)(a1 + 204) = 0;
    }
  }
  else
  {
    v41 = *(unsigned __int16 *)(v1 + 308) >> 6;
    v42 = v41 + v8;
    si128.m128i_i32[0] = v11;
    v43 = v10 - v41;
    v79 = v42;
    si128.m128i_i32[1] = v43;
    v81 = v42;
    si128.m128i_i64[1] = __PAIR64__(v43, v12);
    v78 = v11;
    v80 = v12;
    if ( !(unsigned int)bFDXform(a1 + 56, &v82, &si128) )
      return 0LL;
    v44 = v82;
    v45 = (int *)&v84;
    v46 = v83;
    v47 = v82;
    v48 = v83;
    v49 = 3LL;
    do
    {
      v50 = *(v45 - 1);
      if ( v50 < v44 )
        v44 = *(v45 - 1);
      if ( v50 > v47 )
        v47 = *(v45 - 1);
      if ( *v45 < v46 )
        v46 = *v45;
      if ( *v45 > v48 )
        v48 = *v45;
      v45 += 2;
      --v49;
    }
    while ( v49 );
    v75 = v46 >> 4;
    v26 = ((v48 + 15) >> 4) - (v46 >> 4);
    v74 = (v47 + 15) >> 4;
    v51 = v44 >> 4;
    v76 = (v48 + 15) >> 4;
    v38 = v74 - v51;
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff000000000000000000000001);
    v52 = bXformUnitVector(
            (unsigned int)&si128,
            (int)a1 + 56,
            (int)a1 + 208,
            (int)a1 + 216,
            (a1 + 232) & -(__int64)((v72 & 0x2000) != 0),
            a1 + 224);
    if ( ((unsigned int)bXformUnitVector(
                          (unsigned int)&si128.m128i_u32[2],
                          (int)a1 + 56,
                          (int)a1 + 248,
                          (int)a1 + 256,
                          (a1 + 272) & -(__int64)((*(_DWORD *)(a1 + 40) & 0x2000) != 0),
                          a1 + 264) & v52) == 0 )
      return 0LL;
    v53 = *(float *)(a1 + 264);
    v73 = 0;
    bFToL((float)v43 * v53, &v73, 0);
    v72 = 0;
    bFToL((float)v42 * v53, &v72, v54);
    v55 = *(float *)(a1 + 256);
    v56 = *(float *)(a1 + 260);
    v57 = (15 - v73) >> 4;
    v58 = (v72 + 15) >> 4;
    *(_DWORD *)(a1 + 144) = v57;
    *(_DWORD *)(a1 + 148) = v58;
    *(_DWORD *)(a1 + 288) = (int)(float)(v55 * (float)(16 * v57));
    *(_DWORD *)(a1 + 292) = (int)(float)(v56 * (float)(16 * v57));
    v59 = (float)(-16 * v58);
    *(_DWORD *)(a1 + 296) = (int)(float)(v59 * v55);
    *(_DWORD *)(a1 + 300) = (int)(float)(v59 * v56);
    if ( v43 >= 0 || v42 <= 0 || v57 + v58 < 3 )
    {
      v72 = 0;
      v60 = (float)((1 - v42 - v43) >> 1);
      bFToL(v60 * *(float *)(a1 + 248), &v72, 0);
      v61 = v60 * *(float *)(a1 + 252);
      v62 = (v72 >> 3) + 1;
      v72 = 0;
      *(_DWORD *)(a1 + 200) = v62 >> 1;
      bFToL(v61, &v72, 0);
      *(_DWORD *)(a1 + 204) = ((v72 >> 3) + 1) >> 1;
    }
    else
    {
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    *(_DWORD *)(a1 + 156) = v74;
    *(_DWORD *)(a1 + 160) = v75;
    *(_DWORD *)(a1 + 164) = v76;
    *(_DWORD *)(a1 + 152) = v51;
    v63 = fxPtSize(a1);
    v64 = *(int *)(a1 + 48);
    *(_DWORD *)(a1 + 128) = v63;
    *(_DWORD *)(a1 + 124) = ((unsigned int)CompDiv(72LL, v63 * v64) + 0x8000) >> 16;
  }
  v65 = *(_DWORD *)(a1 + 40);
  if ( (v65 & 0x2000) != 0 )
    *(_WORD *)(a1 + 400) = (2 * *(_DWORD *)(a1 + 124) - 1) / 100 + 1;
  else
    *(_WORD *)(a1 + 400) = 0;
  if ( !v38 || !v26 )
    return 0LL;
  if ( (v65 & 0x2000) != 0 )
  {
    v66 = *(unsigned __int16 *)(a1 + 400);
    v38 += v66;
    v26 += v66;
  }
  v67 = (v38 + 7) & 0xFFFFFFF8;
  *(_DWORD *)(a1 + 168) = v67;
  v68 = (unsigned int)((int)((v67 + 31) & 0xFFFFFFE0) >> 31);
  LODWORD(v68) = (int)((v67 + 31) & 0xFFFFFFE0) % 8;
  if ( v26 * (unsigned __int64)(unsigned int)((int)((v67 + 31) & 0xFFFFFFE0) / 8) > 0xFFFFFFFF )
    return 0LL;
  if ( (v65 & 0x10000000) != 0 )
    vSetClearTypeState__FONTCONTEXT(a1, v68);
  else
    vSetGrayState__FONTCONTEXT(a1, v68);
  vAdjustGrayStateAndBoldOptions__FONTCONTEXT(a1);
  v69 = CJGD(v67, v26, a1);
  v70 = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a1 + 172) = v69;
  if ( (v70 & 0x11) == 17 && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x40) != 0 )
    *(_DWORD *)(a1 + 116) = v70 | 0x40;
  return 1LL;
}
