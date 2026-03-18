/*
 * XREFs of GrayExpandDIB_CY @ 0x1C0244A60
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00A2E5C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C024216C (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C02465A0 (MappingBGRF.c)
 */

__int64 __fastcall GrayExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // r15
  unsigned __int8 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int8 *v19; // rsi
  char *v20; // r13
  char *v21; // r14
  char *v22; // rbx
  void *FixupScan; // rax
  void *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  int v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // r13d
  __int128 v30; // xmm0
  unsigned __int8 *v31; // xmm1_8
  int v32; // eax
  unsigned __int8 *v33; // r12
  const void *v34; // r14
  unsigned __int8 *v35; // r15
  void *v36; // rax
  signed __int64 v37; // r14
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // r14
  __int64 v42; // xmm0_8
  unsigned __int8 *v43; // r12
  unsigned __int8 *v44; // xmm1_8
  unsigned __int8 *v45; // rbx
  void *v46; // rax
  int v47; // ecx
  unsigned __int64 v48; // rdx
  _WORD *v49; // r8
  int v50; // ecx
  unsigned __int8 *v51; // r10
  int v52; // r11d
  __int64 v53; // r9
  int *v54; // rdx
  int v55; // r10d
  int v56; // edx
  __int64 v57; // rax
  int *v58; // rdx
  int v59; // r10d
  __int64 v60; // rcx
  int v61; // edx
  __int64 v62; // rax
  int *v63; // rdx
  int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rax
  __int16 v69; // ax
  __int64 v70; // rax
  __int64 v71; // rcx
  size_t Size; // [rsp+60h] [rbp-A8h]
  __m256i v74; // [rsp+70h] [rbp-98h]
  __int64 v75; // [rsp+90h] [rbp-78h]
  int v76; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v78; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v79; // [rsp+C0h] [rbp-48h]
  __int64 *v80; // [rsp+C8h] [rbp-40h]
  int v81[34]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v82; // [rsp+160h] [rbp+58h]
  int v83; // [rsp+168h] [rbp+60h]
  unsigned int v84; // [rsp+16Ch] [rbp+64h]
  int v85; // [rsp+174h] [rbp+6Ch]
  void (__fastcall *v86)(int *, unsigned __int64, _WORD *, __int64); // [rsp+198h] [rbp+90h]
  void (__fastcall *v87)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1E8h] [rbp+E0h]
  __int64 v88; // [rsp+1F0h] [rbp+E8h]
  void (__fastcall *v89)(__int64, void *, char *, char *, int); // [rsp+1F8h] [rbp+F0h]
  __int64 v90; // [rsp+208h] [rbp+100h]
  __int64 v91; // [rsp+210h] [rbp+108h]
  __int64 v92; // [rsp+258h] [rbp+150h]
  __int64 v93; // [rsp+260h] [rbp+158h]
  __int64 v94; // [rsp+270h] [rbp+168h]
  __int64 v95; // [rsp+278h] [rbp+170h]
  __int64 v96; // [rsp+280h] [rbp+178h]
  int v97; // [rsp+288h] [rbp+180h]
  int v98; // [rsp+28Ch] [rbp+184h]
  int v99; // [rsp+290h] [rbp+188h]
  __int64 v100; // [rsp+298h] [rbp+190h]
  __int64 v101; // [rsp+2A0h] [rbp+198h]
  __int64 v102; // [rsp+2A8h] [rbp+1A0h]
  int v103; // [rsp+2B0h] [rbp+1A8h]
  void *v104; // [rsp+2F0h] [rbp+1E8h]
  __int64 v105; // [rsp+2F8h] [rbp+1F0h]
  __int64 v106; // [rsp+300h] [rbp+1F8h]
  __int64 v107; // [rsp+308h] [rbp+200h]
  __int64 v108; // [rsp+310h] [rbp+208h]
  _WORD *v109; // [rsp+318h] [rbp+210h]
  _WORD *v110; // [rsp+320h] [rbp+218h]
  int v111; // [rsp+328h] [rbp+220h]

  v1 = 4LL;
  v2 = v81;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(_QWORD *)(v91 + 32);
  v78 = v15;
  v79 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4099);
  v17 = v83 + 6;
  v18 = v17 + v17 + v15 + 4099;
  v74.m256i_i64[0] = v17 + v15 + 4099;
  v19 = (unsigned __int8 *)(v17 + v18);
  v20 = (char *)(v17 + v17 + v18);
  v74.m256i_i64[1] = v18;
  v21 = &v20[v17];
  v74.m256i_i64[2] = v17 + v18;
  v74.m256i_i64[3] = (__int64)v20;
  v75 = (__int64)&v20[v17];
  Size = v83;
  v22 = &v20[v83];
  FixupScan = GetFixupScan((__int64)v81, v104);
  v89(v90, FixupScan, v20, v22, 1);
  if ( (*(_BYTE *)(v91 + 8) & 1) != 0 )
  {
    v24 = GetFixupScan((__int64)v81, v104);
    v89(v90, v24, v21, &v21[Size], 1);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v25 = v91;
  v26 = *(unsigned __int16 *)(v91 + 12);
  v27 = v26 & 0xF;
  v28 = v26 >> 4;
  v29 = v27 + v28;
  if ( v27 + v28 )
  {
    do
    {
      --v29;
      v30 = *(_OWORD *)v74.m256i_i8;
      v74.m256i_i64[1] = v74.m256i_i64[2];
      v31 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v74.m256i_u64[2], 8).m128i_u64[0];
      v19 = v31;
      v32 = v28;
      v74.m256i_i64[2] = (__int64)v31;
      v74.m256i_i64[0] = *((_QWORD *)&v30 + 1);
      --v28;
      v33 = v31;
      v74.m256i_i64[3] = v75;
      v34 = (const void *)v75;
      v75 = (__int64)v16;
      if ( v32 <= 0 )
      {
        v36 = GetFixupScan((__int64)v81, v104);
        v35 = &v16[Size];
        v89(v90, v36, (char *)v16, (char *)&v16[Size], 1);
      }
      else
      {
        memmove(v16, v34, Size);
        v35 = &v16[Size];
      }
      if ( (v81[0] & 0x200) != 0 )
      {
        memmove(v31, v34, Size);
      }
      else
      {
        v37 = (_BYTE *)v34 - v31;
        do
        {
          v38 = (6 * v33[v37] - *v33 - *v16) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          *v33 = v38;
          ++v16;
          ++v33;
        }
        while ( v16 < v35 );
      }
      v16 = (unsigned __int8 *)v30;
    }
    while ( v29 );
    v25 = v91;
    v18 = v74.m256i_i64[1];
    v15 = v78;
  }
  v39 = *(__int64 **)(v25 + 40);
  v40 = *(_DWORD *)(v25 + 16);
  while ( v40 )
  {
    v76 = v40 - 1;
    v41 = *v39;
    v77 = *v39;
    v80 = v39 + 1;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = v74.m256i_i64[0];
      v43 = &v16[Size];
      v44 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v74.m256i_u64[2], 8).m128i_u64[0];
      v19 = v44;
      *(_OWORD *)v74.m256i_i8 = *(_OWORD *)&v74.m256i_u64[1];
      v45 = v44;
      v74.m256i_i64[2] = (__int64)v44;
      v74.m256i_i64[3] = v75;
      v75 = (__int64)v16;
      v46 = GetFixupScan((__int64)v81, v104);
      v89(v90, v46, (char *)v16, (char *)&v16[Size], 1);
      if ( (v81[0] & 0x200) != 0 )
      {
        memmove(v44, (const void *)v74.m256i_i64[3], Size);
      }
      else
      {
        do
        {
          v47 = (6 * v45[v74.m256i_i64[3] - (_QWORD)v44] - *v45 - *v16) >> 2;
          if ( (v47 & 0xFF00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *v45 = v47;
          ++v16;
          ++v45;
        }
        while ( v16 < v43 );
      }
      v18 = v74.m256i_i64[1];
      v16 = (unsigned __int8 *)v42;
      v41 &= 0x3FFFu;
    }
    v48 = v15;
    v49 = v109;
    v50 = -WORD2(v77);
    v51 = v19;
    v52 = -v41;
    v53 = (unsigned int)-WORD1(v77);
    if ( v41 )
    {
      v54 = (int *)(v15 + 2048);
      v55 = 256 - HIWORD(v77);
      do
      {
        v52 += v41;
        LODWORD(v53) = WORD1(v77) + (_DWORD)v53;
        v50 += WORD2(v77);
        *(v54 - 512) = v52;
        v55 += HIWORD(v77);
        *(v54 - 256) = v53;
        *v54 = v50;
        v54[256] = v55;
        ++v54;
      }
      while ( (unsigned __int64)(v54 - 512) < v79 );
      v15 = v78;
      v53 = v18;
      do
      {
        v56 = *(_DWORD *)(v78 + 4LL * v16[v53 - v18])
            + *(_DWORD *)(v78 + 4LL * *(unsigned __int8 *)(v74.m256i_i64[0] - v18 + v53) + 1024)
            + *(_DWORD *)(v78 + 4LL * v19[v53 - v18] + 3072);
        v57 = *(unsigned __int8 *)v53++;
        v48 = (unsigned int)((*(_DWORD *)(v78 + 4 * v57 + 2048) + v56) >> 5);
        *v49 = v48;
        v49 = (_WORD *)((char *)v49 + v111);
      }
      while ( v49 != v110 );
    }
    else if ( WORD1(v77) )
    {
      v58 = (int *)(v15 + 2048);
      v59 = 256 - HIWORD(v77);
      do
      {
        LODWORD(v53) = WORD1(v77) + (_DWORD)v53;
        v50 += WORD2(v77);
        v59 += HIWORD(v77);
        *(v58 - 256) = v53;
        *v58 = v50;
        v58[256] = v59;
        ++v58;
      }
      while ( (unsigned __int64)(v58 - 512) < v15 + 1024 );
      v53 = v74.m256i_i64[0];
      do
      {
        v60 = *(unsigned __int8 *)(v53 + v18 - v74.m256i_i64[0]);
        v61 = *(_DWORD *)(v15 + 4LL * v19[v53 - v74.m256i_i64[0]] + 3072);
        v62 = *(unsigned __int8 *)v53++;
        v48 = (unsigned int)((*(_DWORD *)(v15 + 4 * v62 + 1024) + *(_DWORD *)(v15 + 4 * v60 + 2048) + v61) >> 5);
        *v49 = v48;
        v49 = (_WORD *)((char *)v49 + v111);
      }
      while ( v49 != v110 );
    }
    else if ( WORD2(v77) )
    {
      v63 = (int *)(v15 + 3072);
      v64 = 256 - HIWORD(v77);
      do
      {
        v50 += WORD2(v77);
        v64 += HIWORD(v77);
        *(v63 - 256) = v50;
        *v63++ = v64;
      }
      while ( (unsigned __int64)(v63 - 768) < v15 + 1024 );
      v53 = v18 - (_QWORD)v19;
      do
      {
        v65 = v51[v53];
        v66 = *v51++;
        v48 = (unsigned int)((*(_DWORD *)(v15 + 4 * v66 + 3072) + *(_DWORD *)(v15 + 4 * v65 + 2048)) >> 5);
        *v49 = v48;
        v49 = (_WORD *)((char *)v49 + v111);
      }
      while ( v49 != v110 );
    }
    else
    {
      v67 = 256 - HIWORD(v77);
      do
      {
        v67 += HIWORD(v77);
        *(_DWORD *)(v48 + 3072) = v67;
        v48 += 4LL;
      }
      while ( v48 < v15 + 1024 );
      do
      {
        v68 = *v51++;
        *v49 = *(int *)(v15 + 4 * v68 + 3072) >> 5;
        v49 = (_WORD *)((char *)v49 + v111);
      }
      while ( v49 != v110 );
    }
    v69 = v81[0];
    if ( SLOBYTE(v81[0]) < 0 )
    {
      v86(v81, v48, v49, v53);
      v69 = v81[0];
    }
    if ( (v69 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v81);
      LOBYTE(v69) = v81[0];
    }
    if ( (v69 & 0x10) != 0 )
    {
      MappingBGRF(v105, v106, v93, v100);
      v70 = v103 + v100;
      if ( v70 == v101 )
        v70 = v102;
      v100 = v70;
    }
    v87(v81, v107, v108, v82, v92, v94, v94 + v98, v99, v88);
    v39 = v80;
    v71 = v97 + v94;
    if ( v71 == v95 )
      v71 = v96;
    v82 += v85;
    v40 = v76;
    v94 = v71;
  }
  return v84;
}
