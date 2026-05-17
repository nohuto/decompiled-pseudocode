/*
 * XREFs of RtlSetEnvironmentVar @ 0x180062E60
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x180062E10 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180063814 @ 0x180063814 (sub_180063814.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
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
  struct _PEB *ProcessEnvironmentBlock; // rcx
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  unsigned __int64 Environment; // rbx
  char *v13; // rsi
  char *v14; // r14
  char *v15; // r14
  __int16 v16; // ax
  char v17; // r15
  struct _RTL_USER_PROCESS_PARAMETERS *v18; // rax
  char v19; // bl
  __int16 v20; // ax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r12
  char *v25; // r15
  __int64 v26; // rbx
  char *v27; // rdi
  char *v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v30; // r15
  char *v31; // rsi
  char *v32; // rdi
  char *v33; // rdi
  char *v34; // rsi
  unsigned __int64 v35; // rbx
  unsigned __int16 *v36; // r9
  char *v37; // r10
  unsigned __int64 v38; // rax
  unsigned __int16 *v39; // r11
  unsigned int v40; // edx
  unsigned int v41; // r8d
  int v42; // edx
  char *v43; // r13
  unsigned __int64 v44; // rdi
  char *v45; // r12
  struct _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v48; // [rsp+20h] [rbp-98h]
  char v49; // [rsp+21h] [rbp-97h]
  char *v50; // [rsp+28h] [rbp-90h]
  char *v51; // [rsp+28h] [rbp-90h]
  _BYTE *v52; // [rsp+30h] [rbp-88h]
  int v53; // [rsp+38h] [rbp-80h]
  struct _RTL_USER_PROCESS_PARAMETERS *v54; // [rsp+40h] [rbp-78h]
  char *v55; // [rsp+50h] [rbp-68h]
  unsigned __int64 v56; // [rsp+60h] [rbp-58h]
  char *v57; // [rsp+68h] [rbp-50h]
  _WORD *v59; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v60; // [rsp+D0h] [rbp+18h]

  v60 = a3;
  v59 = a2;
  v5 = a4;
  v55 = 0LL;
  v56 = 0LL;
  v48 = 0;
  v49 = 0;
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
  v54 = ProcessParameters;
  v53 = 0;
  v57 = 0LL;
  if ( !a1 )
  {
    v49 = 1;
    v48 = 1;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = (unsigned __int64)ProcessParameters->Environment;
    v52 = (_BYTE *)Environment;
    a3 = v60;
LABEL_15:
    a2 = v59;
    goto LABEL_16;
  }
  Environment = *a1;
  v52 = (_BYTE *)*a1;
  if ( ProcessEnvironmentBlock->ProcessParameters->Environment == (void *)*a1 )
  {
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      v48 = 1;
    goto LABEL_15;
  }
LABEL_16:
  v13 = (char *)Environment;
  v14 = 0LL;
  if ( Environment )
  {
    v43 = 0LL;
    v44 = 0LL;
    while ( 1 )
    {
      if ( !*(_WORD *)v13 )
        goto LABEL_105;
      v45 = v13;
      v35 = 0LL;
      while ( 1 )
      {
        v13 += 2;
        if ( !*(_WORD *)v13 )
          break;
        if ( *(_WORD *)v13 == 61 )
        {
          v35 = (v13 - v45) >> 1;
          v13 += 2;
          v43 = v13;
          v55 = v13;
          while ( *(_WORD *)v13 )
            v13 += 2;
          v44 = (v13 - v43) >> 1;
          v56 = v44;
          break;
        }
      }
      v13 += 2;
      v51 = v13;
      v36 = a2;
      v37 = v45;
      v38 = v35;
      if ( a3 <= v35 )
        v38 = a3;
      v39 = &a2[v38];
      while ( v36 < v39 )
      {
        v40 = *v36;
        v41 = *(unsigned __int16 *)v37;
        if ( v40 != v41 )
        {
          if ( v40 >= 0x61 )
          {
            if ( v40 > 0x7A )
              v40 = (unsigned __int16)(v40
                                     + *(_WORD *)(qword_180159D68
                                                + 2LL
                                                * ((v40 & 0xF)
                                                 + *(unsigned __int16 *)(qword_180159D68
                                                                       + 2LL
                                                                       * (((unsigned __int8)v40 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v40)))))));
            else
              v40 -= 32;
          }
          if ( v41 >= 0x61 )
          {
            if ( v41 > 0x7A )
              v41 = (unsigned __int16)(v41
                                     + *(_WORD *)(qword_180159D68
                                                + 2LL
                                                * ((v41 & 0xF)
                                                 + *(unsigned __int16 *)(qword_180159D68
                                                                       + 2LL
                                                                       * (((unsigned __int8)v41 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v41)))))));
            else
              v41 -= 32;
          }
          if ( v40 != v41 )
          {
            v42 = v40 - v41;
            a3 = v60;
            goto LABEL_89;
          }
        }
        ++v36;
        v37 += 2;
      }
      a3 = v60;
      v42 = v60 - v35;
LABEL_89:
      if ( !v42 )
        break;
      if ( v42 < 0 && !v57 )
        v57 = v45;
      a2 = v59;
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
    if ( a4 )
    {
      if ( a5 <= v44 )
      {
        memmove(v43, a4, 2 * a5);
        *(_WORD *)&v43[2 * a5] = 0;
        if ( a5 != v44 )
          memmove(&v43[2 * a5 + 2], v13, 2 * (unsigned int)((v14 - v13) >> 1));
        v17 = v48;
        if ( v48 )
          memset(dword_18015BAC0, 0, 0x468uLL);
        goto LABEL_28;
      }
      v30 = 2 * (a5 + ((v14 - v52) >> 1) - v56);
      if ( v30 < RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52) )
      {
        v33 = &v55[2 * a5];
        memmove(v33 + 2, v13, 2 * (unsigned int)((v14 - v13) >> 1));
        *(_WORD *)v33 = 0;
        v5 = a4;
        memmove(v55, a4, 2 * a5);
        Environment = (unsigned __int64)v52;
        if ( !a1 )
        {
          v54->Environment = v52;
          v54->EnvironmentSize = v30;
          ++v54->EnvironmentVersion;
        }
        v17 = v48;
        if ( v48 )
          memset(dword_18015BAC0, 0, 0x468uLL);
      }
      else
      {
        v31 = (char *)sub_180063814(2 * (a5 + ((v14 - v52) >> 1) - v56));
        if ( !v31 )
          goto LABEL_111;
        memmove(v31, v52, 2LL * (unsigned int)((v55 - v52) >> 1));
        v32 = &v31[2 * (unsigned int)((v55 - v52) >> 1)];
        v5 = a4;
        memmove(v32, a4, 2 * a5);
        *(_WORD *)&v32[2 * a5] = 0;
        memmove(&v32[2 * a5 + 2], v51, 2 * (unsigned int)((v14 - v51) >> 1));
        if ( a1 )
        {
          *a1 = (unsigned __int64)v31;
        }
        else
        {
          v54->Environment = v31;
          v54->EnvironmentSize = v30;
          ++v54->EnvironmentVersion;
        }
        v17 = v48;
        if ( v48 )
          memset(dword_18015BAC0, 0, 0x468uLL);
        if ( v49 )
        {
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
          v49 = 0;
        }
        Environment = (unsigned __int64)v52;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52);
        v13 = v51;
      }
    }
    else
    {
      memmove(v45, v13, 2 * (unsigned int)((v14 - v13) >> 1));
      v17 = v48;
      if ( !v48 )
      {
LABEL_28:
        v5 = a4;
        Environment = (unsigned __int64)v52;
        goto LABEL_29;
      }
      memset(dword_18015BAC0, 0, 0x468uLL);
      v5 = 0LL;
      Environment = (unsigned __int64)v52;
    }
  }
  else
  {
LABEL_105:
    v17 = v48;
  }
LABEL_29:
  if ( v57 )
    v13 = v57;
  v50 = v13;
  if ( v14 )
  {
    v18 = v54;
LABEL_33:
    v19 = v48;
    goto LABEL_112;
  }
  if ( !v5 )
    goto LABEL_62;
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
    v22 = v60;
    v23 = a5;
    v24 = 2 * (a5 + v60 + ((__int64)&v13[-Environment + 2] >> 1)) + 4;
    v13 = v50;
  }
  else
  {
    v22 = v60;
    v23 = a5;
    v24 = 2 * (a5 + v60) + 6;
    v21 = 0LL;
  }
  if ( v24 < v21 )
  {
    memmove(&v13[2 * v23 + 4 + 2 * v22], v13, 2 * (unsigned int)((v14 - v13) >> 1));
    memmove(v13, v59, 2 * v22);
    if ( v17 )
      memset(dword_18015BAC0, 0, 0x468uLL);
    v34 = &v13[2 * v22];
    *(_WORD *)v34 = 61;
    v34 += 2;
    memmove(v34, a4, 2 * v23);
    *(_WORD *)&v34[2 * v23] = 0;
    if ( !a1 )
    {
      v18 = v54;
      v54->Environment = v52;
      v54->EnvironmentSize = v24;
      ++v54->EnvironmentVersion;
      goto LABEL_33;
    }
    goto LABEL_62;
  }
  v25 = (char *)sub_180063814(v24);
  if ( v25 )
  {
    if ( v13 )
    {
      v26 = (unsigned int)((__int64)&v13[-Environment] >> 1);
      memmove(v25, v52, 2 * v26);
    }
    else
    {
      v26 = 0LL;
    }
    v27 = &v25[2 * v26];
    memmove(v27, v59, 2 * v22);
    v28 = &v27[2 * v22];
    *(_WORD *)v28 = 61;
    v29 = 2 * a5;
    memmove(v28 + 2, a4, 2 * a5);
    *(_WORD *)&v28[2 * a5 + 2] = 0;
    if ( v13 )
    {
      memmove(&v28[v29 + 4], v13, 2 * (unsigned int)((v14 - v13) >> 1));
      v19 = v48;
      if ( v48 )
        memset(dword_18015BAC0, 0, 0x468uLL);
    }
    else
    {
      *(_WORD *)&v28[v29 + 4] = 0;
      v19 = v48;
    }
    if ( a1 )
    {
      *a1 = (unsigned __int64)v25;
    }
    else
    {
      v54->Environment = v25;
      v54->EnvironmentSize = v24;
      ++v54->EnvironmentVersion;
    }
    if ( v49 )
    {
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
      v49 = 0;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52);
    goto LABEL_52;
  }
LABEL_111:
  v53 = -1073741670;
LABEL_62:
  v19 = v48;
LABEL_52:
  v18 = v54;
LABEL_112:
  if ( v53 >= 0 && v19 )
    ++v18->EnvironmentVersion;
  if ( v49 )
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  return (unsigned int)v53;
}
