/*
 * XREFs of KiSwInterruptDispatch @ 0x140193570
 * Callers:
 *     KiSwInterrupt @ 0x1401AF5C0 (KiSwInterrupt.c)
 * Callees:
 *     KiGetTrapFrameMode @ 0x14015EB5C (KiGetTrapFrameMode.c)
 *     KiReadKernelDr7 @ 0x1402418EC (KiReadKernelDr7.c)
 *     SdbpCheckDll @ 0x1402E9520 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x1402E97E0 (KeGuardCheckICall.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r15
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // r14
  int v16; // r10d
  _QWORD *v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  const char *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r8
  unsigned int i; // r11d
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned __int64 v29; // rax
  unsigned __int64 j; // r11
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int *v33; // rax
  int v34; // ecx
  int v35; // esi
  unsigned int v36; // ecx
  __int64 v37; // r14
  int v38; // r12d
  __int64 v39; // rdx
  _QWORD *v40; // r9
  unsigned int v41; // r8d
  int *v42; // rdi
  __int64 v43; // r10
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  __int64 v48; // rax
  int v49; // eax
  unsigned __int64 v50; // rax
  _QWORD *v51; // r11
  __int64 v52; // r8
  _QWORD *v53; // r9
  const char *v54; // rax
  int v55; // r14d
  unsigned __int64 v56; // rsi
  unsigned int k; // r10d
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rsi
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  unsigned __int64 m; // rax
  unsigned int v65; // esi
  BOOL v66; // r12d
  __int64 v67; // rcx
  __int64 v68; // rdx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // r14
  int v72; // eax
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rcx
  unsigned __int8 v76; // r12
  __int64 v77; // rdx
  unsigned int *v78; // rcx
  unsigned int *v79; // rsi
  char v80; // r13
  unsigned __int64 v81; // r15
  __int64 v82; // r8
  __int64 *v83; // r9
  unsigned int *v84; // r10
  __int64 v85; // rcx
  __int64 v86; // rax
  bool v87; // zf
  __int64 v88; // rax
  __int64 v89; // rcx
  unsigned __int8 v90; // r15
  unsigned __int64 v91; // rdx
  unsigned int *v92; // rcx
  unsigned int *v93; // rsi
  unsigned __int64 v94; // r14
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  unsigned __int8 v99; // r12
  __int64 v100; // rdx
  unsigned int *v101; // rcx
  unsigned int *v102; // rsi
  char v103; // r13
  unsigned __int64 v104; // r15
  __int64 v105; // r8
  __int64 *v106; // r9
  unsigned int *v107; // r10
  __int64 v108; // rcx
  __int64 v109; // rax
  bool v110; // zf
  __int64 v111; // rax
  __int64 v112; // r13
  __int64 v113; // rdi
  __int64 v114; // r14
  unsigned __int64 v115; // r12
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 *DpcStack; // rsi
  unsigned __int64 v119; // r9
  unsigned __int64 v120; // r14
  unsigned int v121; // r8d
  _QWORD *n; // rdx
  unsigned __int64 v123; // rcx
  unsigned __int64 v124; // rax
  __int64 v125; // rdi
  _QWORD *v126; // rcx
  char *v127; // r8
  int v128; // r10d
  signed __int64 v129; // r8
  int v130; // ecx
  int v131; // ecx
  int v132; // ecx
  int v133; // ecx
  int v134; // ecx
  volatile signed __int32 *v135; // rax
  int v136; // edi
  _QWORD *v137; // r9
  int v138; // r10d
  const char *v139; // rax
  __int64 v140; // r8
  __int64 v141; // rax
  __int64 v142; // r8
  unsigned __int64 v143; // rcx
  __int64 v144; // rax
  void (__fastcall *v145)(_QWORD *, __int64, __int64, _QWORD *); // rax
  struct _KTHREAD *KernelDr7; // rax
  int v147; // ecx
  _QWORD *v149; // [rsp+40h] [rbp-39h]
  int v150; // [rsp+40h] [rbp-39h]
  __int64 v151; // [rsp+48h] [rbp-31h]
  int v152; // [rsp+48h] [rbp-31h]
  __int64 v153; // [rsp+78h] [rbp-1h]
  unsigned int v154; // [rsp+80h] [rbp+7h] BYREF
  int v156; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v157; // [rsp+F0h] [rbp+77h]
  int v158; // [rsp+F0h] [rbp+77h]
  _QWORD *v159; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = a1;
  v2 = qword_14044C208;
  v3 = __rdtsc();
  v4 = __ROR8__(v3, 3);
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  *(_QWORD *)(v2 + 2328) + 2431LL,
                  dword_14039D390[((unsigned __int8)(v4 ^ v3) ^ (unsigned __int8)(((v4 ^ v3)
                                                                                 * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0xF]);
  v149 = PoolWithTag;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v7 = 18LL;
    PoolWithTag[2] = sub_14019FCB0;
    v8 = PoolWithTag + 4;
    PoolWithTag[3] = PoolWithTag;
    v9 = PoolWithTag + 4;
    v10 = (_OWORD *)v2;
    do
    {
      *v9 = *v10;
      v9[1] = v10[1];
      v9[2] = v10[2];
      v9[3] = v10[3];
      v9[4] = v10[4];
      v9[5] = v10[5];
      v9[6] = v10[6];
      v9 += 8;
      v11 = v10[7];
      v10 += 8;
      *(v9 - 1) = v11;
      --v7;
    }
    while ( v7 );
    *v9 = *v10;
    v9[1] = v10[1];
    *((_QWORD *)v9 + 4) = *((_QWORD *)v10 + 4);
    v6[292] = v2;
    v6[293] = v6 + 297;
    v12 = __rdtsc();
    v13 = *((unsigned int *)v6 + 435);
    v14 = (__ROR8__(v12, 3) ^ v12) * (unsigned __int128)0x7010008004002001uLL;
    *((_DWORD *)v6 + 442) = 0;
    *((_DWORD *)v6 + 440) = (*((_QWORD *)&v14 + 1) ^ (unsigned __int64)v14) % v13;
    v15 = v6[292];
    v16 = *((_DWORD *)v6 + 437);
    v17 = (_QWORD *)v15;
    v18 = __rdtsc();
    v19 = __ROR8__(v18, 3);
    v20 = v6[219];
    *((_DWORD *)v6 + 444) = (((v19 ^ v18) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v19 ^ v18));
    v6[294] = ((unsigned __int64)v6 + 2431) & 0xFFFFFFFFFFFFFFF8uLL;
    v21 = (const char *)v15;
    v22 = *(unsigned int *)(v15 + 1668);
    if ( v15 < v15 + v22 )
    {
      do
      {
        _mm_prefetch(v21, 0);
        v21 += 64;
      }
      while ( (unsigned __int64)v21 < v15 + v22 );
    }
    v23 = v20;
    for ( i = (unsigned int)v22 >> 7; i; --i )
    {
      v25 = 8LL;
      do
      {
        v26 = v17[1] ^ __ROL8__(*v17 ^ v23, v16);
        v17 += 2;
        v23 = __ROL8__(v26, v16);
        --v25;
      }
      while ( v25 );
      v27 = __ROL8__(v20 ^ ((unsigned __int64)v17 - v15), 17) ^ v20 ^ ((unsigned __int64)v17 - v15);
      v16 = ((unsigned __int8)(((v27 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v27) ^ (unsigned __int8)v16) & 0x3F;
      if ( !v16 )
        LOBYTE(v16) = 1;
    }
    v28 = *(_DWORD *)(v15 + 1668) & 0x7F;
    if ( v28 >= 8 )
    {
      v29 = (unsigned __int64)(v22 & 0x7F) >> 3;
      do
      {
        v23 = __ROL8__(*v17++ ^ v23, v16);
        v28 -= 8;
        --v29;
      }
      while ( v29 );
    }
    for ( j = 0LL; v28; --v28 )
    {
      v31 = *(unsigned __int8 *)v17;
      v17 = (_QWORD *)((char *)v17 + 1);
      v23 = __ROL8__(v31 ^ v23, v16);
    }
    if ( v23 != qword_14044C210 )
    {
      v32 = v6[181];
      *(_QWORD *)v32 = v15;
      *(_DWORD *)(v32 + 16) = v22;
      if ( !*((_DWORD *)v6 + 492) )
      {
        *(_QWORD *)(v6[181] + 24LL) = v23 ^ qword_14044C210;
        if ( !*((_DWORD *)v6 + 492) )
        {
          v6[248] = 0LL;
          v6[247] = v6 - 0xB8BF814EDC6E95FLL;
          v6[249] = 273LL;
          v6[250] = v23;
          *((_DWORD *)v6 + 492) = 1;
        }
      }
    }
    v153 = 0LL;
    v33 = &v154;
    v34 = 4;
    do
    {
      *(_BYTE *)v33 = 0;
      v33 = (unsigned int *)((char *)v33 + 1);
      --v34;
    }
    while ( v34 );
    v35 = 12;
    v36 = 0;
    v156 = 0;
    v37 = 3LL;
    v38 = 24;
    if ( *((_DWORD *)v6 + 435) )
    {
      v39 = 1LL;
      do
      {
        v40 = v8;
        v41 = 0;
        if ( v8[288] )
          v40 = (_QWORD *)v8[288];
        v42 = (int *)((char *)v40 + *((unsigned int *)v40 + 426));
        if ( (_DWORD)v153 && HIDWORD(v153) <= v36 )
        {
          v41 = HIDWORD(v153);
          v42 = (int *)((char *)v40 + v154);
        }
        if ( v41 != v36 )
        {
          v43 = v36 - v41;
          v41 = v36;
          while ( 1 )
          {
            v44 = *v42;
            if ( *v42 <= 12 )
              break;
            if ( v44 == 28 )
            {
              v49 = *((unsigned __int16 *)v42 + 20);
LABEL_52:
              v48 = (v49 + 55) & 0xFFFFFFF8;
              goto LABEL_53;
            }
            if ( v44 != 30 )
            {
              if ( v44 > 32 )
              {
                if ( v44 <= 34 )
                {
                  v39 = ((v42[8] & 0xFFF) + (unsigned __int64)(unsigned int)v42[10] + 4095) >> 12;
                  v48 = (unsigned int)(20 * v39 + 48);
                  goto LABEL_53;
                }
                if ( v44 == 43 )
                  goto LABEL_47;
              }
              goto LABEL_49;
            }
            v39 = ((v42[9] - 1) / 0xCu + 7) & 0xFFFFFFF8;
            v48 = (unsigned int)v39 + 24 * (*((unsigned __int16 *)v42 + 20) + 2);
LABEL_53:
            v42 = (int *)((char *)v42 + v48);
            if ( !--v43 )
            {
              v36 = v156;
              v38 = 24;
              goto LABEL_55;
            }
            v39 = 1LL;
          }
          if ( v44 == 12 || (v45 = v44 - 1) == 0 )
          {
LABEL_47:
            v39 = (unsigned int)v42[4] / 0xCuLL;
            v48 = (unsigned int)(4 * v39 + 48);
            goto LABEL_53;
          }
          v46 = v45 - 6;
          if ( !v46 )
          {
            v48 = (unsigned int)(24 * (v42[6] + 2));
            goto LABEL_53;
          }
          v47 = v46 - 1;
          if ( v47 )
          {
            if ( v47 == 2 )
            {
              v48 = (unsigned int)(16 * (v42[7] + 3));
              goto LABEL_53;
            }
LABEL_49:
            v48 = 48LL;
            goto LABEL_53;
          }
          v49 = *((unsigned __int16 *)v42 + 16);
          goto LABEL_52;
        }
LABEL_55:
        LODWORD(v153) = 1;
        HIDWORD(v153) = v41;
        v154 = (_DWORD)v42 - (_DWORD)v40;
        v50 = *v42;
        if ( (_DWORD)v50 == 36 )
        {
          v51 = (_QWORD *)*((_QWORD *)v42 + 1);
          v52 = (unsigned int)v42[4];
          v53 = v51;
          *((_DWORD *)v8 + 434) += v52;
          v54 = (const char *)v51;
          v55 = *((_DWORD *)v8 + 429);
          if ( v51 < (_QWORD *)((char *)v51 + v52) )
          {
            do
            {
              _mm_prefetch(v54, 0);
              v54 += 64;
            }
            while ( v54 < (const char *)v51 + v52 );
          }
          v56 = v8[215];
          for ( k = (unsigned int)v52 >> 7; k; --k )
          {
            v58 = 8LL;
            do
            {
              v59 = v56 ^ *v53;
              v60 = v53[1];
              v53 += 2;
              v56 = __ROL8__(__ROL8__(v59, v55) ^ v60, v55);
              --v58;
            }
            while ( v58 );
            v61 = __ROL8__(v8[215] ^ ((char *)v53 - (char *)v51), 17) ^ v8[215] ^ ((char *)v53 - (char *)v51);
            v39 = (v61 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v55 = ((unsigned __int8)(v39 ^ v61) ^ (unsigned __int8)v55) & 0x3F;
            if ( !v55 )
              LOBYTE(v55) = 1;
          }
          v62 = v52 & 0x7F;
          if ( (unsigned int)v62 >= 8 )
          {
            v39 = (unsigned __int64)(unsigned int)v62 >> 3;
            do
            {
              v56 = __ROL8__(*v53++ ^ v56, v55);
              v62 = (unsigned int)(v62 - 8);
              --v39;
            }
            while ( v39 );
          }
          if ( (_DWORD)v62 )
          {
            do
            {
              v63 = *(unsigned __int8 *)v53;
              v53 = (_QWORD *)((char *)v53 + 1);
              v56 = __ROL8__(v63 ^ v56, v55);
              v87 = (_DWORD)v62 == 1;
              v62 = (unsigned int)(v62 - 1);
            }
            while ( !v87 );
          }
          for ( m = v56; ; LODWORD(v56) = m ^ v56 )
          {
            m >>= 31;
            if ( !m )
              break;
          }
          v65 = v56 & 0x7FFFFFFF;
          v66 = 0;
          if ( v65 != v42[5] )
          {
            if ( !*v42 )
              v66 = v42[6] != 0;
            v67 = (unsigned int)v42[4];
            v68 = *((_QWORD *)v42 + 1);
            if ( v42[4] && (*((_DWORD *)v8 + 523) & 0x40) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v70 = v68 & 0xFFFFFFFFFFFFF000uLL;
              v151 = (v68 + v67 - 1) | 0xFFF;
              v157 = (v68 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 2 )
              {
                v71 = CurrentIrql;
                while ( 1 )
                {
                  v72 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v8[141])(
                          v70,
                          0LL,
                          v62,
                          v53);
                  if ( v72 != -1073741267 )
                    break;
                  if ( v66 )
                    goto LABEL_86;
                  if ( CurrentIrql > 1u )
                    goto LABEL_84;
                  v71 = CurrentIrql;
                  __writecr8(CurrentIrql);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v72 < 0 )
                {
LABEL_86:
                  __writecr8(v71);
                  goto LABEL_87;
                }
LABEL_84:
                v70 += 4096LL;
                v157 += 4096LL;
                if ( v157 != v151 )
                  continue;
                break;
              }
              __writecr8(v71);
            }
            else
            {
LABEL_87:
              v73 = *((_DWORD *)v8 + 484);
              v39 = (unsigned int)v42[5];
              if ( !v73 )
              {
                *(_QWORD *)(v8[177] + 24LL) = v39 ^ v65;
                v73 = *((_DWORD *)v8 + 484);
              }
              v74 = *((_QWORD *)v42 + 1);
              if ( !v73 )
              {
                v8[243] = v8 - 0xB8BF814EDC6E963LL;
                v8[244] = (char *)v42 - 0x4C48B4211BBACBEBLL;
                v8[245] = *v42;
                *((_DWORD *)v8 + 484) = 1;
                v8[246] = v74;
              }
            }
          }
          v75 = v8[167];
          v76 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v8[42])(v75, v39, v62, v53);
          v78 = *(unsigned int **)v8[193];
          v79 = v78 + 4;
          v80 = *((_BYTE *)v78 + 12);
          v81 = (unsigned __int64)&v78[6 * *v78 + 4];
          while ( 2 )
          {
            v82 = 24LL;
            v83 = (__int64 *)(v42 + 6);
            v84 = v79;
            while ( 1 )
            {
              v85 = *(_QWORD *)v84;
              v84 += 2;
              v86 = *v83++;
              if ( v85 != v86 )
                break;
              v82 = (unsigned int)(v82 - 8);
              if ( (unsigned int)v82 < 8 )
              {
                v87 = (_DWORD)v82 == 0;
                while ( !v87 )
                {
                  v77 = *(unsigned __int8 *)v84;
                  v84 = (unsigned int *)((char *)v84 + 1);
                  v88 = *(unsigned __int8 *)v83;
                  v83 = (__int64 *)((char *)v83 + 1);
                  if ( v77 != v88 )
                    goto LABEL_99;
                  v87 = (_DWORD)v82 == 1;
                  v82 = (unsigned int)(v82 - 1);
                }
                goto LABEL_100;
              }
            }
LABEL_99:
            v79 += 6;
            if ( (unsigned __int64)v79 < v81 )
              continue;
            break;
          }
LABEL_100:
          ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v8[50])(v8[167], v77, v82, v83);
          __writecr8(v76);
          if ( !v80 )
            goto LABEL_211;
          if ( (*((_DWORD *)v8 + 523) & 0x10) != 0 && !*((_DWORD *)v8 + 484) )
          {
            v8[243] = v8 - 0xB8BF814EDC6E963LL;
            v8[244] = (char *)v42 - 0x4C48B4211BBACBEBLL;
            v8[245] = *v42;
            v8[246] = 1LL;
            *((_DWORD *)v8 + 484) = 1;
          }
          if ( *((_QWORD *)v42 + 3) != 1LL )
          {
LABEL_211:
            if ( v79 == (unsigned int *)v81 && !*((_DWORD *)v8 + 484) )
            {
              v8[243] = v8 - 0xB8BF814EDC6E963LL;
              v8[244] = (char *)v42 - 0x4C48B4211BBACBEBLL;
              v8[245] = *v42;
              v8[246] = v79;
              *((_DWORD *)v8 + 484) = 1;
            }
          }
          v89 = v8[167];
          v90 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ((void (__fastcall *)(__int64, unsigned __int64))v8[42])(v89, 0xB3B74BDEE4453415uLL);
          v91 = 0LL;
          v92 = *(unsigned int **)v8[193];
          v38 = 24;
          v93 = v92 + 4;
          v94 = (unsigned __int64)&v92[6 * *v92 + 4];
          while ( 1 )
          {
            v93 += 6;
            if ( (unsigned __int64)v93 >= v94 )
              break;
            v95 = *((_QWORD *)v93 + 1);
            if ( v95 < v91 )
              break;
            if ( (v95 & 0xFFFFFFFFFFFFF000uLL) != v95 )
              break;
            v96 = v95 + v93[4];
            if ( v96 <= v95 || v96 == v91 )
              break;
            v91 = v95 + v93[4];
          }
          ((void (__fastcall *)(_QWORD))v8[50])(v8[167]);
          __writecr8(v90);
          v36 = v156;
          j = 0LL;
          v87 = v93 == (unsigned int *)v94;
          v37 = 3LL;
          if ( v87 )
            goto LABEL_141;
          v39 = 1LL;
          if ( *((_DWORD *)v8 + 484) )
          {
            v35 = 12;
            goto LABEL_143;
          }
          v8[243] = v8 - 0xB8BF814EDC6E963LL;
          v8[244] = (char *)v42 - 0x4C48B4211BBACBEBLL;
          v8[245] = *v42;
          v8[246] = v93;
          *((_DWORD *)v8 + 484) = 1;
        }
        else
        {
          if ( (unsigned int)v50 > 0x2B )
            goto LABEL_142;
          v97 = 0x80200000002LL;
          if ( !_bittest64(&v97, v50) )
            goto LABEL_142;
          v98 = v8[167];
          v99 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ((void (__fastcall *)(__int64))v8[42])(v98);
          v101 = *(unsigned int **)v8[193];
          v102 = v101 + 4;
          v103 = *((_BYTE *)v101 + 12);
          v104 = (unsigned __int64)&v101[6 * *v101 + 4];
          while ( 2 )
          {
            v105 = 24LL;
            v106 = (__int64 *)(v42 + 6);
            v107 = v102;
            while ( 1 )
            {
              v108 = *(_QWORD *)v107;
              v107 += 2;
              v109 = *v106++;
              if ( v108 != v109 )
                break;
              v105 = (unsigned int)(v105 - 8);
              if ( (unsigned int)v105 < 8 )
              {
                v110 = (_DWORD)v105 == 0;
                while ( !v110 )
                {
                  v100 = *(unsigned __int8 *)v107;
                  v107 = (unsigned int *)((char *)v107 + 1);
                  v111 = *(unsigned __int8 *)v106;
                  v106 = (__int64 *)((char *)v106 + 1);
                  if ( v100 != v111 )
                    goto LABEL_129;
                  v110 = (_DWORD)v105 == 1;
                  v105 = (unsigned int)(v105 - 1);
                }
                goto LABEL_130;
              }
            }
LABEL_129:
            v102 += 6;
            if ( (unsigned __int64)v102 < v104 )
              continue;
            break;
          }
LABEL_130:
          ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v8[50])(v8[167], v100, v105, v106);
          __writecr8(v99);
          j = 0LL;
          if ( v103 )
          {
            if ( (*((_DWORD *)v8 + 523) & 0x10) != 0 && !*((_DWORD *)v8 + 484) )
            {
              v8[243] = v8 - 0xB8BF814EDC6E963LL;
              v8[244] = (char *)v42 - 0x4C48B4211BBACBEBLL;
              v8[245] = *v42;
              v8[246] = 1LL;
              *((_DWORD *)v8 + 484) = 1;
            }
            if ( *((_QWORD *)v42 + 3) == 1LL )
            {
              v38 = 24;
              v37 = 3LL;
LABEL_140:
              v36 = v156;
LABEL_141:
              v35 = 12;
LABEL_142:
              v39 = 1LL;
              goto LABEL_143;
            }
          }
          v38 = 24;
          v37 = 3LL;
          if ( v102 != (unsigned int *)v104 )
            goto LABEL_140;
          v39 = 1LL;
          if ( !*((_DWORD *)v8 + 484) )
          {
            v8[243] = v8 - 0xB8BF814EDC6E963LL;
            v8[244] = (char *)v42 - 0x4C48B4211BBACBEBLL;
            v8[245] = *v42;
            v8[246] = v102;
            *((_DWORD *)v8 + 484) = 1;
          }
          v36 = v156;
        }
        v35 = 12;
LABEL_143:
        v156 = ++v36;
      }
      while ( v36 < *((_DWORD *)v8 + 427) );
    }
    if ( *((_DWORD *)v8 + 484) )
    {
      v112 = v8[245];
      v113 = v8[246];
      v114 = v8[244];
      v115 = v8[243];
      v158 = v113;
      v152 = v114;
      v150 = v115;
      v159 = v8;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = KeGetCurrentThread();
      DpcStack = (__int64 *)CurrentPrcb->DpcStack;
      if ( !CurrentPrcb->DpcRoutineActive || &v159 > (_QWORD **)DpcStack || &v159 < (_QWORD **)DpcStack - 3072 )
        DpcStack = (__int64 *)CurrentThread->InitialStack;
      if ( (v8[261] & 0x8000000) == 0 )
      {
        v115 = __readcr0();
        __writecr0(v115 & 0xFFFFFFFFFFFEFFFFuLL);
        v119 = (unsigned __int64)(v8 + 294);
        v120 = (unsigned __int64)&v8[2 * *((unsigned int *)v8 + 586) + 294];
        v121 = 0;
        for ( n = (_QWORD *)v120; v121 < *((_DWORD *)v8 + 587); ++v121 )
        {
          *(_QWORD *)*n = n[1];
          v123 = __readcr4();
          if ( (v123 & 0x20080) != 0 )
          {
            __writecr4(v123 ^ 0x80);
            __writecr4(v123);
          }
          else
          {
            v124 = __readcr3();
            __writecr3(v124);
          }
          n += 2;
        }
        if ( v119 < v120 )
        {
          do
          {
            v125 = *(unsigned int *)(v119 + 8);
            v126 = n;
            v127 = *(char **)v119;
            v128 = v125;
            if ( (unsigned int)v125 >= 8 )
            {
              j = (unsigned __int64)(unsigned int)v125 >> 3;
              do
              {
                v128 -= 8;
                *(_QWORD *)v127 = *v126++;
                v127 += 8;
                --j;
              }
              while ( j );
            }
            if ( v128 )
            {
              v129 = v127 - (char *)v126;
              do
              {
                *((_BYTE *)v126 + v129) = *(_BYTE *)v126;
                v126 = (_QWORD *)((char *)v126 + 1);
                --v128;
              }
              while ( v128 );
            }
            n = (_QWORD *)((char *)n + v125);
            v119 += 16LL;
          }
          while ( v119 < v120 );
          LODWORD(v113) = v158;
        }
        *(_BYTE *)v8[67] = -61;
        __writecr0(v115);
        LODWORD(v114) = v152;
        LODWORD(v115) = v150;
      }
      v130 = *((_DWORD *)v8 + 496);
      if ( v130 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v130 = *((_DWORD *)v8 + 496);
        }
        if ( v130 )
        {
          v131 = v130 - 1;
          if ( v131 )
          {
            v132 = v131 - 1;
            if ( v132 )
            {
              v133 = v132 - 1;
              if ( v133 )
              {
                v134 = v133 - 1;
                if ( v134 )
                {
                  if ( v134 == 1 )
                    _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*((_DWORD *)v8 + 522) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v8[182] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                    (*((_DWORD *)v8 + 522) >> 10) & 0x1F);
                }
                goto LABEL_206;
              }
              v135 = (volatile signed __int32 *)v8[171];
            }
            else
            {
              v135 = (volatile signed __int32 *)v8[170];
            }
          }
          else
          {
            v135 = (volatile signed __int32 *)v8[168];
          }
          _interlockedbittestandset64(v135, 0LL);
        }
      }
LABEL_206:
      CurrentThread[1].QuantumTarget = j;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)j;
      SdbpCheckDll(265, v115, v114, v113, v112, v8[43], (__int64)DpcStack);
      JUMPOUT(0x1401944C3LL);
    }
    *((_DWORD *)v8 + 434) += 1560;
    v136 = *((_DWORD *)v8 + 49);
    v137 = v8;
    v138 = *((_DWORD *)v8 + 429);
    v139 = (const char *)v8;
    *((_DWORD *)v8 + 49) = 0;
    if ( v8 < v8 + 195 )
    {
      do
      {
        _mm_prefetch(v139, 0);
        v139 += 64;
      }
      while ( v139 < (const char *)v8 + 1560 );
    }
    v140 = v8[215];
    do
    {
      v141 = 8LL;
      do
      {
        v142 = v137[1] ^ __ROL8__(*v137 ^ v140, v138);
        v137 += 2;
        v140 = __ROL8__(v142, v138);
        --v141;
      }
      while ( v141 );
      v143 = __ROL8__(v8[215] ^ ((char *)v137 - (char *)v8), 17) ^ v8[215] ^ ((char *)v137 - (char *)v8);
      v138 = ((unsigned __int8)(((v143 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v143) ^ (unsigned __int8)v138) & 0x3F;
      if ( !v138 )
        LOBYTE(v138) = 1;
      --v35;
    }
    while ( v35 );
    v1 = a1;
    do
    {
      v140 = __ROL8__(*v137++ ^ v140, v138);
      v38 -= 8;
      --v37;
    }
    while ( v37 );
    for ( ; v38; --v38 )
    {
      v144 = *(unsigned __int8 *)v137;
      v137 = (_QWORD *)((char *)v137 + 1);
      v140 = __ROL8__(v144 ^ v140, v138);
    }
    v145 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v8[34];
    *((_DWORD *)v8 + 49) = v136;
    v8[279] = v140;
    v145(v149, 1LL, v140, v137);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v1);
  v147 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    KernelDr7 = KeGetCurrentThread();
    v147 = _bittest((const signed __int32 *)&KernelDr7->Header.Lock, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v147 )
  {
    KernelDr7 = (struct _KTHREAD *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}
