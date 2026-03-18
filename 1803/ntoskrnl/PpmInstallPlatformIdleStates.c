/*
 * XREFs of PpmInstallPlatformIdleStates @ 0x14075DF00
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x140038470 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     KeQueryActiveProcessorAffinity @ 0x14017FF30 (KeQueryActiveProcessorAffinity.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmResetPlatformIdleAccounting @ 0x1402736FC (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x14075D918 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdatePlatformDependencies @ 0x14076FB58 (PpmIdleUpdatePlatformDependencies.c)
 */

__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1)
{
  __int64 v1; // r14
  char v2; // bp
  unsigned int v3; // ebx
  unsigned int v4; // edi
  ULONG v5; // r15d
  unsigned int v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // rcx
  int v9; // ebx
  int v10; // ecx
  ULONG v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // r12d
  unsigned int v15; // ecx
  size_t v16; // rbx
  PVOID PoolWithTag; // rax
  int *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rbx
  _DWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // r8
  __int64 v29; // rdi
  __int128 v30; // xmm0
  ULONG v31; // r13d
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r12
  __int64 v43; // r9
  __int64 v44; // r13
  __int64 v45; // rbx
  __int64 v46; // r11
  unsigned int v47; // ecx
  __int64 v48; // r15
  __int64 v49; // rdi
  unsigned int v50; // eax
  __int64 v51; // r8
  __int64 v52; // rdx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v54; // rbx
  __int64 v55; // rdi
  int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rax
  ULONG j; // ebx
  __int64 v60; // rdi
  __int64 v61; // r13
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r12
  bool v65; // al
  unsigned int v67; // [rsp+20h] [rbp-68h]
  unsigned int v68; // [rsp+24h] [rbp-64h]
  __int64 v69; // [rsp+28h] [rbp-60h]
  unsigned int v71; // [rsp+98h] [rbp+10h]
  int v72; // [rsp+98h] [rbp+10h]
  __int64 v73; // [rsp+98h] [rbp+10h]
  ULONG v74; // [rsp+A0h] [rbp+18h]
  unsigned int v75; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 1;
  if ( PpmPlatformStates && !*(_BYTE *)(v1 + 48) )
  {
    v3 = -1073741431;
LABEL_72:
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    return v3;
  }
  v4 = *(_DWORD *)(v1 + 4);
  if ( !v4 || *(_DWORD *)(v1 + 8) > v4 )
  {
LABEL_5:
    v3 = -1073741811;
    goto LABEL_72;
  }
  PpmIdleUpdatePlatformDependencies(v1);
  v5 = KeNumberProcessors_0;
  v6 = 0;
  v7 = *(_DWORD *)(v1 + 8);
  v74 = KeNumberProcessors_0;
  if ( v7 )
  {
    v8 = (_DWORD *)(v1 + 72);
    while ( *v8 <= (unsigned int)KeNumberProcessors_0 )
    {
      ++v6;
      v8 += 12;
      if ( v6 >= v7 )
        goto LABEL_11;
    }
    goto LABEL_5;
  }
LABEL_11:
  v9 = 0;
  v10 = 0;
  if ( v7 )
  {
    v11 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(KeGetPrcb(v11) + 23808);
        if ( !v12 )
          goto LABEL_5;
        v9 += *(_DWORD *)(v12 + 32);
        if ( ++v11 >= v5 )
        {
          v7 = *(_DWORD *)(v1 + 8);
          break;
        }
      }
    }
    v9 = v7 * (v5 + v9);
    v10 = v5 * v7;
  }
  v13 = PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 8) != v5
      || *(_DWORD *)PpmPlatformStates != v4
      || (LODWORD(v26) = v7, *(_DWORD *)(PpmPlatformStates + 4) != 1) )
    {
      v3 = -1073741811;
      goto LABEL_71;
    }
  }
  else
  {
    v71 = (384 * v4 + 71) & 0xFFFFFFF8;
    v75 = (v71 + 7 + 24 * v10) & 0xFFFFFFF8;
    v14 = (v75 + 7 + 24 * v9) & 0xFFFFFFF8;
    v68 = (4 * v4 + 15) & 0xFFFFFFF8;
    v67 = (v14 + 1008 * v4 + 31) & 0xFFFFFFF8;
    v15 = (v5 * v68 + 7 + v67) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v15 += (v4 * *(_DWORD *)PpmIdleVetoList) << 6;
    v16 = v15;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v15, 0x694D5050u);
    v13 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v3 = -1073741670;
      goto LABEL_72;
    }
    memset(PoolWithTag, 0, v16);
    *(_DWORD *)v13 = v4;
    *(_DWORD *)(v13 + 4) = *(_DWORD *)(v1 + 8) != 0;
    *(_DWORD *)(v13 + 8) = v5;
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v13 + 40) = *(_QWORD *)(v1 + 40);
    v18 = (int *)(v13 + v14);
    *(_QWORD *)(v13 + 48) = v18;
    v18[1] = v4;
    PpmResetPlatformIdleAccounting(v18);
    v19 = v13 + ((v5 * v68 + 7 + v67) & 0xFFFFFFF8);
    v20 = 0LL;
    if ( *(_DWORD *)(v1 + 4) )
    {
      do
      {
        v21 = 384 * v20;
        *(_BYTE *)(384 * v20 + v13 + 121) = 1;
        KeQueryActiveProcessorAffinity(384 * v20 + v13 + 128);
        v22 = (_DWORD *)PpmIdleVetoList;
        v23 = (_QWORD *)(384 * v20 + v13 + 88);
        v23[1] = v23;
        *v23 = v23;
        *(_BYTE *)(384 * v20 + v13 + 104) = 7;
        if ( v22 )
        {
          if ( (_DWORD)v20 == *(_DWORD *)(v1 + 4) - 1 )
            *(_BYTE *)(v21 + v13 + 105) = 1;
          *(_DWORD *)(v21 + v13 + 108) = *v22;
          *(_QWORD *)(v21 + v13 + 112) = v19;
          v19 += (unsigned __int64)(unsigned int)*v22 << 6;
          *(_QWORD *)(1008LL * (unsigned int)v20 + v13 + v14 + 192) = v21 + v13 + 80;
        }
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 < *(_DWORD *)(v1 + 4) );
      v5 = v74;
    }
    v24 = 0LL;
    v25 = v13 + v71;
    LODWORD(v26) = *(_DWORD *)(v1 + 8);
    v27 = v13 + v75;
    v72 = 0;
    if ( (_DWORD)v26 )
    {
      v28 = 24LL * v5;
      do
      {
        v29 = 384 * v24;
        v30 = *(_OWORD *)(v1 + 48 * v24 + 80);
        *(_QWORD *)(v29 + v13 + 312) = v25;
        v25 += v28;
        *(_DWORD *)(v29 + v13 + 124) = v5;
        v69 = v25;
        *(_OWORD *)(v29 + v13 + 296) = v30;
        if ( v5 )
        {
          v31 = 0;
          v32 = 0LL;
          do
          {
            v33 = *(_QWORD *)(v29 + v13 + 312);
            v34 = *(_QWORD *)(KeGetPrcb(v31) + 23808);
            *(_DWORD *)(v32 + v33) = v31++;
            v32 += 24LL;
            v35 = *(_DWORD *)(v34 + 32);
            *(_QWORD *)(v32 + v33 - 8) = v27;
            *(_DWORD *)(v32 + v33 - 16) = v35;
            v27 += 24LL * *(unsigned int *)(v34 + 32);
          }
          while ( v31 < v5 );
          v1 = a1;
          v25 = v69;
          LODWORD(v24) = v72;
          v28 = 24LL * v5;
        }
        LODWORD(v26) = *(_DWORD *)(v1 + 8);
        v24 = (unsigned int)(v24 + 1);
        v72 = v24;
      }
      while ( (unsigned int)v24 < (unsigned int)v26 );
    }
    for ( i = 0; i < v5; ++i )
    {
      Prcb = KeGetPrcb(i);
      v38 = 0LL;
      v39 = *(_QWORD *)(Prcb + 23808);
      *(_QWORD *)(v39 + 752) = v13 + v67 + i * v68;
      *(_DWORD *)(v39 + 776) = *(_DWORD *)(v1 + 8);
      *(_QWORD *)(v39 + 784) = v27;
      v26 = *(unsigned int *)(v1 + 8);
      v27 += 24 * v26;
      if ( (_DWORD)v26 )
      {
        do
        {
          v40 = 384 * v38;
          v41 = 3LL * (unsigned int)(v26 - v38 - 1);
          v26 = *(_QWORD *)(v39 + 784);
          *(_DWORD *)(v26 + 8 * v41 + 4) = v38;
          v38 = (unsigned int)(v38 + 1);
          *(_DWORD *)(v26 + 8 * v41 + 8) = *(_DWORD *)(v40 + v13 + 124);
          *(_QWORD *)(v26 + 8 * v41 + 16) = *(_QWORD *)(v40 + v13 + 312);
          LODWORD(v26) = *(_DWORD *)(v1 + 8);
        }
        while ( (unsigned int)v38 < (unsigned int)v26 );
      }
    }
  }
  v42 = 0LL;
  if ( (_DWORD)v26 )
  {
    do
    {
      v43 = 0LL;
      v44 = v1 + 48 * v42;
      v45 = 384 * v42;
      *(_DWORD *)(v45 + v13 + 72) = *(_DWORD *)(v44 + 64);
      *(_DWORD *)(v45 + v13 + 76) = *(_DWORD *)(v44 + 68);
      if ( *(_DWORD *)(v44 + 72) )
      {
        do
        {
          v46 = *(_QWORD *)(v44 + 96);
          v47 = 0;
          v48 = *(_QWORD *)(v45 + v13 + 312);
          v49 = 3LL * *(unsigned int *)(v46 + 8 * v43);
          v50 = *(_DWORD *)(v48 + 24LL * *(unsigned int *)(v46 + 8 * v43) + 8);
          if ( v50 )
          {
            do
            {
              v51 = *(_QWORD *)(v48 + 8 * v49 + 16);
              v52 = 3LL * (v50 - v47 - 1);
              *(_QWORD *)(v51 + 8 * v52) = 0LL;
              *(_QWORD *)(v51 + 8 * v52 + 8) = 0LL;
              *(_QWORD *)(v51 + 8 * v52 + 16) = 0LL;
              *(_DWORD *)(v51 + 8 * v52 + 4) = v47;
              if ( !*(_BYTE *)(v44 + 60) && v47 == *(unsigned __int8 *)(v44 + 61) )
                *(_BYTE *)(v51 + 24LL * (v50 - v47 - 1) + 1) = 1;
              if ( v47 >= *(unsigned __int8 *)(v46 + 8 * v43 + 4) )
              {
                *(_BYTE *)(v51 + 24LL * (v50 - v47 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v46 + 8 * v43 + 6) )
                  *(_BYTE *)(v51 + 24LL * (v50 - v47 - 1)) = 1;
              }
              v50 = *(_DWORD *)(v48 + 8 * v49 + 8);
              ++v47;
            }
            while ( v47 < v50 );
          }
          v43 = (unsigned int)(v43 + 1);
        }
        while ( (unsigned int)v43 < *(_DWORD *)(v44 + 72) );
      }
      if ( *(_BYTE *)(v44 + 60) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v44 + 56));
        v54 = *(_QWORD *)(v45 + v13 + 312);
        v55 = 3LL * ProcessorIndexFromNumber;
        memset(
          *(void **)(v54 + 24LL * ProcessorIndexFromNumber + 16),
          0,
          24LL * *(unsigned int *)(v54 + 24LL * ProcessorIndexFromNumber + 8));
        v56 = *(unsigned __int8 *)(v44 + 61);
        v57 = 3LL * (unsigned int)(*(_DWORD *)(v54 + 8 * v55 + 8) - v56 - 1);
        v58 = *(_QWORD *)(v54 + 8 * v55 + 16);
        *(_DWORD *)(v58 + 8 * v57 + 4) = v56;
        *(_BYTE *)(v58 + 8 * v57 + 1) = 1;
      }
      v42 = (unsigned int)(v42 + 1);
    }
    while ( (unsigned int)v42 < *(_DWORD *)(v1 + 8) );
    v5 = v74;
  }
  for ( j = 0; j < v5; ++j )
  {
    v60 = 0LL;
    v61 = *(_QWORD *)(KeGetPrcb(j) + 23808);
    v62 = *(_DWORD *)(v61 + 776);
    if ( v62 )
    {
      do
      {
        v63 = v1 + 48 * v60 + 56;
        v64 = 3LL * (v62 - (unsigned int)v60 - 1);
        v73 = *(_QWORD *)(v61 + 784);
        v65 = !*(_BYTE *)(v63 + 4) || KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v63) == j;
        v60 = (unsigned int)(v60 + 1);
        *(_BYTE *)(v73 + 8 * v64 + 1) = v65;
        v62 = *(_DWORD *)(v61 + 776);
      }
      while ( (unsigned int)v60 < v62 );
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates((int *)v13, 0);
    v2 = 0;
  }
  v3 = 0;
LABEL_71:
  if ( v2 )
    goto LABEL_72;
  return v3;
}
