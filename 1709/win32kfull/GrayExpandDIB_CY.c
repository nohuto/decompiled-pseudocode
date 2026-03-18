/*
 * XREFs of GrayExpandDIB_CY @ 0x1C0246470
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C007A57C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0243B3C (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0247FD0 (MappingBGRF.c)
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
  unsigned __int64 v15; // r13
  unsigned __int8 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int8 *v19; // rsi
  char *v20; // r12
  char *v21; // r14
  char *v22; // rbx
  void *FixupScan; // rax
  void *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  int v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // r12d
  __int128 v30; // xmm0
  unsigned __int8 *v31; // xmm1_8
  int v32; // eax
  unsigned __int8 *v33; // r15
  const void *v34; // r14
  unsigned __int8 *v35; // r13
  void *v36; // rax
  signed __int64 v37; // r14
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // r14
  __int64 v42; // xmm0_8
  unsigned __int8 *v43; // r15
  unsigned __int8 *v44; // xmm1_8
  unsigned __int8 *v45; // rbx
  void *v46; // rax
  int v47; // ecx
  unsigned __int64 v48; // rdx
  _WORD *v49; // r9
  int v50; // ecx
  unsigned __int8 *v51; // r10
  int v52; // r11d
  int v53; // r8d
  int *v54; // rdx
  int v55; // r10d
  unsigned __int8 *v56; // r10
  int v57; // r8d
  __int64 v58; // rax
  int *v59; // rdx
  int v60; // r10d
  unsigned __int8 *v61; // r10
  int v62; // r8d
  int v63; // eax
  int *v64; // rdx
  int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  int v69; // eax
  __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v74; // [rsp+58h] [rbp-B0h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  __m256i v76; // [rsp+78h] [rbp-90h]
  __int64 v77; // [rsp+98h] [rbp-70h]
  int v78; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v79; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v80; // [rsp+B8h] [rbp-50h]
  __int64 *v81; // [rsp+C0h] [rbp-48h]
  int v82[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v83; // [rsp+150h] [rbp+48h]
  int v84; // [rsp+158h] [rbp+50h]
  unsigned int v85; // [rsp+15Ch] [rbp+54h]
  int v86; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v87)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v88)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v89; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v90)(__int64, void *, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v91; // [rsp+1F8h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+F8h]
  __int64 v93; // [rsp+248h] [rbp+140h]
  __int64 v94; // [rsp+250h] [rbp+148h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  __int64 v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  int v98; // [rsp+278h] [rbp+170h]
  int v99; // [rsp+27Ch] [rbp+174h]
  int v100; // [rsp+280h] [rbp+178h]
  __int64 v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  __int64 v103; // [rsp+298h] [rbp+190h]
  int v104; // [rsp+2A0h] [rbp+198h]
  void *v105; // [rsp+2E0h] [rbp+1D8h]
  __int64 v106; // [rsp+2E8h] [rbp+1E0h]
  __int64 v107; // [rsp+2F0h] [rbp+1E8h]
  __int64 v108; // [rsp+2F8h] [rbp+1F0h]
  __int64 v109; // [rsp+300h] [rbp+1F8h]
  _WORD *v110; // [rsp+308h] [rbp+200h]
  _WORD *v111; // [rsp+310h] [rbp+208h]
  int v112; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v82;
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
  v15 = *(_QWORD *)(v92 + 32);
  v79 = v15;
  v80 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4099);
  v17 = v84 + 6;
  v18 = v17 + v17 + v15 + 4099;
  v76.m256i_i64[0] = v17 + v15 + 4099;
  v19 = (unsigned __int8 *)(v17 + v18);
  v20 = (char *)(v17 + v17 + v18);
  v76.m256i_i64[1] = v18;
  v21 = &v20[v17];
  v76.m256i_i64[2] = v17 + v18;
  v76.m256i_i64[3] = (__int64)v20;
  v77 = (__int64)&v20[v17];
  Size = v84;
  v22 = &v20[v84];
  FixupScan = GetFixupScan((__int64)v82, v105);
  v90(v91, FixupScan, v20, v22, 1);
  if ( (*(_BYTE *)(v92 + 8) & 1) != 0 )
  {
    v24 = GetFixupScan((__int64)v82, v105);
    v90(v91, v24, v21, &v21[Size], 1);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v25 = v92;
  v26 = *(unsigned __int16 *)(v92 + 12);
  v27 = v26 & 0xF;
  v28 = v26 >> 4;
  v29 = v27 + v28;
  if ( v27 + v28 )
  {
    do
    {
      --v29;
      v30 = *(_OWORD *)v76.m256i_i8;
      v76.m256i_i64[1] = v76.m256i_i64[2];
      v31 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v76.m256i_u64[2], 8).m128i_u64[0];
      v19 = v31;
      v32 = v28;
      v76.m256i_i64[2] = (__int64)v31;
      v76.m256i_i64[0] = *((_QWORD *)&v30 + 1);
      --v28;
      v33 = v31;
      v76.m256i_i64[3] = v77;
      v34 = (const void *)v77;
      v77 = (__int64)v16;
      if ( v32 <= 0 )
      {
        v36 = GetFixupScan((__int64)v82, v105);
        v35 = &v16[Size];
        v90(v91, v36, (char *)v16, (char *)&v16[Size], 1);
      }
      else
      {
        memmove(v16, v34, Size);
        v35 = &v16[Size];
      }
      if ( (v82[0] & 0x200) != 0 )
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
    v25 = v92;
    v18 = v76.m256i_i64[1];
    v15 = v79;
  }
  v39 = *(__int64 **)(v25 + 40);
  v40 = *(_DWORD *)(v25 + 16);
  while ( v40 )
  {
    v78 = v40 - 1;
    v41 = *v39;
    v74 = *v39;
    v81 = v39 + 1;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = v76.m256i_i64[0];
      v43 = &v16[Size];
      v44 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v76.m256i_u64[2], 8).m128i_u64[0];
      v19 = v44;
      *(_OWORD *)v76.m256i_i8 = *(_OWORD *)&v76.m256i_u64[1];
      v45 = v44;
      v76.m256i_i64[2] = (__int64)v44;
      v76.m256i_i64[3] = v77;
      v77 = (__int64)v16;
      v46 = GetFixupScan((__int64)v82, v105);
      v90(v91, v46, (char *)v16, (char *)&v16[Size], 1);
      if ( (v82[0] & 0x200) != 0 )
      {
        memmove(v44, (const void *)v76.m256i_i64[3], Size);
      }
      else
      {
        do
        {
          v47 = (6 * v45[v76.m256i_i64[3] - (_QWORD)v44] - *v45 - *v16) >> 2;
          if ( (v47 & 0xFF00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *v45 = v47;
          ++v16;
          ++v45;
        }
        while ( v16 < v43 );
      }
      v18 = v76.m256i_i64[1];
      v16 = (unsigned __int8 *)v42;
      v41 &= 0x3FFFu;
    }
    v48 = v15;
    v49 = v110;
    v50 = -WORD2(v74);
    v51 = v19;
    v52 = -v41;
    v53 = -WORD1(v74);
    if ( v41 )
    {
      v54 = (int *)(v15 + 2048);
      v55 = 256 - HIWORD(v74);
      do
      {
        v52 += v41;
        v53 += WORD1(v74);
        v50 += WORD2(v74);
        *(v54 - 512) = v52;
        v55 += HIWORD(v74);
        *(v54 - 256) = v53;
        *v54 = v50;
        v54[256] = v55;
        ++v54;
      }
      while ( (unsigned __int64)(v54 - 512) < v80 );
      v15 = v79;
      v56 = (unsigned __int8 *)v18;
      do
      {
        v57 = *(_DWORD *)(v79 + 4LL * ((unsigned int)*v56 + 512))
            + *(_DWORD *)(v79 + 4LL * ((unsigned int)v56[v76.m256i_i64[0] - v18] + 256))
            + *(_DWORD *)(v79 + 4LL * ((unsigned int)v19[(_QWORD)v56 - v18] + 768));
        v58 = v16[(_QWORD)v56++ - v18];
        *v49 = (*(_DWORD *)(v79 + 4 * v58) + v57) >> 5;
        v49 = (_WORD *)((char *)v49 + v112);
      }
      while ( v49 != v111 );
    }
    else if ( WORD1(v74) )
    {
      v59 = (int *)(v15 + 2048);
      v60 = 256 - HIWORD(v74);
      do
      {
        v53 += WORD1(v74);
        v50 += WORD2(v74);
        v60 += HIWORD(v74);
        *(v59 - 256) = v53;
        *v59 = v50;
        v59[256] = v60;
        ++v59;
      }
      while ( (unsigned __int64)(v59 - 512) < v15 + 1024 );
      v61 = (unsigned __int8 *)v76.m256i_i64[0];
      do
      {
        v62 = *(_DWORD *)(v15 + 4LL * ((unsigned int)v61[v18 - v76.m256i_i64[0]] + 512))
            + *(_DWORD *)(v15 + 4LL * ((unsigned int)v19[(_QWORD)v61 - v76.m256i_i64[0]] + 768));
        v63 = *v61++;
        *v49 = (*(_DWORD *)(v15 + 4LL * (unsigned int)(v63 + 256)) + v62) >> 5;
        v49 = (_WORD *)((char *)v49 + v112);
      }
      while ( v49 != v111 );
    }
    else if ( WORD2(v74) )
    {
      v64 = (int *)(v15 + 3072);
      v65 = 256 - HIWORD(v74);
      do
      {
        v50 += WORD2(v74);
        v65 += HIWORD(v74);
        *(v64 - 256) = v50;
        *v64++ = v65;
      }
      while ( (unsigned __int64)(v64 - 768) < v15 + 1024 );
      do
      {
        v66 = (unsigned int)v51[v18 - (_QWORD)v19] + 512;
        v67 = (unsigned int)*v51++ + 768;
        *v49 = (*(_DWORD *)(v15 + 4 * v67) + *(_DWORD *)(v15 + 4 * v66)) >> 5;
        v49 = (_WORD *)((char *)v49 + v112);
      }
      while ( v49 != v111 );
    }
    else
    {
      v68 = 256 - HIWORD(v74);
      do
      {
        v68 += HIWORD(v74);
        *(_DWORD *)(v48 + 3072) = v68;
        v48 += 4LL;
      }
      while ( v48 < v15 + 1024 );
      do
      {
        v69 = *v51++;
        *v49 = *(int *)(v15 + 4LL * (unsigned int)(v69 + 768)) >> 5;
        v49 = (_WORD *)((char *)v49 + v112);
      }
      while ( v49 != v111 );
    }
    v70 = v82[0];
    if ( SLOBYTE(v82[0]) < 0 )
    {
      v87(v82);
      v70 = v82[0];
    }
    if ( (v70 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v82);
      LOBYTE(v70) = v82[0];
    }
    if ( (v70 & 0x10) != 0 )
    {
      MappingBGRF(v106, v107, v94, v101);
      v71 = v104 + v101;
      if ( v71 == v102 )
        v71 = v103;
      v101 = v71;
    }
    v88(v82, v108, v109, v83, v93, v95, v95 + v99, v100, v89);
    v39 = v81;
    v72 = v98 + v95;
    if ( v72 == v96 )
      v72 = v97;
    v83 += v86;
    v40 = v78;
    v95 = v72;
  }
  return v85;
}
