/*
 * XREFs of sub_1401760BC @ 0x1401760BC
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x14026F010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_140175FBC @ 0x140175FBC (sub_140175FBC.c)
 *     sub_140176024 @ 0x140176024 (sub_140176024.c)
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 */

void __fastcall sub_1401760BC(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v15; // rcx
  unsigned int *v16; // rdi
  BOOL v17; // r15d
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  char *v20; // r8
  unsigned int *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // cl
  char v25; // al
  bool v26; // zf
  __int64 v27; // r9
  int *v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r11
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int *v39; // r13
  __int64 v40; // rsi
  __int64 v41; // r9
  _QWORD *v42; // r8
  const char *v43; // rax
  unsigned __int64 v44; // rdi
  int v45; // r11d
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdi
  unsigned __int64 v49; // rcx
  unsigned __int64 i; // rax
  _DWORD *v51; // r12
  unsigned int v52; // edi
  bool v53; // r12
  unsigned __int8 v54; // bp
  unsigned __int64 v55; // r15
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r8
  unsigned __int8 *v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned __int8 v64; // r12
  unsigned int *v65; // rcx
  unsigned int *v66; // rdi
  BOOL v67; // r15d
  unsigned __int64 v68; // rsi
  __int64 v69; // rdx
  char *v70; // r8
  unsigned int *v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rax
  char v74; // cl
  char v75; // al
  bool v76; // r15
  unsigned __int8 v77; // bp
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // r12
  int v80; // eax
  __int64 v81; // rsi
  __int64 v82; // rax
  unsigned int v83; // ecx
  char **v84; // rdi
  int v85; // ebp
  unsigned int v86; // r11d
  __int64 v87; // r14
  _DWORD *v88; // r13
  char **v89; // r15
  char *v90; // r9
  char *v91; // r10
  unsigned __int64 v92; // rax
  int v93; // r12d
  const char *j; // rax
  unsigned __int64 v95; // rbp
  unsigned __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // rax
  unsigned int v100; // ebp
  unsigned __int64 v101; // rax
  __int64 v102; // r15
  __int64 v103; // r12
  unsigned int v104; // r11d
  unsigned int *v105; // rsi
  _DWORD *v106; // rdi
  unsigned int v107; // ecx
  __int64 v108; // rdx
  unsigned __int8 v109; // bp
  unsigned __int64 v110; // r15
  __int64 v111; // r13
  unsigned __int64 v112; // r12
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 *v117; // r9
  __int64 *v118; // r10
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned __int64 v124; // r15
  __int64 v125; // r13
  unsigned __int64 v126; // r12
  int v127; // eax
  __int64 v128; // rax
  int v129; // [rsp+20h] [rbp-C8h]
  __int64 v130; // [rsp+20h] [rbp-C8h]
  __int64 v131; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v132; // [rsp+30h] [rbp-B8h]
  __int64 v133; // [rsp+30h] [rbp-B8h]
  int v134; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v135; // [rsp+40h] [rbp-A8h]
  int v136; // [rsp+40h] [rbp-A8h]
  __int64 v137; // [rsp+48h] [rbp-A0h]
  __int64 v138; // [rsp+50h] [rbp-98h]
  unsigned int v139; // [rsp+50h] [rbp-98h]
  __int64 v140; // [rsp+58h] [rbp-90h]
  __int64 v141; // [rsp+58h] [rbp-90h]
  __int64 v142; // [rsp+60h] [rbp-88h]
  __int64 v143; // [rsp+68h] [rbp-80h]
  int *v144; // [rsp+70h] [rbp-78h]
  _BYTE v145[16]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v146[96]; // [rsp+88h] [rbp-60h] BYREF
  unsigned int v148; // [rsp+100h] [rbp+18h]
  unsigned int v149; // [rsp+108h] [rbp+20h]
  unsigned __int64 v150; // [rsp+108h] [rbp+20h]
  int v151; // [rsp+108h] [rbp+20h]
  unsigned int v152; // [rsp+108h] [rbp+20h]

  v2 = a2;
  if ( *a2 == 12 )
  {
    if ( !*(_QWORD *)(a1 + 1856) )
    {
      *(_DWORD *)(a1 + 1572) = 0;
      return;
    }
    v4 = *(unsigned int *)(a1 + 1572);
    v5 = *(_DWORD *)(a1 + 1868);
    if ( (_DWORD)v4 )
    {
      if ( (((v5 ^ (v5 >> 3)) >> 2) & 1) != 0 )
      {
        *(_DWORD *)(a1 + 1572) = 0;
        return;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 1868) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * v5)) & 0x20;
    }
    if ( (*(_DWORD *)(a1 + 1868) & 4) != 0 )
    {
      v6 = *((_QWORD *)v2 + 4);
      if ( v6 )
      {
        v7 = v4 + v6;
        v8 = ((_WORD)v4 + (_WORD)v6) & 0xFFF;
        v9 = (unsigned int)(v2[10] - v4) + 4095LL;
      }
      else
      {
        v7 = *((_QWORD *)v2 + 1);
        v9 = v7 & 0xFFF;
        v8 = (unsigned int)v2[4] + 4095LL;
      }
      v10 = v7 & 0xFFFFFFFFFFFFF000uLL;
      v11 = (unsigned __int64)(v9 + v8) >> 12;
      while ( v11 )
      {
        --v11;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(a1 + 680))(v10) && !*(_DWORD *)(a1 + 1728) )
        {
          *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1744) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1752) = *v2;
          *(_DWORD *)(a1 + 1728) = 1;
          *(_QWORD *)(a1 + 1760) = v10;
        }
        *(_DWORD *)(a1 + 1576) += 256;
        v10 += 4096LL;
        v12 = *(_DWORD *)(a1 + 1576);
        if ( v6 )
        {
          *(_DWORD *)(a1 + 1572) += 4096;
          if ( v12 >= *(_DWORD *)(a1 + 1580) )
            break;
        }
      }
      if ( v6 && !v11 )
        *(_DWORD *)(a1 + 1572) = 0;
      if ( !*(_DWORD *)(a1 + 1572) )
      {
        v13 = *(_QWORD *)(a1 + 1216);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        (*(void (__fastcall **)(__int64))(a1 + 336))(v13);
        v15 = **(unsigned int ***)(a1 + 1384);
        v16 = v15 + 4;
        v17 = *((_BYTE *)v15 + 12) != 0;
        v18 = (unsigned __int64)&v15[6 * *v15 + 4];
        do
        {
          v19 = 24LL;
          v20 = (char *)(v2 + 6);
          v21 = v16;
          while ( 1 )
          {
            v22 = *(_QWORD *)v21;
            v21 += 2;
            v23 = *(_QWORD *)v20;
            v20 += 8;
            if ( v22 != v23 )
              break;
            v19 = (unsigned int)(v19 - 8);
            if ( (unsigned int)v19 < 8 )
            {
              if ( !(_DWORD)v19 )
                goto LABEL_32;
              while ( 1 )
              {
                v24 = *(_BYTE *)v21;
                v21 = (unsigned int *)((char *)v21 + 1);
                v25 = *v20++;
                if ( v24 != v25 )
                  goto LABEL_31;
                v26 = (_DWORD)v19 == 1;
                v19 = (unsigned int)(v19 - 1);
                if ( v26 )
                  goto LABEL_32;
              }
            }
          }
LABEL_31:
          v16 += 6;
        }
        while ( (unsigned __int64)v16 < v18 );
LABEL_32:
        (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 400))(
          *(_QWORD *)(a1 + 1216),
          v19,
          v20,
          v21);
        __writecr8(CurrentIrql);
        if ( !v17 )
          goto LABEL_37;
        if ( (*(_DWORD *)(a1 + 1868) & 0x10) != 0 && !*(_DWORD *)(a1 + 1728) )
        {
          *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1744) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1752) = *v2;
          *(_QWORD *)(a1 + 1760) = 1LL;
          *(_DWORD *)(a1 + 1728) = 1;
        }
        if ( *((_QWORD *)v2 + 3) != 1LL )
        {
LABEL_37:
          if ( v16 == (unsigned int *)v18 && !*(_DWORD *)(a1 + 1728) )
          {
            *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1744) = (char *)v2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1752) = *v2;
            *(_QWORD *)(a1 + 1760) = v16;
            *(_DWORD *)(a1 + 1728) = 1;
          }
        }
      }
      return;
    }
  }
  v27 = *((_QWORD *)v2 + 4);
  v28 = v2 + 12;
  v138 = v27;
  v144 = v2 + 12;
  v29 = *(unsigned int *)(a1 + 1572);
  v30 = ((v27 & 0xFFF) + (unsigned __int64)(unsigned int)v2[10] + 4095) >> 12;
  v31 = (unsigned int)v30;
  v129 = v30;
  v135 = (unsigned int)v30;
  v32 = (__int64)&v2[5 * (unsigned int)v30 + 12];
  v143 = v32;
  v33 = (__int64)&v2[5 * v29 + 12];
  v34 = v27 + (unsigned int)((_DWORD)v29 << 12);
  v142 = v33;
  v137 = v34;
  if ( (*(_DWORD *)(a1 + 1864) & 0x40000000) != 0 )
  {
    v35 = 0;
    v149 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v30 <= 0x10 )
      {
        v32 = v35;
        if ( v35 >= (unsigned int)v30 )
          goto LABEL_80;
      }
      else
      {
        v36 = __rdtsc();
        v37 = __ROR8__(v36, 3);
        v32 = ((((v37 ^ v36) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v37 ^ v36)))
            % v31;
      }
      v38 = (unsigned int)v32;
      v32 = (unsigned int)((_DWORD)v32 << 12);
      v39 = &v28[5 * v38];
      v40 = v27 + (unsigned int)v32;
      if ( *((char *)v39 + 15) >= 0 )
      {
        *(_DWORD *)(a1 + 1576) += 4096;
        LODWORD(v41) = *(_DWORD *)(a1 + 1556);
        v42 = (_QWORD *)v40;
        v43 = (const char *)v40;
        if ( v40 < (unsigned __int64)(v40 + 4096) )
        {
          do
          {
            _mm_prefetch(v43, 0);
            v43 += 64;
          }
          while ( (unsigned __int64)v43 < v40 + 4096 );
        }
        v44 = *(_QWORD *)(a1 + 1560);
        v45 = 32;
        do
        {
          v46 = 8LL;
          do
          {
            v47 = v44 ^ *v42;
            v48 = v42[1];
            v42 += 2;
            v44 = __ROL8__(__ROL8__(v47, v41) ^ v48, v41);
            --v46;
          }
          while ( v46 );
          v49 = __ROL8__(*(_QWORD *)(a1 + 1560) ^ ((unsigned __int64)v42 - v40), 17) ^ *(_QWORD *)(a1 + 1560) ^ ((unsigned __int64)v42 - v40);
          v41 = ((unsigned __int8)(((v49 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v49) ^ (unsigned __int8)v41) & 0x3F;
          if ( !(_DWORD)v41 )
            v41 = 1LL;
          --v45;
        }
        while ( v45 );
        v2 = a2;
        for ( i = v44; ; LODWORD(v44) = i ^ v44 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v51 = v39 + 4;
        v52 = v44 & 0x7FFFFFFF;
        if ( v52 == (v39[4] & 0x7FFFFFFF) )
          goto LABEL_72;
        v53 = v39[4] >= 0;
        if ( (*(_DWORD *)(a1 + 1868) & 0x40) == 0 )
          goto LABEL_69;
        v54 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v55 = v40 & 0xFFFFFFFFFFFFF000uLL;
        v132 = (v40 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v56 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(a1 + 1080))(v55, 0LL, v42, v41);
          if ( v56 != -1073741267 )
            break;
          if ( v53 )
            goto LABEL_68;
          if ( v54 > 1u )
          {
LABEL_66:
            v41 = 4096LL;
            v55 += 4096LL;
            v132 += 4096LL;
            if ( v132 == ((v40 + 4095) | 0xFFF) )
            {
              __writecr8(v54);
              v51 = v39 + 4;
              goto LABEL_72;
            }
          }
          else
          {
            __writecr8(v54);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
        }
        if ( v56 >= 0 )
          goto LABEL_66;
LABEL_68:
        __writecr8(v54);
LABEL_69:
        v51 = v39 + 4;
        v57 = (unsigned int)v39[4];
        LODWORD(v57) = v57 & 0x7FFFFFFF;
        if ( !*(_DWORD *)(a1 + 1728) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 24LL) = v57 ^ v52;
          if ( !*(_DWORD *)(a1 + 1728) )
          {
            *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1744) = (char *)a2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1752) = *a2;
            *(_QWORD *)(a1 + 1760) = v40;
            *(_DWORD *)(a1 + 1728) = 1;
          }
        }
LABEL_72:
        sub_140175FBC(a1, v40, 0x1000u, (__int64)v145);
        v58 = 16LL;
        v59 = v145;
        do
        {
          v60 = *(_QWORD *)v59;
          v59 += 8;
          v61 = *(_QWORD *)v39;
          v39 += 2;
          if ( v60 != v61 )
            goto LABEL_88;
          v58 = (unsigned int)(v58 - 8);
        }
        while ( (unsigned int)v58 >= 8 );
        if ( (_DWORD)v58 )
        {
          while ( 1 )
          {
            v32 = *v59++;
            v62 = *(unsigned __int8 *)v39;
            v39 = (int *)((char *)v39 + 1);
            if ( v32 != v62 )
              break;
            v26 = (_DWORD)v58 == 1;
            v58 = (unsigned int)(v58 - 1);
            if ( v26 )
              goto LABEL_78;
          }
LABEL_88:
          v76 = *v51 >= 0;
          if ( (*(_DWORD *)(a1 + 1868) & 0x40) != 0 )
          {
            v77 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v78 = v40 & 0xFFFFFFFFFFFFF000uLL;
            v79 = (v40 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              while ( 1 )
              {
                v80 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int8 *))(a1 + 1080))(
                        v78,
                        0LL,
                        v58,
                        v59);
                if ( v80 == -1073741267 )
                  break;
                if ( v80 < 0 )
                {
LABEL_98:
                  __writecr8(v77);
                  goto LABEL_99;
                }
LABEL_96:
                v78 += 4096LL;
                v79 += 4096LL;
                if ( v79 == ((v40 + 4095) | 0xFFF) )
                {
                  __writecr8(v77);
                  goto LABEL_78;
                }
              }
              if ( v76 )
                goto LABEL_98;
              if ( v77 > 1u )
                goto LABEL_96;
              __writecr8(v77);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
          }
LABEL_99:
          if ( !*(_DWORD *)(a1 + 1728) )
          {
            *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1744) = (char *)a2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1752) = *a2;
            *(_QWORD *)(a1 + 1760) = v40;
            *(_DWORD *)(a1 + 1728) = 1;
          }
        }
LABEL_78:
        *(_DWORD *)(a1 + 1576) += 0x10000;
        LODWORD(v30) = v129;
        v27 = v138;
        v31 = v135;
      }
      v28 = v2 + 12;
      v35 = v149 + 1;
      v149 = v35;
      if ( v35 >= 0x10 )
        goto LABEL_80;
    }
  }
  if ( v33 == v32 )
    goto LABEL_80;
  do
  {
    if ( *(_DWORD *)(a1 + 1576) >= *(_DWORD *)(a1 + 1580) )
      break;
    v81 = 0LL;
    if ( v33 == v32 )
      goto LABEL_166;
    v82 = v33;
    do
    {
      if ( *(char *)(v82 + 15) < 0 )
        break;
      v81 = (unsigned int)(v81 + 1);
      v82 = v33 + 20 * v81;
    }
    while ( v82 != v32 );
    if ( !(_DWORD)v81 )
      goto LABEL_166;
    v83 = v81;
    v131 = v33;
    v134 = v81;
    v84 = *(char ***)(a1 + 2040);
    LODWORD(v81) = 0;
    v133 = (__int64)v84;
    v136 = 0;
    v130 = v34;
    do
    {
      v85 = 8;
      if ( v83 < 8 )
        v85 = v83;
      v86 = 0;
      v148 = v85;
      v87 = v130;
      v88 = v146;
      v89 = v84;
      do
      {
        v89[1] = (char *)4096;
        v90 = (char *)(v87 + (v86 << 12));
        *v89 = v90;
        v91 = v90;
        v92 = *(_QWORD *)(a1 + 1560);
        *(_DWORD *)(a1 + 1576) += 4096;
        v93 = *(_DWORD *)(a1 + 1556);
        v150 = v92;
        for ( j = v90; j < v90 + 4096; j += 64 )
          _mm_prefetch(j, 0);
        v95 = v150;
        v96 = v150;
        v151 = 32;
        do
        {
          v97 = 8LL;
          do
          {
            v98 = *((_QWORD *)v91 + 1) ^ __ROL8__(*(_QWORD *)v91 ^ v96, v93);
            v91 += 16;
            v96 = __ROL8__(v98, v93);
            --v97;
          }
          while ( v97 );
          v99 = __ROL8__(v95 ^ (v91 - v90), 17);
          v93 = ((unsigned __int8)((((v99 ^ v95 ^ (unsigned __int64)&v91[-v87 + -4096 * v86])
                                   * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v99 ^ v95 ^ ((_BYTE)v91 - v87)) ^ (unsigned __int8)v93) & 0x3F;
          if ( !v93 )
            LOBYTE(v93) = 1;
          --v151;
        }
        while ( v151 );
        v100 = v148;
        v101 = v96;
        v87 = v130;
        while ( 1 )
        {
          v101 >>= 31;
          if ( !v101 )
            break;
          LODWORD(v96) = v101 ^ v96;
        }
        ++v86;
        *v88 = v96 & 0x7FFFFFFF;
        v89 += 6;
        ++v88;
      }
      while ( v86 < v148 );
      v2 = a2;
      v102 = v130;
      v103 = v131;
      v84 = (char **)v133;
      sub_140176024(a1, v133, v148);
      v104 = 0;
      v152 = 0;
      if ( v148 )
      {
        v105 = (unsigned int *)v146;
        v106 = (_DWORD *)(v131 + 16);
        while ( 1 )
        {
          v107 = *v105;
          v139 = *v105;
          if ( *v105 == (*v106 & 0x7FFFFFFF) )
            goto LABEL_139;
          v108 = v102 + (v104 << 12);
          v140 = v108;
          if ( (*(_DWORD *)(a1 + 1868) & 0x40) == 0 )
            goto LABEL_136;
          v109 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v110 = v108 & 0xFFFFFFFFFFFFF000uLL;
          v111 = (v108 + 4095) | 0xFFF;
          v112 = (v108 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v113 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 1080))(v110, 0LL);
            if ( v113 != -1073741267 )
              break;
            if ( v109 > 1u )
            {
LABEL_133:
              v110 += 4096LL;
              v112 += 4096LL;
              if ( v112 == v111 )
              {
LABEL_134:
                __writecr8(v109);
                v104 = v152;
                goto LABEL_158;
              }
            }
            else
            {
              __writecr8(v109);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
          }
          if ( v113 >= 0 )
            goto LABEL_133;
          __writecr8(v109);
          v100 = v148;
          v107 = v139;
          v108 = v140;
          v104 = v152;
          v102 = v130;
          v103 = v131;
LABEL_136:
          v114 = v107;
          v115 = (unsigned int)*v106;
          LODWORD(v115) = v115 & 0x7FFFFFFF;
          if ( !*(_DWORD *)(a1 + 1728) )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 24LL) = v114 ^ v115;
            if ( !*(_DWORD *)(a1 + 1728) )
            {
              *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(a1 + 1744) = (char *)a2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(a1 + 1752) = *a2;
              *(_QWORD *)(a1 + 1760) = v108;
              *(_DWORD *)(a1 + 1728) = 1;
            }
          }
LABEL_139:
          v116 = 16LL;
          v117 = (__int64 *)(v103 + 20LL * v104);
          v118 = (__int64 *)(48LL * v104 + v133 + 16);
          while ( 1 )
          {
            v119 = *v118++;
            v120 = *v117++;
            if ( v119 != v120 )
              break;
            v116 = (unsigned int)(v116 - 8);
            if ( (unsigned int)v116 < 8 )
            {
              if ( !(_DWORD)v116 )
                goto LABEL_159;
              while ( 1 )
              {
                v121 = *(unsigned __int8 *)v118;
                v118 = (__int64 *)((char *)v118 + 1);
                v122 = *(unsigned __int8 *)v117;
                v117 = (__int64 *)((char *)v117 + 1);
                if ( v121 != v122 )
                  goto LABEL_146;
                v26 = (_DWORD)v116 == 1;
                v116 = (unsigned int)(v116 - 1);
                if ( v26 )
                  goto LABEL_159;
              }
            }
          }
LABEL_146:
          v123 = v102 + (v104 << 12);
          v141 = v123;
          if ( (*(_DWORD *)(a1 + 1868) & 0x40) != 0 )
          {
            v109 = KeGetCurrentIrql();
            v124 = v123 & 0xFFFFFFFFFFFFF000uLL;
            v125 = (v123 + 4095) | 0xFFF;
            v126 = (v123 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_148:
            __writecr8(2uLL);
            while ( 1 )
            {
              v127 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(a1 + 1080))(
                       v124,
                       0LL,
                       v116,
                       v117);
              if ( v127 == -1073741267 )
              {
                if ( v109 <= 1u )
                {
                  __writecr8(v109);
                  KeGetCurrentIrql();
                  goto LABEL_148;
                }
              }
              else if ( v127 < 0 )
              {
                __writecr8(v109);
                v123 = v141;
                v104 = v152;
                break;
              }
              v124 += 4096LL;
              v126 += 4096LL;
              if ( v126 == v125 )
                goto LABEL_134;
            }
          }
          if ( !*(_DWORD *)(a1 + 1728) )
          {
            *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1744) = (char *)a2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1752) = *a2;
            *(_QWORD *)(a1 + 1760) = v123;
            *(_DWORD *)(a1 + 1728) = 1;
          }
LABEL_158:
          v100 = v148;
LABEL_159:
          v102 = v130;
          ++v104;
          v103 = v131;
          ++v105;
          v106 += 5;
          v152 = v104;
          if ( v104 >= v100 )
          {
            LODWORD(v81) = v136;
            v84 = (char **)v133;
            break;
          }
        }
      }
      v81 = v100 + (unsigned int)v81;
      v136 = v81;
      v130 = (v100 << 12) + v102;
      *(_DWORD *)(a1 + 1576) += v100 << 15;
      v83 = v134 - v100;
      v131 = v103 + 20LL * v100;
      v134 -= v100;
    }
    while ( *(_DWORD *)(a1 + 1576) < *(_DWORD *)(a1 + 1580) && v83 );
    v33 = v142;
    v32 = v143;
    v34 = v137;
LABEL_166:
    while ( 1 )
    {
      v128 = v33 + 20 * v81;
      if ( v128 == v32 || *(char *)(v128 + 15) >= 0 )
        break;
      v81 = (unsigned int)(v81 + 1);
    }
    v33 += 20 * v81;
    v34 += (unsigned int)((_DWORD)v81 << 12);
    v142 = v33;
    v137 = v34;
  }
  while ( v33 != v32 );
  if ( v33 != v32 )
  {
    *(_DWORD *)(a1 + 1572) = (v33 - (__int64)v144) / 20;
    return;
  }
LABEL_80:
  v63 = *(_QWORD *)(a1 + 1216);
  v64 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(a1 + 336))(v63, v32);
  v65 = **(unsigned int ***)(a1 + 1384);
  v66 = v65 + 4;
  v67 = *((_BYTE *)v65 + 12) != 0;
  v68 = (unsigned __int64)&v65[6 * *v65 + 4];
  do
  {
    v69 = 24LL;
    v70 = (char *)(v2 + 6);
    v71 = v66;
    while ( 1 )
    {
      v72 = *(_QWORD *)v71;
      v71 += 2;
      v73 = *(_QWORD *)v70;
      v70 += 8;
      if ( v72 != v73 )
        break;
      v69 = (unsigned int)(v69 - 8);
      if ( (unsigned int)v69 < 8 )
      {
        if ( !(_DWORD)v69 )
          goto LABEL_171;
        while ( 1 )
        {
          v74 = *(_BYTE *)v71;
          v71 = (unsigned int *)((char *)v71 + 1);
          v75 = *v70++;
          if ( v74 != v75 )
            goto LABEL_170;
          v26 = (_DWORD)v69 == 1;
          v69 = (unsigned int)(v69 - 1);
          if ( v26 )
            goto LABEL_171;
        }
      }
    }
LABEL_170:
    v66 += 6;
  }
  while ( (unsigned __int64)v66 < v68 );
LABEL_171:
  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 400))(*(_QWORD *)(a1 + 1216), v69, v70, v71);
  __writecr8(v64);
  if ( !v67 )
    goto LABEL_182;
  if ( (*(_DWORD *)(a1 + 1868) & 0x10) != 0 && !*(_DWORD *)(a1 + 1728) )
  {
    *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 1744) = (char *)v2 - 0x4C48B4211BBACBEBLL;
    *(_QWORD *)(a1 + 1752) = *v2;
    *(_QWORD *)(a1 + 1760) = 1LL;
    *(_DWORD *)(a1 + 1728) = 1;
  }
  if ( *((_QWORD *)v2 + 3) != 1LL )
  {
LABEL_182:
    if ( v66 == (unsigned int *)v68 && !*(_DWORD *)(a1 + 1728) )
    {
      *(_QWORD *)(a1 + 1736) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 1744) = (char *)v2 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(a1 + 1752) = *v2;
      *(_QWORD *)(a1 + 1760) = v66;
      *(_DWORD *)(a1 + 1728) = 1;
    }
  }
  *(_DWORD *)(a1 + 1572) = 0;
}
