/*
 * XREFs of KiSwInterruptDispatch @ 0x140174B80
 * Callers:
 *     KiSwInterrupt @ 0x140185EF0 (KiSwInterrupt.c)
 * Callees:
 *     KiGetTrapFrameMode @ 0x1401FDD00 (KiGetTrapFrameMode.c)
 *     KiReadKernelDr7 @ 0x1401FDE8C (KiReadKernelDr7.c)
 *     SdbpCheckDll @ 0x140284310 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140284420 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140284430 (KeGuardCheckICall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

struct _KTHREAD *__fastcall KiSwInterruptDispatch(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int128 v5; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  __int64 v9; // r8
  _OWORD *v10; // rcx
  _OWORD *v11; // rdx
  __int128 v12; // xmm1
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // r14
  int v17; // r10d
  _QWORD *v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  const char *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r8
  unsigned int i; // r11d
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // rax
  unsigned int *v34; // rax
  unsigned int v35; // ecx
  int v36; // esi
  _QWORD *v37; // r9
  unsigned int v38; // r8d
  int *v39; // rdi
  __int64 v40; // r10
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  _QWORD *v44; // r11
  __int64 v45; // r8
  _QWORD *v46; // r9
  const char *v47; // rax
  int v48; // r14d
  __int64 v49; // r15
  unsigned __int64 v50; // rsi
  unsigned int v51; // r10d
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  unsigned __int64 j; // rax
  unsigned int v59; // esi
  bool v60; // r15
  __int64 v61; // rcx
  unsigned __int8 v62; // r14
  unsigned __int64 v63; // r12
  BOOL v64; // ecx
  unsigned __int64 v65; // r13
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned __int8 v69; // r13
  __int64 v70; // rdx
  unsigned int *v71; // rcx
  unsigned int *v72; // rsi
  BOOL v73; // r15d
  unsigned __int64 v74; // r12
  __int64 v75; // r8
  __int64 *v76; // r9
  unsigned int *v77; // r10
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int8 v82; // r15
  unsigned __int64 v83; // rdx
  unsigned int *v84; // rcx
  unsigned int *v85; // rsi
  unsigned __int64 v86; // r14
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rax
  __int64 v89; // rcx
  unsigned __int8 CurrentIrql; // r13
  __int64 v91; // rdx
  unsigned int *v92; // rcx
  BOOL v93; // r12d
  unsigned __int64 v94; // r15
  __int64 v95; // r8
  __int64 *v96; // r9
  unsigned int *v97; // r10
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdi
  __int64 v102; // rsi
  unsigned __int64 v103; // r12
  __int64 v104; // r13
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 *DpcStack; // r14
  unsigned __int64 v108; // rdx
  unsigned int v109; // r10d
  unsigned __int64 v110; // r9
  _QWORD *k; // r8
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rax
  __int64 v114; // rsi
  _QWORD *v115; // rcx
  char *v116; // r10
  int v117; // r11d
  unsigned __int64 v118; // rdi
  signed __int64 v119; // r10
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // ecx
  int v124; // ecx
  volatile signed __int32 *v125; // rax
  int v126; // edi
  _QWORD *v127; // r9
  const char *v128; // rax
  int v129; // r10d
  __int64 v130; // r8
  __int64 v131; // rax
  __int64 v132; // r8
  unsigned __int64 v133; // rcx
  int v134; // r11d
  __int64 v135; // rax
  void (__fastcall *v136)(_QWORD *, __int64, __int64, _QWORD *); // rax
  struct _KTHREAD *result; // rax
  int v138; // ecx
  __int64 v139; // [rsp+40h] [rbp-39h]
  unsigned int v140; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v141; // [rsp+50h] [rbp-29h]
  _QWORD *v142; // [rsp+58h] [rbp-21h]
  __int64 v143; // [rsp+60h] [rbp-19h]
  __int64 v144; // [rsp+68h] [rbp-11h]
  __int64 v145; // [rsp+70h] [rbp-9h]
  __int64 v146; // [rsp+78h] [rbp-1h]
  __int64 v147; // [rsp+80h] [rbp+7h]
  __int64 v148; // [rsp+88h] [rbp+Fh]
  unsigned int v150; // [rsp+E8h] [rbp+6Fh]
  int v151; // [rsp+E8h] [rbp+6Fh]
  int v152; // [rsp+F0h] [rbp+77h]
  _QWORD *v153; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = a1;
  v2 = qword_1403E3F40;
  v3 = __rdtsc();
  v4 = 15LL;
  v5 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v144 = *((_QWORD *)&v5 + 1);
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  *(_QWORD *)(v2 + 2048) + 2151LL,
                  dword_140341690[((unsigned __int64)v5 ^ *((_QWORD *)&v5 + 1)) & 0xF]);
  v141 = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v8 = PoolWithTag + 4;
    PoolWithTag[2] = sub_140175DB0;
    PoolWithTag[3] = PoolWithTag;
    v142 = PoolWithTag + 4;
    v9 = 16LL;
    v10 = PoolWithTag + 4;
    v11 = (_OWORD *)v2;
    do
    {
      *v10 = *v11;
      v10[1] = v11[1];
      v10[2] = v11[2];
      v10[3] = v11[3];
      v10[4] = v11[4];
      v10[5] = v11[5];
      v10[6] = v11[6];
      v10 += 8;
      v12 = v11[7];
      v11 += 8;
      *(v10 - 1) = v12;
      --v9;
    }
    while ( v9 );
    *v10 = *v11;
    PoolWithTag[257] = v2;
    PoolWithTag[258] = PoolWithTag + 262;
    v13 = __rdtsc();
    v14 = *((unsigned int *)v7 + 395);
    v15 = (__ROR8__(v13, 3) ^ v13) * (unsigned __int128)0x7010008004002001uLL;
    v145 = *((_QWORD *)&v15 + 1);
    *((_DWORD *)v7 + 402) = 0;
    *((_DWORD *)v7 + 400) = (*((_QWORD *)&v15 + 1) ^ (unsigned __int64)v15) % v14;
    v16 = v7[257];
    v17 = *((_DWORD *)v7 + 397);
    v18 = (_QWORD *)v16;
    v19 = __rdtsc();
    v20 = __ROR8__(v19, 3);
    v21 = v7[199];
    v146 = ((v20 ^ v19) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_DWORD *)v7 + 404) = v146 ^ (67117057 * (v20 ^ v19));
    v7[259] = ((unsigned __int64)v7 + 2151) & 0xFFFFFFFFFFFFFFF8uLL;
    v22 = (const char *)v16;
    v23 = *(unsigned int *)(v16 + 1508);
    if ( v16 < v16 + v23 )
    {
      do
      {
        _mm_prefetch(v22, 0);
        v22 += 64;
      }
      while ( (unsigned __int64)v22 < v16 + v23 );
    }
    v24 = v21;
    for ( i = (unsigned int)v23 >> 7; i; --i )
    {
      v26 = 8LL;
      do
      {
        v27 = v18[1] ^ __ROL8__(*v18 ^ v24, v17);
        v18 += 2;
        v24 = __ROL8__(v27, v17);
        --v26;
      }
      while ( v26 );
      v28 = __ROL8__(v21 ^ ((unsigned __int64)v18 - v16), 17) ^ v21 ^ ((unsigned __int64)v18 - v16);
      v147 = (v28 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v17 = ((unsigned __int8)(v147 ^ v28) ^ (unsigned __int8)v17) & 0x3F;
      if ( !v17 )
        LOBYTE(v17) = 1;
    }
    v29 = v23 & 0x7F;
    if ( (unsigned int)v29 >= 8 )
    {
      v30 = (unsigned __int64)(v23 & 0x7F) >> 3;
      do
      {
        v24 = __ROL8__(*v18++ ^ v24, v17);
        v29 = (unsigned int)(v29 - 8);
        --v30;
      }
      while ( v30 );
    }
    if ( (_DWORD)v29 )
    {
      do
      {
        v31 = *(unsigned __int8 *)v18;
        v18 = (_QWORD *)((char *)v18 + 1);
        v24 = __ROL8__(v31 ^ v24, v17);
        v32 = (_DWORD)v29 == 1;
        v29 = (unsigned int)(v29 - 1);
      }
      while ( !v32 );
    }
    if ( v24 != qword_1403E3F48 )
    {
      v33 = v7[166];
      *(_QWORD *)v33 = v16;
      *(_DWORD *)(v33 + 16) = v23;
      if ( !*((_DWORD *)v7 + 440) )
      {
        *(_QWORD *)(v7[166] + 24LL) = v24 ^ qword_1403E3F48;
        if ( !*((_DWORD *)v7 + 440) )
        {
          v7[222] = 0LL;
          v7[221] = v7 - 0xB8BF814EDC6E95FLL;
          *((_DWORD *)v7 + 440) = 1;
          v7[223] = 273LL;
          v7[224] = v24;
        }
      }
    }
    v139 = 0LL;
    v34 = &v140;
    v35 = 4;
    do
    {
      *(_BYTE *)v34 = 0;
      v34 = (unsigned int *)((char *)v34 + 1);
      --v35;
    }
    while ( v35 );
    v36 = 10;
    v150 = 0;
    if ( *((_DWORD *)v7 + 395) )
    {
      while ( 1 )
      {
        v37 = v8;
        if ( v8[253] )
          v37 = (_QWORD *)v8[253];
        v38 = 0;
        v39 = (int *)((char *)v37 + *((unsigned int *)v37 + 386));
        if ( (_DWORD)v139 && HIDWORD(v139) <= v35 )
        {
          v38 = HIDWORD(v139);
          v39 = (int *)((char *)v37 + v140);
        }
        if ( v38 != v35 )
        {
          v40 = v35 - v38;
          v38 = v35;
          while ( 1 )
          {
            v41 = *v39;
            if ( *v39 == 1 )
            {
LABEL_47:
              v29 = (unsigned int)v39[4] / 0xCuLL;
              v42 = (unsigned int)(4 * v29 + 48);
              goto LABEL_48;
            }
            if ( v41 == 7 )
            {
              v42 = (unsigned int)(24 * (v39[6] + 2));
              goto LABEL_48;
            }
            if ( v41 == 8 )
              break;
            if ( v41 != 10 )
            {
              if ( v41 == 12 )
                goto LABEL_47;
              if ( v41 != 28 )
              {
                if ( v41 == 30 )
                {
                  v29 = ((v39[9] - 1) / 0xCu + 7) & 0xFFFFFFF8;
                  v42 = (unsigned int)v29 + 24 * (*((unsigned __int16 *)v39 + 20) + 2);
                }
                else if ( (unsigned int)(v41 - 33) > 1 )
                {
                  v42 = 48LL;
                }
                else
                {
                  v29 = ((v39[8] & 0xFFF) + (unsigned __int64)(unsigned int)v39[10] + 4095) >> 12;
                  v42 = (unsigned int)(20 * v29 + 48);
                }
                goto LABEL_48;
              }
              v43 = *((unsigned __int16 *)v39 + 20);
              goto LABEL_45;
            }
            v42 = (unsigned int)(16 * (v39[7] + 3));
LABEL_48:
            v39 = (int *)((char *)v39 + v42);
            if ( !--v40 )
            {
              v35 = v150;
              v4 = 15LL;
              goto LABEL_50;
            }
          }
          v43 = *((unsigned __int16 *)v39 + 16);
LABEL_45:
          v42 = (v43 + 55) & 0xFFFFFFF8;
          goto LABEL_48;
        }
LABEL_50:
        LODWORD(v139) = 1;
        HIDWORD(v139) = v38;
        v140 = (_DWORD)v39 - (_DWORD)v37;
        if ( *v39 == 36 )
          break;
        if ( ((*v39 - 1) & 0xFFFFFFDF) == 0 )
        {
          v89 = v8[152];
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ((void (__fastcall *)(__int64, __int64))v8[42])(v89, v29);
          v92 = *(unsigned int **)v8[173];
          v85 = v92 + 4;
          v93 = *((_BYTE *)v92 + 12) != 0;
          v94 = (unsigned __int64)&v92[6 * *v92 + 4];
          do
          {
            v95 = 24LL;
            v96 = (__int64 *)(v39 + 6);
            v97 = v85;
            while ( 1 )
            {
              v98 = *(_QWORD *)v97;
              v97 += 2;
              v99 = *v96++;
              if ( v98 != v99 )
                break;
              v95 = (unsigned int)(v95 - 8);
              if ( (unsigned int)v95 < 8 )
              {
                if ( !(_DWORD)v95 )
                  goto LABEL_124;
                while ( 1 )
                {
                  v91 = *(unsigned __int8 *)v97;
                  v97 = (unsigned int *)((char *)v97 + 1);
                  v100 = *(unsigned __int8 *)v96;
                  v96 = (__int64 *)((char *)v96 + 1);
                  if ( v91 != v100 )
                    goto LABEL_123;
                  v32 = (_DWORD)v95 == 1;
                  v95 = (unsigned int)(v95 - 1);
                  if ( v32 )
                    goto LABEL_124;
                }
              }
            }
LABEL_123:
            v85 += 6;
          }
          while ( (unsigned __int64)v85 < v94 );
LABEL_124:
          ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v8[50])(v8[152], v91, v95, v96);
          __writecr8(CurrentIrql);
          if ( !v93 )
            goto LABEL_129;
          if ( (*((_DWORD *)v8 + 467) & 0x10) != 0 && !*((_DWORD *)v8 + 432) )
          {
            v8[217] = v8 - 0xB8BF814EDC6E963LL;
            v8[218] = (char *)v39 - 0x4C48B4211BBACBEBLL;
            v8[219] = *v39;
            v8[220] = 1LL;
            *((_DWORD *)v8 + 432) = 1;
          }
          if ( *((_QWORD *)v39 + 3) != 1LL )
          {
LABEL_129:
            if ( v85 == (unsigned int *)v94 )
            {
              v35 = v150;
              v4 = 15LL;
              goto LABEL_112;
            }
          }
          v35 = v150;
          v4 = 15LL;
LABEL_132:
          v36 = 10;
        }
        v150 = ++v35;
        if ( v35 >= *((_DWORD *)v8 + 387) )
        {
          v7 = v141;
          goto LABEL_135;
        }
      }
      v44 = (_QWORD *)*((_QWORD *)v39 + 1);
      v45 = (unsigned int)v39[4];
      v46 = v44;
      *((_DWORD *)v8 + 394) += v45;
      v47 = (const char *)v44;
      v48 = *((_DWORD *)v8 + 389);
      v49 = v8[195];
      if ( v44 < (_QWORD *)((char *)v44 + v45) )
      {
        do
        {
          _mm_prefetch(v47, 0);
          v47 += 64;
        }
        while ( v47 < (const char *)v44 + v45 );
      }
      v50 = v8[195];
      v51 = (unsigned int)v45 >> 7;
      if ( (unsigned int)v45 >> 7 )
      {
        do
        {
          v52 = 8LL;
          do
          {
            v53 = v50 ^ *v46;
            v54 = v46[1];
            v46 += 2;
            v50 = __ROL8__(__ROL8__(v53, v48) ^ v54, v48);
            --v52;
          }
          while ( v52 );
          v55 = __ROL8__(v49 ^ ((char *)v46 - (char *)v44), 17) ^ v49 ^ ((char *)v46 - (char *)v44);
          v29 = (v55 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v148 = v29;
          v48 = ((unsigned __int8)(v29 ^ v55) ^ (unsigned __int8)v48) & 0x3F;
          if ( !v48 )
            LOBYTE(v48) = 1;
          --v51;
        }
        while ( v51 );
        v8 = v142;
      }
      v56 = v45 & 0x7F;
      if ( (unsigned int)v56 >= 8 )
      {
        v29 = (unsigned __int64)(unsigned int)v56 >> 3;
        do
        {
          v50 = __ROL8__(*v46++ ^ v50, v48);
          v56 = (unsigned int)(v56 - 8);
          --v29;
        }
        while ( v29 );
      }
      if ( (_DWORD)v56 )
      {
        do
        {
          v57 = *(unsigned __int8 *)v46;
          v46 = (_QWORD *)((char *)v46 + 1);
          v50 = __ROL8__(v57 ^ v50, v48);
          v32 = (_DWORD)v56 == 1;
          v56 = (unsigned int)(v56 - 1);
        }
        while ( !v32 );
      }
      for ( j = v50; ; LODWORD(v50) = j ^ v50 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v59 = v50 & 0x7FFFFFFF;
      v60 = 0;
      if ( v59 != v39[5] )
      {
        if ( !*v39 )
          v60 = v39[6] != 0;
        v61 = (unsigned int)v39[4];
        v29 = *((_QWORD *)v39 + 1);
        if ( v39[4] && (*((_DWORD *)v8 + 467) & 0x40) != 0 )
        {
          v62 = KeGetCurrentIrql();
          v56 = 2LL;
          __writecr8(2uLL);
          v63 = v29 & 0xFFFFFFFFFFFFF000uLL;
          v143 = (v29 + v61 - 1) | 0xFFF;
          v64 = (v60 & 2) != 0;
          v65 = (v29 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v66 = ((__int64 (__fastcall *)(unsigned __int64, BOOL, __int64, _QWORD *))v8[135])(v63, v64, v56, v46);
            if ( v66 == -1073741267 )
            {
              if ( v60 )
                goto LABEL_82;
              if ( v62 <= 1u )
              {
                __writecr8(v62);
                KeGetCurrentIrql();
                __writecr8(2uLL);
                goto LABEL_78;
              }
            }
            else if ( v66 < 0 )
            {
LABEL_82:
              __writecr8(v62);
              break;
            }
            v63 += 4096LL;
            v65 += 4096LL;
            if ( v65 == v143 )
            {
              __writecr8(v62);
              goto LABEL_87;
            }
LABEL_78:
            v64 = (v60 & 2) != 0;
          }
        }
        if ( !*((_DWORD *)v8 + 432) )
          *(_QWORD *)(v8[162] + 24LL) = (unsigned int)v39[5] ^ (unsigned __int64)v59;
        v67 = *((_QWORD *)v39 + 1);
        if ( !*((_DWORD *)v8 + 432) )
        {
          v8[217] = v8 - 0xB8BF814EDC6E963LL;
          v8[218] = (char *)v39 - 0x4C48B4211BBACBEBLL;
          v8[219] = *v39;
          v8[220] = v67;
          *((_DWORD *)v8 + 432) = 1;
        }
      }
LABEL_87:
      v68 = v8[152];
      v69 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v8[42])(v68, v29, v56, v46);
      v71 = *(unsigned int **)v8[173];
      v72 = v71 + 4;
      v73 = *((_BYTE *)v71 + 12) != 0;
      v74 = (unsigned __int64)&v71[6 * *v71 + 4];
      do
      {
        v75 = 24LL;
        v76 = (__int64 *)(v39 + 6);
        v77 = v72;
        while ( 1 )
        {
          v78 = *(_QWORD *)v77;
          v77 += 2;
          v79 = *v76++;
          if ( v78 != v79 )
            break;
          v75 = (unsigned int)(v75 - 8);
          if ( (unsigned int)v75 < 8 )
          {
            if ( !(_DWORD)v75 )
              goto LABEL_96;
            while ( 1 )
            {
              v70 = *(unsigned __int8 *)v77;
              v77 = (unsigned int *)((char *)v77 + 1);
              v80 = *(unsigned __int8 *)v76;
              v76 = (__int64 *)((char *)v76 + 1);
              if ( v70 != v80 )
                goto LABEL_95;
              v32 = (_DWORD)v75 == 1;
              v75 = (unsigned int)(v75 - 1);
              if ( v32 )
                goto LABEL_96;
            }
          }
        }
LABEL_95:
        v72 += 6;
      }
      while ( (unsigned __int64)v72 < v74 );
LABEL_96:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v8[50])(v8[152], v70, v75, v76);
      __writecr8(v69);
      if ( !v73 )
        goto LABEL_199;
      if ( (*((_DWORD *)v8 + 467) & 0x10) != 0 && !*((_DWORD *)v8 + 432) )
      {
        v8[217] = v8 - 0xB8BF814EDC6E963LL;
        v8[218] = (char *)v39 - 0x4C48B4211BBACBEBLL;
        v8[219] = *v39;
        v8[220] = 1LL;
        *((_DWORD *)v8 + 432) = 1;
      }
      if ( *((_QWORD *)v39 + 3) != 1LL )
      {
LABEL_199:
        if ( v72 == (unsigned int *)v74 && !*((_DWORD *)v8 + 432) )
        {
          v8[217] = v8 - 0xB8BF814EDC6E963LL;
          v8[218] = (char *)v39 - 0x4C48B4211BBACBEBLL;
          v8[219] = *v39;
          v8[220] = v72;
          *((_DWORD *)v8 + 432) = 1;
        }
      }
      v81 = v8[152];
      v82 = KeGetCurrentIrql();
      v4 = 15LL;
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v8[42])(v81);
      v83 = 0LL;
      v84 = *(unsigned int **)v8[173];
      v85 = v84 + 4;
      v86 = (unsigned __int64)&v84[6 * *v84 + 4];
      while ( 1 )
      {
        v85 += 6;
        if ( (unsigned __int64)v85 >= v86 )
          break;
        v87 = *((_QWORD *)v85 + 1);
        if ( v87 < v83 )
          break;
        if ( (v87 & 0xFFFFFFFFFFFFF000uLL) != v87 )
          break;
        v88 = v87 + v85[4];
        if ( v88 <= v87 || v88 == v83 )
          break;
        v83 = v87 + v85[4];
      }
      ((void (__fastcall *)(_QWORD))v8[50])(v8[152]);
      __writecr8(v82);
      v35 = v150;
      if ( v85 != (unsigned int *)v86 )
      {
LABEL_112:
        if ( !*((_DWORD *)v8 + 432) )
        {
          v8[217] = v8 - 0xB8BF814EDC6E963LL;
          v8[218] = (char *)v39 - 0x4C48B4211BBACBEBLL;
          v8[219] = *v39;
          v8[220] = v85;
          *((_DWORD *)v8 + 432) = 1;
        }
      }
      goto LABEL_132;
    }
LABEL_135:
    if ( *((_DWORD *)v8 + 432) )
    {
      v101 = v8[220];
      v102 = v8[218];
      v103 = v8[217];
      v104 = v8[219];
      v151 = v101;
      v152 = v102;
      v141 = (_QWORD *)v103;
      v153 = v8;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = KeGetCurrentThread();
      DpcStack = (__int64 *)CurrentPrcb->DpcStack;
      if ( !CurrentPrcb->DpcRoutineActive || &v153 > (_QWORD **)DpcStack || &v153 < (_QWORD **)DpcStack - 3072 )
        DpcStack = (__int64 *)CurrentThread->InitialStack;
      if ( (v8[233] & 0x8000000) == 0 )
      {
        v103 = __readcr0();
        __writecr0(v103 & 0xFFFFFFFFFFFEFFFFuLL);
        v108 = (unsigned __int64)(v8 + 259);
        v109 = 0;
        v110 = (unsigned __int64)&v8[2 * *((unsigned int *)v8 + 516) + 259];
        for ( k = (_QWORD *)v110; v109 < *((_DWORD *)v8 + 517); ++v109 )
        {
          *(_QWORD *)*k = k[1];
          v112 = __readcr4();
          if ( (v112 & 0x20080) != 0 )
          {
            __writecr4(v112 ^ 0x80);
            __writecr4(v112);
          }
          else
          {
            v113 = __readcr3();
            __writecr3(v113);
          }
          k += 2;
        }
        if ( v108 < v110 )
        {
          do
          {
            v114 = *(unsigned int *)(v108 + 8);
            v115 = k;
            v116 = *(char **)v108;
            v117 = v114;
            if ( (unsigned int)v114 >= 8 )
            {
              v118 = (unsigned __int64)(unsigned int)v114 >> 3;
              do
              {
                v117 -= 8;
                *(_QWORD *)v116 = *v115++;
                v116 += 8;
                --v118;
              }
              while ( v118 );
            }
            if ( v117 )
            {
              v119 = v116 - (char *)v115;
              do
              {
                *((_BYTE *)v115 + v119) = *(_BYTE *)v115;
                v115 = (_QWORD *)((char *)v115 + 1);
                --v117;
              }
              while ( v117 );
            }
            k = (_QWORD *)((char *)k + v114);
            v108 += 16LL;
          }
          while ( v108 < v110 );
          LODWORD(v101) = v151;
          LODWORD(v102) = v152;
        }
        *(_BYTE *)v8[67] = -61;
        __writecr0(v103);
        LODWORD(v103) = (_DWORD)v141;
      }
      if ( *((_DWORD *)v8 + 444) && KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v120 = *((_DWORD *)v8 + 444);
      if ( v120 )
      {
        v121 = v120 - 1;
        if ( v121 )
        {
          v122 = v121 - 1;
          if ( v122 )
          {
            v123 = v122 - 1;
            if ( v123 )
            {
              v124 = v123 - 1;
              if ( v124 )
              {
                if ( v124 == 1 )
                  _interlockedbittestandset(&KeGetCurrentThread()->Header.Lock, (*((_DWORD *)v8 + 466) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(v8[167] + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  &KeGetCurrentThread()->ApcState.Process->Header.Lock,
                  (*((_DWORD *)v8 + 466) >> 10) & 0x1F);
              }
              goto LABEL_195;
            }
            v125 = (volatile signed __int32 *)v8[156];
          }
          else
          {
            v125 = (volatile signed __int32 *)v8[155];
          }
        }
        else
        {
          v125 = (volatile signed __int32 *)v8[153];
        }
        _interlockedbittestandset64(v125, 0LL);
      }
LABEL_195:
      CurrentThread[1].InitialStack = 0LL;
      CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
      SdbpCheckDll(265, v103, v102, v101, v104, v8[43], (__int64)DpcStack);
      JUMPOUT(0x1401759F0LL);
    }
    v126 = *((_DWORD *)v8 + 49);
    *((_DWORD *)v8 + 49) = 0;
    v127 = v8;
    *((_DWORD *)v8 + 394) += 1400;
    v128 = (const char *)v8;
    v129 = *((_DWORD *)v8 + 389);
    if ( v8 < v8 + 175 )
    {
      do
      {
        _mm_prefetch(v128, 0);
        v128 += 64;
      }
      while ( v128 < (const char *)v8 + 1400 );
    }
    v130 = v8[195];
    do
    {
      v131 = 8LL;
      do
      {
        v132 = v127[1] ^ __ROL8__(*v127 ^ v130, v129);
        v127 += 2;
        v130 = __ROL8__(v132, v129);
        --v131;
      }
      while ( v131 );
      v133 = __ROL8__(v8[195] ^ ((char *)v127 - (char *)v8), 17) ^ v8[195] ^ ((char *)v127 - (char *)v8);
      v129 = ((unsigned __int8)(((v133 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v133) ^ (unsigned __int8)v129) & 0x3F;
      if ( !v129 )
        LOBYTE(v129) = 1;
      --v36;
    }
    while ( v36 );
    v1 = a1;
    v134 = 120;
    do
    {
      v130 = __ROL8__(*v127++ ^ v130, v129);
      v134 -= 8;
      --v4;
    }
    while ( v4 );
    for ( ; v134; --v134 )
    {
      v135 = *(unsigned __int8 *)v127;
      v127 = (_QWORD *)((char *)v127 + 1);
      v130 = __ROL8__(v135 ^ v130, v129);
    }
    v136 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v8[34];
    *((_DWORD *)v8 + 49) = v126;
    v8[250] = v130;
    v136(v7, 1LL, v130, v127);
  }
  result = (struct _KTHREAD *)KiGetTrapFrameMode(v1);
  v138 = (_BYTE)result != 0;
  if ( (_BYTE)result )
  {
    result = KeGetCurrentThread();
    v138 = _bittest((const signed __int32 *)&result->Header.Lock, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v138 )
  {
    result = (struct _KTHREAD *)KiReadKernelDr7();
    if ( result )
      __writedr(7u, (unsigned __int64)result);
  }
  return result;
}
