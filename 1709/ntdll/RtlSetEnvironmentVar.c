/*
 * XREFs of RtlSetEnvironmentVar @ 0x18004B530
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x18004D250 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlSizeHeap @ 0x180045BB0 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18004BE88 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlSetEnvironmentVar(
        unsigned __int64 *a1,
        _WORD *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5)
{
  _WORD *v5; // r12
  unsigned __int64 i; // rax
  __int16 v8; // cx
  unsigned __int64 j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  unsigned __int64 Environment; // r9
  char *v13; // rsi
  char *v14; // r14
  char *v15; // r14
  __int16 v16; // ax
  char *v17; // rcx
  _RTL_USER_PROCESS_PARAMETERS *v18; // rax
  char v19; // bl
  __int16 v20; // ax
  unsigned __int64 v21; // rax
  void *v22; // r15
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r12
  char *v26; // rax
  char *v27; // r15
  __int64 v28; // rbx
  char *v29; // rdi
  char *v30; // rdi
  __int64 v31; // rbx
  unsigned __int64 v32; // r15
  char *EnvBlock; // rsi
  char *v34; // rdi
  char *v35; // rdi
  char *v36; // rsi
  unsigned __int64 v37; // rbx
  unsigned __int16 *v38; // r9
  char *v39; // r10
  unsigned __int64 v40; // rax
  unsigned __int16 *v41; // r11
  unsigned int v42; // edx
  unsigned int v43; // r8d
  int v44; // edx
  char *v45; // r13
  unsigned __int64 v46; // rdi
  char *v47; // r12
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v50; // [rsp+20h] [rbp-98h]
  char v51; // [rsp+21h] [rbp-97h]
  _BYTE *v52; // [rsp+28h] [rbp-90h]
  char *v53; // [rsp+30h] [rbp-88h]
  char *v54; // [rsp+30h] [rbp-88h]
  int v55; // [rsp+38h] [rbp-80h]
  _RTL_USER_PROCESS_PARAMETERS *v56; // [rsp+40h] [rbp-78h]
  char *v57; // [rsp+50h] [rbp-68h]
  unsigned __int64 v58; // [rsp+60h] [rbp-58h]
  char *v59; // [rsp+68h] [rbp-50h]
  _WORD *v61; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v62; // [rsp+D0h] [rbp+18h]

  v62 = a3;
  v61 = a2;
  v5 = a4;
  v57 = 0LL;
  v58 = 0LL;
  v50 = 0;
  v51 = 0;
  if ( !a3 || !*a2 )
    return 3221225485LL;
  for ( i = 1LL; i < a3; ++i )
  {
    v8 = a2[i];
    if ( !v8 || v8 == 61 )
      return 3221225485LL;
  }
  if ( v5 )
  {
    for ( j = 0LL; j < a5; ++j )
    {
      if ( !v5[j] )
        return 3221225485LL;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v56 = ProcessParameters;
  v55 = 0;
  v59 = 0LL;
  if ( a1 )
  {
    Environment = *a1;
    v52 = (_BYTE *)Environment;
    if ( ProcessParameters->Environment != (void *)Environment )
      goto LABEL_15;
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      v50 = 1;
  }
  else
  {
    v51 = 1;
    v50 = 1;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = (unsigned __int64)ProcessParameters->Environment;
    v52 = (_BYTE *)Environment;
    a3 = v62;
  }
  a2 = v61;
LABEL_15:
  v13 = (char *)Environment;
  v14 = 0LL;
  if ( !Environment )
    goto LABEL_27;
  v45 = 0LL;
  v46 = 0LL;
  while ( 1 )
  {
    if ( !*(_WORD *)v13 )
      goto LABEL_27;
    v47 = v13;
    v37 = 0LL;
    while ( 1 )
    {
      v13 += 2;
      if ( !*(_WORD *)v13 )
        break;
      if ( *(_WORD *)v13 == 61 )
      {
        v37 = (v13 - v47) >> 1;
        v13 += 2;
        v45 = v13;
        v57 = v13;
        while ( *(_WORD *)v13 )
          v13 += 2;
        v46 = (v13 - v45) >> 1;
        v58 = v46;
        break;
      }
    }
    v13 += 2;
    v54 = v13;
    v38 = a2;
    v39 = v47;
    v40 = a3;
    if ( a3 > v37 )
      v40 = v37;
    v41 = &a2[v40];
    while ( v38 < v41 )
    {
      v42 = *v38;
      v43 = *(unsigned __int16 *)v39;
      if ( v42 != v43 )
      {
        if ( v42 >= 0x61 )
        {
          if ( v42 > 0x7A )
            v42 = (unsigned __int16)(v42
                                   + *(_WORD *)(Nls844UnicodeUpcaseTable
                                              + 2LL
                                              * ((v42 & 0xF)
                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                     + 2LL
                                                                     * (((unsigned __int8)v42 >> 4)
                                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v42)))))));
          else
            v42 -= 32;
        }
        if ( v43 >= 0x61 )
        {
          if ( v43 > 0x7A )
            v43 = (unsigned __int16)(v43
                                   + *(_WORD *)(Nls844UnicodeUpcaseTable
                                              + 2LL
                                              * ((v43 & 0xF)
                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                     + 2LL
                                                                     * (((unsigned __int8)v43 >> 4)
                                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v43)))))));
          else
            v43 -= 32;
        }
        if ( v42 != v43 )
        {
          v44 = v42 - v43;
          a3 = v62;
          goto LABEL_87;
        }
      }
      ++v38;
      v39 += 2;
    }
    a3 = v62;
    v44 = v62 - v37;
LABEL_87:
    if ( !v44 )
      break;
    if ( v44 < 0 && !v59 )
      v59 = v47;
    a2 = v61;
    v5 = a4;
    Environment = (unsigned __int64)v52;
  }
  v15 = v13;
  while ( *(_WORD *)v15 )
  {
    do
    {
      v16 = *(_WORD *)v15;
      v15 += 2;
    }
    while ( v16 );
  }
  v14 = v15 + 2;
  if ( !a4 )
  {
    v17 = v47;
    goto LABEL_62;
  }
  if ( a5 <= v46 )
  {
    memmove(v45, a4, 2 * a5);
    *(_WORD *)&v45[2 * a5] = 0;
    v17 = &v45[2 * a5 + 2];
    if ( a5 == v46 )
    {
LABEL_24:
      if ( v50 )
        memset(RtlpEnvironLookupTable, 0, 0x468uLL);
      v5 = a4;
      Environment = (unsigned __int64)v52;
      goto LABEL_27;
    }
LABEL_62:
    memmove(v17, v13, 2 * (unsigned int)((v14 - v13) >> 1));
    goto LABEL_24;
  }
  v32 = 2 * (a5 + ((v14 - v52) >> 1) - v58);
  if ( v32 >= RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52) )
  {
    EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (a5 + ((v14 - v52) >> 1) - v58));
    if ( !EnvBlock )
      goto LABEL_108;
    memmove(EnvBlock, v52, 2LL * (unsigned int)((v57 - v52) >> 1));
    v34 = &EnvBlock[2 * (unsigned int)((v57 - v52) >> 1)];
    v5 = a4;
    memmove(v34, a4, 2 * a5);
    *(_WORD *)&v34[2 * a5] = 0;
    memmove(&v34[2 * a5 + 2], v54, 2 * (unsigned int)((v14 - v54) >> 1));
    if ( a1 )
    {
      *a1 = (unsigned __int64)EnvBlock;
    }
    else
    {
      v56->Environment = EnvBlock;
      v56->EnvironmentSize = v32;
      ++v56->EnvironmentVersion;
    }
    if ( v50 )
      memset(RtlpEnvironLookupTable, 0, 0x468uLL);
    if ( v51 )
    {
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
      v51 = 0;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52);
    v13 = v54;
    goto LABEL_60;
  }
  v35 = &v57[2 * a5];
  memmove(v35 + 2, v13, 2 * (unsigned int)((v14 - v13) >> 1));
  *(_WORD *)v35 = 0;
  v5 = a4;
  memmove(v57, a4, 2 * a5);
  Environment = (unsigned __int64)v52;
  if ( !a1 )
  {
    v56->Environment = v52;
    v56->EnvironmentSize = v32;
    ++v56->EnvironmentVersion;
  }
  if ( v50 )
  {
    memset(RtlpEnvironLookupTable, 0, 0x468uLL);
LABEL_60:
    Environment = (unsigned __int64)v52;
  }
LABEL_27:
  if ( v59 )
    v13 = v59;
  v53 = v13;
  if ( v14 )
  {
    v18 = v56;
LABEL_31:
    v19 = v50;
    goto LABEL_109;
  }
  if ( v5 )
  {
    if ( v13 )
    {
      while ( *(_WORD *)v13 )
      {
        do
        {
          v20 = *(_WORD *)v13;
          v13 += 2;
        }
        while ( v20 );
      }
      v21 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Environment);
      v14 = v13 + 2;
      v22 = v52;
      v23 = v62;
      v24 = a5;
      v25 = 2 * (a5 + v62 + ((v13 + 2 - v52) >> 1)) + 4;
      v13 = v53;
    }
    else
    {
      v23 = v62;
      v24 = a5;
      v25 = 2 * (a5 + v62) + 6;
      v21 = 0LL;
      v22 = v52;
    }
    if ( v25 < v21 )
    {
      memmove(&v13[2 * v24 + 4 + 2 * v23], v13, 2 * (unsigned int)((v14 - v13) >> 1));
      memmove(v13, v61, 2 * v23);
      if ( v50 )
        memset(RtlpEnvironLookupTable, 0, 0x468uLL);
      v36 = &v13[2 * v23];
      *(_WORD *)v36 = 61;
      v36 += 2;
      memmove(v36, a4, 2 * v24);
      *(_WORD *)&v36[2 * v24] = 0;
      if ( !a1 )
      {
        v18 = v56;
        v56->Environment = v22;
        v56->EnvironmentSize = v25;
        ++v56->EnvironmentVersion;
        goto LABEL_31;
      }
    }
    else
    {
      v26 = (char *)RtlpAllocateEnvBlock(v25);
      v27 = v26;
      if ( v26 )
      {
        if ( v13 )
        {
          v28 = (unsigned int)((v13 - v52) >> 1);
          memmove(v26, v52, 2 * v28);
        }
        else
        {
          v28 = 0LL;
        }
        v29 = &v27[2 * v28];
        memmove(v29, v61, 2 * v23);
        v30 = &v29[2 * v23];
        *(_WORD *)v30 = 61;
        v31 = 2 * a5;
        memmove(v30 + 2, a4, 2 * a5);
        *(_WORD *)&v30[2 * a5 + 2] = 0;
        if ( v13 )
        {
          memmove(&v30[v31 + 4], v13, 2 * (unsigned int)((v14 - v13) >> 1));
          v19 = v50;
          if ( v50 )
            memset(RtlpEnvironLookupTable, 0, 0x468uLL);
        }
        else
        {
          *(_WORD *)&v30[v31 + 4] = 0;
          v19 = v50;
        }
        if ( a1 )
        {
          *a1 = (unsigned __int64)v27;
        }
        else
        {
          v56->Environment = v27;
          v56->EnvironmentSize = v25;
          ++v56->EnvironmentVersion;
        }
        if ( v51 )
        {
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
          v51 = 0;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52);
        goto LABEL_50;
      }
LABEL_108:
      v55 = -1073741670;
    }
  }
  v19 = v50;
LABEL_50:
  v18 = v56;
LABEL_109:
  if ( v55 >= 0 && v19 )
    ++v18->EnvironmentVersion;
  if ( v51 )
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  return (unsigned int)v55;
}
