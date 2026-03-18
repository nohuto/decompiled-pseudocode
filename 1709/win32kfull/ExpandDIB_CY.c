/*
 * XREFs of ExpandDIB_CY @ 0x1C0244EA0
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

__int64 __fastcall ExpandDIB_CY(_OWORD *a1)
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
  unsigned __int64 v15; // r14
  unsigned __int8 *v16; // rdi
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // rsi
  char *v20; // r12
  unsigned __int8 *v21; // r15
  void *FixupScan; // rax
  void *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r15d
  int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // r12d
  int v29; // eax
  __int128 v30; // xmm1
  unsigned __int8 *v31; // r13
  unsigned __int8 *v32; // rbx
  void *v33; // rax
  unsigned __int8 *v34; // rdx
  char *v35; // rbx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // bx
  __int128 v42; // xmm1
  unsigned __int64 v43; // r15
  void *v44; // rax
  unsigned __int8 *v45; // r9
  __int64 v46; // r8
  unsigned __int8 *v47; // rdi
  unsigned __int8 *v48; // rdx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  unsigned __int64 v52; // r8
  _BYTE *v53; // r9
  int v54; // edx
  int v55; // ecx
  int v56; // r10d
  int *v57; // r8
  int v58; // ebx
  unsigned __int8 *v59; // r15
  __int64 v60; // r10
  unsigned __int8 *v61; // r11
  __int64 v62; // rbx
  int v63; // r8d
  int v64; // eax
  int *v65; // r8
  int v66; // r10d
  unsigned __int8 *v67; // r10
  __int64 v68; // r11
  __int64 v69; // rbx
  int v70; // r8d
  int v71; // eax
  int *v72; // rdx
  int v73; // r8d
  unsigned __int8 *v74; // r8
  __int64 v75; // r10
  __int64 v76; // rax
  __int64 v77; // rcx
  int v78; // eax
  unsigned __int8 *v79; // rdx
  int v80; // eax
  __int16 v81; // ax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v85; // [rsp+58h] [rbp-B0h]
  _BYTE v86[40]; // [rsp+60h] [rbp-A8h]
  unsigned __int8 *v87; // [rsp+88h] [rbp-80h]
  size_t Size; // [rsp+90h] [rbp-78h]
  int v89; // [rsp+9Ch] [rbp-6Ch]
  int v90; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v91; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v92; // [rsp+B0h] [rbp-58h]
  __int64 *v93; // [rsp+B8h] [rbp-50h]
  int v94[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v95; // [rsp+150h] [rbp+48h]
  int v96; // [rsp+158h] [rbp+50h]
  unsigned int v97; // [rsp+15Ch] [rbp+54h]
  int v98; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v99)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v100)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v101; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v102)(__int64, void *, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v103; // [rsp+1F8h] [rbp+F0h]
  __int64 v104; // [rsp+200h] [rbp+F8h]
  __int64 v105; // [rsp+248h] [rbp+140h]
  __int64 v106; // [rsp+250h] [rbp+148h]
  __int64 v107; // [rsp+260h] [rbp+158h]
  __int64 v108; // [rsp+268h] [rbp+160h]
  __int64 v109; // [rsp+270h] [rbp+168h]
  int v110; // [rsp+278h] [rbp+170h]
  int v111; // [rsp+27Ch] [rbp+174h]
  int v112; // [rsp+280h] [rbp+178h]
  __int64 v113; // [rsp+288h] [rbp+180h]
  __int64 v114; // [rsp+290h] [rbp+188h]
  __int64 v115; // [rsp+298h] [rbp+190h]
  int v116; // [rsp+2A0h] [rbp+198h]
  void *v117; // [rsp+2E0h] [rbp+1D8h]
  __int64 v118; // [rsp+2E8h] [rbp+1E0h]
  __int64 v119; // [rsp+2F0h] [rbp+1E8h]
  __int64 v120; // [rsp+2F8h] [rbp+1F0h]
  __int64 v121; // [rsp+300h] [rbp+1F8h]
  _BYTE *v122; // [rsp+308h] [rbp+200h]
  _BYTE *v123; // [rsp+310h] [rbp+208h]
  int v124; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v94;
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
  v15 = *(_QWORD *)(v104 + 32);
  v91 = v15;
  v92 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4105);
  v17 = 3 * (v96 + 6);
  v18 = v17 + v15 + 4105 + v17;
  *(_QWORD *)&v86[8] = v17 + v15 + 4105;
  v19 = v17 + v18;
  v20 = (char *)(v19 + v17);
  *(_QWORD *)&v86[16] = v18;
  v21 = (unsigned __int8 *)&v20[v17];
  *(_QWORD *)&v86[24] = v19;
  *(_QWORD *)&v86[32] = v20;
  v87 = v21;
  Size = v17 - 18;
  FixupScan = GetFixupScan((__int64)v94, v117);
  v102(v103, FixupScan, v20, &v20[Size], 3);
  if ( (*(_BYTE *)(v104 + 8) & 1) != 0 )
  {
    v23 = GetFixupScan((__int64)v94, v117);
    v102(v103, v23, (char *)v21, (char *)&v21[Size], 3);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v24 = v104;
  v25 = *(unsigned __int16 *)(v104 + 12);
  v26 = v25 & 0xF;
  v27 = v25 >> 4;
  v28 = v26 + v27;
  if ( v26 + v27 )
  {
    do
    {
      v29 = v27;
      --v28;
      v30 = *(_OWORD *)&v86[24];
      --v27;
      v31 = &v16[Size];
      *(_OWORD *)v86 = *(_OWORD *)&v86[8];
      *(_QWORD *)&v86[32] = v87;
      v32 = v87;
      v87 = v16;
      *(_OWORD *)&v86[16] = v30;
      if ( v29 <= 0 )
      {
        v33 = GetFixupScan((__int64)v94, v117);
        v102(v103, v33, (char *)v16, (char *)&v16[Size], 3);
      }
      else
      {
        memmove(v16, v32, Size);
      }
      v19 = *((_QWORD *)&v30 + 1);
      if ( (v94[0] & 0x200) != 0 )
      {
        memmove(*((void **)&v30 + 1), v32, Size);
      }
      else
      {
        v34 = (unsigned __int8 *)(*((_QWORD *)&v30 + 1) + 1LL);
        v35 = (char *)&v32[-*((_QWORD *)&v30 + 1)];
        do
        {
          v36 = (6 * v34[(_QWORD)v35 - 1] - *v16 - *(v34 - 1)) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          *(v34 - 1) = v36;
          v37 = (6 * v34[(_QWORD)v35] - v16[1] - *v34) >> 2;
          if ( (v37 & 0xFF00) != 0 )
            LOBYTE(v37) = ~HIBYTE(v37);
          *v34 = v37;
          v38 = (6 * v34[(_QWORD)v35 + 1] - v16[2] - v34[1]) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          v34[1] = v38;
          v16 += 3;
          v34 += 3;
        }
        while ( v16 < v31 );
      }
      v16 = *(unsigned __int8 **)v86;
    }
    while ( v28 );
    v24 = v104;
    v18 = v30;
  }
  v39 = *(__int64 **)(v24 + 40);
  v40 = *(_DWORD *)(v24 + 16);
  while ( v40 )
  {
    v90 = v40 - 1;
    v41 = *v39;
    v85 = *v39;
    v93 = v39 + 1;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = *(_OWORD *)&v86[24];
      *(_OWORD *)v86 = *(_OWORD *)&v86[8];
      v43 = (unsigned __int64)&v16[Size];
      *(_QWORD *)&v86[32] = v87;
      *(_OWORD *)&v86[16] = v42;
      v87 = v16;
      v44 = GetFixupScan((__int64)v94, v117);
      v102(v103, v44, (char *)v16, (char *)&v16[Size], 3);
      if ( (v94[0] & 0x200) != 0 )
      {
        v19 = *((_QWORD *)&v42 + 1);
        memmove(*((void **)&v42 + 1), *(const void **)&v86[32], Size);
      }
      else
      {
        v19 = *((_QWORD *)&v42 + 1);
        v45 = v16 + 2;
        v46 = *(_QWORD *)&v86[32] - *((_QWORD *)&v42 + 1);
        v47 = &v16[-*((_QWORD *)&v42 + 1)];
        v48 = (unsigned __int8 *)(*((_QWORD *)&v42 + 1) + 1LL);
        do
        {
          v49 = (6 * v48[v46 - 1] - v48[(_QWORD)v47 - 1] - *(v48 - 1)) >> 2;
          if ( (v49 & 0xFF00) != 0 )
            LOBYTE(v49) = ~HIBYTE(v49);
          *(v48 - 1) = v49;
          v50 = (6 * v48[v46] - *(v45 - 1) - *v48) >> 2;
          if ( (v50 & 0xFF00) != 0 )
            LOBYTE(v50) = ~HIBYTE(v50);
          *v48 = v50;
          v51 = (6 * v48[v46 + 1] - v48[1] - *v45) >> 2;
          if ( (v51 & 0xFF00) != 0 )
            LOBYTE(v51) = ~HIBYTE(v51);
          v48[1] = v51;
          v45 += 3;
          v48 += 3;
        }
        while ( &v48[(_QWORD)v47 - 1] < (unsigned __int8 *)v43 );
      }
      v18 = v42;
      v16 = *(unsigned __int8 **)v86;
      v41 &= 0x3FFFu;
    }
    v52 = v15;
    v53 = v122;
    v54 = -WORD1(v85);
    v55 = -WORD2(v85);
    v89 = v41;
    v56 = -v41;
    if ( v41 )
    {
      v57 = (int *)(v15 + 2048);
      v58 = 4096 - HIWORD(v85);
      do
      {
        v56 += v89;
        v54 += WORD1(v85);
        v55 += WORD2(v85);
        *(v57 - 512) = v56;
        v58 += HIWORD(v85);
        *(v57 - 256) = v54;
        *v57 = v55;
        v57[256] = v58;
        ++v57;
      }
      while ( (unsigned __int64)(v57 - 512) < v92 );
      v59 = (unsigned __int8 *)(v19 + 2);
      v15 = v91;
      v60 = v18 - v19;
      v61 = &v16[-v19];
      v62 = *(_QWORD *)&v86[8] - v19;
      do
      {
        v63 = *(_DWORD *)(v91 + 4LL * v59[(_QWORD)v61])
            + *(_DWORD *)(v91 + 4LL * ((unsigned int)v59[v60] + 512))
            + *(_DWORD *)(v91 + 4LL * ((unsigned int)v59[v62] + 256));
        v64 = *v59;
        v59 += 3;
        v53[2] = (*(_DWORD *)(v91 + 4LL * (unsigned int)(v64 + 768)) + v63) >> 13;
        v53[1] = (*(_DWORD *)(v91 + 4LL * ((unsigned int)*(v59 - 4) + 768))
                + *(_DWORD *)(v91 + 4LL * v59[(_QWORD)v61 - 4])
                + *(_DWORD *)(v91 + 4LL * ((unsigned int)v59[v60 - 4] + 512))
                + *(_DWORD *)(v91 + 4LL * ((unsigned int)v59[v62 - 4] + 256))) >> 13;
        *v53 = (*(_DWORD *)(v91 + 4LL * ((unsigned int)*(v59 - 5) + 768))
              + *(_DWORD *)(v91 + 4LL * v59[(_QWORD)v61 - 5])
              + *(_DWORD *)(v91 + 4LL * ((unsigned int)v59[v60 - 5] + 512))
              + *(_DWORD *)(v91 + 4LL * ((unsigned int)v59[v62 - 5] + 256))) >> 13;
        v53 += v124;
      }
      while ( v53 != v123 );
    }
    else if ( WORD1(v85) )
    {
      v65 = (int *)(v15 + 2048);
      v66 = 4096 - HIWORD(v85);
      do
      {
        v54 += WORD1(v85);
        v55 += WORD2(v85);
        v66 += HIWORD(v85);
        *(v65 - 256) = v54;
        *v65 = v55;
        v65[256] = v66;
        ++v65;
      }
      while ( (unsigned __int64)(v65 - 512) < v15 + 1024 );
      v67 = (unsigned __int8 *)(v19 + 2);
      v68 = *(_QWORD *)&v86[8] - v19;
      v69 = v18 - v19;
      do
      {
        v70 = *(_DWORD *)(v15 + 4LL * ((unsigned int)v67[v69] + 512))
            + *(_DWORD *)(v15 + 4LL * ((unsigned int)v67[v68] + 256));
        v71 = *v67;
        v67 += 3;
        v53[2] = (*(_DWORD *)(v15 + 4LL * (unsigned int)(v71 + 768)) + v70) >> 13;
        v53[1] = (*(_DWORD *)(v15 + 4LL * ((unsigned int)*(v67 - 4) + 768))
                + *(_DWORD *)(v15 + 4LL * ((unsigned int)v67[v69 - 4] + 512))
                + *(_DWORD *)(v15 + 4LL * ((unsigned int)v67[v68 - 4] + 256))) >> 13;
        *v53 = (*(_DWORD *)(v15 + 4LL * ((unsigned int)*(v67 - 5) + 768))
              + *(_DWORD *)(v15 + 4LL * ((unsigned int)v67[v69 - 5] + 512))
              + *(_DWORD *)(v15 + 4LL * ((unsigned int)v67[v68 - 5] + 256))) >> 13;
        v53 += v124;
      }
      while ( v53 != v123 );
    }
    else if ( WORD2(v85) )
    {
      v72 = (int *)(v15 + 3072);
      v73 = 4096 - HIWORD(v85);
      do
      {
        v55 += WORD2(v85);
        v73 += HIWORD(v85);
        *(v72 - 256) = v55;
        *v72++ = v73;
      }
      while ( (unsigned __int64)(v72 - 768) < v15 + 1024 );
      v74 = (unsigned __int8 *)(v18 + 1);
      v75 = v19 - v18;
      do
      {
        v53[2] = (*(_DWORD *)(v15 + 4LL * ((unsigned int)v74[1] + 512))
                + *(_DWORD *)(v15 + 4LL * ((unsigned int)v74[v75 + 1] + 768))) >> 13;
        v76 = (unsigned int)v74[v75] + 768;
        v77 = (unsigned int)*v74 + 512;
        v74 += 3;
        v53[1] = (*(_DWORD *)(v15 + 4 * v77) + *(_DWORD *)(v15 + 4 * v76)) >> 13;
        *v53 = (*(_DWORD *)(v15 + 4LL * ((unsigned int)*(v74 - 4) + 512))
              + *(_DWORD *)(v15 + 4LL * ((unsigned int)v74[v75 - 4] + 768))) >> 13;
        v53 += v124;
      }
      while ( v53 != v123 );
    }
    else
    {
      v78 = 4096 - HIWORD(v85);
      do
      {
        v78 += HIWORD(v85);
        *(_DWORD *)(v52 + 3072) = v78;
        v52 += 4LL;
      }
      while ( v52 < v15 + 1024 );
      v79 = (unsigned __int8 *)(v19 + 1);
      do
      {
        v53[2] = *(int *)(v15 + 4LL * ((unsigned int)v79[1] + 768)) >> 13;
        v80 = *v79;
        v79 += 3;
        v53[1] = *(int *)(v15 + 4LL * (unsigned int)(v80 + 768)) >> 13;
        *v53 = *(int *)(v15 + 4LL * ((unsigned int)*(v79 - 4) + 768)) >> 13;
        v53 += v124;
      }
      while ( v53 != v123 );
    }
    v81 = v94[0];
    if ( SLOBYTE(v94[0]) < 0 )
    {
      v99(v94);
      v81 = v94[0];
    }
    if ( (v81 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v94);
      LOBYTE(v81) = v94[0];
    }
    if ( (v81 & 0x10) != 0 )
    {
      MappingBGRF(v118, v119, v106, v113);
      v82 = v116 + v113;
      if ( v82 == v114 )
        v82 = v115;
      v113 = v82;
    }
    v100(v94, v120, v121, v95, v105, v107, v107 + v111, v112, v101);
    v39 = v93;
    v83 = v110 + v107;
    if ( v83 == v108 )
      v83 = v109;
    v95 += v98;
    v40 = v90;
    v107 = v83;
  }
  return v97;
}
