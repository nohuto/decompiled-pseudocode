/*
 * XREFs of lQueryDEVICEMETRICS @ 0x1C022F1B0
 * Callers:
 *     ttfdQueryFontData @ 0x1C022FD64 (ttfdQueryFontData.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     CJGD @ 0x1C022DA74 (CJGD.c)
 *     bFDXform @ 0x1C023A250 (bFDXform.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall lQueryDEVICEMETRICS(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // esi
  __int64 v10; // r8
  __int16 *v11; // rax
  int v12; // r14d
  int v13; // r15d
  int v14; // r11d
  int v15; // r12d
  __int64 v16; // rcx
  __int16 v17; // r10
  __int64 v18; // r8
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // r9d
  int v24; // r8d
  int v25; // r8d
  int v26; // r9d
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  float v32; // xmm0_4
  float v33; // xmm0_4
  int v34; // r8d
  float v35; // xmm0_4
  int v36; // r8d
  __int64 v37; // r9
  int v38; // r8d
  int v39; // r10d
  int v40; // eax
  unsigned int v41; // edx
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // eax
  float v51; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v52[8]; // [rsp+28h] [rbp-48h] BYREF
  _DWORD v53[8]; // [rsp+48h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(v3 + 176);
  v7 = *(_QWORD *)(v3 + 64);
  v8 = v7 + v6;
  if ( !(_DWORD)v6 )
    v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 80);
  if ( v9 < 0 )
    v9 = -v9;
  v10 = *(unsigned int *)(*(_QWORD *)(a1 + 192) + 16LL);
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a3 + 12) = *(_QWORD *)(a1 + 256);
  *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 168);
  *(_DWORD *)(a3 + 24) = 16 * *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a3 + 28) = 16 * *(_DWORD *)(a1 + 148);
  v11 = *(__int16 **)(a1 + 8);
  v12 = v11[228];
  v13 = v11[229];
  v14 = v11[226];
  v15 = v11[227];
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 20) = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x40) != 0 )
  {
    *(_QWORD *)(a3 + 108) = 0LL;
  }
  else
  {
    *(_DWORD *)(a3 + 108) = *(__int16 *)(*(_QWORD *)(a1 + 8) + 328LL);
    *(_DWORD *)(a3 + 112) = *(__int16 *)(*(_QWORD *)(a1 + 8) + 330LL);
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    if ( v8 && (*(_DWORD *)(a1 + 116) & 3) != 0 )
      v16 = (unsigned int)(__int16)__ROR2__(*(_WORD *)(v8 + 76), 8);
    else
      v16 = (unsigned int)-(__int16)__ROR2__(*(_WORD *)(v10 + v7 + 38), 8);
    *(_DWORD *)(a3 + 108) -= FixMul(v16, 22272LL, v10);
    *(_DWORD *)(a3 + 112) += FixMul((unsigned int)-v17, 22272LL, v18);
  }
  *(_DWORD *)(a3 + 116) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 324LL);
  if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
  {
    v19 = *(_DWORD *)(a1 + 96);
    v20 = (((v14 * v19) >> 15) + 1) >> 1;
    if ( !v20 )
    {
      v20 = 1;
      if ( v19 <= 0 )
        v20 = -1;
    }
    *(_DWORD *)(a3 + 52) = v20;
    *(_DWORD *)(a3 + 48) = 0;
    v21 = (((v12 * v19) >> 15) + 1) >> 1;
    if ( !v21 )
    {
      v21 = 1;
      if ( v19 <= 0 )
        v21 = -1;
    }
    *(_DWORD *)(a3 + 60) = v21;
    *(_DWORD *)(a3 + 56) = 0;
    *(_DWORD *)(a3 + 32) = 0;
    *(_DWORD *)(a3 + 40) = 0;
    *(_DWORD *)(a3 + 44) = -((((v13 * v19) >> 15) + 1) >> 1);
    v22 = v9 * *(_DWORD *)(a3 + 108);
    *(_DWORD *)(a3 + 36) = -((((v15 * v19) >> 15) + 1) >> 1);
    *(_DWORD *)(a3 + 108) = ((v22 >> 15) + 1) >> 1;
    *(_DWORD *)(a3 + 112) = (((v9 * *(_DWORD *)(a3 + 112)) >> 15) + 1) >> 1;
    *(_DWORD *)(a3 + 116) = (((v9 * *(_DWORD *)(a3 + 116)) >> 15) + 1) >> 1;
  }
  else
  {
    *(_DWORD *)(a3 + 20) = 0;
    v52[3] = -v13;
    v52[7] = -v15;
    v52[0] = 0;
    v52[1] = v12;
    v52[2] = 0;
    v52[4] = 0;
    v52[5] = v14;
    v52[6] = 0;
    bFDXform(a1 + 56, v53, v52);
    v23 = v53[4];
    v24 = (v53[0] >> 3) + 1;
    *(_DWORD *)(a3 + 60) = ((v53[1] >> 3) + 1) >> 1;
    *(_DWORD *)(a3 + 40) = ((v53[2] >> 3) + 1) >> 1;
    v25 = v24 >> 1;
    *(_DWORD *)(a3 + 44) = ((v53[3] >> 3) + 1) >> 1;
    v26 = ((v23 >> 3) + 1) >> 1;
    *(_DWORD *)(a3 + 52) = ((v53[5] >> 3) + 1) >> 1;
    v27 = (v53[6] >> 3) + 1;
    *(_DWORD *)(a3 + 56) = v25;
    *(_DWORD *)(a3 + 32) = v27 >> 1;
    v28 = (v53[7] >> 3) + 1;
    *(_DWORD *)(a3 + 48) = v26;
    *(_DWORD *)(a3 + 36) = v28 >> 1;
    if ( (*(_DWORD *)(a1 + 116) & 2) != 0 && (!v25 || !v26) )
    {
      v29 = *(_DWORD *)(a1 + 92);
      v30 = -1;
      if ( !v25 )
      {
        v31 = -1;
        if ( v29 <= 0 )
          v31 = 1;
        *(_DWORD *)(a3 + 56) = v31;
      }
      if ( !v26 )
      {
        if ( v29 <= 0 )
          v30 = 1;
        *(_DWORD *)(a3 + 48) = v30;
      }
    }
    v32 = (float)*(int *)(a3 + 108);
    v51 = 0.0;
    bFToL(v32 * *(float *)(a1 + 224), (int *)&v51, 0);
    v33 = (float)*(int *)(a3 + 112);
    v34 = (SLODWORD(v51) >> 3) + 1;
    v51 = 0.0;
    *(_DWORD *)(a3 + 108) = v34 >> 1;
    bFToL(v33 * *(float *)(a1 + 224), (int *)&v51, 0);
    v35 = (float)*(int *)(a3 + 116);
    v36 = (SLODWORD(v51) >> 3) + 1;
    v51 = 0.0;
    *(_DWORD *)(a3 + 112) = v36 >> 1;
    bFToL(v35 * *(float *)(a1 + 224), (int *)&v51, 0);
    *(_DWORD *)(a3 + 116) = ((SLODWORD(v51) >> 3) + 1) >> 1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x21) != 0 )
  {
    v51 = (float)*(int *)(a1 + 80) * 0.000015258789;
    *(float *)(a3 + 76) = v51;
    v51 = (float)*(int *)(a1 + 96) * 0.000015258789;
    *(float *)(a3 + 88) = v51;
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v51 = (float)-*(_DWORD *)(a1 + 84) * 0.000015258789;
      *(float *)(a3 + 80) = v51;
      v51 = (float)-*(_DWORD *)(a1 + 92) * 0.000015258789;
      *(float *)(a3 + 84) = v51;
    }
  }
  v37 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v37 + 300) & 2) != 0 )
  {
    v38 = 0;
    v39 = *(_DWORD *)(a1 + 124);
    if ( *(_DWORD *)(a1 + 144) + *(_DWORD *)(a1 + 148) - v39 >= 0 )
      v38 = *(_DWORD *)(a1 + 144) + *(_DWORD *)(a1 + 148) - v39;
    v40 = *(_BYTE *)(v37 + 397) & 0xF0;
    if ( v40 == 16 )
    {
      v45 = (*(_DWORD *)(a1 + 48) + 18) / 32;
    }
    else
    {
      if ( v40 == 32 )
      {
        v42 = *(_DWORD *)(a1 + 48);
        if ( (int)(((*(int *)(a1 + 128) >> 15) + 1) & 0xFFFFFFFE) >= 28 )
        {
          v43 = v42 + 9;
          v44 = 954437177;
        }
        else
        {
          v43 = v42 + 12;
          v44 = 715827883;
        }
        v41 = (int)((unsigned __int64)(v43 * (__int64)v44) >> 32) >> 2;
      }
      else
      {
        v41 = (int)((unsigned __int64)(53876069772LL * v39) >> 32) >> 6;
      }
      v45 = (v41 >> 31) + v41;
    }
    v46 = 16 * (v45 - v38);
    if ( v46 < 0 )
      v46 = 0;
    *(_DWORD *)(a3 + 92) = v46;
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
  {
    v47 = *(__int16 *)(*(_QWORD *)(a1 + 8) + 430LL);
    if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
    {
      *(_DWORD *)(a3 + 100) = ((v9 * v47) >> 12) + 16;
      *(_DWORD *)(a3 + 104) = ((v9 * *(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL)) >> 12) + 16;
    }
    else
    {
      v51 = 0.0;
      bFToL((float)v47 * *(float *)(a1 + 224), (int *)&v51, 0);
      v48 = LODWORD(v51) + 16;
      v51 = 0.0;
      *(_DWORD *)(a3 + 100) = v48;
      bFToL((float)*(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL) * *(float *)(a1 + 224), (int *)&v51, 0);
      *(_DWORD *)(a3 + 104) = LODWORD(v51) + 16;
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    *(_DWORD *)(a3 + 68) = 1;
    v49 = CJGD(1u, 1, a1);
  }
  else
  {
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 164) - *(_DWORD *)(a1 + 160);
    v49 = *(_DWORD *)(a1 + 172);
  }
  *(_DWORD *)(a3 + 72) = v49;
  return 124LL;
}
