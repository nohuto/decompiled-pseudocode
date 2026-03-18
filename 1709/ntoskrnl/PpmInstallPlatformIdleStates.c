/*
 * XREFs of PpmInstallPlatformIdleStates @ 0x1406F62E0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14008CE90 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     KeQueryActiveProcessorAffinity @ 0x140138EE0 (KeQueryActiveProcessorAffinity.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PpmResetPlatformIdleAccounting @ 0x14023C10C (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1406F5CE4 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdatePlatformDependencies @ 0x14070C698 (PpmIdleUpdatePlatformDependencies.c)
 */

__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1)
{
  __int64 v1; // r14
  char v2; // bp
  unsigned int v3; // ebx
  unsigned int v4; // edi
  ULONG v5; // r15d
  unsigned int v6; // ecx
  unsigned int v7; // edx
  _DWORD *v8; // rax
  int v9; // ebx
  int v10; // eax
  ULONG v11; // esi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // r12d
  unsigned int v16; // ecx
  size_t v17; // rbx
  PVOID PoolWithTag; // rax
  bool v19; // zf
  int *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rbx
  _DWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int128 v31; // xmm0
  ULONG v32; // r13d
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // r9
  __int64 v46; // r13
  __int64 v47; // rbx
  __int64 v48; // r11
  unsigned int v49; // ecx
  __int64 v50; // r15
  __int64 v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // r8
  __int64 v54; // rdx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v56; // rbx
  __int64 v57; // rdi
  int v58; // edx
  __int64 v59; // rcx
  __int64 v60; // rax
  ULONG j; // ebx
  __int64 v62; // rdi
  __int64 v63; // r13
  unsigned int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // r12
  bool v67; // al
  unsigned int v69; // [rsp+20h] [rbp-68h]
  unsigned int v70; // [rsp+24h] [rbp-64h]
  __int64 v71; // [rsp+28h] [rbp-60h]
  unsigned int v73; // [rsp+98h] [rbp+10h]
  int v74; // [rsp+98h] [rbp+10h]
  __int64 v75; // [rsp+98h] [rbp+10h]
  ULONG v76; // [rsp+A0h] [rbp+18h]
  unsigned int v77; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 1;
  if ( PpmPlatformStates && !*(_BYTE *)(v1 + 48) )
  {
    v3 = -1073741431;
LABEL_71:
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    return v3;
  }
  v4 = *(_DWORD *)(v1 + 4);
  if ( !v4 || *(_DWORD *)(v1 + 8) > v4 )
  {
LABEL_5:
    v3 = -1073741811;
    goto LABEL_71;
  }
  PpmIdleUpdatePlatformDependencies(v1);
  v5 = KeNumberProcessors_0;
  v6 = 0;
  v7 = *(_DWORD *)(v1 + 8);
  v76 = KeNumberProcessors_0;
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
      do
      {
        v12 = *(_QWORD *)(KeGetPrcb(v11) + 23808);
        if ( !v12 )
          goto LABEL_5;
        v9 += *(_DWORD *)(v12 + 28);
      }
      while ( ++v11 < v5 );
    }
    v13 = *(_DWORD *)(v1 + 8);
    v9 = v13 * (v5 + v9);
    v10 = v5 * v13;
  }
  v14 = PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 8) != v5
      || *(_DWORD *)PpmPlatformStates != v4
      || *(_DWORD *)(PpmPlatformStates + 4) != 1 )
    {
      v3 = -1073741811;
      goto LABEL_70;
    }
  }
  else
  {
    v73 = (384 * v4 + 71) & 0xFFFFFFF8;
    v77 = (v73 + 24 * v10 + 7) & 0xFFFFFFF8;
    v15 = (v77 + 7 + 24 * v9) & 0xFFFFFFF8;
    v70 = (4 * v4 + 15) & 0xFFFFFFF8;
    v69 = (v15 + 1008 * v4 + 31) & 0xFFFFFFF8;
    v16 = (v5 * v70 + 7 + v69) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v16 += (v4 * *(_DWORD *)PpmIdleVetoList) << 6;
    v17 = v16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v16, 0x694D5050u);
    v14 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v3 = -1073741670;
      goto LABEL_71;
    }
    memset(PoolWithTag, 0, v17);
    *(_DWORD *)v14 = v4;
    v19 = *(_DWORD *)(v1 + 8) == 0;
    *(_DWORD *)(v14 + 8) = v5;
    *(_DWORD *)(v14 + 4) = !v19;
    *(_QWORD *)(v14 + 16) = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v14 + 40) = *(_QWORD *)(v1 + 40);
    v20 = (int *)(v14 + v15);
    *(_QWORD *)(v14 + 48) = v20;
    v20[1] = v4;
    PpmResetPlatformIdleAccounting(v20);
    v21 = v14 + ((v5 * v70 + 7 + v69) & 0xFFFFFFF8);
    v22 = 0LL;
    if ( *(_DWORD *)(v1 + 4) )
    {
      do
      {
        v23 = 384 * v22;
        *(_BYTE *)(384 * v22 + v14 + 121) = 1;
        KeQueryActiveProcessorAffinity(384 * v22 + v14 + 128);
        v24 = (_DWORD *)PpmIdleVetoList;
        v25 = (_QWORD *)(384 * v22 + v14 + 88);
        v25[1] = v25;
        *v25 = v25;
        *(_BYTE *)(384 * v22 + v14 + 104) = 7;
        if ( v24 )
        {
          if ( (_DWORD)v22 == *(_DWORD *)(v1 + 4) - 1 )
            *(_BYTE *)(v23 + v14 + 105) = 1;
          *(_DWORD *)(v23 + v14 + 108) = *v24;
          *(_QWORD *)(v23 + v14 + 112) = v21;
          v21 += (unsigned __int64)(unsigned int)*v24 << 6;
          *(_QWORD *)(1008LL * (unsigned int)v22 + v14 + v15 + 192) = v23 + v14 + 80;
        }
        v22 = (unsigned int)(v22 + 1);
      }
      while ( (unsigned int)v22 < *(_DWORD *)(v1 + 4) );
      v5 = v76;
    }
    v26 = 0LL;
    v27 = v14 + v73;
    v28 = v14 + v77;
    v74 = 0;
    if ( *(_DWORD *)(v1 + 8) )
    {
      v29 = 24LL * v5;
      do
      {
        v30 = 384 * v26;
        v31 = *(_OWORD *)(v1 + 48 * v26 + 80);
        *(_QWORD *)(v30 + v14 + 312) = v27;
        v27 += v29;
        *(_DWORD *)(v30 + v14 + 124) = v5;
        v71 = v27;
        *(_OWORD *)(v30 + v14 + 296) = v31;
        if ( v5 )
        {
          v32 = 0;
          v33 = 0LL;
          do
          {
            v34 = *(_QWORD *)(v30 + v14 + 312);
            v35 = *(_QWORD *)(KeGetPrcb(v32) + 23808);
            *(_DWORD *)(v33 + v34) = v32++;
            v33 += 24LL;
            v36 = *(_DWORD *)(v35 + 28);
            *(_QWORD *)(v33 + v34 - 8) = v28;
            *(_DWORD *)(v33 + v34 - 16) = v36;
            v28 += 24LL * *(unsigned int *)(v35 + 28);
          }
          while ( v32 < v5 );
          v1 = a1;
          v27 = v71;
          LODWORD(v26) = v74;
          v29 = 24LL * v5;
        }
        v26 = (unsigned int)(v26 + 1);
        v74 = v26;
      }
      while ( (unsigned int)v26 < *(_DWORD *)(v1 + 8) );
    }
    for ( i = 0; i < v5; ++i )
    {
      Prcb = KeGetPrcb(i);
      v39 = 0LL;
      v40 = *(_QWORD *)(Prcb + 23808);
      *(_QWORD *)(v40 + 752) = v14 + v69 + i * v70;
      *(_DWORD *)(v40 + 776) = *(_DWORD *)(v1 + 8);
      *(_QWORD *)(v40 + 784) = v28;
      v41 = *(unsigned int *)(v1 + 8);
      v28 += 24 * v41;
      if ( (_DWORD)v41 )
      {
        do
        {
          v42 = 384 * v39;
          v43 = 3LL * (unsigned int)(v41 - v39 - 1);
          v41 = *(_QWORD *)(v40 + 784);
          *(_DWORD *)(v41 + 8 * v43 + 4) = v39;
          v39 = (unsigned int)(v39 + 1);
          *(_DWORD *)(v41 + 8 * v43 + 8) = *(_DWORD *)(v42 + v14 + 124);
          *(_QWORD *)(v41 + 8 * v43 + 16) = *(_QWORD *)(v42 + v14 + 312);
          LODWORD(v41) = *(_DWORD *)(v1 + 8);
        }
        while ( (unsigned int)v39 < (unsigned int)v41 );
      }
    }
  }
  v44 = 0LL;
  if ( *(_DWORD *)(v1 + 8) )
  {
    do
    {
      v45 = 0LL;
      v46 = v1 + 48 * v44;
      v47 = 384 * v44;
      *(_DWORD *)(v47 + v14 + 72) = *(_DWORD *)(v46 + 64);
      *(_DWORD *)(v47 + v14 + 76) = *(_DWORD *)(v46 + 68);
      if ( *(_DWORD *)(v46 + 72) )
      {
        do
        {
          v48 = *(_QWORD *)(v46 + 96);
          v49 = 0;
          v50 = *(_QWORD *)(v47 + v14 + 312);
          v51 = 3LL * *(unsigned int *)(v48 + 8 * v45);
          v52 = *(_DWORD *)(v50 + 24LL * *(unsigned int *)(v48 + 8 * v45) + 8);
          if ( v52 )
          {
            do
            {
              v53 = *(_QWORD *)(v50 + 8 * v51 + 16);
              v54 = 3LL * (v52 - v49 - 1);
              *(_QWORD *)(v53 + 8 * v54) = 0LL;
              *(_QWORD *)(v53 + 8 * v54 + 8) = 0LL;
              *(_QWORD *)(v53 + 8 * v54 + 16) = 0LL;
              *(_DWORD *)(v53 + 8 * v54 + 4) = v49;
              if ( !*(_BYTE *)(v46 + 60) && v49 == *(unsigned __int8 *)(v46 + 61) )
                *(_BYTE *)(v53 + 24LL * (v52 - v49 - 1) + 1) = 1;
              if ( v49 >= *(unsigned __int8 *)(v48 + 8 * v45 + 4) )
              {
                *(_BYTE *)(v53 + 24LL * (v52 - v49 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v48 + 8 * v45 + 6) )
                  *(_BYTE *)(v53 + 24LL * (v52 - v49 - 1)) = 1;
              }
              v52 = *(_DWORD *)(v50 + 8 * v51 + 8);
              ++v49;
            }
            while ( v49 < v52 );
          }
          v45 = (unsigned int)(v45 + 1);
        }
        while ( (unsigned int)v45 < *(_DWORD *)(v46 + 72) );
      }
      if ( *(_BYTE *)(v46 + 60) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v46 + 56));
        v56 = *(_QWORD *)(v47 + v14 + 312);
        v57 = 3LL * ProcessorIndexFromNumber;
        memset(
          *(void **)(v56 + 24LL * ProcessorIndexFromNumber + 16),
          0,
          24LL * *(unsigned int *)(v56 + 24LL * ProcessorIndexFromNumber + 8));
        v58 = *(unsigned __int8 *)(v46 + 61);
        v59 = 3LL * (unsigned int)(*(_DWORD *)(v56 + 8 * v57 + 8) - v58 - 1);
        v60 = *(_QWORD *)(v56 + 8 * v57 + 16);
        *(_DWORD *)(v60 + 8 * v59 + 4) = v58;
        *(_BYTE *)(v60 + 8 * v59 + 1) = 1;
      }
      v44 = (unsigned int)(v44 + 1);
    }
    while ( (unsigned int)v44 < *(_DWORD *)(v1 + 8) );
    v5 = v76;
  }
  for ( j = 0; j < v5; ++j )
  {
    v62 = 0LL;
    v63 = *(_QWORD *)(KeGetPrcb(j) + 23808);
    v64 = *(_DWORD *)(v63 + 776);
    if ( v64 )
    {
      do
      {
        v65 = v1 + 48 * v62 + 56;
        v66 = 3LL * (v64 - (unsigned int)v62 - 1);
        v75 = *(_QWORD *)(v63 + 784);
        v67 = !*(_BYTE *)(v65 + 4) || KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v65) == j;
        v62 = (unsigned int)(v62 + 1);
        *(_BYTE *)(v75 + 8 * v66 + 1) = v67;
        v64 = *(_DWORD *)(v63 + 776);
      }
      while ( (unsigned int)v62 < v64 );
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates((int *)v14, 0);
    v2 = 0;
  }
  v3 = 0;
LABEL_70:
  if ( v2 )
    goto LABEL_71;
  return v3;
}
