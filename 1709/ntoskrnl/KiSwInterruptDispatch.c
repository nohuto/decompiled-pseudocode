/*
 * XREFs of KiSwInterruptDispatch @ 0x1401694C0
 * Callers:
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 * Callees:
 *     KiGetTrapFrameMode @ 0x14015AB78 (KiGetTrapFrameMode.c)
 *     KiReadKernelDr7 @ 0x14020404C (KiReadKernelDr7.c)
 *     SdbpCheckDll @ 0x1402B11C0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x1402B1480 (KeGuardCheckICall.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // r8
  _OWORD *v9; // rcx
  _OWORD *v10; // rdx
  __int128 v11; // xmm1
  unsigned __int64 v12; // rax
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // r14
  int v15; // r10d
  _QWORD *v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  const char *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  unsigned int i; // r11d
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rax
  int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // rdx
  _QWORD *v35; // r9
  unsigned int v36; // r8d
  int *v37; // rdi
  __int64 v38; // r10
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  int v44; // eax
  unsigned __int64 v45; // rax
  _QWORD *v46; // r11
  __int64 v47; // r8
  _QWORD *v48; // r9
  const char *v49; // rax
  int v50; // r14d
  unsigned __int64 v51; // rsi
  unsigned int v52; // r10d
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  bool v59; // zf
  unsigned __int64 j; // rax
  unsigned int v61; // esi
  BOOL v62; // r12d
  __int64 v63; // rcx
  unsigned __int8 v64; // r15
  unsigned __int64 v65; // r14
  unsigned __int64 v66; // r13
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rcx
  unsigned __int8 v70; // r12
  __int64 v71; // rdx
  unsigned int *v72; // rcx
  unsigned int *v73; // rsi
  char v74; // r13
  unsigned __int64 v75; // r15
  __int64 v76; // r8
  __int64 *v77; // r9
  unsigned int *v78; // r10
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  unsigned __int8 v83; // r15
  unsigned __int64 v84; // rdx
  unsigned int *v85; // rcx
  unsigned int *v86; // rsi
  unsigned __int64 v87; // r14
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v94; // rdx
  unsigned int *v95; // rcx
  char v96; // r13
  unsigned __int64 v97; // r15
  __int64 v98; // r8
  __int64 *v99; // r9
  unsigned int *v100; // r10
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // r13
  _QWORD *v105; // rdi
  __int64 v106; // rsi
  unsigned __int64 v107; // r12
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 *DpcStack; // r14
  unsigned __int64 v111; // rdx
  unsigned int v112; // r10d
  unsigned __int64 v113; // r9
  _QWORD *k; // r8
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rax
  __int64 v117; // rsi
  _QWORD *v118; // rcx
  char *v119; // r10
  int v120; // r11d
  unsigned __int64 v121; // rdi
  signed __int64 v122; // r10
  int v123; // ecx
  int v124; // ecx
  int v125; // ecx
  int v126; // ecx
  int v127; // ecx
  volatile signed __int32 *v128; // rax
  int v129; // r14d
  _QWORD *v130; // r9
  int v131; // r10d
  const char *v132; // rax
  __int64 v133; // r11
  __int64 v134; // rdi
  __int64 v135; // r8
  int v136; // esi
  __int64 v137; // rax
  __int64 v138; // r8
  unsigned __int64 v139; // rcx
  int v140; // r11d
  __int64 v141; // rax
  void (__fastcall *v142)(_QWORD *, __int64, __int64, _QWORD *); // rax
  struct _KTHREAD *KernelDr7; // rax
  int v144; // ecx
  __int64 v146; // [rsp+40h] [rbp-39h]
  int v147; // [rsp+40h] [rbp-39h]
  _QWORD *v148; // [rsp+48h] [rbp-31h]
  int v149; // [rsp+48h] [rbp-31h]
  __int64 v150; // [rsp+78h] [rbp-1h]
  unsigned int v151; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v153; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v154; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v155; // [rsp+F8h] [rbp+7Fh]

  v1 = a1;
  v2 = qword_140401088;
  v3 = __rdtsc();
  v4 = __ROR8__(v3, 3);
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  *(_QWORD *)(v2 + 2240) + 2343LL,
                  dword_140359D50[((unsigned __int8)(v4 ^ v3) ^ (unsigned __int8)(((v4 ^ v3)
                                                                                 * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0xF]);
  v148 = PoolWithTag;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = PoolWithTag;
    v7 = PoolWithTag + 4;
    PoolWithTag[2] = sub_140175530;
    *PoolWithTag = 0LL;
    v155 = PoolWithTag + 4;
    v8 = 17LL;
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
      --v8;
    }
    while ( v8 );
    *v9 = *v10;
    v9[1] = v10[1];
    v9[2] = v10[2];
    v9[3] = v10[3];
    v9[4] = v10[4];
    PoolWithTag[281] = v2;
    PoolWithTag[282] = PoolWithTag + 286;
    v12 = __rdtsc();
    *((_DWORD *)v6 + 426) = 0;
    v13 = (__ROR8__(v12, 3) ^ v12) * (unsigned __int128)0x7010008004002001uLL;
    *((_DWORD *)v6 + 424) = (*((_QWORD *)&v13 + 1) ^ (unsigned __int64)v13) % *((unsigned int *)v6 + 419);
    v14 = v6[281];
    v15 = *((_DWORD *)v6 + 421);
    v16 = (_QWORD *)v14;
    v17 = __rdtsc();
    v18 = __ROR8__(v17, 3);
    v19 = v6[211];
    *((_DWORD *)v6 + 428) = (((v18 ^ v17) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v18 ^ v17));
    v6[283] = ((unsigned __int64)v6 + 2343) & 0xFFFFFFFFFFFFFFF8uLL;
    v20 = (const char *)v14;
    v21 = *(unsigned int *)(v14 + 1604);
    if ( v14 < v14 + v21 )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( (unsigned __int64)v20 < v14 + v21 );
    }
    v22 = v19;
    for ( i = (unsigned int)v21 >> 7; i; --i )
    {
      v24 = 8LL;
      do
      {
        v25 = v16[1] ^ __ROL8__(*v16 ^ v22, v15);
        v16 += 2;
        v22 = __ROL8__(v25, v15);
        --v24;
      }
      while ( v24 );
      v26 = __ROL8__(v19 ^ ((unsigned __int64)v16 - v14), 17) ^ v19 ^ ((unsigned __int64)v16 - v14);
      v15 = ((unsigned __int8)(((v26 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v26) ^ (unsigned __int8)v15) & 0x3F;
      if ( !v15 )
        LOBYTE(v15) = 1;
    }
    v27 = *(_DWORD *)(v14 + 1604) & 0x7F;
    if ( v27 >= 8 )
    {
      v28 = (unsigned __int64)(v21 & 0x7F) >> 3;
      do
      {
        v22 = __ROL8__(*v16++ ^ v22, v15);
        v27 -= 8;
        --v28;
      }
      while ( v28 );
    }
    for ( ; v27; --v27 )
    {
      v29 = *(unsigned __int8 *)v16;
      v16 = (_QWORD *)((char *)v16 + 1);
      v22 = __ROL8__(v29 ^ v22, v15);
    }
    if ( v22 != qword_140401090 )
    {
      v30 = v6[173];
      *(_QWORD *)v30 = v14;
      *(_DWORD *)(v30 + 16) = v21;
      if ( !*((_DWORD *)v6 + 476) )
      {
        *(_QWORD *)(v6[173] + 24LL) = v22 ^ qword_140401090;
        if ( !*((_DWORD *)v6 + 476) )
        {
          v6[240] = 0LL;
          v6[239] = v6 - 0xB8BF814EDC6E95FLL;
          v6[241] = 273LL;
          v6[242] = v22;
          *((_DWORD *)v6 + 476) = 1;
        }
      }
    }
    v150 = 0LL;
    v31 = &v151;
    v32 = 4;
    do
    {
      *(_BYTE *)v31 = 0;
      v31 = (unsigned int *)((char *)v31 + 1);
      --v32;
    }
    while ( v32 );
    v33 = 0;
    v34 = 2LL;
    v153 = 0;
    if ( *((_DWORD *)v6 + 419) )
    {
      while ( 1 )
      {
        v35 = v7;
        v36 = 0;
        if ( v7[277] )
          v35 = (_QWORD *)v7[277];
        v37 = (int *)((char *)v35 + *((unsigned int *)v35 + 410));
        if ( (_DWORD)v150 && HIDWORD(v150) <= v33 )
        {
          v36 = HIDWORD(v150);
          v37 = (int *)((char *)v35 + v151);
        }
        if ( v36 != v33 )
        {
          v38 = v33 - v36;
          v36 = v33;
          while ( 1 )
          {
            v39 = *v37;
            if ( *v37 > 12 )
              break;
            if ( v39 == 12 )
              goto LABEL_45;
            v40 = v39 - 1;
            if ( !v40 )
              goto LABEL_45;
            v41 = v40 - 6;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( !v42 )
              {
                v44 = *((unsigned __int16 *)v37 + 16);
LABEL_51:
                v43 = (v44 + 55) & 0xFFFFFFF8;
                goto LABEL_52;
              }
              if ( v42 != 2 )
              {
LABEL_48:
                v43 = 48LL;
                goto LABEL_52;
              }
              v43 = (unsigned int)(16 * (v37[7] + 3));
            }
            else
            {
              v43 = (unsigned int)(24 * (v37[6] + 2));
            }
LABEL_52:
            v37 = (int *)((char *)v37 + v43);
            if ( !--v38 )
            {
              v33 = v153;
              goto LABEL_54;
            }
          }
          if ( v39 == 28 )
          {
            v44 = *((unsigned __int16 *)v37 + 20);
            goto LABEL_51;
          }
          if ( v39 == 30 )
          {
            v43 = (((v37[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v37 + 20) + 2);
          }
          else
          {
            if ( v39 <= 32 )
              goto LABEL_48;
            if ( v39 <= 34 )
            {
              v43 = 20 * (unsigned int)(((v37[8] & 0xFFF) + (unsigned __int64)(unsigned int)v37[10] + 4095) >> 12) + 48;
            }
            else
            {
              if ( v39 != 43 )
                goto LABEL_48;
LABEL_45:
              v43 = 4 * (v37[4] / 0xCu) + 48;
            }
          }
          v34 = 2LL;
          goto LABEL_52;
        }
LABEL_54:
        LODWORD(v150) = 1;
        HIDWORD(v150) = v36;
        v151 = (_DWORD)v37 - (_DWORD)v35;
        v45 = *v37;
        if ( (_DWORD)v45 == 36 )
          break;
        if ( (unsigned int)v45 > 0x2B )
          goto LABEL_138;
        v91 = 0x80200000002LL;
        if ( !_bittest64(&v91, v45) )
          goto LABEL_138;
        v92 = v7[159];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v7[40])(v92);
        v95 = *(unsigned int **)v7[185];
        v86 = v95 + 4;
        v96 = *((_BYTE *)v95 + 12);
        v97 = (unsigned __int64)&v95[6 * *v95 + 4];
        do
        {
          v98 = 24LL;
          v99 = (__int64 *)(v37 + 6);
          v100 = v86;
          while ( 1 )
          {
            v101 = *(_QWORD *)v100;
            v100 += 2;
            v102 = *v99++;
            if ( v101 != v102 )
              break;
            v98 = (unsigned int)(v98 - 8);
            if ( (unsigned int)v98 < 8 )
            {
              if ( !(_DWORD)v98 )
                goto LABEL_129;
              while ( 1 )
              {
                v94 = *(unsigned __int8 *)v100;
                v100 = (unsigned int *)((char *)v100 + 1);
                v103 = *(unsigned __int8 *)v99;
                v99 = (__int64 *)((char *)v99 + 1);
                if ( v94 != v103 )
                  goto LABEL_128;
                v59 = (_DWORD)v98 == 1;
                v98 = (unsigned int)(v98 - 1);
                if ( v59 )
                  goto LABEL_129;
              }
            }
          }
LABEL_128:
          v86 += 6;
        }
        while ( (unsigned __int64)v86 < v97 );
LABEL_129:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v7[48])(v7[159], v94, v98, v99);
        __writecr8(CurrentIrql);
        if ( v96 )
        {
          if ( (*((_DWORD *)v7 + 503) & 0x10) != 0 && !*((_DWORD *)v7 + 468) )
          {
            v7[235] = v7 - 0xB8BF814EDC6E963LL;
            v7[236] = (char *)v37 - 0x4C48B4211BBACBEBLL;
            v7[237] = *v37;
            v7[238] = 1LL;
            *((_DWORD *)v7 + 468) = 1;
          }
          if ( *((_QWORD *)v37 + 3) == 1LL )
            goto LABEL_137;
        }
        if ( v86 != (unsigned int *)v97 )
        {
LABEL_137:
          v33 = v153;
          goto LABEL_138;
        }
        v33 = v153;
        if ( !*((_DWORD *)v7 + 468) )
        {
          v90 = v7 - 0xB8BF814EDC6E963LL;
LABEL_117:
          v7[235] = v90;
          v7[236] = (char *)v37 - 0x4C48B4211BBACBEBLL;
          v7[237] = *v37;
          v7[238] = v86;
          *((_DWORD *)v7 + 468) = 1;
        }
LABEL_138:
        ++v33;
        v34 = 2LL;
        v153 = v33;
        if ( v33 >= *((_DWORD *)v7 + 411) )
        {
          v6 = v148;
          goto LABEL_140;
        }
      }
      v46 = (_QWORD *)*((_QWORD *)v37 + 1);
      v47 = (unsigned int)v37[4];
      v48 = v46;
      *((_DWORD *)v7 + 418) += v47;
      v49 = (const char *)v46;
      v50 = *((_DWORD *)v7 + 413);
      if ( v46 < (_QWORD *)((char *)v46 + v47) )
      {
        do
        {
          _mm_prefetch(v49, 0);
          v49 += 64;
        }
        while ( v49 < (const char *)v46 + v47 );
      }
      v51 = v7[207];
      v52 = (unsigned int)v47 >> 7;
      if ( (unsigned int)v47 >> 7 )
      {
        do
        {
          v53 = 8LL;
          do
          {
            v54 = v51 ^ *v48;
            v55 = v48[1];
            v48 += 2;
            v51 = __ROL8__(__ROL8__(v54, v50) ^ v55, v50);
            --v53;
          }
          while ( v53 );
          v56 = __ROL8__(v7[207] ^ ((char *)v48 - (char *)v46), 17) ^ v7[207] ^ ((char *)v48 - (char *)v46);
          v34 = (v56 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v50 = ((unsigned __int8)(v34 ^ v56) ^ (unsigned __int8)v50) & 0x3F;
          if ( !v50 )
            LOBYTE(v50) = 1;
          --v52;
        }
        while ( v52 );
        v7 = v155;
      }
      v57 = v47 & 0x7F;
      if ( (unsigned int)v57 >= 8 )
      {
        v34 = (unsigned __int64)(unsigned int)v57 >> 3;
        do
        {
          v51 = __ROL8__(*v48++ ^ v51, v50);
          v57 = (unsigned int)(v57 - 8);
          --v34;
        }
        while ( v34 );
      }
      if ( (_DWORD)v57 )
      {
        do
        {
          v58 = *(unsigned __int8 *)v48;
          v48 = (_QWORD *)((char *)v48 + 1);
          v51 = __ROL8__(v58 ^ v51, v50);
          v59 = (_DWORD)v57 == 1;
          v57 = (unsigned int)(v57 - 1);
        }
        while ( !v59 );
      }
      for ( j = v51; ; LODWORD(v51) = j ^ v51 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v61 = v51 & 0x7FFFFFFF;
      v62 = 0;
      if ( v61 != v37[5] )
      {
        if ( !*v37 )
          v62 = v37[6] != 0;
        v63 = (unsigned int)v37[4];
        v34 = *((_QWORD *)v37 + 1);
        if ( v37[4] && (*((_DWORD *)v7 + 503) & 0x40) != 0 )
        {
          v64 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v65 = v34 & 0xFFFFFFFFFFFFF000uLL;
          v146 = (v34 + v63 - 1) | 0xFFF;
          v66 = (v34 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            while ( 1 )
            {
              v67 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v7[138])(v65, 0LL, v57, v48);
              if ( v67 == -1073741267 )
                break;
              if ( v67 < 0 )
              {
LABEL_85:
                __writecr8(v64);
                goto LABEL_86;
              }
LABEL_83:
              v65 += 4096LL;
              v66 += 4096LL;
              if ( v66 == v146 )
              {
                __writecr8(v64);
                goto LABEL_90;
              }
            }
            if ( v62 )
              goto LABEL_85;
            if ( v64 > 1u )
              goto LABEL_83;
            __writecr8(v64);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
        }
LABEL_86:
        if ( !*((_DWORD *)v7 + 468) )
          *(_QWORD *)(v7[169] + 24LL) = (unsigned int)v37[5] ^ (unsigned __int64)v61;
        v68 = *((_QWORD *)v37 + 1);
        if ( !*((_DWORD *)v7 + 468) )
        {
          v7[235] = v7 - 0xB8BF814EDC6E963LL;
          v7[236] = (char *)v37 - 0x4C48B4211BBACBEBLL;
          v7[237] = *v37;
          *((_DWORD *)v7 + 468) = 1;
          v7[238] = v68;
        }
      }
LABEL_90:
      v69 = v7[159];
      v70 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v7[40])(v69, v34, v57, v48);
      v72 = *(unsigned int **)v7[185];
      v73 = v72 + 4;
      v74 = *((_BYTE *)v72 + 12);
      v75 = (unsigned __int64)&v72[6 * *v72 + 4];
      do
      {
        v76 = 24LL;
        v77 = (__int64 *)(v37 + 6);
        v78 = v73;
        while ( 1 )
        {
          v79 = *(_QWORD *)v78;
          v78 += 2;
          v80 = *v77++;
          if ( v79 != v80 )
            break;
          v76 = (unsigned int)(v76 - 8);
          if ( (unsigned int)v76 < 8 )
          {
            if ( !(_DWORD)v76 )
              goto LABEL_99;
            while ( 1 )
            {
              v71 = *(unsigned __int8 *)v78;
              v78 = (unsigned int *)((char *)v78 + 1);
              v81 = *(unsigned __int8 *)v77;
              v77 = (__int64 *)((char *)v77 + 1);
              if ( v71 != v81 )
                goto LABEL_98;
              v59 = (_DWORD)v76 == 1;
              v76 = (unsigned int)(v76 - 1);
              if ( v59 )
                goto LABEL_99;
            }
          }
        }
LABEL_98:
        v73 += 6;
      }
      while ( (unsigned __int64)v73 < v75 );
LABEL_99:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v7[48])(v7[159], v71, v76, v77);
      __writecr8(v70);
      if ( !v74 )
        goto LABEL_205;
      if ( (*((_DWORD *)v7 + 503) & 0x10) != 0 && !*((_DWORD *)v7 + 468) )
      {
        v7[235] = v7 - 0xB8BF814EDC6E963LL;
        v7[236] = (char *)v37 - 0x4C48B4211BBACBEBLL;
        v7[237] = *v37;
        v7[238] = 1LL;
        *((_DWORD *)v7 + 468) = 1;
      }
      if ( *((_QWORD *)v37 + 3) != 1LL )
      {
LABEL_205:
        if ( v73 == (unsigned int *)v75 && !*((_DWORD *)v7 + 468) )
        {
          v7[235] = v7 - 0xB8BF814EDC6E963LL;
          v7[236] = (char *)v37 - 0x4C48B4211BBACBEBLL;
          v7[237] = *v37;
          v7[238] = v73;
          *((_DWORD *)v7 + 468) = 1;
        }
      }
      v82 = v7[159];
      v83 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v7[40])(v82);
      v84 = 0LL;
      v85 = *(unsigned int **)v7[185];
      v86 = v85 + 4;
      v87 = (unsigned __int64)&v85[6 * *v85 + 4];
      while ( 1 )
      {
        v86 += 6;
        if ( (unsigned __int64)v86 >= v87 )
          break;
        v88 = *((_QWORD *)v86 + 1);
        if ( v88 < v84 )
          break;
        if ( (v88 & 0xFFFFFFFFFFFFF000uLL) != v88 )
          break;
        v89 = v88 + v86[4];
        if ( v89 <= v88 || v89 == v84 )
          break;
        v84 = v88 + v86[4];
      }
      ((void (__fastcall *)(_QWORD))v7[48])(v7[159]);
      __writecr8(v83);
      v33 = v153;
      if ( v86 == (unsigned int *)v87 || *((_DWORD *)v7 + 468) )
        goto LABEL_138;
      v90 = v7 - 0xB8BF814EDC6E963LL;
      goto LABEL_117;
    }
LABEL_140:
    if ( *((_DWORD *)v7 + 468) )
    {
      v104 = v7[237];
      v105 = (_QWORD *)v7[238];
      v106 = v7[236];
      v107 = v7[235];
      v155 = v105;
      v149 = v106;
      v147 = v107;
      v154 = v7;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = KeGetCurrentThread();
      DpcStack = (__int64 *)CurrentPrcb->DpcStack;
      if ( !CurrentPrcb->DpcRoutineActive || &v154 > (_QWORD **)DpcStack || &v154 < (_QWORD **)DpcStack - 3072 )
        DpcStack = (__int64 *)CurrentThread->InitialStack;
      if ( (v7[251] & 0x8000000) == 0 )
      {
        v107 = __readcr0();
        __writecr0(v107 & 0xFFFFFFFFFFFEFFFFuLL);
        v111 = (unsigned __int64)(v7 + 283);
        v112 = 0;
        v113 = (unsigned __int64)&v7[2 * *((unsigned int *)v7 + 564) + 283];
        for ( k = (_QWORD *)v113; v112 < *((_DWORD *)v7 + 565); ++v112 )
        {
          *(_QWORD *)*k = k[1];
          v115 = __readcr4();
          if ( (v115 & 0x20080) != 0 )
          {
            __writecr4(v115 ^ 0x80);
            __writecr4(v115);
          }
          else
          {
            v116 = __readcr3();
            __writecr3(v116);
          }
          k += 2;
        }
        if ( v111 < v113 )
        {
          do
          {
            v117 = *(unsigned int *)(v111 + 8);
            v118 = k;
            v119 = *(char **)v111;
            v120 = v117;
            if ( (unsigned int)v117 >= 8 )
            {
              v121 = (unsigned __int64)(unsigned int)v117 >> 3;
              do
              {
                v120 -= 8;
                *(_QWORD *)v119 = *v118++;
                v119 += 8;
                --v121;
              }
              while ( v121 );
            }
            if ( v120 )
            {
              v122 = v119 - (char *)v118;
              do
              {
                *((_BYTE *)v118 + v122) = *(_BYTE *)v118;
                v118 = (_QWORD *)((char *)v118 + 1);
                --v120;
              }
              while ( v120 );
            }
            k = (_QWORD *)((char *)k + v117);
            v111 += 16LL;
          }
          while ( v111 < v113 );
          LODWORD(v105) = (_DWORD)v155;
          LODWORD(v106) = v149;
        }
        *(_BYTE *)v7[65] = -61;
        __writecr0(v107);
        LODWORD(v107) = v147;
      }
      if ( *((_DWORD *)v7 + 480) && KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v123 = *((_DWORD *)v7 + 480);
      if ( v123 )
      {
        v124 = v123 - 1;
        if ( v124 )
        {
          v125 = v124 - 1;
          if ( v125 )
          {
            v126 = v125 - 1;
            if ( v126 )
            {
              v127 = v126 - 1;
              if ( v127 )
              {
                if ( v127 == 1 )
                  _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*((_DWORD *)v7 + 502) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(v7[174] + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                  (*((_DWORD *)v7 + 502) >> 10) & 0x1F);
              }
              goto LABEL_200;
            }
            v128 = (volatile signed __int32 *)v7[163];
          }
          else
          {
            v128 = (volatile signed __int32 *)v7[162];
          }
        }
        else
        {
          v128 = (volatile signed __int32 *)v7[160];
        }
        _interlockedbittestandset64(v128, 0LL);
      }
LABEL_200:
      CurrentThread[1].QuantumTarget = 0LL;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
      SdbpCheckDll(265, v107, v106, (_DWORD)v105, v104, v7[41], (__int64)DpcStack);
      JUMPOUT(0x14016A373LL);
    }
    *((_DWORD *)v7 + 418) += 1496;
    v129 = *((_DWORD *)v7 + 49);
    v130 = v7;
    v131 = *((_DWORD *)v7 + 413);
    v132 = (const char *)v7;
    v133 = v7[207];
    *((_DWORD *)v7 + 49) = 0;
    if ( v7 < v7 + 187 )
    {
      do
      {
        _mm_prefetch(v132, 0);
        v132 += 64;
      }
      while ( v132 < (const char *)v7 + 1496 );
    }
    v134 = 11LL;
    v135 = v133;
    v136 = 11;
    do
    {
      v137 = 8LL;
      do
      {
        v138 = v130[1] ^ __ROL8__(*v130 ^ v135, v131);
        v130 += 2;
        v135 = __ROL8__(v138, v131);
        --v137;
      }
      while ( v137 );
      v139 = __ROL8__(v133 ^ ((char *)v130 - (char *)v7), 17) ^ v133 ^ ((char *)v130 - (char *)v7);
      v131 = ((unsigned __int8)(((v139 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v139) ^ (unsigned __int8)v131) & 0x3F;
      if ( !v131 )
        LOBYTE(v131) = 1;
      --v136;
    }
    while ( v136 );
    v1 = a1;
    v140 = 88;
    do
    {
      v135 = __ROL8__(*v130++ ^ v135, v131);
      v140 -= 8;
      --v134;
    }
    while ( v134 );
    for ( ; v140; --v140 )
    {
      v141 = *(unsigned __int8 *)v130;
      v130 = (_QWORD *)((char *)v130 + 1);
      v135 = __ROL8__(v141 ^ v135, v131);
    }
    v142 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v7[32];
    *((_DWORD *)v7 + 49) = v129;
    v7[268] = v135;
    v142(v6, 1LL, v135, v130);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v1);
  v144 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    KernelDr7 = KeGetCurrentThread();
    v144 = _bittest((const signed __int32 *)&KernelDr7->Header.Lock, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v144 )
  {
    KernelDr7 = (struct _KTHREAD *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}
