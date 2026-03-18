/*
 * XREFs of sub_14019FF9C @ 0x14019FF9C
 * Callers:
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1402D2010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_14019FEBC @ 0x14019FEBC (sub_14019FEBC.c)
 *     sub_14019FF1C @ 0x14019FF1C (sub_14019FF1C.c)
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 */

void __fastcall sub_14019FF9C(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // r15
  __int16 v8; // cx
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v17; // rcx
  unsigned int *v18; // rsi
  char v19; // r13
  unsigned __int64 v20; // rbp
  __int64 v21; // rdx
  char *v22; // r8
  unsigned int *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  bool v26; // zf
  char v27; // cl
  char v28; // al
  __int64 v29; // r9
  int *v30; // rbp
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r11
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  int *v41; // r13
  __int64 v42; // rbp
  __int64 v43; // r9
  _QWORD *v44; // r8
  const char *v45; // rax
  unsigned __int64 v46; // rsi
  int v47; // r11d
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rcx
  unsigned __int64 i; // rax
  unsigned int v53; // esi
  unsigned __int8 v54; // al
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // r12
  int v57; // eax
  int *v58; // r15
  __int64 v59; // r8
  unsigned __int8 *v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int8 v65; // r12
  unsigned int *v66; // rcx
  unsigned int *v67; // rsi
  char v68; // r13
  unsigned __int64 v69; // rbp
  __int64 v70; // rdx
  char *v71; // r8
  unsigned int *v72; // r9
  __int64 v73; // rcx
  __int64 v74; // rax
  bool v75; // zf
  char v76; // cl
  char v77; // al
  __int64 v78; // rdx
  unsigned __int8 v79; // r12
  unsigned __int64 v80; // rsi
  unsigned __int64 v81; // r13
  unsigned __int64 v82; // r15
  int v83; // eax
  __int64 v84; // rbp
  __int64 v85; // rax
  unsigned int v86; // ecx
  char **v87; // rsi
  int v88; // r15d
  unsigned int v89; // r11d
  _DWORD *v90; // r13
  char **v91; // r15
  char *v92; // r9
  char *v93; // r10
  int v94; // r12d
  const char *j; // rax
  unsigned __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // r8
  unsigned __int64 v99; // rcx
  unsigned __int64 k; // rax
  int v101; // ebp
  unsigned int v102; // r15d
  __int64 v103; // r12
  __int64 v104; // r13
  unsigned int v105; // r11d
  unsigned int *v106; // rbp
  _DWORD *v107; // rsi
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  unsigned __int8 v111; // r13
  unsigned __int64 v112; // r15
  unsigned __int64 v113; // r12
  int v114; // eax
  __int64 v115; // r8
  __int64 *v116; // r9
  __int64 *v117; // r10
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int8 v123; // r13
  unsigned __int64 v124; // r15
  int v125; // eax
  __int64 v126; // rax
  unsigned __int64 v127; // [rsp+20h] [rbp-D8h]
  __int64 v128; // [rsp+20h] [rbp-D8h]
  __int64 v129; // [rsp+28h] [rbp-D0h]
  int v130; // [rsp+30h] [rbp-C8h]
  int v131; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v132; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v133; // [rsp+38h] [rbp-C0h]
  unsigned __int8 v134; // [rsp+40h] [rbp-B8h]
  __int64 v135; // [rsp+40h] [rbp-B8h]
  __int64 v136; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v137; // [rsp+50h] [rbp-A8h]
  int v138; // [rsp+50h] [rbp-A8h]
  __int64 v139; // [rsp+58h] [rbp-A0h]
  unsigned int v140; // [rsp+58h] [rbp-A0h]
  __int64 v141; // [rsp+60h] [rbp-98h]
  __int64 v142; // [rsp+60h] [rbp-98h]
  __int64 v143; // [rsp+68h] [rbp-90h]
  __int64 v144; // [rsp+68h] [rbp-90h]
  __int64 v145; // [rsp+70h] [rbp-88h]
  __int64 v146; // [rsp+78h] [rbp-80h]
  int *v147; // [rsp+80h] [rbp-78h]
  _BYTE v148[16]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v149[96]; // [rsp+98h] [rbp-60h] BYREF
  unsigned int v151; // [rsp+110h] [rbp+18h]
  unsigned int v152; // [rsp+110h] [rbp+18h]
  int v153; // [rsp+118h] [rbp+20h]
  int v154; // [rsp+118h] [rbp+20h]
  int v155; // [rsp+118h] [rbp+20h]
  unsigned int v156; // [rsp+118h] [rbp+20h]

  v2 = a2;
  if ( *a2 == 12 )
  {
    if ( !*(_QWORD *)(a1 + 2072) )
    {
      *(_DWORD *)(a1 + 1732) = 0;
      return;
    }
    v4 = *(unsigned int *)(a1 + 1732);
    v5 = *(unsigned int *)(a1 + 2092);
    v6 = *(_DWORD *)(a1 + 2092);
    if ( (_DWORD)v4 )
    {
      if ( (((unsigned __int8)v5 ^ (unsigned __int8)((unsigned int)v5 >> 3)) & 4) != 0 )
      {
        *(_DWORD *)(a1 + 1732) = 0;
        return;
      }
    }
    else
    {
      v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * v6)) & 0x20;
      *(_DWORD *)(a1 + 2092) = v6;
    }
    if ( (v6 & 4) != 0 )
    {
      v7 = *((_QWORD *)v2 + 4);
      if ( v7 )
      {
        v8 = v7 + v4;
        v9 = (unsigned int)(v2[10] - v4);
        v10 = v7 + v4;
      }
      else
      {
        v10 = *((_QWORD *)v2 + 1);
        v9 = (unsigned int)v2[4];
        v8 = v10;
      }
      v11 = ((unsigned __int64)(v8 & 0xFFF) + v9 + 4095) >> 12;
      v12 = v10 & 0xFFFFFFFFFFFFF000uLL;
      while ( v11 )
      {
        --v11;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(a1 + 688))(v12) && !*(_DWORD *)(a1 + 1936) )
        {
          *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1952) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1960) = *v2;
          *(_QWORD *)(a1 + 1968) = v12;
          *(_DWORD *)(a1 + 1936) = 1;
        }
        *(_DWORD *)(a1 + 1736) += 256;
        v12 += 4096LL;
        v13 = *(_DWORD *)(a1 + 1736);
        v14 = *(_DWORD *)(a1 + 1732);
        if ( v7 )
        {
          v14 += 4096;
          v4 = v14;
          *(_DWORD *)(a1 + 1732) = v14;
          if ( v13 >= *(_DWORD *)(a1 + 1740) )
            break;
        }
        v4 = v14;
      }
      if ( v7 && !v11 )
      {
        *(_DWORD *)(a1 + 1732) = 0;
        v4 = 0LL;
      }
      if ( !(_DWORD)v4 )
      {
        v15 = *(_QWORD *)(a1 + 1336);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 336))(v15, v4, v5, 0LL);
        v17 = **(unsigned int ***)(a1 + 1544);
        v18 = v17 + 4;
        v19 = *((_BYTE *)v17 + 12);
        v20 = (unsigned __int64)&v17[6 * *v17 + 4];
        while ( 2 )
        {
          v21 = 24LL;
          v22 = (char *)(v2 + 6);
          v23 = v18;
          while ( 1 )
          {
            v24 = *(_QWORD *)v23;
            v23 += 2;
            v25 = *(_QWORD *)v22;
            v22 += 8;
            if ( v24 != v25 )
              break;
            v21 = (unsigned int)(v21 - 8);
            if ( (unsigned int)v21 < 8 )
            {
              v26 = (_DWORD)v21 == 0;
              while ( !v26 )
              {
                v27 = *(_BYTE *)v23;
                v23 = (unsigned int *)((char *)v23 + 1);
                v28 = *v22++;
                if ( v27 != v28 )
                  goto LABEL_32;
                v26 = (_DWORD)v21 == 1;
                v21 = (unsigned int)(v21 - 1);
              }
              goto LABEL_33;
            }
          }
LABEL_32:
          v18 += 6;
          if ( (unsigned __int64)v18 < v20 )
            continue;
          break;
        }
LABEL_33:
        (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 400))(
          *(_QWORD *)(a1 + 1336),
          v21,
          v22,
          v23);
        __writecr8(CurrentIrql);
        if ( !v19 )
          goto LABEL_38;
        if ( (*(_DWORD *)(a1 + 2092) & 0x10) != 0 && !*(_DWORD *)(a1 + 1936) )
        {
          *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1952) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1960) = *v2;
          *(_QWORD *)(a1 + 1968) = 1LL;
          *(_DWORD *)(a1 + 1936) = 1;
        }
        if ( *((_QWORD *)v2 + 3) != 1LL )
        {
LABEL_38:
          if ( v18 == (unsigned int *)v20 && !*(_DWORD *)(a1 + 1936) )
          {
            *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1952) = (char *)v2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1960) = *v2;
            *(_QWORD *)(a1 + 1968) = v18;
            *(_DWORD *)(a1 + 1936) = 1;
          }
        }
      }
      return;
    }
  }
  v29 = *((_QWORD *)v2 + 4);
  v30 = v2 + 12;
  v139 = v29;
  v147 = v2 + 12;
  v31 = *(unsigned int *)(a1 + 1732);
  v32 = ((v29 & 0xFFF) + (unsigned __int64)(unsigned int)v2[10] + 4095) >> 12;
  v33 = (unsigned int)v32;
  v131 = v32;
  v137 = (unsigned int)v32;
  v34 = (__int64)&v2[5 * (unsigned int)v32 + 12];
  v35 = (__int64)&v2[5 * v31 + 12];
  v36 = v29 + (unsigned int)((_DWORD)v31 << 12);
  v146 = v34;
  v145 = v35;
  v136 = v36;
  if ( (*(_DWORD *)(a1 + 2088) & 0x40000000) != 0 && (*(_DWORD *)(a1 + 2092) & 0x1000) == 0 || !*(_QWORD *)(a1 + 2320) )
  {
    v37 = 0;
    v151 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v32 <= 0x10 )
      {
        v34 = v37;
        if ( v37 >= (unsigned int)v32 )
          goto LABEL_81;
      }
      else
      {
        v38 = __rdtsc();
        v39 = __ROR8__(v38, 3);
        v34 = ((((v39 ^ v38) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v39 ^ v38)))
            % v33;
      }
      v40 = (unsigned int)v34;
      v34 = (unsigned int)((_DWORD)v34 << 12);
      v41 = &v30[5 * v40];
      v42 = v29 + (unsigned int)v34;
      if ( *((char *)v41 + 15) < 0 )
        goto LABEL_80;
      *(_DWORD *)(a1 + 1736) += 4096;
      LODWORD(v43) = *(_DWORD *)(a1 + 1716);
      v44 = (_QWORD *)v42;
      v45 = (const char *)v42;
      if ( v42 < (unsigned __int64)(v42 + 4096) )
      {
        do
        {
          _mm_prefetch(v45, 0);
          v45 += 64;
        }
        while ( (unsigned __int64)v45 < v42 + 4096 );
      }
      v46 = *(_QWORD *)(a1 + 1720);
      v47 = 32;
      do
      {
        v48 = 8LL;
        do
        {
          v49 = v46 ^ *v44;
          v50 = v44[1];
          v44 += 2;
          v46 = __ROL8__(__ROL8__(v49, v43) ^ v50, v43);
          --v48;
        }
        while ( v48 );
        v51 = __ROL8__(*(_QWORD *)(a1 + 1720) ^ ((unsigned __int64)v44 - v42), 17) ^ *(_QWORD *)(a1 + 1720) ^ ((unsigned __int64)v44 - v42);
        v43 = ((unsigned __int8)(((v51 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v51) ^ (unsigned __int8)v43) & 0x3F;
        if ( !(_DWORD)v43 )
          v43 = 1LL;
        --v47;
      }
      while ( v47 );
      v2 = a2;
      for ( i = v46; ; LODWORD(v46) = i ^ v46 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v53 = v46 & 0x7FFFFFFF;
      v153 = v41[4];
      if ( v53 == (v153 & 0x7FFFFFFF) )
        goto LABEL_72;
      if ( (*(_DWORD *)(a1 + 2092) & 0x40) != 0 )
        break;
LABEL_90:
      v58 = v41 + 4;
      v78 = (unsigned int)v41[4];
      LODWORD(v78) = v78 & 0x7FFFFFFF;
      if ( !*(_DWORD *)(a1 + 1936) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v78 ^ v53;
        if ( !*(_DWORD *)(a1 + 1936) )
        {
          *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1952) = (char *)a2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1960) = *a2;
          *(_QWORD *)(a1 + 1968) = v42;
          *(_DWORD *)(a1 + 1936) = 1;
        }
      }
LABEL_73:
      sub_14019FEBC(a1, v42, 0x1000u, (__int64)v148);
      v59 = 16LL;
      v60 = v148;
      while ( 1 )
      {
        v61 = *(_QWORD *)v60;
        v60 += 8;
        v62 = *(_QWORD *)v41;
        v41 += 2;
        if ( v61 != v62 )
          break;
        v59 = (unsigned int)(v59 - 8);
        if ( (unsigned int)v59 < 8 )
        {
          if ( !(_DWORD)v59 )
            goto LABEL_79;
          while ( 1 )
          {
            v34 = *v60++;
            v63 = *(unsigned __int8 *)v41;
            v41 = (int *)((char *)v41 + 1);
            if ( v34 != v63 )
              goto LABEL_93;
            v26 = (_DWORD)v59 == 1;
            v59 = (unsigned int)(v59 - 1);
            if ( v26 )
              goto LABEL_79;
          }
        }
      }
LABEL_93:
      v154 = *v58;
      if ( (*(_DWORD *)(a1 + 2092) & 0x40) != 0 )
      {
        v79 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v80 = v42 & 0xFFFFFFFFFFFFF000uLL;
        v81 = (v42 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 2 )
        {
          v82 = v79;
          while ( 1 )
          {
            v83 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int8 *))(a1 + 1128))(
                    v80,
                    0LL,
                    v59,
                    v60);
            if ( v83 != -1073741267 )
              break;
            if ( v154 >= 0 )
              goto LABEL_103;
            if ( v79 > 1u )
              goto LABEL_101;
            v82 = v79;
            __writecr8(v79);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v83 < 0 )
          {
LABEL_103:
            __writecr8(v82);
            goto LABEL_104;
          }
LABEL_101:
          v80 += 4096LL;
          v81 += 4096LL;
          if ( v81 != ((v42 + 4095) | 0xFFF) )
            continue;
          break;
        }
        __writecr8(v82);
      }
      else
      {
LABEL_104:
        if ( !*(_DWORD *)(a1 + 1936) )
        {
          *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1952) = (char *)a2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1960) = *a2;
          *(_QWORD *)(a1 + 1968) = v42;
          *(_DWORD *)(a1 + 1936) = 1;
        }
      }
LABEL_79:
      *(_DWORD *)(a1 + 1736) += 0x10000;
      LODWORD(v32) = v131;
      v29 = v139;
      v33 = v137;
LABEL_80:
      v30 = v2 + 12;
      v37 = v151 + 1;
      v151 = v37;
      if ( v37 >= 0x10 )
        goto LABEL_81;
    }
    v54 = KeGetCurrentIrql();
    v134 = v54;
    __writecr8(2uLL);
    v55 = v42 & 0xFFFFFFFFFFFFF000uLL;
    v127 = (v42 & 0xFFFFFFFFFFFFF000uLL) - 1;
    while ( 2 )
    {
      v56 = v54;
      while ( 1 )
      {
        v57 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(a1 + 1128))(v55, 0LL, v44, v43);
        if ( v57 != -1073741267 )
          break;
        if ( v153 >= 0 )
          goto LABEL_89;
        v54 = v134;
        if ( v134 > 1u )
          goto LABEL_70;
        v56 = v134;
        __writecr8(v134);
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      if ( v57 < 0 )
      {
LABEL_89:
        __writecr8(v56);
        goto LABEL_90;
      }
      v54 = v134;
LABEL_70:
      v43 = 4096LL;
      v55 += 4096LL;
      v127 += 4096LL;
      if ( v127 != ((v42 + 4095) | 0xFFF) )
        continue;
      break;
    }
    __writecr8(v56);
LABEL_72:
    v58 = v41 + 4;
    goto LABEL_73;
  }
  if ( v35 == v34 )
    goto LABEL_81;
  do
  {
    if ( *(_DWORD *)(a1 + 1736) >= *(_DWORD *)(a1 + 1740) )
      break;
    v84 = 0LL;
    if ( v35 == v34 )
      goto LABEL_174;
    v85 = v35;
    do
    {
      if ( *(char *)(v85 + 15) < 0 )
        break;
      v84 = (unsigned int)(v84 + 1);
      v85 = v35 + 20 * v84;
    }
    while ( v85 != v34 );
    if ( !(_DWORD)v84 )
      goto LABEL_174;
    v86 = v84;
    v129 = v35;
    v138 = v84;
    v87 = *(char ***)(a1 + 2320);
    v135 = (__int64)v87;
    v130 = 0;
    v128 = v36;
    do
    {
      v88 = 8;
      if ( v86 < 8 )
        v88 = v86;
      v89 = 0;
      v152 = v88;
      v90 = v149;
      v91 = v87;
      do
      {
        v91[1] = (char *)4096;
        v92 = (char *)(v128 + (v89 << 12));
        *v91 = v92;
        v93 = v92;
        *(_DWORD *)(a1 + 1736) += 4096;
        v94 = *(_DWORD *)(a1 + 1716);
        for ( j = v92; j < v92 + 4096; j += 64 )
          _mm_prefetch(j, 0);
        v96 = *(_QWORD *)(a1 + 1720);
        v155 = 32;
        do
        {
          v97 = 8LL;
          do
          {
            v98 = *((_QWORD *)v93 + 1) ^ __ROL8__(*(_QWORD *)v93 ^ v96, v94);
            v93 += 16;
            v96 = __ROL8__(v98, v94);
            --v97;
          }
          while ( v97 );
          v99 = __ROL8__(*(_QWORD *)(a1 + 1720) ^ (v93 - v92), 17) ^ *(_QWORD *)(a1 + 1720) ^ (v93 - v92);
          v94 = ((unsigned __int8)(((v99 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v99) ^ (unsigned __int8)v94) & 0x3F;
          if ( !v94 )
            LOBYTE(v94) = 1;
          --v155;
        }
        while ( v155 );
        for ( k = v96; ; LODWORD(v96) = k ^ v96 )
        {
          k >>= 31;
          if ( !k )
            break;
        }
        ++v89;
        *v90 = v96 & 0x7FFFFFFF;
        v91 += 6;
        ++v90;
      }
      while ( v89 < v152 );
      v2 = a2;
      v101 = v130;
      v102 = v152;
      v103 = v128;
      v104 = v129;
      v87 = (char **)v135;
      sub_14019FF1C(a1, v135, v152);
      v105 = 0;
      v156 = 0;
      if ( v152 )
      {
        v106 = (unsigned int *)v149;
        v107 = (_DWORD *)(v129 + 16);
        while ( 1 )
        {
          v108 = *v106;
          v109 = (unsigned int)*v107;
          v140 = v108;
          if ( (_DWORD)v108 != (*v107 & 0x7FFFFFFF) )
          {
            v110 = v103 + (v105 << 12);
            v143 = v110;
            if ( (*(_DWORD *)(a1 + 2092) & 0x40) != 0 )
            {
              v111 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v112 = v110 & 0xFFFFFFFFFFFFF000uLL;
              v141 = (v110 + 4095) | 0xFFF;
              v132 = (v110 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 2 )
              {
                v113 = v111;
                while ( 1 )
                {
                  v114 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 1128))(v112, 0LL);
                  if ( v114 != -1073741267 )
                    break;
                  if ( v111 > 1u )
                    goto LABEL_141;
                  v113 = v111;
                  __writecr8(v111);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v114 < 0 )
                {
                  __writecr8(v113);
                  v109 = (unsigned int)*v107;
                  v102 = v152;
                  v108 = v140;
                  v110 = v143;
                  v105 = v156;
                  v103 = v128;
                  v104 = v129;
                  break;
                }
LABEL_141:
                v112 += 4096LL;
                v132 += 4096LL;
                if ( v132 != v141 )
                  continue;
                goto LABEL_142;
              }
            }
            LODWORD(v109) = v109 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(a1 + 1936) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v108 ^ v109;
              if ( !*(_DWORD *)(a1 + 1936) )
              {
                *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 1952) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 1960) = *a2;
                *(_QWORD *)(a1 + 1968) = v110;
                *(_DWORD *)(a1 + 1936) = 1;
              }
            }
          }
          v115 = 16LL;
          v116 = (__int64 *)(v104 + 20LL * v105);
          v117 = (__int64 *)(48LL * v105 + v135 + 16);
          while ( 1 )
          {
            v118 = *v117++;
            v119 = *v116++;
            if ( v118 != v119 )
              break;
            v115 = (unsigned int)(v115 - 8);
            if ( (unsigned int)v115 < 8 )
            {
              if ( !(_DWORD)v115 )
                goto LABEL_167;
              while ( 1 )
              {
                v120 = *(unsigned __int8 *)v117;
                v117 = (__int64 *)((char *)v117 + 1);
                v121 = *(unsigned __int8 *)v116;
                v116 = (__int64 *)((char *)v116 + 1);
                if ( v120 != v121 )
                  goto LABEL_154;
                v26 = (_DWORD)v115 == 1;
                v115 = (unsigned int)(v115 - 1);
                if ( v26 )
                  goto LABEL_167;
              }
            }
          }
LABEL_154:
          v122 = v103 + (v105 << 12);
          v142 = v122;
          if ( (*(_DWORD *)(a1 + 2092) & 0x40) != 0 )
          {
            v123 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v124 = v122 & 0xFFFFFFFFFFFFF000uLL;
            v144 = (v122 + 4095) | 0xFFF;
            v133 = (v122 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v113 = v123;
              while ( 1 )
              {
                v125 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(a1 + 1128))(
                         v124,
                         0LL,
                         v115,
                         v116);
                if ( v125 != -1073741267 )
                  break;
                if ( v123 > 1u )
                  goto LABEL_161;
                v113 = v123;
                __writecr8(v123);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v125 < 0 )
              {
                __writecr8(v113);
                v122 = v142;
                v105 = v156;
                goto LABEL_164;
              }
LABEL_161:
              v124 += 4096LL;
              v133 += 4096LL;
              if ( v133 != v144 )
                continue;
              break;
            }
LABEL_142:
            __writecr8(v113);
            v105 = v156;
            goto LABEL_166;
          }
LABEL_164:
          if ( !*(_DWORD *)(a1 + 1936) )
          {
            *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1952) = (char *)a2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1960) = *a2;
            *(_QWORD *)(a1 + 1968) = v122;
            *(_DWORD *)(a1 + 1936) = 1;
          }
LABEL_166:
          v102 = v152;
LABEL_167:
          v103 = v128;
          ++v105;
          v104 = v129;
          ++v106;
          v107 += 5;
          v156 = v105;
          if ( v105 >= v102 )
          {
            v101 = v130;
            v87 = (char **)v135;
            break;
          }
        }
      }
      v84 = v102 + v101;
      v130 = v84;
      v128 = (v102 << 12) + v103;
      *(_DWORD *)(a1 + 1736) += v102 << 15;
      v86 = v138 - v102;
      v129 = v104 + 20LL * v102;
      v138 -= v102;
    }
    while ( *(_DWORD *)(a1 + 1736) < *(_DWORD *)(a1 + 1740) && v86 );
    v35 = v145;
    v34 = v146;
    v36 = v136;
LABEL_174:
    while ( 1 )
    {
      v126 = v35 + 20 * v84;
      if ( v126 == v34 || *(char *)(v126 + 15) >= 0 )
        break;
      v84 = (unsigned int)(v84 + 1);
    }
    v36 += (unsigned int)((_DWORD)v84 << 12);
    v136 = v36;
    v35 += 20 * v84;
    v145 = v35;
  }
  while ( v35 != v34 );
  if ( v35 != v34 )
  {
    *(_DWORD *)(a1 + 1732) = (v35 - (__int64)v147) / 20;
    return;
  }
LABEL_81:
  v64 = *(_QWORD *)(a1 + 1336);
  v65 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(a1 + 336))(v64, v34);
  v66 = **(unsigned int ***)(a1 + 1544);
  v67 = v66 + 4;
  v68 = *((_BYTE *)v66 + 12);
  v69 = (unsigned __int64)&v66[6 * *v66 + 4];
  while ( 2 )
  {
    v70 = 24LL;
    v71 = (char *)(v2 + 6);
    v72 = v67;
    while ( 1 )
    {
      v73 = *(_QWORD *)v72;
      v72 += 2;
      v74 = *(_QWORD *)v71;
      v71 += 8;
      if ( v73 != v74 )
        break;
      v70 = (unsigned int)(v70 - 8);
      if ( (unsigned int)v70 < 8 )
      {
        v75 = (_DWORD)v70 == 0;
        while ( !v75 )
        {
          v76 = *(_BYTE *)v72;
          v72 = (unsigned int *)((char *)v72 + 1);
          v77 = *v71++;
          if ( v76 != v77 )
            goto LABEL_178;
          v75 = (_DWORD)v70 == 1;
          v70 = (unsigned int)(v70 - 1);
        }
        goto LABEL_179;
      }
    }
LABEL_178:
    v67 += 6;
    if ( (unsigned __int64)v67 < v69 )
      continue;
    break;
  }
LABEL_179:
  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 400))(*(_QWORD *)(a1 + 1336), v70, v71, v72);
  __writecr8(v65);
  if ( !v68 )
    goto LABEL_190;
  if ( (*(_DWORD *)(a1 + 2092) & 0x10) != 0 && !*(_DWORD *)(a1 + 1936) )
  {
    *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 1952) = (char *)v2 - 0x4C48B4211BBACBEBLL;
    *(_QWORD *)(a1 + 1960) = *v2;
    *(_QWORD *)(a1 + 1968) = 1LL;
    *(_DWORD *)(a1 + 1936) = 1;
  }
  if ( *((_QWORD *)v2 + 3) != 1LL )
  {
LABEL_190:
    if ( v67 == (unsigned int *)v69 && !*(_DWORD *)(a1 + 1936) )
    {
      *(_QWORD *)(a1 + 1944) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 1952) = (char *)v2 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(a1 + 1960) = *v2;
      *(_QWORD *)(a1 + 1968) = v67;
      *(_DWORD *)(a1 + 1936) = 1;
    }
  }
  *(_DWORD *)(a1 + 1732) = 0;
}
