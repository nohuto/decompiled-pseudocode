/*
 * XREFs of sub_1402AE570 @ 0x1402AE570
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402AC5F8 @ 0x1402AC5F8 (sub_1402AC5F8.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     sub_1402AEFBC @ 0x1402AEFBC (sub_1402AEFBC.c)
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1402AE570(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int *a7,
        unsigned int *a8)
{
  _BYTE *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r13
  unsigned int v14; // r14d
  unsigned int v15; // eax
  __int64 v16; // rdi
  int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // r9
  int v20; // r8d
  unsigned __int64 v21; // rcx
  int v22; // ebx
  int v23; // ecx
  __int64 v25; // rbx
  int v26; // ecx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  unsigned int *v29; // r9
  const char *v30; // rax
  int v31; // r10d
  unsigned __int64 v32; // r8
  unsigned int i; // r11d
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r8
  signed __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // r11
  __int64 v40; // rax
  bool v41; // zf
  unsigned __int64 j; // rax
  int v43; // r15d
  _OWORD *v44; // rsi
  __int64 v45; // rcx
  unsigned __int8 CurrentIrql; // r12
  int v47; // ebx
  unsigned int *v48; // rcx
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rax
  int v51; // r15d
  _QWORD *v52; // rax
  unsigned __int64 v53; // rcx
  unsigned int v54; // r13d
  unsigned int *v55; // rsi
  unsigned int v56; // ebx
  unsigned int v57; // r12d
  char v58; // al
  char *v59; // rax
  int v60; // ecx
  __int16 v61; // ax
  char *v62; // r8
  __int64 *v63; // r10
  signed __int64 v64; // r9
  char *v65; // rbx
  int v66; // r11d
  char *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rax
  unsigned int v70; // r8d
  __int64 *v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  int v76; // r9d
  signed __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rax
  int v80; // r9d
  signed __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rax
  int v84; // eax
  unsigned int v85; // ecx
  unsigned int v86; // edx
  unsigned int v87; // r9d
  unsigned int v88; // eax
  __int64 v89; // rax
  int v90; // ecx
  __int64 v91; // r10
  __int64 v92; // rbp
  unsigned __int64 v93; // rbx
  char v94; // al
  _DWORD *v95; // rax
  unsigned __int8 v96; // r14
  unsigned __int64 v97; // rsi
  unsigned __int64 v98; // r15
  int v99; // eax
  char *v100; // r14
  _QWORD *v101; // r9
  int v102; // r11d
  const char *v103; // rax
  unsigned __int64 v104; // rcx
  unsigned __int64 v105; // r8
  unsigned int v106; // r10d
  __int64 v107; // rax
  __int64 v108; // r8
  unsigned __int128 v109; // rax
  unsigned int v110; // ebp
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int64 k; // rax
  int v114; // [rsp+20h] [rbp-98h]
  int v115; // [rsp+24h] [rbp-94h]
  unsigned __int64 v116; // [rsp+28h] [rbp-90h]
  __int64 v117; // [rsp+28h] [rbp-90h]
  char v118; // [rsp+30h] [rbp-88h]
  unsigned int v119; // [rsp+34h] [rbp-84h]
  int *v120; // [rsp+38h] [rbp-80h]
  _DWORD *v121; // [rsp+40h] [rbp-78h]
  unsigned __int64 v122; // [rsp+48h] [rbp-70h]
  __int64 v123; // [rsp+50h] [rbp-68h]
  char *v124; // [rsp+58h] [rbp-60h]
  unsigned int *v125; // [rsp+60h] [rbp-58h]
  unsigned int v127; // [rsp+C0h] [rbp+8h]

  v8 = *(_BYTE **)a1;
  v9 = a3;
  v123 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 488LL))(a4);
  if ( !v123 )
    return 3221225595LL;
  v10 = v9 / 0xC;
  v116 = v9 / 0xC;
  v11 = a5 ? 12LL : (a6 & 0x10) != 0 ? 43 : 1;
  v12 = *((unsigned int *)v8 + 401);
  v13 = 3LL;
  v14 = 4 * v10;
  v15 = 4 * v10 + v12 + 48;
  if ( v15 <= *((_DWORD *)v8 + 535) )
  {
    v16 = (__int64)v8;
    *((_DWORD *)v8 + 401) = v15;
  }
  else
  {
    v16 = sub_1402AEFBC(v8, v15, *((unsigned int *)v8 + 479));
    if ( !v16 )
      return 3221225626LL;
    v17 = *((_DWORD *)v8 + 502);
    if ( (v17 & 4) == 0 )
    {
      v18 = *((_DWORD *)v8 + 401);
      v19 = *((_QWORD *)v8 + 197);
      v20 = (v17 & 0x20000000) != 0 ? *((_DWORD *)v8 + 479) : 0;
      if ( v18 >= 8 )
      {
        v21 = (unsigned __int64)v18 >> 3;
        do
        {
          *(_QWORD *)v8 = 0LL;
          v18 -= 8;
          v8 += 8;
          --v21;
        }
        while ( v21 );
      }
      for ( ; v18; --v18 )
        *v8++ = 0;
      v22 = *(_DWORD *)(v16 + 1916);
      *(_DWORD *)(v16 + 1916) = v20;
      if ( v20 == 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v16 + 856))(v19, 1LL);
      }
      else
      {
        v23 = 0;
        if ( (*(_DWORD *)(v16 + 2008) & 0x10000000) == 0 )
          v23 = v20;
        if ( v23 )
          (*(void (__fastcall **)(__int64, _QWORD))(v16 + 536))(v19 - 8, *(_QWORD *)(v19 - 8));
        else
          (*(void (__fastcall **)(__int64, __int64))(v16 + 240))(v19, 1LL);
      }
      *(_DWORD *)(v16 + 1916) = v22;
    }
    *(_DWORD *)(v16 + 2008) &= ~4u;
  }
  ++*(_DWORD *)(v16 + 1644);
  v25 = v16 + v12;
  v26 = 48;
  v120 = (int *)(v16 + v12);
  v27 = (_QWORD *)(v16 + v12);
  v28 = 6LL;
  do
  {
    *v27 = 0LL;
    v26 -= 8;
    ++v27;
    --v28;
  }
  while ( v28 );
  for ( ; v26; --v26 )
  {
    *(_BYTE *)v27 = 0;
    v27 = (_QWORD *)((char *)v27 + 1);
  }
  *(_DWORD *)v25 = v11;
  v29 = a2;
  *(_QWORD *)(v25 + 8) = a2;
  v30 = (const char *)a2;
  *(_DWORD *)(v25 + 16) = v9;
  *(_DWORD *)(v16 + 1672) += v9;
  v31 = *(_DWORD *)(v16 + 1652);
  if ( v30 < &v30[v9] )
  {
    do
    {
      _mm_prefetch(v30, 0);
      v30 += 64;
    }
    while ( v30 < (const char *)a2 + v9 );
  }
  v32 = *(_QWORD *)(v16 + 1656);
  for ( i = (unsigned int)v9 >> 7; i; --i )
  {
    v34 = 8LL;
    do
    {
      v35 = v32 ^ *(_QWORD *)v29;
      v36 = *((_QWORD *)v29 + 1);
      v29 += 4;
      v32 = __ROL8__(__ROL8__(v35, v31) ^ v36, v31);
      --v34;
    }
    while ( v34 );
    v37 = __ROL8__(*(_QWORD *)(v16 + 1656) ^ ((char *)v29 - (char *)a2), 17) ^ *(_QWORD *)(v16 + 1656) ^ ((char *)v29 - (char *)a2);
    v31 = ((unsigned __int8)((((unsigned __int64)v37 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v37) ^ (unsigned __int8)v31) & 0x3F;
    if ( !v31 )
      LOBYTE(v31) = 1;
  }
  v38 = v9 & 0x7F;
  if ( (unsigned int)v38 >= 8 )
  {
    v39 = (v9 & 0x7F) >> 3;
    do
    {
      v32 = __ROL8__(*(_QWORD *)v29 ^ v32, v31);
      v29 += 2;
      v38 = (unsigned int)(v38 - 8);
      --v39;
    }
    while ( v39 );
  }
  if ( (_DWORD)v38 )
  {
    do
    {
      v40 = *(unsigned __int8 *)v29;
      v29 = (unsigned int *)((char *)v29 + 1);
      v32 = __ROL8__(v40 ^ v32, v31);
      v41 = (_DWORD)v38 == 1;
      v38 = (unsigned int)(v38 - 1);
    }
    while ( !v41 );
  }
  for ( j = v32; ; v32 = (unsigned int)j ^ (unsigned int)v32 )
  {
    j >>= 31;
    if ( !j )
      break;
  }
  LODWORD(v32) = v32 & 0x7FFFFFFF;
  v43 = -1073741275;
  v120[5] = v32;
  *(_DWORD *)(v16 + 1672) += v9;
  v44 = v120 + 6;
  *(_QWORD *)a1 = v16;
  v45 = *(_QWORD *)(v16 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int *))(v16 + 320))(v45, v38, v32, v29);
  v47 = 24;
  v48 = **(unsigned int ***)(v16 + 1480);
  v49 = (unsigned __int64)(v48 + 4);
  while ( *(_QWORD *)(v49 + 8) != a4 )
  {
    v49 += 24LL;
    if ( v49 >= (unsigned __int64)&v48[6 * *v48 + 4] )
      goto LABEL_49;
  }
  v43 = 0;
  *v44 = *(_OWORD *)v49;
  *((_QWORD *)v120 + 5) = *(_QWORD *)(v49 + 16);
LABEL_49:
  (*(void (__fastcall **)(_QWORD))(v16 + 384))(*(_QWORD *)(v16 + 1272));
  __writecr8(CurrentIrql);
  if ( v43 >= 0 )
  {
    v51 = 0;
  }
  else
  {
    v50 = v120 + 6;
    v51 = 0;
    do
    {
      *v50 = 0LL;
      v47 -= 8;
      ++v50;
      --v13;
    }
    while ( v13 );
    for ( ; v47; --v47 )
    {
      *(_BYTE *)v50 = 0;
      v50 = (_QWORD *)((char *)v50 + 1);
    }
    *(_QWORD *)v44 = 1LL;
  }
  v52 = v120 + 12;
  v121 = v120 + 12;
  if ( v14 >= 8 )
  {
    v53 = (unsigned __int64)v14 >> 3;
    do
    {
      *v52 = -1LL;
      v14 -= 8;
      ++v52;
      --v53;
    }
    while ( v53 );
  }
  for ( ; v14; --v14 )
  {
    *(_BYTE *)v52 = -1;
    v52 = (_QWORD *)((char *)v52 + 1);
  }
  v54 = -1;
  v55 = a2;
  v56 = 0;
  v57 = 0;
  v114 = -1;
  v127 = 0;
  v125 = &a2[3 * (unsigned int)v116];
  v58 = -9;
  v122 = 0LL;
  if ( (*(_DWORD *)(v16 + 2012) & 0x40) != 0 )
    v58 = a6;
  v118 = v58;
  v59 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v16 + 512))(v123, a4, *a2);
  v117 = v11;
LABEL_168:
  v124 = v59;
  v100 = v59;
  if ( !v59 )
    return 3221225595LL;
  if ( (*((_DWORD *)v59 + 9) & 0x2000000) != 0
    || (v60 = *(_DWORD *)v59, *(_DWORD *)v59 == 1414090313) && *((_DWORD *)v59 + 1) == 1195525195
    || v60 == 1162297680 && ((v61 = *((_WORD *)v59 + 2), v61 == 30583) || v61 == 29303 || v61 == 30839)
    || v60 == 1095914053 && *((_WORD *)v100 + 2) == 16724 )
  {
    v51 = 1;
  }
  else
  {
    v62 = *(char **)(v16 + 1928);
    v63 = *(__int64 **)(v16 + 1936);
    v64 = v100 - v62;
    v65 = *(char **)(v16 + 1944);
    v66 = 7;
    v67 = *(char **)(v16 + 1952);
    while ( 1 )
    {
      v68 = (unsigned __int8)v62[v64];
      v69 = (unsigned __int8)*v62++;
      if ( v68 != v69 )
        break;
      if ( !--v66 )
      {
LABEL_91:
        v51 = 1;
        goto LABEL_93;
      }
    }
    v70 = 8;
    v71 = (__int64 *)v100;
    while ( 1 )
    {
      v72 = *v71++;
      v73 = *v63++;
      if ( v72 != v73 )
        break;
      v70 -= 8;
      if ( v70 < 8 )
      {
        if ( !v70 )
          goto LABEL_91;
        while ( 1 )
        {
          v74 = *(unsigned __int8 *)v71;
          v71 = (__int64 *)((char *)v71 + 1);
          v75 = *(unsigned __int8 *)v63;
          v63 = (__int64 *)((char *)v63 + 1);
          if ( v74 != v75 )
            goto LABEL_84;
          if ( !--v70 )
            goto LABEL_91;
        }
      }
    }
LABEL_84:
    v76 = 4;
    v77 = v100 - v65;
    while ( 1 )
    {
      v78 = (unsigned __int8)v65[v77];
      v79 = (unsigned __int8)*v65++;
      if ( v78 != v79 )
        break;
      if ( !--v76 )
        goto LABEL_91;
    }
    v80 = 6;
    v81 = v100 - v67;
    while ( 1 )
    {
      v82 = (unsigned __int8)v67[v81];
      v83 = (unsigned __int8)*v67++;
      if ( v82 != v83 )
        break;
      if ( !--v80 )
        goto LABEL_91;
    }
LABEL_93:
    v56 = v127;
    v55 = a2;
  }
  v84 = *((_DWORD *)v100 + 9);
  if ( v84 < 0 )
    v51 = 1;
  v115 = v51;
  if ( v11 == 43 )
  {
    if ( (v84 & 0x20000000) == 0 )
      v51 = 1;
    v115 = v51;
  }
  if ( v51 && *(_DWORD *)v100 == 1414090313 && *((_DWORD *)v100 + 1) == 1195525195 )
  {
    if ( (*(_DWORD *)(v16 + 2012) & 0x2000) != 0 )
      v51 = 0;
    v115 = v51;
  }
  v85 = *((_DWORD *)v100 + 2);
  v86 = *((_DWORD *)v100 + 3);
  if ( *((_DWORD *)v100 + 4) > v85 )
    v85 = *((_DWORD *)v100 + 4);
  v87 = v86 + v85;
  v119 = v86 + v85;
  while ( 1 )
  {
    v88 = v55[2];
    if ( (v88 & 1) == 0 )
    {
      if ( v88 < v54 )
        v54 = v55[2];
      v114 = v54;
      if ( v88 > v56 )
        v56 = v55[2];
      v127 = v56;
    }
    v89 = *v55;
    v90 = v51;
    v91 = a4;
    v92 = v55[1] - (unsigned int)v89;
    v93 = a4 + v89;
    if ( v117 != 43 )
      goto LABEL_127;
    if ( v51 || v86 - (unsigned int)v89 < 6 || (unsigned int)v89 - v57 < 6 )
    {
LABEL_128:
      v95 = v121;
      *v121 = 0x80000000;
      goto LABEL_164;
    }
    if ( *(_BYTE *)(v93 - 6) != 76
      || *(_BYTE *)(v93 - 5) != 0x87
      || *(_BYTE *)(v93 - 4)
      || *(_BYTE *)(v93 - 3) != 0x98
      || *(_BYTE *)(v93 - 2) != 0xC3
      || (v94 = *(_BYTE *)(v93 - 1), v94 != -112) && v94 != -15 )
    {
      v90 = 1;
LABEL_127:
      if ( v90 )
        goto LABEL_128;
    }
    if ( (v118 & 8) != 0
      && ((((v93 & 0xFFF) + v92 + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 || (v93 & 0xFFFFFFFFFFFFF000uLL) != v122) )
    {
      if ( (_DWORD)v92 && (*(_DWORD *)(v16 + 2012) & 0x40) != 0 )
      {
        v96 = KeGetCurrentIrql();
        v97 = v93 & 0xFFFFFFFFFFFFF000uLL;
        v98 = (v93 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_135:
        __writecr8(2uLL);
        while ( 1 )
        {
          v99 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(v16 + 1104))(v97, 1LL);
          if ( v99 == -1073741267 )
          {
            if ( v96 <= 1u )
            {
              __writecr8(v96);
              KeGetCurrentIrql();
              goto LABEL_135;
            }
          }
          else if ( v99 < 0 )
          {
            __writecr8(v96);
            break;
          }
          v97 += 4096LL;
          v98 += 4096LL;
          if ( v98 == (((unsigned int)v92 + v93 - 1) | 0xFFF) )
          {
            __writecr8(v96);
            goto LABEL_145;
          }
        }
      }
      if ( !*(_DWORD *)(v16 + 1872) )
      {
        *(_QWORD *)(v16 + 1880) = v16 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v16 + 1888) = (char *)v120 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v16 + 1896) = *v120;
        *(_QWORD *)(v16 + 1904) = v93;
        *(_DWORD *)(v16 + 1872) = 1;
      }
LABEL_145:
      v100 = v124;
      v51 = v115;
      v54 = v114;
      v122 = (v93 + v92) & 0xFFFFFFFFFFFFF000uLL;
    }
    *(_DWORD *)(v16 + 1672) += v92;
    v101 = (_QWORD *)v93;
    v102 = *(_DWORD *)(v16 + 1652);
    v103 = (const char *)v93;
    v104 = v93 + (unsigned int)v92;
    if ( v93 < v104 )
    {
      do
      {
        _mm_prefetch(v103, 0);
        v103 += 64;
      }
      while ( (unsigned __int64)v103 < v104 );
    }
    v105 = *(_QWORD *)(v16 + 1656);
    v106 = (unsigned int)v92 >> 7;
    if ( (unsigned int)v92 >> 7 )
    {
      do
      {
        v107 = 8LL;
        do
        {
          v108 = v101[1] ^ __ROL8__(*v101 ^ v105, v102);
          v101 += 2;
          v105 = __ROL8__(v108, v102);
          --v107;
        }
        while ( v107 );
        v109 = (__ROL8__(*(_QWORD *)(v16 + 1656) ^ ((unsigned __int64)v101 - v93), 17) ^ *(_QWORD *)(v16 + 1656) ^ ((unsigned __int64)v101 - v93))
             * (unsigned __int128)0x7010008004002001uLL;
        v102 = (BYTE8(v109) ^ (unsigned __int8)(v109 ^ v102)) & 0x3F;
        if ( !v102 )
          LOBYTE(v102) = 1;
        --v106;
      }
      while ( v106 );
      v54 = v114;
    }
    v110 = v92 & 0x7F;
    if ( v110 >= 8 )
    {
      v111 = (unsigned __int64)v110 >> 3;
      do
      {
        v105 = __ROL8__(*v101++ ^ v105, v102);
        v110 -= 8;
        --v111;
      }
      while ( v111 );
    }
    for ( ; v110; --v110 )
    {
      v112 = *(unsigned __int8 *)v101;
      v101 = (_QWORD *)((char *)v101 + 1);
      v105 = __ROL8__(v112 ^ v105, v102);
    }
    for ( k = v105 >> 31; k; k >>= 31 )
      LODWORD(v105) = k ^ v105;
    v95 = v121;
    v55 = a2;
    v87 = v119;
    v91 = a4;
    *v121 = v105 & 0x7FFFFFFF;
LABEL_164:
    v57 = v55[1];
    v55 += 3;
    a2 = v55;
    if ( v55 == v125 )
      break;
    v86 = *((_DWORD *)v100 + 3);
    v121 = v95 + 1;
    if ( *v55 >= v86 )
    {
      v56 = v127;
      if ( v55[1] <= v87 )
        continue;
    }
    v59 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(v16 + 512))(v123, v91);
    v56 = v127;
    v51 = 0;
    v11 = v117;
    goto LABEL_168;
  }
  if ( v54 == -1 )
    v54 = -(v127 != 0);
  *a7 = v54;
  *a8 = v127;
  return 0LL;
}
