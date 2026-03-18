/*
 * XREFs of sub_1407DCDE8 @ 0x1407DCDE8
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x14026F010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402807C8 @ 0x1402807C8 (sub_1402807C8.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     sub_140175FBC @ 0x140175FBC (sub_140175FBC.c)
 *     sub_140176024 @ 0x140176024 (sub_140176024.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     sub_140282ED4 @ 0x140282ED4 (sub_140282ED4.c)
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 *     MmImageSectionPagable @ 0x1404B240C (MmImageSectionPagable.c)
 */

__int64 __fastcall sub_1407DCDE8(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // rsi
  int v6; // r13d
  int v7; // edi
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v10; // r12d
  unsigned int *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // xmm1_8
  int v14; // ecx
  __int128 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  unsigned int v20; // r15d
  unsigned int v21; // eax
  int v22; // r13d
  _BYTE *v23; // rdi
  int v24; // edx
  unsigned int v25; // eax
  __int64 v26; // r9
  int v27; // r8d
  unsigned __int64 v28; // rcx
  int v29; // ebx
  int v30; // ecx
  int v32; // ecx
  _BYTE *v33; // rsi
  _QWORD *v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 i; // rax
  _QWORD *v38; // rdx
  __int64 v39; // r8
  char *v40; // rcx
  char v41; // al
  __int64 v42; // rbx
  _QWORD *v43; // rax
  unsigned __int64 v44; // rcx
  int v45; // r11d
  _DWORD *v46; // rsi
  int v47; // ecx
  __int16 v48; // ax
  char *v49; // r8
  int v50; // r10d
  signed __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 *v54; // r9
  unsigned int v55; // r8d
  __int64 *v56; // r10
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  char *v61; // r8
  int v62; // r10d
  __int64 v63; // rdx
  __int64 v64; // rax
  char *v65; // r8
  int v66; // r10d
  __int64 v67; // rdx
  __int64 v68; // rax
  unsigned int v69; // ecx
  BOOL v70; // r12d
  unsigned int v71; // r15d
  int v72; // eax
  ULONG_PTR v73; // rdx
  _BYTE *v74; // rcx
  __int64 v75; // r9
  BOOL v76; // r11d
  ULONG_PTR v77; // rax
  unsigned int v78; // r13d
  _DWORD *v79; // rsi
  int v80; // eax
  int v81; // r11d
  char *v82; // rbx
  int v83; // ecx
  __int16 v84; // ax
  char *v85; // r8
  int v86; // r10d
  signed __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 *v90; // r9
  unsigned int v91; // r8d
  __int64 *v92; // r10
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  char *v97; // r8
  int v98; // r10d
  __int64 v99; // rdx
  __int64 v100; // rax
  char *v101; // r8
  int v102; // r9d
  signed __int64 v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rax
  unsigned int v106; // ecx
  int v107; // eax
  bool v108; // zf
  __int64 *v109; // rax
  int v110; // r8d
  unsigned int *v111; // rcx
  ULONG_PTR v112; // r9
  _BYTE *v113; // rax
  unsigned __int64 v114; // r8
  __int64 v115; // rsi
  unsigned __int64 v116; // rax
  char **v117; // r15
  unsigned int v118; // eax
  __int64 v119; // rbx
  unsigned int v120; // r11d
  ULONG_PTR v121; // rsi
  _DWORD *v122; // r13
  char *v123; // r9
  char *v124; // r10
  const char *v125; // rax
  int j; // r12d
  unsigned __int64 v127; // r8
  unsigned __int64 v128; // rdi
  __int64 v129; // rdx
  __int64 v130; // rax
  __int64 v131; // r8
  unsigned __int64 v132; // rcx
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rsi
  __int64 v135; // r15
  _DWORD *v136; // r12
  __int64 v137; // r13
  _DWORD *v138; // r9
  _QWORD *v139; // r11
  char *v140; // r15
  int v141; // r8d
  char *v142; // rcx
  _QWORD *v143; // rdx
  __int64 v144; // r10
  char v145; // al
  int v146; // ecx
  __int64 k; // rcx
  unsigned __int64 v148; // rax
  __int64 v149; // r15
  bool v150; // cf
  __int64 v151; // r13
  int v152; // r8d
  int v153; // r12d
  unsigned int v154; // eax
  __int64 v155; // rsi
  int v156; // edx
  unsigned int v157; // eax
  __int64 v158; // r9
  int v159; // r8d
  unsigned __int64 v160; // rcx
  int v161; // edi
  int v162; // ecx
  __int64 v163; // rdi
  int v164; // ecx
  _QWORD *v165; // rax
  __int64 v166; // rdx
  _QWORD *v167; // r9
  int v168; // r10d
  const char *v169; // rax
  unsigned __int64 v170; // r8
  unsigned int m; // r11d
  __int64 v172; // rax
  __int64 v173; // r8
  unsigned __int128 v174; // rax
  unsigned int v175; // edx
  unsigned __int64 v176; // rax
  __int64 v177; // rax
  unsigned __int64 n; // rax
  unsigned int v179; // [rsp+38h] [rbp-D0h]
  int v180; // [rsp+38h] [rbp-D0h]
  int v181; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v182; // [rsp+40h] [rbp-C8h]
  int v183; // [rsp+40h] [rbp-C8h]
  _BYTE *v184; // [rsp+48h] [rbp-C0h]
  unsigned int v185; // [rsp+48h] [rbp-C0h]
  __int64 v186; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v187; // [rsp+58h] [rbp-B0h]
  __int64 v188; // [rsp+60h] [rbp-A8h]
  __int64 v189; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v190; // [rsp+70h] [rbp-98h]
  char **v191; // [rsp+78h] [rbp-90h]
  int v192; // [rsp+80h] [rbp-88h]
  int v193; // [rsp+84h] [rbp-84h]
  __int64 v194; // [rsp+88h] [rbp-80h]
  _BYTE *v195; // [rsp+90h] [rbp-78h]
  __int64 v196; // [rsp+98h] [rbp-70h]
  __int128 v197; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v198; // [rsp+B0h] [rbp-58h]
  char *v199; // [rsp+B8h] [rbp-50h]
  __int64 *v200; // [rsp+C0h] [rbp-48h]
  char *v201; // [rsp+C8h] [rbp-40h]
  char *v202; // [rsp+D0h] [rbp-38h]
  char *v203; // [rsp+D8h] [rbp-30h]
  __int64 *v204; // [rsp+E0h] [rbp-28h]
  char *v205; // [rsp+E8h] [rbp-20h]
  char *v206; // [rsp+F0h] [rbp-18h]
  _BYTE *v207; // [rsp+F8h] [rbp-10h]
  _BYTE *v208; // [rsp+100h] [rbp-8h]
  __int64 v209; // [rsp+108h] [rbp+0h]
  __int64 v210; // [rsp+110h] [rbp+8h]
  _BYTE v211[96]; // [rsp+118h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+190h] [rbp+88h]
  int v215; // [rsp+198h] [rbp+90h]
  unsigned int v216; // [rsp+1A0h] [rbp+98h] BYREF

  BugCheckParameter2 = a2;
  v3 = *(_BYTE **)a1;
  v191 = (char **)(*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 504LL))(a2);
  v5 = (__int64)v191;
  if ( !v191 )
    return 3221225595LL;
  v6 = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 84))(a2);
  LODWORD(v188) = v6;
  v181 = *((unsigned __int16 *)v191 + 3);
  if ( *((_WORD *)v191 + 3) && *((_DWORD *)v191 + 14) >= 0x1000u && (a2 & 0xFFF) == 0 )
  {
    v7 = -1073741275;
    v8 = *((_QWORD *)v3 + 152);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*((void (__fastcall **)(__int64))v3 + 42))(v8);
    v10 = 24;
    v11 = (unsigned int *)**((_QWORD **)v3 + 173);
    v12 = (unsigned __int64)(v11 + 4);
    while ( *(_QWORD *)(v12 + 8) != a2 )
    {
      v12 += 24LL;
      if ( v12 >= (unsigned __int64)&v11[6 * *v11 + 4] )
        goto LABEL_10;
    }
    v13 = *(_QWORD *)(v12 + 16);
    v7 = 0;
    v197 = *(_OWORD *)v12;
    v198 = v13;
LABEL_10:
    (*((void (__fastcall **)(_QWORD))v3 + 50))(*((_QWORD *)v3 + 152));
    __writecr8(CurrentIrql);
    if ( v7 >= 0 )
    {
      v17 = (unsigned int)v198;
    }
    else
    {
      v14 = 24;
      v15 = &v197;
      v16 = 3LL;
      do
      {
        *(_QWORD *)v15 = 0LL;
        v14 -= 8;
        v15 = (__int128 *)((char *)v15 + 8);
        --v16;
      }
      while ( v16 );
      for ( ; v14; --v14 )
      {
        *(_BYTE *)v15 = 0;
        v15 = (__int128 *)((char *)v15 + 1);
      }
      v17 = *(unsigned int *)(v5 + 80);
      LODWORD(v198) = *(_DWORD *)(v5 + 80);
      *((_QWORD *)&v197 + 1) = a2;
      *(_QWORD *)&v197 = 1LL;
    }
    v18 = *((unsigned int *)v3 + 377);
    v19 = *((_DWORD *)v3 + 443);
    v187 = ((a2 & 0xFFF) + 4095 + v17) >> 12;
    v20 = 20 * v187;
    v21 = 20 * v187 + v18 + 48;
    v22 = (v6 != 0) + 33;
    if ( v21 <= *((_DWORD *)v3 + 499) )
    {
      v23 = v3;
      v194 = (__int64)v3;
      *((_DWORD *)v3 + 377) = v21;
    }
    else
    {
      v194 = sub_140282ED4(v3, v21, v19);
      v23 = (_BYTE *)v194;
      if ( !v194 )
        return 3221225626LL;
      v24 = *((_DWORD *)v3 + 466);
      if ( (v24 & 4) == 0 )
      {
        v25 = *((_DWORD *)v3 + 377);
        v26 = *((_QWORD *)v3 + 185);
        v27 = (v24 & 0x20000000) != 0 ? *((_DWORD *)v3 + 443) : 0;
        if ( v25 >= 8 )
        {
          v28 = (unsigned __int64)v25 >> 3;
          do
          {
            *(_QWORD *)v3 = 0LL;
            v25 -= 8;
            v3 += 8;
            --v28;
          }
          while ( v28 );
        }
        for ( ; v25; --v25 )
          *v3++ = 0;
        v29 = *((_DWORD *)v23 + 443);
        *((_DWORD *)v23 + 443) = v27;
        if ( v27 == 3 )
        {
          (*((void (__fastcall **)(__int64))v23 + 108))(v26);
        }
        else
        {
          v30 = 0;
          if ( (*((_DWORD *)v23 + 466) & 0x10000000) == 0 )
            v30 = v27;
          if ( v30 )
            (*((void (__fastcall **)(__int64, _QWORD))v23 + 69))(v26 - 8, *(_QWORD *)(v26 - 8));
          else
            (*((void (__fastcall **)(__int64))v23 + 32))(v26);
        }
        *((_DWORD *)v23 + 443) = v29;
      }
      *((_DWORD *)v23 + 466) &= ~4u;
    }
    ++*((_DWORD *)v23 + 387);
    v32 = 48;
    v33 = &v23[v18];
    v207 = v33;
    v34 = v33;
    v35 = 6LL;
    do
    {
      *v34 = 0LL;
      v32 -= 8;
      ++v34;
      --v35;
    }
    while ( v35 );
    for ( ; v32; --v32 )
    {
      *(_BYTE *)v34 = 0;
      v34 = (_QWORD *)((char *)v34 + 1);
    }
    *(_DWORD *)v33 = v22;
    *((_QWORD *)v33 + 1) = 0LL;
    *((_DWORD *)v33 + 4) = 0;
    v36 = *((_QWORD *)v23 + 195);
    for ( i = v36; ; LODWORD(v36) = i ^ v36 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v38 = v33 + 24;
    v208 = v33;
    *((_DWORD *)v33 + 5) = v36 & 0x7FFFFFFF;
    v39 = 3LL;
    v40 = (char *)&v197;
    *(_QWORD *)a1 = v23;
    do
    {
      v10 -= 8;
      *v38 = *(_QWORD *)v40;
      v40 += 8;
      ++v38;
      --v39;
    }
    while ( v39 );
    for ( ; v10; --v10 )
    {
      v41 = *v40++;
      *(_BYTE *)v38 = v41;
      v38 = (_QWORD *)((char *)v38 + 1);
    }
    LOBYTE(v38) = 1;
    v42 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))v23 + 62))(
            BugCheckParameter2,
            v38,
            12LL,
            &v216);
    v186 = v42;
    v216 &= -(v42 != 0);
    v215 = a3 & 1;
    if ( !v215 )
    {
      v42 = 0LL;
      v216 = 0;
      v186 = 0LL;
    }
    v195 = v33 + 48;
    v184 = v33 + 48;
    v189 = (__int64)&v33[20 * (unsigned int)v187 + 48];
    v43 = v33 + 48;
    if ( v20 >= 8 )
    {
      v44 = (unsigned __int64)v20 >> 3;
      do
      {
        *v43 = -1LL;
        v20 -= 8;
        ++v43;
        --v44;
      }
      while ( v44 );
    }
    for ( ; v20; --v20 )
    {
      *(_BYTE *)v43 = -1;
      v43 = (_QWORD *)((char *)v43 + 1);
    }
    v45 = 0;
    v46 = (_DWORD *)((char *)v191 + *((unsigned __int16 *)v191 + 10) + 24);
    v187 = (unsigned __int64)&v46[10 * v181];
    if ( (v46[9] & 0x2000000) != 0
      || (v47 = *v46, *v46 == 1414090313) && v46[1] == 1195525195
      || v47 == 1162297680 && ((v48 = *((_WORD *)v46 + 2), v48 == 30583) || v48 == 29303 || v48 == 30839)
      || v47 == 1095914053 && *((_WORD *)v46 + 2) == 16724 )
    {
LABEL_82:
      v45 = 1;
    }
    else
    {
      v49 = (char *)*((_QWORD *)v23 + 223);
      v50 = 7;
      v200 = (__int64 *)*((_QWORD *)v23 + 224);
      v51 = (char *)v46 - v49;
      v201 = (char *)*((_QWORD *)v23 + 225);
      v202 = (char *)*((_QWORD *)v23 + 226);
      v199 = v49;
      while ( 1 )
      {
        v52 = (unsigned __int8)v49[v51];
        v53 = (unsigned __int8)*v49++;
        if ( v52 != v53 )
          break;
        if ( !--v50 )
        {
LABEL_81:
          v42 = v186;
          goto LABEL_82;
        }
      }
      v54 = v200;
      v55 = 8;
      v56 = (__int64 *)v46;
      while ( 1 )
      {
        v57 = *v56++;
        v58 = *v54++;
        if ( v57 != v58 )
          break;
        v55 -= 8;
        if ( v55 < 8 )
        {
          if ( !v55 )
            goto LABEL_81;
          while ( 1 )
          {
            v59 = *(unsigned __int8 *)v56;
            v56 = (__int64 *)((char *)v56 + 1);
            v60 = *(unsigned __int8 *)v54;
            v54 = (__int64 *)((char *)v54 + 1);
            if ( v59 != v60 )
              goto LABEL_74;
            if ( !--v55 )
              goto LABEL_81;
          }
        }
      }
LABEL_74:
      v61 = v201;
      v62 = 4;
      while ( 1 )
      {
        v63 = (unsigned __int8)v61[(char *)v46 - v201];
        v64 = (unsigned __int8)*v61++;
        if ( v63 != v64 )
          break;
        if ( !--v62 )
          goto LABEL_81;
      }
      v65 = v202;
      v66 = 6;
      while ( 1 )
      {
        v67 = (unsigned __int8)v65[(char *)v46 - v202];
        v68 = (unsigned __int8)*v65++;
        if ( v67 != v68 )
          break;
        if ( !--v66 )
          goto LABEL_81;
      }
      v42 = v186;
    }
    if ( (int)v46[9] < 0 )
      v45 = 1;
    if ( v45 && *v46 == 1414090313 && v46[1] == 1195525195 && (*((_DWORD *)v23 + 466) & 0x10000000) != 0 )
      v45 = 0;
    v69 = v46[2];
    v70 = v45 == 0;
    v179 = v46[3];
    if ( v46[4] > v69 )
      v69 = v46[4];
    v71 = (v69 + v46[3] + 4095) & 0xFFFFF000;
    v72 = MmImageSectionPagable((__int64)v46);
    v73 = BugCheckParameter2;
    v74 = v184;
    v75 = v189;
    v76 = v72 != 0;
    v182 = BugCheckParameter2;
    v77 = BugCheckParameter2;
    v78 = 0;
    if ( v184 != (_BYTE *)v189 )
    {
      v79 = v46 + 1;
      while ( 1 )
      {
        if ( v78 < v179 )
        {
LABEL_138:
          v109 = &v186;
          v110 = 0;
          v111 = &v216;
          while ( 1 )
          {
            v112 = *v109;
            if ( *v111 )
            {
              if ( v182 >= v112 && v182 <= v112 + *v111 - 1LL )
                break;
            }
            ++v110;
            ++v111;
            ++v109;
            if ( v110 )
            {
              if ( v78 >= v179 && v76 )
              {
                v113 = v184;
              }
              else
              {
                v113 = v184;
                *((_DWORD *)v184 + 4) &= ~0x80000000;
              }
              v113[15] &= ~0x80u;
              break;
            }
          }
          v74 = v184;
          v77 = v182;
          v75 = v189;
          goto LABEL_151;
        }
        if ( v78 >= v71 )
        {
          if ( v79 - 1 == (_DWORD *)v187 )
          {
            if ( (*((_DWORD *)v23 + 466) & 0x200000) == 0 )
            {
              v192 = 25984;
              KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, BugCheckParameter2, 5uLL, 0LL);
            }
            if ( !*((_DWORD *)v23 + 432) )
            {
              *((_QWORD *)v23 + 218) = 0LL;
              *((_QWORD *)v23 + 217) = v23 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v23 + 219) = 271LL;
              *((_QWORD *)v23 + 220) = BugCheckParameter2;
              *((_DWORD *)v23 + 432) = 1;
            }
            return 3221225595LL;
          }
          if ( v79[12] < v78 )
          {
            v77 = v182;
            goto LABEL_151;
          }
          v80 = v79[18];
          v79 += 10;
          v81 = 0;
          if ( (v80 & 0x2000000) != 0
            || (v82 = (char *)(v79 - 1), v83 = *(v79 - 1), v83 == 1414090313) && *v79 == 1195525195
            || v83 == 1162297680 && ((v84 = *(_WORD *)v79, *(_WORD *)v79 == 30583) || v84 == 29303 || v84 == 30839)
            || v83 == 1095914053 && *(_WORD *)v79 == 16724 )
          {
            v81 = 1;
          }
          else
          {
            v85 = (char *)*((_QWORD *)v23 + 223);
            v86 = 7;
            v204 = (__int64 *)*((_QWORD *)v23 + 224);
            v87 = v82 - v85;
            v205 = (char *)*((_QWORD *)v23 + 225);
            v206 = (char *)*((_QWORD *)v23 + 226);
            v203 = v85;
            while ( 1 )
            {
              v88 = (unsigned __int8)v85[v87];
              v89 = (unsigned __int8)*v85++;
              if ( v88 != v89 )
                break;
              if ( !--v86 )
              {
LABEL_126:
                v81 = 1;
                goto LABEL_127;
              }
            }
            v90 = v204;
            v91 = 8;
            v92 = (__int64 *)(v79 - 1);
            while ( 1 )
            {
              v93 = *v92++;
              v94 = *v90++;
              if ( v93 != v94 )
                break;
              v91 -= 8;
              if ( v91 < 8 )
              {
                if ( !v91 )
                  goto LABEL_126;
                while ( 1 )
                {
                  v95 = *(unsigned __int8 *)v92;
                  v92 = (__int64 *)((char *)v92 + 1);
                  v96 = *(unsigned __int8 *)v90;
                  v90 = (__int64 *)((char *)v90 + 1);
                  if ( v95 != v96 )
                    goto LABEL_119;
                  if ( !--v91 )
                    goto LABEL_126;
                }
              }
            }
LABEL_119:
            v97 = v205;
            v98 = 4;
            while ( 1 )
            {
              v99 = (unsigned __int8)v97[v82 - v205];
              v100 = (unsigned __int8)*v97++;
              if ( v99 != v100 )
                break;
              if ( !--v98 )
                goto LABEL_126;
            }
            v101 = v206;
            v102 = 6;
            v103 = v82 - v206;
            while ( 1 )
            {
              v104 = (unsigned __int8)v101[v103];
              v105 = (unsigned __int8)*v101++;
              if ( v104 != v105 )
                break;
              if ( !--v102 )
                goto LABEL_126;
            }
          }
LABEL_127:
          if ( (int)v79[8] < 0 )
            v81 = 1;
          if ( v81 && *(v79 - 1) == 1414090313 && *v79 == 1195525195 && (*((_DWORD *)v23 + 466) & 0x10000000) != 0 )
            v81 = 0;
          v106 = v79[1];
          v70 = v81 == 0;
          if ( v79[3] > v106 )
            v106 = v79[3];
          v71 = (v106 + 4095 + v79[2]) & 0xFFFFF000;
          v107 = MmImageSectionPagable((__int64)(v79 - 1));
          v74 = v184;
          v75 = v189;
          v108 = v107 == 0;
          v77 = v182;
          v76 = !v108;
        }
        if ( v70 )
          goto LABEL_138;
LABEL_151:
        v77 += 4096LL;
        v74 += 20;
        v78 += 4096;
        v182 = v77;
        v184 = v74;
        if ( v74 == (_BYTE *)v75 )
        {
          v42 = v186;
          v73 = BugCheckParameter2;
          break;
        }
      }
    }
    v114 = (unsigned __int64)v195;
    if ( v195 != (_BYTE *)v75 )
    {
      do
      {
        LODWORD(v115) = 0;
        if ( v114 != v75 )
        {
          v116 = v114;
          do
          {
            if ( *(char *)(v116 + 15) < 0 )
              break;
            v115 = (unsigned int)(v115 + 1);
            v116 = v114 + 20 * v115;
          }
          while ( v116 != v75 );
          v183 = v115;
          if ( (_DWORD)v115 )
          {
            v117 = (char **)*((_QWORD *)v23 + 255);
            v118 = v115;
            v185 = v115;
            v191 = v117;
            v187 = v114;
            v190 = v73;
            do
            {
              v119 = 8LL;
              v120 = 0;
              if ( v118 < 8 )
                v119 = v118;
              v121 = v190;
              v122 = v211;
              do
              {
                v117[1] = (char *)4096;
                v123 = (char *)(v121 + (v120 << 12));
                *v117 = v123;
                v124 = v123;
                *((_DWORD *)v23 + 394) += 4096;
                v125 = v123;
                for ( j = *((_DWORD *)v23 + 389); v125 < v123 + 4096; v125 += 64 )
                  _mm_prefetch(v125, 0);
                v127 = *((_QWORD *)v23 + 195);
                v180 = 32;
                v128 = v127;
                do
                {
                  v129 = 8LL;
                  do
                  {
                    v130 = v127 ^ *(_QWORD *)v124;
                    v131 = *((_QWORD *)v124 + 1);
                    v124 += 16;
                    v127 = __ROL8__(__ROL8__(v130, j) ^ v131, j);
                    --v129;
                  }
                  while ( v129 );
                  v132 = __ROL8__(v128 ^ (v124 - v123), 17) ^ v128 ^ (v124 - v123);
                  v196 = (v132 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  j = ((unsigned __int8)(v196 ^ v132) ^ (unsigned __int8)j) & 0x3F;
                  if ( !j )
                    LOBYTE(j) = 1;
                  --v180;
                }
                while ( v180 );
                v23 = (_BYTE *)v194;
                v133 = v127;
                v121 = v190;
                while ( 1 )
                {
                  v133 >>= 31;
                  if ( !v133 )
                    break;
                  LODWORD(v127) = v133 ^ v127;
                }
                ++v120;
                *v122 = v127 & 0x7FFFFFFF;
                v117 += 6;
                ++v122;
              }
              while ( v120 < (unsigned int)v119 );
              v134 = v187;
              v135 = (__int64)v191;
              sub_140176024((__int64)v23, (__int64)v191, v119);
              v136 = v211;
              v137 = (unsigned int)v119;
              v138 = (_DWORD *)(v134 + 16);
              v139 = (_QWORD *)v134;
              v140 = (char *)(v135 + 16);
              do
              {
                v141 = 16;
                v142 = v140;
                v143 = v139;
                v144 = 2LL;
                do
                {
                  v141 -= 8;
                  *v143 = *(_QWORD *)v142;
                  v142 += 8;
                  ++v143;
                  --v144;
                }
                while ( v144 );
                for ( ; v141; --v141 )
                {
                  v145 = *v142++;
                  *(_BYTE *)v143 = v145;
                  v143 = (_QWORD *)((char *)v143 + 1);
                }
                v140 += 48;
                v139 = (_QWORD *)((char *)v139 + 20);
                v146 = (*v136++ ^ *v138) & 0x7FFFFFFF;
                *v138 ^= v146;
                v138 += 5;
                --v137;
              }
              while ( v137 );
              v23 = (_BYTE *)v194;
              v117 = v191;
              v190 += (unsigned int)((_DWORD)v119 << 12);
              v118 = v185 - v119;
              v187 = v134 + 20 * v119;
              *(_DWORD *)(v194 + 1576) += (_DWORD)v119 << 15;
              v185 = v118;
            }
            while ( v118 );
            LODWORD(v115) = v183;
            v114 = (unsigned __int64)v195;
            v75 = v189;
          }
        }
        for ( k = 5LL * (unsigned int)v115; ; k = 5 * v115 )
        {
          v148 = v114 + 4 * k;
          if ( v148 == v75 || *(char *)(v148 + 15) >= 0 )
            break;
          v115 = (unsigned int)(v115 + 1);
        }
        v73 = (unsigned int)((_DWORD)v115 << 12) + BugCheckParameter2;
        BugCheckParameter2 = v73;
        v114 += 20LL * (unsigned int)v115;
        v195 = (_BYTE *)v114;
      }
      while ( v114 != v75 );
      v42 = v186;
    }
    if ( !v215 )
      return 0LL;
    v149 = v216;
    if ( !v216 )
      return 0LL;
    v150 = (_DWORD)v188 != 0;
    LODWORD(v188) = -(int)v188;
    v151 = *((unsigned int *)v23 + 377);
    v152 = *((_DWORD *)v23 + 443);
    v209 = 0LL;
    v153 = v150 + 13;
    v154 = v151 + 48;
    if ( (unsigned int)(v151 + 48) <= *((_DWORD *)v23 + 499) )
    {
      v155 = (__int64)v23;
      *((_DWORD *)v23 + 377) = v154;
LABEL_212:
      ++*(_DWORD *)(v155 + 1548);
      v163 = v155 + v151;
      v164 = 48;
      v210 = v155 + v151;
      v165 = (_QWORD *)(v155 + v151);
      v166 = 6LL;
      do
      {
        *v165 = 0LL;
        v164 -= 8;
        ++v165;
        --v166;
      }
      while ( v166 );
      for ( ; v164; --v164 )
      {
        *(_BYTE *)v165 = 0;
        v165 = (_QWORD *)((char *)v165 + 1);
      }
      *(_DWORD *)v163 = v153;
      *(_QWORD *)(v163 + 8) = v42;
      if ( v153 == 32 && (_DWORD)v149 )
        sub_140175FBC(v155, v42, v149, v163 + 24);
      *(_DWORD *)(v163 + 16) = v149;
      *(_DWORD *)(v155 + 1576) += v149;
      v167 = (_QWORD *)v42;
      v168 = *(_DWORD *)(v155 + 1556);
      v169 = (const char *)v42;
      if ( v42 < (unsigned __int64)(v42 + v149) )
      {
        do
        {
          _mm_prefetch(v169, 0);
          v169 += 64;
        }
        while ( (unsigned __int64)v169 < v42 + v149 );
      }
      v170 = *(_QWORD *)(v155 + 1560);
      for ( m = (unsigned int)v149 >> 7; m; --m )
      {
        v172 = 8LL;
        do
        {
          v173 = v167[1] ^ __ROL8__(*v167 ^ v170, v168);
          v167 += 2;
          v170 = __ROL8__(v173, v168);
          --v172;
        }
        while ( v172 );
        v174 = (__ROL8__(*(_QWORD *)(v155 + 1560) ^ ((unsigned __int64)v167 - v42), 17) ^ *(_QWORD *)(v155 + 1560) ^ ((unsigned __int64)v167 - v42))
             * (unsigned __int128)0x7010008004002001uLL;
        v168 = ((unsigned __int8)v174 ^ (unsigned __int8)(BYTE8(v174) ^ v168)) & 0x3F;
        if ( !v168 )
          LOBYTE(v168) = 1;
      }
      v175 = v149 & 0x7F;
      if ( v175 >= 8 )
      {
        v176 = (unsigned __int64)(v149 & 0x7F) >> 3;
        do
        {
          v170 = __ROL8__(*v167++ ^ v170, v168);
          v175 -= 8;
          --v176;
        }
        while ( v176 );
      }
      for ( ; v175; --v175 )
      {
        v177 = *(unsigned __int8 *)v167;
        v167 = (_QWORD *)((char *)v167 + 1);
        v170 = __ROL8__(v177 ^ v170, v168);
      }
      for ( n = v170; ; LODWORD(v170) = n ^ v170 )
      {
        n >>= 31;
        if ( !n )
          break;
      }
      *(_DWORD *)(v163 + 20) = v170 & 0x7FFFFFFF;
      *(_DWORD *)(v155 + 1576) += v149;
      if ( (*(_DWORD *)(v155 + 1864) & 0x40000000) != 0 )
      {
        if ( (_DWORD)v149 )
          sub_140175FBC(v155, v42, v149, v163 + 28);
      }
      *(_DWORD *)(v163 + 24) = 1;
      *(_QWORD *)a1 = v155;
      return 0LL;
    }
    v155 = sub_140282ED4(v23, v154, v152);
    if ( v155 )
    {
      v156 = *((_DWORD *)v23 + 466);
      if ( (v156 & 4) == 0 )
      {
        v157 = *((_DWORD *)v23 + 377);
        v158 = *((_QWORD *)v23 + 185);
        v159 = (v156 & 0x20000000) != 0 ? *((_DWORD *)v23 + 443) : 0;
        if ( v157 >= 8 )
        {
          v160 = (unsigned __int64)v157 >> 3;
          do
          {
            *(_QWORD *)v23 = 0LL;
            v157 -= 8;
            v23 += 8;
            --v160;
          }
          while ( v160 );
        }
        for ( ; v157; --v157 )
          *v23++ = 0;
        v161 = *(_DWORD *)(v155 + 1772);
        *(_DWORD *)(v155 + 1772) = v159;
        if ( v159 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v155 + 864))(v158);
        }
        else
        {
          v162 = 0;
          if ( (*(_DWORD *)(v155 + 1864) & 0x10000000) == 0 )
            v162 = v159;
          if ( v162 )
            (*(void (__fastcall **)(__int64, _QWORD))(v155 + 552))(v158 - 8, *(_QWORD *)(v158 - 8));
          else
            (*(void (__fastcall **)(__int64))(v155 + 256))(v158);
        }
        *(_DWORD *)(v155 + 1772) = v161;
      }
      *(_DWORD *)(v155 + 1864) &= ~4u;
      goto LABEL_212;
    }
    return 3221225626LL;
  }
  if ( (*((_DWORD *)v3 + 466) & 0x200000) == 0 )
  {
    v193 = 25984;
    KeBugCheckEx(__ROR4__(20288, 70), 0xAuLL, a2, 4uLL, 0LL);
  }
  if ( !*((_DWORD *)v3 + 432) )
  {
    *((_QWORD *)v3 + 218) = 0LL;
    *((_QWORD *)v3 + 219) = 271LL;
    *((_QWORD *)v3 + 217) = v3 - 0x5C5FC0A76E374B18LL;
    *((_QWORD *)v3 + 220) = a2;
    *((_DWORD *)v3 + 432) = 1;
  }
  return 3221225595LL;
}
