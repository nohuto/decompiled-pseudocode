/*
 * XREFs of EtwpCovSampContextGetModule @ 0x1407B47B0
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1407B63B0 (EtwpCovSampImageNotify.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwCovSampHash @ 0x1402B4674 (EtwCovSampHash.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpFindDebugId @ 0x14058CC9C (EtwpFindDebugId.c)
 *     EtwpCovSampCheckForSegments @ 0x1407B3F8C (EtwpCovSampCheckForSegments.c)
 *     EtwpCovSampContextFastFindModule @ 0x1407B463C (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampContextPruneModules @ 0x1407B55E4 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleCleanup @ 0x1407B65C4 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleGetName @ 0x1407B6654 (EtwpCovSampModuleGetName.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1407B6744 (EtwpCovSampModuleNameInfoCleanup.c)
 */

__int64 __fastcall EtwpCovSampContextGetModule(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rdi
  void *v7; // r14
  char *v8; // r12
  PIMAGE_NT_HEADERS v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v16; // r14
  __int64 Module; // rax
  unsigned int v18; // ecx
  char *PoolWithTag; // rax
  size_t v20; // rdx
  int v21; // eax
  unsigned int v22; // r8d
  int v23; // eax
  unsigned int v24; // r8d
  __int64 v25; // r14
  unsigned int v26; // esi
  unsigned int v27; // edi
  __int64 v28; // rax
  __m128i v29; // xmm6
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // ecx
  struct _KTHREAD *v34; // rcx
  char *v35; // rsi
  __int64 v36; // r8
  unsigned int v37; // eax
  char i; // cl
  unsigned __int64 v39; // rcx
  unsigned int v40; // r11d
  __int64 v41; // rdi
  _QWORD *v42; // rcx
  unsigned __int64 v43; // rcx
  char k; // cl
  __int64 v45; // rsi
  unsigned __int64 v46; // rcx
  __int64 v47; // r11
  _QWORD *v48; // r10
  unsigned __int64 v49; // rcx
  char *v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rdi
  _QWORD *n; // rdx
  _QWORD *v54; // r9
  __int64 v55; // r10
  unsigned __int64 v56; // rdi
  _QWORD *ii; // rdx
  __int64 v58; // r8
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  int v65; // edi
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r8
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rdx
  int v71; // r11d
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  int Name; // [rsp+20h] [rbp-B8h]
  int v79; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v80; // [rsp+28h] [rbp-B0h]
  __int64 v81; // [rsp+28h] [rbp-B0h]
  __int64 j; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v83; // [rsp+28h] [rbp-B0h]
  char *v84; // [rsp+30h] [rbp-A8h]
  __int64 v85; // [rsp+30h] [rbp-A8h]
  __int64 m; // [rsp+30h] [rbp-A8h]
  unsigned int v87; // [rsp+38h] [rbp-A0h]
  int v88; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v89; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v90; // [rsp+40h] [rbp-98h]
  int v91; // [rsp+48h] [rbp-90h]
  _QWORD *v92; // [rsp+48h] [rbp-90h]
  unsigned __int64 v93; // [rsp+48h] [rbp-90h]
  __int64 v94; // [rsp+50h] [rbp-88h] BYREF
  size_t v95; // [rsp+58h] [rbp-80h]
  __int64 v96; // [rsp+60h] [rbp-78h]
  unsigned __int64 v97[3]; // [rsp+68h] [rbp-70h] BYREF
  __m128i v98; // [rsp+80h] [rbp-58h]
  unsigned int v100; // [rsp+F0h] [rbp+18h]
  int v101; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v102; // [rsp+F0h] [rbp+18h]

  v6 = 0LL;
  v100 = 0;
  v7 = 0LL;
  v84 = 0LL;
  v8 = 0LL;
  *a4 = 0LL;
  v94 = 0LL;
  v96 = 0LL;
  v95 = *(_QWORD *)(a3 + 32);
  v9 = RtlImageNtHeader(*(PVOID *)(a3 + 16));
  v97[2] = (unsigned __int64)v9;
  if ( !v9 )
  {
    Name = -1073741637;
    goto LABEL_121;
  }
  LODWORD(v96) = v9->OptionalHeader.CheckSum;
  HIDWORD(v96) = v9->FileHeader.TimeDateStamp;
  if ( (*(_DWORD *)(a3 + 8) & 0x100) != 0 )
  {
    v13 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 48);
    if ( !v14 )
    {
      Name = -1073741637;
      goto LABEL_121;
    }
    v13 = *(_QWORD *)(v14 + 24);
  }
  v94 = v13;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = (volatile signed __int64 *)(a1 + 664);
  ExAcquirePushLockSharedEx(a1 + 664, 0LL);
  Module = EtwpCovSampContextFastFindModule(a1, (__int64)&v94, a4);
  if ( Module && Module == *a4 )
  {
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Name = 0;
    goto LABEL_13;
  }
  v91 = *(_DWORD *)(a1 + 684) >> 5;
  v18 = *(_DWORD *)(a1 + 680);
  if ( v18 <= *(_DWORD *)(a1 + 696) )
    v18 = *(_DWORD *)(a1 + 696);
  v87 = v18;
  if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
  KeAbPostRelease(a1 + 664);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x56777445u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Name = -1073741670;
LABEL_13:
    v7 = 0LL;
    goto LABEL_121;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  *((_QWORD *)v8 + 10) = v8 + 72;
  *((_QWORD *)v8 + 9) = v8 + 72;
  *((_QWORD *)v8 + 12) = v8 + 88;
  *((_QWORD *)v8 + 11) = v8 + 88;
  *(_QWORD *)v8 = 0LL;
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 8) = 1LL;
  *((_QWORD *)v8 + 1) = v94;
  v20 = v95;
  *((_QWORD *)v8 + 5) = v95;
  *((_QWORD *)v8 + 4) = v96;
  *((_DWORD *)v8 + 30) ^= (*((_DWORD *)v8 + 30) ^ (*(_DWORD *)(a3 + 8) << 9)) & 0x20000;
  v79 = 1;
  if ( (int)EtwpFindDebugId(*(char **)(a3 + 16), v20, (void **)v8 + 6, (_DWORD *)v8 + 14) >= 0 )
  {
    if ( *((_DWORD *)v8 + 14) <= 0x400u )
    {
      v21 = 1;
    }
    else
    {
      ExFreePoolWithTag(*((PVOID *)v8 + 6), 0);
      *((_QWORD *)v8 + 6) = 0LL;
      *((_DWORD *)v8 + 14) = 0;
      v21 = 0;
      v79 = 0;
    }
    if ( v21 )
    {
      Name = EtwpCovSampModuleGetName(v8, a3, a2);
      if ( Name < 0 )
        goto LABEL_13;
      v97[0] = *((_QWORD *)v8 + 14);
      v97[1] = (unsigned __int16)*((_DWORD *)v8 + 30);
      v22 = *(_DWORD *)(a1 + 1096);
      v23 = v22 ? EtwpCovSampCheckForSegments(v97, (unsigned __int64 *)(a1 + 776), v22) : v79;
      if ( v23 )
      {
        v24 = *(_DWORD *)(a1 + 1100);
        if ( v24 )
        {
          if ( !(unsigned int)EtwpCovSampCheckForSegments(v97, (unsigned __int64 *)(a1 + 936), v24) )
          {
            v23 = 1;
LABEL_35:
            *((_DWORD *)v8 + 30) ^= (*((_DWORD *)v8 + 30) ^ (v23 << 16)) & 0x10000;
            v25 = *((_QWORD *)v8 + 6);
            v26 = *(_DWORD *)(v25 + 20);
            v27 = *((_DWORD *)v8 + 10);
            LODWORD(v80) = *((_DWORD *)v8 + 9);
            HIDWORD(v80) = *((_DWORD *)v8 + 8);
            v28 = EtwCovSampHash(v80, *(unsigned int *)(a1 + 12));
            v98 = *(__m128i *)(v25 + 4);
            v29 = v98;
            v30 = EtwCovSampHash(__PAIR64__(v26, v27), v28);
            v31 = EtwCovSampHash(v29.m128i_u64[0], v30);
            v81 = EtwCovSampHash(_mm_srli_si128(v29, 8).m128i_u64[0], v31);
            v32 = v81 ^ HIDWORD(v81);
            if ( (unsigned int)v81 == HIDWORD(v81) )
              v32 = 1;
            *((_DWORD *)v8 + 31) = v32;
            v6 = 0LL;
            v16 = (volatile signed __int64 *)(a1 + 664);
            goto LABEL_38;
          }
          v23 = 0;
        }
        if ( !v23 )
          goto LABEL_38;
        goto LABEL_35;
      }
    }
  }
LABEL_38:
  v33 = 2 * v91;
  if ( v87 + 1 > 2 * v91 )
  {
    v6 = v33;
    if ( !v33 )
      v6 = 128LL;
    v100 = v6;
    v84 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(2 * v6), 0x56777445u);
  }
  v34 = KeGetCurrentThread();
  --v34->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v16, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  v12 = v84;
  if ( v84 && (unsigned int)v6 > *(_DWORD *)(a1 + 684) >> 5 )
  {
    v35 = &v84[8 * (unsigned int)v6];
    v36 = (unsigned int)v6;
    v88 = v6 & (v6 - 1);
    if ( v88 )
    {
      v37 = v6;
      for ( i = -1; v37; v37 >>= 1 )
        ++i;
      v36 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v36 > 0x4000000 )
      v36 = 0x4000000LL;
    v39 = (unsigned __int64)(8 * v36 + 7) >> 3;
    if ( v35 > &v35[8 * v36] )
      v39 = 0LL;
    if ( v39 )
    {
      memset64(v35, (a1 + 696) | 1, v39);
      v6 = v100;
    }
    v85 = -1LL << (*(_BYTE *)(a1 + 700) & 0x1F);
    v40 = 0;
    if ( (*(_DWORD *)(a1 + 700) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v41 = *(_QWORD *)(a1 + 704);
        for ( j = v41; ; v41 = j )
        {
          v42 = *(_QWORD **)(v41 + 8LL * v40);
          v92 = v42;
          if ( ((unsigned __int8)v42 & 1) != 0 )
            break;
          *(_QWORD *)(v41 + 8LL * v40) = *v42;
          v43 = ((((unsigned __int64)v85 & v42[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v85 & v42[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v85 & v42[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v85 & v42[1]) >> 32)
                  + 37
                  * ((((unsigned int)v85 & (_DWORD)v42[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v85 & (_DWORD)v42[1]) >> 16)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(v85 & v42[1]) >> 8)
                     + 37 * ((unsigned __int8)(v85 & v42[1]) + 11623883)))))))) & (unsigned int)(v36 - 1);
          *v92 = *(_QWORD *)&v35[8 * v43];
          *(_QWORD *)&v35[8 * v43] = v92;
        }
        ++v40;
      }
      while ( v40 < *(_DWORD *)(a1 + 700) >> 5 );
      v6 = v100;
    }
    *(_QWORD *)(a1 + 704) = v35;
    *(_DWORD *)(a1 + 700) = (32 * v36) | *(_DWORD *)(a1 + 700) & 0x1F;
    if ( v88 )
    {
      for ( k = -1; (_DWORD)v6; LODWORD(v6) = (unsigned int)v6 >> 1 )
        ++k;
      v6 = (unsigned int)(1 << k);
    }
    if ( (unsigned int)v6 > 0x4000000 )
      v6 = 0x4000000LL;
    v101 = v6;
    v45 = a1 + 680;
    v46 = (unsigned __int64)(8 * v6 + 7) >> 3;
    if ( v12 > &v12[8 * v6] )
      v46 = 0LL;
    if ( v46 )
      memset64(v12, (a1 + 680) | 1, v46);
    v10 = *(unsigned int *)(a1 + 684);
    v47 = -1LL << (*(_BYTE *)(a1 + 684) & 0x1F);
    v11 = 0LL;
    if ( (v10 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v10 = *(_QWORD *)(a1 + 688);
        for ( m = v10; ; v10 = m )
        {
          v48 = *(_QWORD **)(v10 + 8LL * (unsigned int)v11);
          if ( ((unsigned __int8)v48 & 1) != 0 )
            break;
          *(_QWORD *)(v10 + 8LL * (unsigned int)v11) = *v48;
          LODWORD(v6) = v101;
          v49 = ((((unsigned __int64)v47 & v48[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v47 & v48[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v47 & v48[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v47 & v48[1]) >> 32)
                  + 37
                  * ((((unsigned int)v47 & (_DWORD)v48[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v47 & (_DWORD)v48[1]) >> 16)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(v47 & v48[1]) >> 8)
                     + 37 * ((unsigned __int8)(v47 & v48[1]) + 11623883)))))))) & (unsigned int)(v101 - 1);
          *v48 = *(_QWORD *)&v12[8 * v49];
          *(_QWORD *)&v12[8 * v49] = v48;
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *(_DWORD *)(a1 + 684) >> 5 );
    }
    v50 = *(char **)(a1 + 688);
    *(_QWORD *)(a1 + 688) = v12;
    *(_DWORD *)(a1 + 684) = (32 * v6) | *(_DWORD *)(a1 + 684) & 0x1F;
    v84 = v50;
  }
  else
  {
    v45 = a1 + 680;
  }
  if ( *(_DWORD *)(a1 + 684) >= 0x20u )
  {
    v51 = EtwpCovSampContextFastFindModule(a1, (__int64)&v94, a4);
    v12 = (char *)v51;
    if ( v51 )
    {
      if ( v51 == *a4 )
      {
LABEL_82:
        Name = 0;
        goto LABEL_79;
      }
      *(_DWORD *)(v51 + 120) |= 0x40000u;
      v52 = *(_QWORD *)(v51 + 8) & (-1LL << (*(_DWORD *)(v45 + 4) & 0x1F));
      for ( n = (_QWORD *)(*(_QWORD *)(v45 + 8)
                         + 8
                         * ((HIBYTE(v52)
                           + 37
                           * (BYTE6(v52)
                            + 37
                            * (BYTE5(v52)
                             + 37
                             * (BYTE4(v52)
                              + 37
                              * (((*(_DWORD *)(v51 + 8) & (unsigned int)(-1 << (*(_DWORD *)(v45 + 4) & 0x1F))) >> 24)
                               + 37
                               * ((unsigned __int8)((*(_DWORD *)(v51 + 8) & (unsigned int)(-1 << (*(_DWORD *)(v45 + 4) & 0x1F))) >> 16)
                                + 37
                                * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v51 + 8) & (-1 << (*(_DWORD *)(v45 + 4) & 0x1F))) >> 8)
                                 + 37 * ((unsigned __int8)v52 + 11623883)))))))) & ((*(_DWORD *)(v45 + 4) >> 5) - 1)));
            (*n & 1) == 0;
            n = (_QWORD *)*n )
      {
        if ( *n == v51 )
        {
          *n = *(_QWORD *)v51;
          --*(_DWORD *)v45;
          *(_QWORD *)v51 |= 0x8000000000000002uLL;
          break;
        }
      }
      *(_QWORD *)v51 = 0LL;
      v54 = (_QWORD *)(v51 + 16);
      v55 = a1 + 696;
      if ( *(_QWORD *)(v51 + 16) )
      {
        v56 = *(_QWORD *)(v51 + 24) & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
        for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 704)
                            + 8
                            * ((HIBYTE(v56)
                              + 37
                              * ((unsigned __int8)((v54[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(v55 + 4) & 0x1F))) >> 48)
                               + 37
                               * ((unsigned __int8)((unsigned __int16)((v54[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(v55 + 4) & 0x1F))) >> 32) >> 8)
                                + 37
                                * ((unsigned __int8)((v54[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(v55 + 4) & 0x1F))) >> 32)
                                 + 37
                                 * ((((_DWORD)v54[1] & (unsigned int)(-1 << (*(_DWORD *)(v55 + 4) & 0x1F))) >> 24)
                                  + 37
                                  * ((unsigned __int8)(((_DWORD)v54[1] & (unsigned int)(-1 << (*(_DWORD *)(v55 + 4) & 0x1F))) >> 16)
                                   + 37
                                   * ((unsigned __int8)((unsigned __int16)(v54[1] & (-1 << (*(_DWORD *)(v55 + 4) & 0x1F))) >> 8)
                                    + 37 * ((unsigned __int8)v56 + 11623883)))))))) & ((*(_DWORD *)(a1 + 700) >> 5) - 1)));
              (*ii & 1) == 0;
              ii = (_QWORD *)*ii )
        {
          if ( (_QWORD *)*ii == v54 )
          {
            *ii = *v54;
            --*(_DWORD *)v55;
            *v54 |= 0x8000000000000002uLL;
            break;
          }
        }
        *v54 = 0LL;
      }
    }
    else
    {
      v55 = a1 + 696;
    }
    *((_DWORD *)v8 + 32) = (*(_DWORD *)(a1 + 1104))++;
    v58 = *(_DWORD *)(v45 + 4) >> 5;
    v59 = *((_QWORD *)v8 + 1) & (-1LL << (*(_DWORD *)(v45 + 4) & 0x1F));
    v60 = (HIBYTE(v59)
         + 37
         * (BYTE6(v59)
          + 37
          * (BYTE5(v59)
           + 37
           * (BYTE4(v59)
            + 37
            * (((*((_DWORD *)v8 + 2) & (unsigned int)(-1 << (*(_DWORD *)(v45 + 4) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*((_DWORD *)v8 + 2) & (unsigned int)(-1 << (*(_DWORD *)(v45 + 4) & 0x1F))) >> 16)
              + 37
              * (37 * ((unsigned __int8)v59 + 11623883)
               + (unsigned __int8)((unsigned __int16)(*((_WORD *)v8 + 4) & (-1 << (*(_DWORD *)(v45 + 4) & 0x1F))) >> 8)))))))) & (unsigned int)(v58 - 1);
    v61 = *(_QWORD *)(v45 + 8);
    *(_QWORD *)v8 = *(_QWORD *)(v61 + 8 * v60);
    *(_QWORD *)(v61 + 8 * v60) = v8;
    ++*(_DWORD *)v45;
    v62 = (_QWORD *)(a1 + 712);
    v63 = *(_QWORD *)(a1 + 712);
    if ( *(_QWORD *)(v63 + 8) != a1 + 712 )
      __fastfail(3u);
    v64 = (__int64)(v8 + 72);
    *((_QWORD *)v8 + 9) = v63;
    *((_QWORD *)v8 + 10) = v62;
    *(_QWORD *)(v63 + 8) = v8 + 72;
    *v62 = v8 + 72;
    *((_DWORD *)v8 + 34) = MEMORY[0xFFFFF78000000320];
    ++*(_DWORD *)(a1 + 728);
    ++*(_DWORD *)(a1 + 732);
    v65 = *((_DWORD *)v8 + 30);
    if ( (v65 & 0x10000) != 0 )
    {
      v66 = *((unsigned int *)v8 + 31);
      *((_QWORD *)v8 + 3) = v66;
      v67 = -1LL << (*(_BYTE *)(v55 + 4) & 0x1F);
      v68 = v66 & v67;
      v69 = (v66 & (unsigned __int64)v67) >> 56;
      v90 = (v66 & (unsigned __int64)v67) >> 48;
      v83 = (v66 & (unsigned __int64)v67) >> 40;
      v93 = (v66 & (unsigned __int64)v67) >> 32;
      v89 = (v66 & (unsigned __int64)v67) >> 24;
      v102 = (v66 & (unsigned __int64)v67) >> 16;
      v70 = (v66 & (unsigned __int64)v67) >> 8;
      v71 = *(_DWORD *)(v55 + 4) >> 5;
      if ( !v71 )
        goto LABEL_115;
      v72 = *(_QWORD *)(v55 + 8)
          + 8LL
          * (((_DWORD)v69
            + 37
            * ((unsigned __int8)v90
             + 37
             * ((unsigned __int8)v83
              + 37
              * ((unsigned __int8)v93
               + 37
               * ((unsigned __int8)v89
                + 37 * ((unsigned __int8)v102 + 37 * ((unsigned __int8)v70 + 37 * ((unsigned __int8)v68 + 11623883)))))))) & (unsigned int)(v71 - 1));
      while ( 1 )
      {
        v72 = *(_QWORD *)v72;
        if ( (v72 & 1) != 0 )
          break;
        if ( v68 == (v67 & *(_QWORD *)(v72 + 8)) )
          goto LABEL_105;
      }
      v72 = 0LL;
LABEL_105:
      if ( v72 )
      {
        if ( *(_DWORD *)(v72 + 16) != *((_DWORD *)v8 + 8) )
          goto LABEL_113;
        if ( *(_DWORD *)(v72 + 20) != *((_DWORD *)v8 + 9) )
          goto LABEL_113;
        if ( *(_QWORD *)(v72 + 24) != *((_QWORD *)v8 + 5) )
          goto LABEL_113;
        v73 = *(_QWORD *)(v72 + 32);
        v74 = *((_QWORD *)v8 + 6);
        if ( *(_DWORD *)(v73 + 20) != *(_DWORD *)(v74 + 20) )
          goto LABEL_113;
        v75 = *(_QWORD *)(v73 + 4) - *(_QWORD *)(v74 + 4);
        if ( !v75 )
          v75 = *(_QWORD *)(v73 + 12) - *(_QWORD *)(v74 + 12);
        if ( v75 )
        {
LABEL_113:
          v65 &= ~0x10000u;
          *((_DWORD *)v8 + 30) = v65;
          *((_DWORD *)v8 + 31) = 0;
        }
        *((_DWORD *)v8 + 30) = v65 | 0x80000;
        EtwpCovSampModuleNameInfoCleanup(v8 + 104);
        *((_QWORD *)v8 + 14) = 0LL;
        *((_WORD *)v8 + 60) = 0;
        ExFreePoolWithTag(*((PVOID *)v8 + 6), 0);
        *((_QWORD *)v8 + 6) = 0LL;
        *((_DWORD *)v8 + 14) = 0;
      }
      else
      {
LABEL_115:
        v58 = (__int64)(v8 + 16);
        v64 = ((((unsigned __int64)v67 & *((_QWORD *)v8 + 3)) >> 56)
             + 37
             * ((unsigned __int8)(((unsigned __int64)v67 & *((_QWORD *)v8 + 3)) >> 48)
              + 37
              * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v67 & *((_QWORD *)v8 + 3)) >> 32) >> 8)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v67 & *((_QWORD *)v8 + 3)) >> 32)
                + 37
                * ((((unsigned int)v67 & *((_DWORD *)v8 + 6)) >> 24)
                 + 37
                 * ((unsigned __int8)(((unsigned int)v67 & *((_DWORD *)v8 + 6)) >> 16)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(v67 & *((_WORD *)v8 + 12)) >> 8)
                   + 37 * ((unsigned __int8)(v67 & v8[24]) + 11623883)))))))) & (unsigned int)(v71 - 1);
        v76 = *(_QWORD *)(v55 + 8);
        *((_QWORD *)v8 + 2) = *(_QWORD *)(v76 + 8 * v64);
        *(_QWORD *)(v76 + 8 * v64) = v8 + 16;
        ++*(_DWORD *)v55;
      }
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)v8 + 8) <= 1 )
      __fastfail(0xEu);
    *a4 = (__int64)v8;
    v8 = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v16, v64, v58, 1LL);
    KeAbPostRelease((ULONG_PTR)v16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    EtwpCovSampContextPruneModules(a1);
    goto LABEL_82;
  }
  Name = -1073741670;
LABEL_79:
  v7 = v84;
LABEL_121:
  if ( *(struct _KTHREAD **)(a1 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664), v10, v11, (__int64)v12);
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v8 )
  {
    *((_QWORD *)v8 + 8) = 0LL;
    EtwpCovSampModuleCleanup(v8);
    ExFreePoolWithTag(v8, 0x56777445u);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x56777445u);
  return (unsigned int)Name;
}
