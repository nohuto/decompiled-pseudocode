/*
 * XREFs of RtlSetEnvironmentVar @ 0x18004BDF0
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x18004BDA0 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18004C724 @ 0x18004C724 (sub_18004C724.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
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
  PPEB ProcessEnvironmentBlock; // rcx
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rbx
  PVOID v12; // r9
  char *v13; // rsi
  char *v14; // r14
  char *v15; // r13
  SIZE_T v16; // rdi
  char *v17; // r12
  SIZE_T v18; // rbx
  char *v19; // r14
  __int16 v20; // ax
  char *v21; // rcx
  _QWORD *v22; // rax
  char v23; // bl
  __int16 v24; // ax
  SIZE_T v25; // rax
  PVOID v26; // r15
  SIZE_T v27; // r13
  SIZE_T v28; // rdi
  SIZE_T v29; // r12
  char *v30; // rax
  char *v31; // r15
  __int64 v32; // rbx
  char *v33; // rdi
  char *v34; // rdi
  SIZE_T v35; // rbx
  SIZE_T v36; // r15
  char *v37; // rsi
  char *v38; // rdi
  char *v39; // rdi
  char *v40; // rsi
  PCWSTR v41; // r9
  char *v42; // r10
  SIZE_T v43; // rax
  const WCHAR *v44; // r11
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  int v47; // edx
  PRTL_CRITICAL_SECTION FastPebLock; // rdx
  char v50; // [rsp+20h] [rbp-98h]
  char v51; // [rsp+21h] [rbp-97h]
  PVOID BaseAddress; // [rsp+28h] [rbp-90h]
  char *v53; // [rsp+30h] [rbp-88h]
  char *v54; // [rsp+30h] [rbp-88h]
  NTSTATUS v55; // [rsp+38h] [rbp-80h]
  _QWORD *p_MaximumLength; // [rsp+40h] [rbp-78h]
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
  p_MaximumLength = &ProcessParameters->MaximumLength;
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
  if ( v12 )
  {
    v15 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      if ( !*(_WORD *)v13 )
        goto LABEL_33;
      v17 = v13;
      v18 = 0LL;
      while ( 1 )
      {
        v13 += 2;
        if ( !*(_WORD *)v13 )
          break;
        if ( *(_WORD *)v13 == 61 )
        {
          v18 = (v13 - v17) >> 1;
          v13 += 2;
          v15 = v13;
          v57 = v13;
          while ( *(_WORD *)v13 )
            v13 += 2;
          v16 = (v13 - v15) >> 1;
          v58 = v16;
          break;
        }
      }
      v13 += 2;
      v54 = v13;
      v41 = Name;
      v42 = v17;
      v43 = NameLength;
      if ( NameLength > v18 )
        v43 = v18;
      v44 = &Name[v43];
      while ( v41 < v44 )
      {
        v45 = *v41;
        v46 = *(unsigned __int16 *)v42;
        if ( (_DWORD)v45 != (_DWORD)v46 )
        {
          if ( (unsigned int)v45 >= 0x61 )
          {
            if ( (unsigned int)v45 > 0x7A )
              LODWORD(v45) = (unsigned __int16)(v45
                                              + *(_WORD *)(qword_18015B238
                                                         + 2
                                                         * ((v45 & 0xF)
                                                          + *(unsigned __int16 *)(qword_18015B238
                                                                                + 2LL
                                                                                * (((unsigned __int8)v45 >> 4)
                                                                                 + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * (v45 >> 8)))))));
            else
              LODWORD(v45) = v45 - 32;
          }
          if ( (unsigned int)v46 >= 0x61 )
          {
            if ( (unsigned int)v46 > 0x7A )
              LODWORD(v46) = (unsigned __int16)(v46
                                              + *(_WORD *)(qword_18015B238
                                                         + 2
                                                         * ((v46 & 0xF)
                                                          + *(unsigned __int16 *)(qword_18015B238
                                                                                + 2LL
                                                                                * (((unsigned __int8)v46 >> 4)
                                                                                 + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2 * (v46 >> 8)))))));
            else
              LODWORD(v46) = v46 - 32;
          }
          if ( (_DWORD)v45 != (_DWORD)v46 )
          {
            v47 = v45 - v46;
            NameLength = v62;
            goto LABEL_91;
          }
        }
        ++v41;
        v42 += 2;
      }
      NameLength = v62;
      v47 = v62 - v18;
LABEL_91:
      if ( !v47 )
        break;
      if ( v47 < 0 && !v59 )
        v59 = v17;
      Name = v61;
      v5 = Value;
      v12 = BaseAddress;
    }
    v19 = v13;
    while ( 1 )
    {
      v20 = *(_WORD *)v19;
      if ( !*(_WORD *)v19 )
        break;
      while ( 1 )
      {
        v19 += 2;
        if ( !v20 )
          break;
        v20 = *(_WORD *)v19;
      }
    }
    v14 = v19 + 2;
    if ( !Value )
    {
      v21 = v17;
      goto LABEL_67;
    }
    if ( ValueLength <= v16 )
    {
      memmove(v15, Value, 2 * ValueLength);
      *(_WORD *)&v15[2 * ValueLength] = 0;
      v21 = &v15[2 * ValueLength + 2];
      if ( ValueLength == v16 )
      {
LABEL_30:
        if ( v50 )
          memset(&unk_18015CB20, 0, 0x468uLL);
        v5 = Value;
        v12 = BaseAddress;
        goto LABEL_33;
      }
LABEL_67:
      memmove(v21, v13, 2 * (unsigned int)((v14 - v13) >> 1));
      goto LABEL_30;
    }
    v36 = 2 * (ValueLength + ((v14 - (_BYTE *)BaseAddress) >> 1) - v58);
    if ( v36 < RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress) )
    {
      v39 = &v57[2 * ValueLength];
      memmove(v39 + 2, v13, 2 * (unsigned int)((v14 - v13) >> 1));
      *(_WORD *)v39 = 0;
      v5 = Value;
      memmove(v57, Value, 2 * ValueLength);
      v12 = BaseAddress;
      if ( !Environment )
      {
        p_MaximumLength[16] = BaseAddress;
        p_MaximumLength[126] = v36;
        ++p_MaximumLength[127];
      }
      if ( v50 )
      {
        memset(&unk_18015CB20, 0, 0x468uLL);
        v12 = BaseAddress;
      }
    }
    else
    {
      v37 = (char *)sub_18004C724(2 * (ValueLength + ((v14 - (_BYTE *)BaseAddress) >> 1) - v58));
      if ( !v37 )
        goto LABEL_107;
      memmove(v37, BaseAddress, 2LL * (unsigned int)((v57 - (_BYTE *)BaseAddress) >> 1));
      v38 = &v37[2 * (unsigned int)((v57 - (_BYTE *)BaseAddress) >> 1)];
      v5 = Value;
      memmove(v38, Value, 2 * ValueLength);
      *(_WORD *)&v38[2 * ValueLength] = 0;
      memmove(&v38[2 * ValueLength + 2], v54, 2 * (unsigned int)((v14 - v54) >> 1));
      if ( Environment )
      {
        *Environment = v37;
      }
      else
      {
        p_MaximumLength[16] = v37;
        p_MaximumLength[126] = v36;
        ++p_MaximumLength[127];
      }
      if ( v50 )
        memset(&unk_18015CB20, 0, 0x468uLL);
      if ( v51 )
      {
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
        v51 = 0;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      v13 = v54;
      v12 = BaseAddress;
    }
  }
LABEL_33:
  if ( v59 )
    v13 = v59;
  v53 = v13;
  if ( v14 )
  {
    v22 = p_MaximumLength;
    v23 = v50;
    goto LABEL_109;
  }
  if ( !v5 )
    goto LABEL_108;
  if ( v13 )
  {
    while ( 1 )
    {
      v24 = *(_WORD *)v13;
      if ( !*(_WORD *)v13 )
        break;
      while ( 1 )
      {
        v13 += 2;
        if ( !v24 )
          break;
        v24 = *(_WORD *)v13;
      }
    }
    v25 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    v14 = v13 + 2;
    v26 = BaseAddress;
    v27 = v62;
    v28 = ValueLength;
    v29 = 2 * (ValueLength + v62 + ((v13 + 2 - (_BYTE *)BaseAddress) >> 1)) + 4;
    v13 = v53;
  }
  else
  {
    v27 = v62;
    v28 = ValueLength;
    v29 = 2 * (ValueLength + v62) + 6;
    v25 = 0LL;
    v26 = BaseAddress;
  }
  if ( v29 >= v25 )
  {
    v30 = (char *)sub_18004C724(v29);
    v31 = v30;
    if ( v30 )
    {
      if ( v13 )
      {
        v32 = (unsigned int)((v13 - (_BYTE *)BaseAddress) >> 1);
        memmove(v30, BaseAddress, 2 * v32);
      }
      else
      {
        v32 = 0LL;
      }
      v33 = &v31[2 * v32];
      memmove(v33, v61, 2 * v27);
      v34 = &v33[2 * v27];
      *(_WORD *)v34 = 61;
      v35 = 2 * ValueLength;
      memmove(v34 + 2, Value, 2 * ValueLength);
      *(_WORD *)&v34[2 * ValueLength + 2] = 0;
      if ( v13 )
      {
        memmove(&v34[v35 + 4], v13, 2 * (unsigned int)((v14 - v13) >> 1));
        v23 = v50;
        if ( v50 )
          memset(&unk_18015CB20, 0, 0x468uLL);
      }
      else
      {
        *(_WORD *)&v34[v35 + 4] = 0;
        v23 = v50;
      }
      if ( Environment )
      {
        *Environment = v31;
      }
      else
      {
        p_MaximumLength[16] = v31;
        p_MaximumLength[126] = v29;
        ++p_MaximumLength[127];
      }
      if ( v51 )
      {
        RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
        v51 = 0;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      goto LABEL_56;
    }
LABEL_107:
    v55 = -1073741670;
LABEL_108:
    v23 = v50;
LABEL_56:
    v22 = p_MaximumLength;
    goto LABEL_109;
  }
  memmove(&v13[2 * v28 + 4 + 2 * v27], v13, 2 * (unsigned int)((v14 - v13) >> 1));
  memmove(v13, v61, 2 * v27);
  if ( v50 )
    memset(&unk_18015CB20, 0, 0x468uLL);
  v40 = &v13[2 * v27];
  *(_WORD *)v40 = 61;
  v40 += 2;
  memmove(v40, Value, 2 * v28);
  *(_WORD *)&v40[2 * v28] = 0;
  if ( Environment )
    goto LABEL_108;
  v22 = p_MaximumLength;
  p_MaximumLength[16] = v26;
  p_MaximumLength[126] = v29;
  ++p_MaximumLength[127];
  v23 = v50;
LABEL_109:
  if ( v55 >= 0 && v23 )
    ++v22[127];
  if ( v51 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v55;
}
