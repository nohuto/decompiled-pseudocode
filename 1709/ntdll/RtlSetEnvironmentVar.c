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

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  PCWSTR v5; // r12
  SIZE_T i; // rax
  WCHAR v8; // cx
  SIZE_T j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  PVOID v12; // r9
  char *v13; // rsi
  char *v14; // r14
  char *v15; // r14
  __int16 v16; // ax
  char *v17; // rcx
  _RTL_USER_PROCESS_PARAMETERS *v18; // rax
  char v19; // bl
  __int16 v20; // ax
  SIZE_T v21; // rax
  PVOID v22; // r15
  SIZE_T v23; // r13
  SIZE_T v24; // rdi
  SIZE_T v25; // r12
  char *v26; // rax
  char *v27; // r15
  __int64 v28; // rbx
  char *v29; // rdi
  char *v30; // rdi
  SIZE_T v31; // rbx
  SIZE_T v32; // r15
  char *EnvBlock; // rsi
  char *v34; // rdi
  char *v35; // rdi
  char *v36; // rsi
  SIZE_T v37; // rbx
  PCWSTR v38; // r9
  char *v39; // r10
  SIZE_T v40; // rax
  const WCHAR *v41; // r11
  unsigned int v42; // edx
  unsigned int v43; // r8d
  int v44; // edx
  char *v45; // r13
  SIZE_T v46; // rdi
  char *v47; // r12
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v50; // [rsp+20h] [rbp-98h]
  char v51; // [rsp+21h] [rbp-97h]
  PVOID BaseAddress; // [rsp+28h] [rbp-90h]
  char *v53; // [rsp+30h] [rbp-88h]
  char *v54; // [rsp+30h] [rbp-88h]
  NTSTATUS v55; // [rsp+38h] [rbp-80h]
  _RTL_USER_PROCESS_PARAMETERS *v56; // [rsp+40h] [rbp-78h]
  char *v57; // [rsp+50h] [rbp-68h]
  SIZE_T v58; // [rsp+60h] [rbp-58h]
  char *v59; // [rsp+68h] [rbp-50h]
  const WCHAR *v61; // [rsp+C8h] [rbp+10h]
  SIZE_T v62; // [rsp+D0h] [rbp+18h]

  v62 = NameLength;
  v61 = Name;
  v5 = Value;
  v57 = 0LL;
  v58 = 0LL;
  v50 = 0;
  v51 = 0;
  if ( !NameLength || !*Name )
    return -1073741811;
  for ( i = 1LL; i < NameLength; ++i )
  {
    v8 = Name[i];
    if ( !v8 || v8 == 61 )
      return -1073741811;
  }
  if ( v5 )
  {
    for ( j = 0LL; j < ValueLength; ++j )
    {
      if ( !v5[j] )
        return -1073741811;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v56 = ProcessParameters;
  v55 = 0;
  v59 = 0LL;
  if ( Environment )
  {
    v12 = *Environment;
    BaseAddress = v12;
    if ( ProcessParameters->Environment != v12 )
      goto LABEL_15;
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      v50 = 1;
  }
  else
  {
    v51 = 1;
    v50 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v12 = ProcessParameters->Environment;
    BaseAddress = v12;
    NameLength = v62;
  }
  Name = v61;
LABEL_15:
  v13 = (char *)v12;
  v14 = 0LL;
  if ( !v12 )
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
    v38 = Name;
    v39 = v47;
    v40 = NameLength;
    if ( NameLength > v37 )
      v40 = v37;
    v41 = &Name[v40];
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
          NameLength = v62;
          goto LABEL_87;
        }
      }
      ++v38;
      v39 += 2;
    }
    NameLength = v62;
    v44 = v62 - v37;
LABEL_87:
    if ( !v44 )
      break;
    if ( v44 < 0 && !v59 )
      v59 = v47;
    Name = v61;
    v5 = Value;
    v12 = BaseAddress;
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
  if ( !Value )
  {
    v17 = v47;
    goto LABEL_62;
  }
  if ( ValueLength <= v46 )
  {
    memmove(v45, Value, 2 * ValueLength);
    *(_WORD *)&v45[2 * ValueLength] = 0;
    v17 = &v45[2 * ValueLength + 2];
    if ( ValueLength == v46 )
    {
LABEL_24:
      if ( v50 )
        memset(RtlpEnvironLookupTable, 0, 0x468uLL);
      v5 = Value;
      v12 = BaseAddress;
      goto LABEL_27;
    }
LABEL_62:
    memmove(v17, v13, 2 * (unsigned int)((v14 - v13) >> 1));
    goto LABEL_24;
  }
  v32 = 2 * (ValueLength + ((v14 - (_BYTE *)BaseAddress) >> 1) - v58);
  if ( v32 >= RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress) )
  {
    EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (ValueLength + ((v14 - (_BYTE *)BaseAddress) >> 1) - v58));
    if ( !EnvBlock )
      goto LABEL_108;
    memmove(EnvBlock, BaseAddress, 2LL * (unsigned int)((v57 - (_BYTE *)BaseAddress) >> 1));
    v34 = &EnvBlock[2 * (unsigned int)((v57 - (_BYTE *)BaseAddress) >> 1)];
    v5 = Value;
    memmove(v34, Value, 2 * ValueLength);
    *(_WORD *)&v34[2 * ValueLength] = 0;
    memmove(&v34[2 * ValueLength + 2], v54, 2 * (unsigned int)((v14 - v54) >> 1));
    if ( Environment )
    {
      *Environment = EnvBlock;
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
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      v51 = 0;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v13 = v54;
    goto LABEL_60;
  }
  v35 = &v57[2 * ValueLength];
  memmove(v35 + 2, v13, 2 * (unsigned int)((v14 - v13) >> 1));
  *(_WORD *)v35 = 0;
  v5 = Value;
  memmove(v57, Value, 2 * ValueLength);
  v12 = BaseAddress;
  if ( !Environment )
  {
    v56->Environment = BaseAddress;
    v56->EnvironmentSize = v32;
    ++v56->EnvironmentVersion;
  }
  if ( v50 )
  {
    memset(RtlpEnvironLookupTable, 0, 0x468uLL);
LABEL_60:
    v12 = BaseAddress;
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
      v21 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      v14 = v13 + 2;
      v22 = BaseAddress;
      v23 = v62;
      v24 = ValueLength;
      v25 = 2 * (ValueLength + v62 + ((v13 + 2 - (_BYTE *)BaseAddress) >> 1)) + 4;
      v13 = v53;
    }
    else
    {
      v23 = v62;
      v24 = ValueLength;
      v25 = 2 * (ValueLength + v62) + 6;
      v21 = 0LL;
      v22 = BaseAddress;
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
      memmove(v36, Value, 2 * v24);
      *(_WORD *)&v36[2 * v24] = 0;
      if ( !Environment )
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
          v28 = (unsigned int)((v13 - (_BYTE *)BaseAddress) >> 1);
          memmove(v26, BaseAddress, 2 * v28);
        }
        else
        {
          v28 = 0LL;
        }
        v29 = &v27[2 * v28];
        memmove(v29, v61, 2 * v23);
        v30 = &v29[2 * v23];
        *(_WORD *)v30 = 61;
        v31 = 2 * ValueLength;
        memmove(v30 + 2, Value, 2 * ValueLength);
        *(_WORD *)&v30[2 * ValueLength + 2] = 0;
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
        if ( Environment )
        {
          *Environment = v27;
        }
        else
        {
          v56->Environment = v27;
          v56->EnvironmentSize = v25;
          ++v56->EnvironmentVersion;
        }
        if ( v51 )
        {
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          v51 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
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
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v55;
}
