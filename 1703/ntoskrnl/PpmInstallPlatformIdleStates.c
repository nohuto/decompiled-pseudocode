/*
 * XREFs of PpmInstallPlatformIdleStates @ 0x1406C6000
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeQueryActiveProcessorAffinity @ 0x140160880 (KeQueryActiveProcessorAffinity.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PpmResetPlatformIdleAccounting @ 0x14022925C (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1406C5A4C (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdatePlatformDependencies @ 0x1406D6430 (PpmIdleUpdatePlatformDependencies.c)
 */

__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1)
{
  __int64 v1; // rbp
  ULONG v2; // esi
  unsigned int v3; // edi
  ULONG v4; // r15d
  unsigned int v5; // ecx
  unsigned int v6; // edx
  _DWORD *v7; // rax
  int v8; // ebx
  int v9; // eax
  ULONG v10; // r14d
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  size_t v15; // rbx
  PVOID PoolWithTag; // rax
  __int64 v17; // r14
  bool v18; // zf
  int *v19; // rax
  __int64 v20; // r13
  unsigned int v21; // edi
  __int64 v22; // rbx
  _DWORD *v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r12
  __int128 v30; // xmm0
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  unsigned int v37; // r9d
  __int64 v38; // r10
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned int v42; // r12d
  unsigned int v43; // r9d
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
  unsigned int v60; // edi
  __int64 v61; // r13
  unsigned int v62; // eax
  __int64 v63; // r12
  __int64 v64; // rcx
  char v65; // al
  unsigned int v67; // [rsp+20h] [rbp-58h]
  unsigned int v68; // [rsp+24h] [rbp-54h]
  unsigned int v70; // [rsp+88h] [rbp+10h]
  int v71; // [rsp+88h] [rbp+10h]
  __int64 v72; // [rsp+88h] [rbp+10h]
  ULONG v73; // [rsp+90h] [rbp+18h]
  unsigned int v74; // [rsp+98h] [rbp+20h]

  v1 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 0;
  if ( PpmPlatformStates && !*(_BYTE *)(v1 + 48) )
  {
    v2 = -1073741431;
    goto LABEL_67;
  }
  v3 = *(_DWORD *)(v1 + 4);
  if ( !v3 || *(_DWORD *)(v1 + 8) > v3 )
    goto LABEL_66;
  PpmIdleUpdatePlatformDependencies(v1);
  v4 = KeNumberProcessors_0;
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 8);
  v73 = KeNumberProcessors_0;
  if ( v6 )
  {
    v7 = (_DWORD *)(v1 + 72);
    while ( *v7 <= (unsigned int)KeNumberProcessors_0 )
    {
      ++v5;
      v7 += 12;
      if ( v5 >= v6 )
        goto LABEL_10;
    }
    goto LABEL_66;
  }
LABEL_10:
  v8 = 0;
  v9 = 0;
  if ( v6 )
  {
    v10 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v11 = *(_QWORD *)(KeGetPrcb(v10) + 23936);
        if ( !v11 )
          goto LABEL_66;
        v8 += *(_DWORD *)(v11 + 28);
      }
      while ( ++v10 < v4 );
    }
    v12 = *(_DWORD *)(v1 + 8);
    v8 = v12 * (v4 + v8);
    v9 = v4 * v12;
  }
  if ( !PpmPlatformStates )
  {
    v70 = (384 * v3 + 71) & 0xFFFFFFF8;
    v74 = (v70 + 24 * v9 + 7) & 0xFFFFFFF8;
    v13 = (v74 + 7 + 24 * v8) & 0xFFFFFFF8;
    v68 = (4 * v3 + 15) & 0xFFFFFFF8;
    v67 = (v13 + 1008 * v3 + 31) & 0xFFFFFFF8;
    v14 = (v4 * v68 + 7 + v67) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v14 += (v3 * *(_DWORD *)PpmIdleVetoList) << 6;
    v15 = v14;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v14, 0x694D5050u);
    v17 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v2 = -1073741670;
      goto LABEL_67;
    }
    memset(PoolWithTag, 0, v15);
    *(_DWORD *)v17 = v3;
    v18 = *(_DWORD *)(v1 + 8) == 0;
    *(_DWORD *)(v17 + 8) = v4;
    *(_DWORD *)(v17 + 4) = !v18;
    *(_QWORD *)(v17 + 16) = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v17 + 40) = *(_QWORD *)(v1 + 40);
    v19 = (int *)(v17 + v13);
    *(_QWORD *)(v17 + 48) = v19;
    v19[1] = v3;
    PpmResetPlatformIdleAccounting(v19);
    v20 = v17 + ((v4 * v68 + 7 + v67) & 0xFFFFFFF8);
    v21 = 0;
    if ( *(_DWORD *)(v1 + 4) )
    {
      do
      {
        v22 = 384LL * v21;
        *(_BYTE *)(v22 + v17 + 121) = 1;
        KeQueryActiveProcessorAffinity(v22 + v17 + 128);
        v23 = (_DWORD *)PpmIdleVetoList;
        v24 = (_QWORD *)(v22 + v17 + 88);
        v24[1] = v24;
        *v24 = v24;
        *(_BYTE *)(v22 + v17 + 104) = 7;
        if ( v23 )
        {
          if ( v21 == *(_DWORD *)(v1 + 4) - 1 )
            *(_BYTE *)(v22 + v17 + 105) = 1;
          *(_DWORD *)(v22 + v17 + 108) = *v23;
          *(_QWORD *)(v22 + v17 + 112) = v20;
          v20 += (unsigned __int64)(unsigned int)*v23 << 6;
          *(_QWORD *)(1008LL * v21 + v17 + v13 + 192) = v22 + v17 + 80;
        }
        ++v21;
      }
      while ( v21 < *(_DWORD *)(v1 + 4) );
      v4 = v73;
    }
    v25 = 0;
    v26 = v17 + v70;
    v27 = v17 + v74;
    v71 = 0;
    if ( *(_DWORD *)(v1 + 8) )
    {
      v28 = 24LL * v4;
      do
      {
        v29 = 384LL * v25;
        v30 = *(_OWORD *)(v1 + 48LL * v25 + 80);
        *(_QWORD *)(v29 + v17 + 312) = v26;
        v26 += v28;
        *(_DWORD *)(v29 + v17 + 124) = v4;
        *(_OWORD *)(v29 + v17 + 296) = v30;
        if ( v4 )
        {
          v31 = 0LL;
          do
          {
            v32 = *(_QWORD *)(v29 + v17 + 312);
            v33 = *(_QWORD *)(KeGetPrcb(v2) + 23936);
            *(_DWORD *)(v32 + v31) = v2++;
            v31 += 24LL;
            v34 = *(_DWORD *)(v33 + 28);
            *(_QWORD *)(v32 + v31 - 8) = v27;
            *(_DWORD *)(v32 + v31 - 16) = v34;
            v27 += 24LL * *(unsigned int *)(v33 + 28);
          }
          while ( v2 < v4 );
          v1 = a1;
          v2 = 0;
          v25 = v71;
          v28 = 24LL * v4;
        }
        v71 = ++v25;
      }
      while ( v25 < *(_DWORD *)(v1 + 8) );
    }
    for ( i = 0; i < v4; ++i )
    {
      Prcb = KeGetPrcb(i);
      v37 = 0;
      v38 = *(_QWORD *)(Prcb + 23936);
      *(_QWORD *)(v38 + 752) = v17 + v67 + i * v68;
      *(_DWORD *)(v38 + 776) = *(_DWORD *)(v1 + 8);
      *(_QWORD *)(v38 + 784) = v27;
      v39 = *(unsigned int *)(v1 + 8);
      v27 += 24 * v39;
      if ( (_DWORD)v39 )
      {
        do
        {
          v40 = 3LL * ((unsigned int)v39 - v37 - 1);
          v41 = 384LL * v37;
          v39 = *(_QWORD *)(v38 + 784);
          *(_DWORD *)(v39 + 8 * v40 + 4) = v37++;
          *(_DWORD *)(v39 + 8 * v40 + 8) = *(_DWORD *)(v41 + v17 + 124);
          *(_QWORD *)(v39 + 8 * v40 + 16) = *(_QWORD *)(v41 + v17 + 312);
          LODWORD(v39) = *(_DWORD *)(v1 + 8);
        }
        while ( v37 < (unsigned int)v39 );
      }
    }
    goto LABEL_42;
  }
  v17 = PpmPlatformStates;
  if ( *(_DWORD *)(PpmPlatformStates + 8) != v4
    || *(_DWORD *)PpmPlatformStates != v3
    || *(_DWORD *)(PpmPlatformStates + 4) != 1 )
  {
LABEL_66:
    v2 = -1073741811;
    goto LABEL_67;
  }
LABEL_42:
  v42 = 0;
  if ( *(_DWORD *)(v1 + 8) )
  {
    do
    {
      v43 = 0;
      v44 = v1 + 48LL * v42;
      v45 = 384LL * v42;
      *(_DWORD *)(v45 + v17 + 72) = *(_DWORD *)(v44 + 64);
      *(_DWORD *)(v45 + v17 + 76) = *(_DWORD *)(v44 + 68);
      if ( *(_DWORD *)(v44 + 72) )
      {
        do
        {
          v46 = *(_QWORD *)(v44 + 96);
          v47 = 0;
          v48 = *(_QWORD *)(v45 + v17 + 312);
          v49 = 3LL * *(unsigned int *)(v46 + 8LL * v43);
          v50 = *(_DWORD *)(v48 + 24LL * *(unsigned int *)(v46 + 8LL * v43) + 8);
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
              if ( v47 >= *(unsigned __int8 *)(v46 + 8LL * v43 + 4) )
              {
                *(_BYTE *)(v51 + 24LL * (v50 - v47 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v46 + 8LL * v43 + 6) )
                  *(_BYTE *)(v51 + 24LL * (v50 - v47 - 1)) = 1;
              }
              v50 = *(_DWORD *)(v48 + 8 * v49 + 8);
              ++v47;
            }
            while ( v47 < v50 );
          }
          ++v43;
        }
        while ( v43 < *(_DWORD *)(v44 + 72) );
      }
      if ( *(_BYTE *)(v44 + 60) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v44 + 56));
        v54 = *(_QWORD *)(v45 + v17 + 312);
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
      ++v42;
    }
    while ( v42 < *(_DWORD *)(v1 + 8) );
    v4 = v73;
  }
  for ( j = 0; j < v4; ++j )
  {
    v60 = 0;
    v61 = *(_QWORD *)(KeGetPrcb(j) + 23936);
    v62 = *(_DWORD *)(v61 + 776);
    if ( v62 )
    {
      do
      {
        v63 = 3LL * (v62 - v60 - 1);
        v72 = *(_QWORD *)(v61 + 784);
        v64 = v1 + 48LL * v60 + 56;
        if ( !*(_BYTE *)(v64 + 4) || (v18 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v64) == j, v65 = 0, v18) )
          v65 = 1;
        ++v60;
        *(_BYTE *)(v72 + 8 * v63 + 1) = v65;
        v62 = *(_DWORD *)(v61 + 776);
      }
      while ( v60 < v62 );
    }
  }
  if ( !PpmPlatformStates )
    PpmEnableCoordinatedIdleStates((int *)v17, 0);
LABEL_67:
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v2;
}
