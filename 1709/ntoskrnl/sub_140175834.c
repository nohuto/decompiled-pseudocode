/*
 * XREFs of sub_140175834 @ 0x140175834
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_14017573C @ 0x14017573C (sub_14017573C.c)
 *     sub_14017579C @ 0x14017579C (sub_14017579C.c)
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 */

void __fastcall sub_140175834(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v15; // rcx
  unsigned int *v16; // rsi
  char v17; // r13
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  char *v20; // r8
  unsigned int *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  char v25; // cl
  char v26; // al
  __int64 v27; // r9
  int *v28; // rbp
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r11
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int *v39; // r13
  __int64 v40; // rbp
  __int64 v41; // r9
  _QWORD *v42; // r8
  const char *v43; // rax
  unsigned __int64 v44; // rsi
  int v45; // r11d
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int64 v49; // rcx
  unsigned __int64 i; // rax
  unsigned int v51; // esi
  unsigned __int8 v52; // r12
  unsigned __int64 v53; // r15
  int v54; // eax
  int *v55; // r15
  __int64 v56; // r8
  unsigned __int8 *v57; // r9
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned __int8 v62; // r12
  unsigned int *v63; // rcx
  unsigned int *v64; // rsi
  char v65; // r13
  unsigned __int64 v66; // rbp
  __int64 v67; // rdx
  char *v68; // r8
  unsigned int *v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rax
  bool v72; // zf
  char v73; // cl
  char v74; // al
  __int64 v75; // rax
  unsigned __int8 v76; // r15
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // r12
  int v79; // eax
  __int64 v80; // rbp
  __int64 v81; // rax
  unsigned int v82; // ecx
  char **v83; // rsi
  int v84; // r12d
  unsigned int v85; // r11d
  char **v86; // r15
  char *v87; // r9
  char *v88; // r10
  unsigned __int64 v89; // rax
  int v90; // r13d
  const char *j; // rax
  unsigned __int64 v92; // r12
  unsigned __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // r8
  unsigned __int64 v96; // rcx
  unsigned int v97; // r12d
  unsigned __int64 k; // rax
  __int64 v99; // r15
  __int64 v100; // r13
  unsigned int v101; // r11d
  unsigned int *v102; // rbp
  _DWORD *v103; // rsi
  unsigned int v104; // ecx
  __int64 v105; // rdx
  unsigned __int8 v106; // r12
  unsigned __int64 v107; // r15
  unsigned __int64 v108; // r13
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 *v113; // r9
  __int64 *v114; // r10
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rcx
  unsigned __int64 v120; // r15
  unsigned __int64 v121; // r13
  int v122; // eax
  __int64 v123; // rax
  __int64 v124; // [rsp+20h] [rbp-C8h]
  int v125; // [rsp+28h] [rbp-C0h]
  __int64 v126; // [rsp+28h] [rbp-C0h]
  __int64 v127; // [rsp+30h] [rbp-B8h]
  _DWORD *v128; // [rsp+30h] [rbp-B8h]
  unsigned int v129; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v130; // [rsp+38h] [rbp-B0h]
  __int64 v131; // [rsp+38h] [rbp-B0h]
  int v132; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v133; // [rsp+48h] [rbp-A0h]
  int v134; // [rsp+48h] [rbp-A0h]
  __int64 v135; // [rsp+50h] [rbp-98h]
  __int64 v136; // [rsp+58h] [rbp-90h]
  __int64 v137; // [rsp+58h] [rbp-90h]
  __int64 v138; // [rsp+60h] [rbp-88h]
  __int64 v139; // [rsp+60h] [rbp-88h]
  __int64 v140; // [rsp+68h] [rbp-80h]
  __int64 v141; // [rsp+70h] [rbp-78h]
  int *v142; // [rsp+78h] [rbp-70h]
  _BYTE v143[16]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v144[88]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v146; // [rsp+100h] [rbp+18h]
  unsigned int v147; // [rsp+100h] [rbp+18h]
  int v148; // [rsp+108h] [rbp+20h]
  int v149; // [rsp+108h] [rbp+20h]
  unsigned __int64 v150; // [rsp+108h] [rbp+20h]
  int v151; // [rsp+108h] [rbp+20h]
  unsigned int v152; // [rsp+108h] [rbp+20h]

  v2 = a2;
  if ( *a2 == 12 )
  {
    if ( !*(_QWORD *)(a1 + 2000) )
    {
      *(_DWORD *)(a1 + 1668) = 0;
      return;
    }
    v4 = *(unsigned int *)(a1 + 1668);
    v5 = *(_DWORD *)(a1 + 2012);
    if ( (_DWORD)v4 )
    {
      if ( (((unsigned __int8)v5 ^ (unsigned __int8)(v5 >> 3)) & 4) != 0 )
      {
        *(_DWORD *)(a1 + 1668) = 0;
        return;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 2012) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * v5)) & 0x20;
    }
    if ( (*(_DWORD *)(a1 + 2012) & 4) != 0 )
    {
      v6 = *((_QWORD *)v2 + 4);
      if ( v6 )
      {
        v7 = v6 + v4;
        v8 = ((_WORD)v4 + (_WORD)v6) & 0xFFF;
        v9 = (unsigned int)(v2[10] - v4) + 4095LL;
      }
      else
      {
        v9 = v2[2] & 0xFFF;
        v7 = *((_QWORD *)v2 + 1);
        v8 = (unsigned int)v2[4] + 4095LL;
      }
      v10 = v7 & 0xFFFFFFFFFFFFF000uLL;
      v11 = (unsigned __int64)(v9 + v8) >> 12;
      while ( v11 )
      {
        --v11;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64, _QWORD))(a1 + 672))(v10, v4, 0LL)
          && !*(_DWORD *)(a1 + 1872) )
        {
          *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1888) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1896) = *v2;
          *(_QWORD *)(a1 + 1904) = v10;
          *(_DWORD *)(a1 + 1872) = 1;
        }
        *(_DWORD *)(a1 + 1672) += 256;
        v10 += 4096LL;
        v12 = *(_DWORD *)(a1 + 1672);
        if ( v6 )
        {
          *(_DWORD *)(a1 + 1668) += 4096;
          if ( v12 >= *(_DWORD *)(a1 + 1676) )
            break;
        }
      }
      if ( v6 && !v11 )
        *(_DWORD *)(a1 + 1668) = 0;
      if ( !*(_DWORD *)(a1 + 1668) )
      {
        v13 = *(_QWORD *)(a1 + 1272);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 320))(v13, v4, 0LL);
        v15 = **(unsigned int ***)(a1 + 1480);
        v16 = v15 + 4;
        v17 = *((_BYTE *)v15 + 12);
        v18 = (unsigned __int64)&v15[6 * *v15 + 4];
        while ( 2 )
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
              v24 = (_DWORD)v19 == 0;
              while ( !v24 )
              {
                v25 = *(_BYTE *)v21;
                v21 = (unsigned int *)((char *)v21 + 1);
                v26 = *v20++;
                if ( v25 != v26 )
                  goto LABEL_31;
                v24 = (_DWORD)v19 == 1;
                v19 = (unsigned int)(v19 - 1);
              }
              goto LABEL_32;
            }
          }
LABEL_31:
          v16 += 6;
          if ( (unsigned __int64)v16 < v18 )
            continue;
          break;
        }
LABEL_32:
        (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 384))(
          *(_QWORD *)(a1 + 1272),
          v19,
          v20,
          v21);
        __writecr8(CurrentIrql);
        if ( !v17 )
          goto LABEL_37;
        if ( (*(_DWORD *)(a1 + 2012) & 0x10) != 0 && !*(_DWORD *)(a1 + 1872) )
        {
          *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1888) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1896) = *v2;
          *(_QWORD *)(a1 + 1904) = 1LL;
          *(_DWORD *)(a1 + 1872) = 1;
        }
        if ( *((_QWORD *)v2 + 3) != 1LL )
        {
LABEL_37:
          if ( v16 == (unsigned int *)v18 && !*(_DWORD *)(a1 + 1872) )
          {
            *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1888) = (char *)v2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1896) = *v2;
            *(_QWORD *)(a1 + 1904) = v16;
            *(_DWORD *)(a1 + 1872) = 1;
          }
        }
      }
      return;
    }
  }
  v27 = *((_QWORD *)v2 + 4);
  v28 = v2 + 12;
  v127 = v27;
  v142 = v2 + 12;
  v29 = *(unsigned int *)(a1 + 1668);
  v30 = ((v27 & 0xFFF) + (unsigned __int64)(unsigned int)v2[10] + 4095) >> 12;
  v31 = (unsigned int)v30;
  v125 = v30;
  v133 = (unsigned int)v30;
  v32 = (__int64)&v2[5 * (unsigned int)v30 + 12];
  v33 = (__int64)&v2[5 * v29 + 12];
  v34 = v27 + (unsigned int)((_DWORD)v29 << 12);
  v141 = v32;
  v140 = v33;
  v135 = v34;
  if ( (*(_DWORD *)(a1 + 2008) & 0x40000000) != 0 && (*(_DWORD *)(a1 + 2012) & 0x1000) == 0 || !*(_QWORD *)(a1 + 2232) )
  {
    v35 = 0;
    v146 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v30 <= 0x10 )
      {
        v32 = v35;
        if ( v35 >= (unsigned int)v30 )
          goto LABEL_78;
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
      if ( *((char *)v39 + 15) < 0 )
        goto LABEL_77;
      *(_DWORD *)(a1 + 1672) += 4096;
      LODWORD(v41) = *(_DWORD *)(a1 + 1652);
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
      v44 = *(_QWORD *)(a1 + 1656);
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
        v49 = __ROL8__(*(_QWORD *)(a1 + 1656) ^ ((unsigned __int64)v42 - v40), 17) ^ *(_QWORD *)(a1 + 1656) ^ ((unsigned __int64)v42 - v40);
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
      v51 = v44 & 0x7FFFFFFF;
      v148 = v39[4];
      if ( v51 == (v148 & 0x7FFFFFFF) )
      {
LABEL_69:
        v55 = v39 + 4;
        goto LABEL_70;
      }
      if ( (*(_DWORD *)(a1 + 2012) & 0x40) == 0 )
        goto LABEL_87;
      v52 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v53 = v40 & 0xFFFFFFFFFFFFF000uLL;
      v130 = (v40 & 0xFFFFFFFFFFFFF000uLL) - 1;
      while ( 1 )
      {
        v54 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(a1 + 1104))(v53, 0LL, v42, v41);
        if ( v54 != -1073741267 )
          break;
        if ( v148 >= 0 )
          goto LABEL_86;
        if ( v52 > 1u )
        {
LABEL_67:
          v41 = 4096LL;
          v53 += 4096LL;
          v130 += 4096LL;
          if ( v130 == ((v40 + 4095) | 0xFFF) )
          {
            __writecr8(v52);
            goto LABEL_69;
          }
        }
        else
        {
          __writecr8(v52);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
      if ( v54 >= 0 )
        goto LABEL_67;
LABEL_86:
      __writecr8(v52);
LABEL_87:
      v55 = v39 + 4;
      v75 = (unsigned int)v39[4];
      LODWORD(v75) = v75 & 0x7FFFFFFF;
      if ( !*(_DWORD *)(a1 + 1872) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1352) + 24LL) = v75 ^ v51;
        if ( !*(_DWORD *)(a1 + 1872) )
        {
          *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1888) = (char *)a2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1896) = *a2;
          *(_QWORD *)(a1 + 1904) = v40;
          *(_DWORD *)(a1 + 1872) = 1;
        }
      }
LABEL_70:
      sub_14017573C(a1, v40, 0x1000u, (__int64)v143);
      v56 = 16LL;
      v57 = v143;
      while ( 1 )
      {
        v58 = *(_QWORD *)v57;
        v57 += 8;
        v59 = *(_QWORD *)v39;
        v39 += 2;
        if ( v58 != v59 )
          break;
        v56 = (unsigned int)(v56 - 8);
        if ( (unsigned int)v56 < 8 )
        {
          if ( !(_DWORD)v56 )
            goto LABEL_76;
          while ( 1 )
          {
            v32 = *v57++;
            v60 = *(unsigned __int8 *)v39;
            v39 = (int *)((char *)v39 + 1);
            if ( v32 != v60 )
              goto LABEL_90;
            v24 = (_DWORD)v56 == 1;
            v56 = (unsigned int)(v56 - 1);
            if ( v24 )
              goto LABEL_76;
          }
        }
      }
LABEL_90:
      v149 = *v55;
      if ( (*(_DWORD *)(a1 + 2012) & 0x40) != 0 )
      {
        v76 = KeGetCurrentIrql();
        v77 = v40 & 0xFFFFFFFFFFFFF000uLL;
        v78 = (v40 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_92:
        __writecr8(2uLL);
        while ( 1 )
        {
          v79 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int8 *))(a1 + 1104))(
                  v77,
                  0LL,
                  v56,
                  v57);
          if ( v79 == -1073741267 )
          {
            if ( v149 >= 0 )
              goto LABEL_100;
            if ( v76 <= 1u )
            {
              __writecr8(v76);
              KeGetCurrentIrql();
              goto LABEL_92;
            }
          }
          else if ( v79 < 0 )
          {
LABEL_100:
            __writecr8(v76);
            break;
          }
          v77 += 4096LL;
          v78 += 4096LL;
          if ( v78 == ((v40 + 4095) | 0xFFF) )
          {
            __writecr8(v76);
            goto LABEL_76;
          }
        }
      }
      if ( !*(_DWORD *)(a1 + 1872) )
      {
        *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1888) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 1896) = *a2;
        *(_QWORD *)(a1 + 1904) = v40;
        *(_DWORD *)(a1 + 1872) = 1;
      }
LABEL_76:
      *(_DWORD *)(a1 + 1672) += 0x10000;
      LODWORD(v30) = v125;
      v27 = v127;
      v31 = v133;
LABEL_77:
      v28 = v2 + 12;
      v35 = v146 + 1;
      v146 = v35;
      if ( v35 >= 0x10 )
      {
LABEL_78:
        v61 = *(_QWORD *)(a1 + 1272);
        v62 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        (*(void (__fastcall **)(__int64, __int64))(a1 + 320))(v61, v32);
        v63 = **(unsigned int ***)(a1 + 1480);
        v64 = v63 + 4;
        v65 = *((_BYTE *)v63 + 12);
        v66 = (unsigned __int64)&v63[6 * *v63 + 4];
        while ( 2 )
        {
          v67 = 24LL;
          v68 = (char *)(v2 + 6);
          v69 = v64;
          while ( 1 )
          {
            v70 = *(_QWORD *)v69;
            v69 += 2;
            v71 = *(_QWORD *)v68;
            v68 += 8;
            if ( v70 != v71 )
              break;
            v67 = (unsigned int)(v67 - 8);
            if ( (unsigned int)v67 < 8 )
            {
              v72 = (_DWORD)v67 == 0;
              while ( !v72 )
              {
                v73 = *(_BYTE *)v69;
                v69 = (unsigned int *)((char *)v69 + 1);
                v74 = *v68++;
                if ( v73 != v74 )
                  goto LABEL_171;
                v72 = (_DWORD)v67 == 1;
                v67 = (unsigned int)(v67 - 1);
              }
              goto LABEL_172;
            }
          }
LABEL_171:
          v64 += 6;
          if ( (unsigned __int64)v64 < v66 )
            continue;
          break;
        }
LABEL_172:
        (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 384))(
          *(_QWORD *)(a1 + 1272),
          v67,
          v68,
          v69);
        __writecr8(v62);
        if ( !v65 )
          goto LABEL_183;
        if ( (*(_DWORD *)(a1 + 2012) & 0x10) != 0 && !*(_DWORD *)(a1 + 1872) )
        {
          *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1888) = (char *)v2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1896) = *v2;
          *(_QWORD *)(a1 + 1904) = 1LL;
          *(_DWORD *)(a1 + 1872) = 1;
        }
        if ( *((_QWORD *)v2 + 3) != 1LL )
        {
LABEL_183:
          if ( v64 == (unsigned int *)v66 && !*(_DWORD *)(a1 + 1872) )
          {
            *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1888) = (char *)v2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1896) = *v2;
            *(_QWORD *)(a1 + 1904) = v64;
            *(_DWORD *)(a1 + 1872) = 1;
          }
        }
        *(_DWORD *)(a1 + 1668) = 0;
        return;
      }
    }
  }
  if ( v33 == v32 )
    goto LABEL_78;
  while ( *(_DWORD *)(a1 + 1672) < *(_DWORD *)(a1 + 1676) )
  {
    v80 = 0LL;
    if ( v33 != v32 )
    {
      v81 = v33;
      do
      {
        if ( *(char *)(v81 + 15) < 0 )
          break;
        v80 = (unsigned int)(v80 + 1);
        v81 = v33 + 20 * v80;
      }
      while ( v81 != v32 );
      if ( (_DWORD)v80 )
      {
        v82 = v80;
        v124 = v33;
        v132 = v80;
        v83 = *(char ***)(a1 + 2232);
        LODWORD(v80) = 0;
        v131 = (__int64)v83;
        v134 = 0;
        v126 = v34;
        do
        {
          v84 = 8;
          if ( v82 < 8 )
            v84 = v82;
          v85 = 0;
          v147 = v84;
          v86 = v83;
          v128 = v144;
          do
          {
            v86[1] = (char *)4096;
            v87 = (char *)(v126 + (v85 << 12));
            *v86 = v87;
            v88 = v87;
            v89 = *(_QWORD *)(a1 + 1656);
            *(_DWORD *)(a1 + 1672) += 4096;
            v90 = *(_DWORD *)(a1 + 1652);
            v150 = v89;
            for ( j = v87; j < v87 + 4096; j += 64 )
              _mm_prefetch(j, 0);
            v92 = v150;
            v93 = v150;
            v151 = 32;
            do
            {
              v94 = 8LL;
              do
              {
                v95 = *((_QWORD *)v88 + 1) ^ __ROL8__(*(_QWORD *)v88 ^ v93, v90);
                v88 += 16;
                v93 = __ROL8__(v95, v90);
                --v94;
              }
              while ( v94 );
              v96 = __ROL8__(v92 ^ (v88 - v87), 17) ^ v92 ^ (v88 - v87);
              v90 = ((unsigned __int8)(((v96 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v96) ^ (unsigned __int8)v90) & 0x3F;
              if ( !v90 )
                LOBYTE(v90) = 1;
              --v151;
            }
            while ( v151 );
            v97 = v147;
            for ( k = v93; ; LODWORD(v93) = k ^ v93 )
            {
              k >>= 31;
              if ( !k )
                break;
            }
            ++v85;
            v86 += 6;
            *v128++ = v93 & 0x7FFFFFFF;
          }
          while ( v85 < v147 );
          v2 = a2;
          v99 = v126;
          v100 = v124;
          v83 = (char **)v131;
          sub_14017579C(a1, v131, v147);
          v101 = 0;
          v152 = 0;
          if ( v147 )
          {
            v102 = (unsigned int *)v144;
            v103 = (_DWORD *)(v124 + 16);
            do
            {
              v104 = *v102;
              v129 = *v102;
              if ( *v102 == (*v103 & 0x7FFFFFFF) )
                goto LABEL_141;
              v105 = v99 + (v101 << 12);
              v138 = v105;
              if ( (*(_DWORD *)(a1 + 2012) & 0x40) == 0 )
                goto LABEL_138;
              v106 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v107 = v105 & 0xFFFFFFFFFFFFF000uLL;
              v136 = (v105 + 4095) | 0xFFF;
              v108 = (v105 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v109 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 1104))(v107, 0LL);
                if ( v109 != -1073741267 )
                  break;
                if ( v106 > 1u )
                {
LABEL_135:
                  v107 += 4096LL;
                  v108 += 4096LL;
                  if ( v108 == v136 )
                  {
LABEL_136:
                    __writecr8(v106);
                    v101 = v152;
                    goto LABEL_159;
                  }
                }
                else
                {
                  __writecr8(v106);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
              }
              if ( v109 >= 0 )
                goto LABEL_135;
              __writecr8(v106);
              v97 = v147;
              v104 = v129;
              v105 = v138;
              v101 = v152;
              v99 = v126;
              v100 = v124;
LABEL_138:
              v110 = v104;
              v111 = (unsigned int)*v103;
              LODWORD(v111) = v111 & 0x7FFFFFFF;
              if ( !*(_DWORD *)(a1 + 1872) )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 1352) + 24LL) = v110 ^ v111;
                if ( !*(_DWORD *)(a1 + 1872) )
                {
                  *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(a1 + 1888) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(a1 + 1896) = *a2;
                  *(_QWORD *)(a1 + 1904) = v105;
                  *(_DWORD *)(a1 + 1872) = 1;
                }
              }
LABEL_141:
              v112 = 16LL;
              v113 = (__int64 *)(v100 + 20LL * v101);
              v114 = (__int64 *)(48LL * v101 + v131 + 16);
              do
              {
                v115 = *v114++;
                v116 = *v113++;
                if ( v115 != v116 )
                  goto LABEL_148;
                v112 = (unsigned int)(v112 - 8);
              }
              while ( (unsigned int)v112 >= 8 );
              if ( (_DWORD)v112 )
              {
                while ( 1 )
                {
                  v117 = *(unsigned __int8 *)v114;
                  v114 = (__int64 *)((char *)v114 + 1);
                  v118 = *(unsigned __int8 *)v113;
                  v113 = (__int64 *)((char *)v113 + 1);
                  if ( v117 != v118 )
                    break;
                  v24 = (_DWORD)v112 == 1;
                  v112 = (unsigned int)(v112 - 1);
                  if ( v24 )
                    goto LABEL_160;
                }
LABEL_148:
                v119 = v99 + (v101 << 12);
                v137 = v119;
                if ( (*(_DWORD *)(a1 + 2012) & 0x40) != 0 )
                {
                  v106 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v120 = v119 & 0xFFFFFFFFFFFFF000uLL;
                  v139 = (v119 + 4095) | 0xFFF;
                  v121 = (v119 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v122 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(a1 + 1104))(
                               v120,
                               0LL,
                               v112,
                               v113);
                      if ( v122 == -1073741267 )
                        break;
                      if ( v122 < 0 )
                      {
                        __writecr8(v106);
                        v119 = v137;
                        v101 = v152;
                        goto LABEL_157;
                      }
LABEL_154:
                      v120 += 4096LL;
                      v121 += 4096LL;
                      if ( v121 == v139 )
                        goto LABEL_136;
                    }
                    if ( v106 > 1u )
                      goto LABEL_154;
                    __writecr8(v106);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                }
LABEL_157:
                if ( !*(_DWORD *)(a1 + 1872) )
                {
                  *(_QWORD *)(a1 + 1880) = a1 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(a1 + 1888) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(a1 + 1896) = *a2;
                  *(_QWORD *)(a1 + 1904) = v119;
                  *(_DWORD *)(a1 + 1872) = 1;
                }
LABEL_159:
                v97 = v147;
              }
LABEL_160:
              v99 = v126;
              ++v101;
              v100 = v124;
              ++v102;
              v103 += 5;
              v152 = v101;
            }
            while ( v101 < v97 );
            LODWORD(v80) = v134;
            v83 = (char **)v131;
          }
          v80 = v97 + (unsigned int)v80;
          v134 = v80;
          v126 = (v97 << 12) + v99;
          *(_DWORD *)(a1 + 1672) += v97 << 15;
          v82 = v132 - v97;
          v124 = v100 + 20LL * v97;
          v132 -= v97;
        }
        while ( *(_DWORD *)(a1 + 1672) < *(_DWORD *)(a1 + 1676) && v82 );
        v33 = v140;
        v32 = v141;
        v34 = v135;
      }
    }
    while ( 1 )
    {
      v123 = v33 + 20 * v80;
      if ( v123 == v32 || *(char *)(v123 + 15) >= 0 )
        break;
      v80 = (unsigned int)(v80 + 1);
    }
    v34 += (unsigned int)((_DWORD)v80 << 12);
    v135 = v34;
    v33 += 20 * v80;
    v140 = v33;
    if ( v33 == v32 )
      break;
  }
  if ( v33 == v32 )
    goto LABEL_78;
  *(_DWORD *)(a1 + 1668) = (v33 - (__int64)v142) / 20;
}
