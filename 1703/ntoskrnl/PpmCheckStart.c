/*
 * XREFs of PpmCheckStart @ 0x14006F670
 * Callers:
 *     PpmCheckPeriodicStart @ 0x14006F610 (PpmCheckPeriodicStart.c)
 *     PpmCheckCustomRun @ 0x140135D90 (PpmCheckCustomRun.c)
 * Callees:
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int128 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  REGHANDLE v10; // r10
  int v11; // ecx
  __int64 (*v12)(void); // r8
  NTSTATUS result; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  REGHANDLE v17; // r10
  int v18; // [rsp+30h] [rbp-98h] BYREF
  __int64 v19; // [rsp+38h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-70h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-60h]
  __int64 v23; // [rsp+70h] [rbp-58h]
  int *v24; // [rsp+78h] [rbp-50h]
  __int64 v25; // [rsp+80h] [rbp-48h]

  v1 = a1;
  v2 = 0LL;
  PpmCheckCurrentPipelineId = a1;
  while ( 1 )
  {
    v3 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v4 = MEMORY[0xFFFFF78000000350];
      v5 = MEMORY[0xFFFFF78000000008];
      *((LARGE_INTEGER *)&v6 + 1) = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v3 )
        break;
    }
    _mm_pause();
  }
  if ( *((_QWORD *)&v6 + 1) > v4 )
  {
    v7 = *((_QWORD *)&v6 + 1) - v4 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v7 <<= MEMORY[0xFFFFF78000000369];
    v6 = (unsigned __int64)v7 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v2 = *((_QWORD *)&v6 + 1);
  }
  PpmCheckTime = v5 + v2;
  v19 = PpmCheckLastExecutionTime;
  v18 = v1;
  if ( PpmEtwRegistered )
  {
    if ( PpmEtwHandle )
    {
      BYTE8(v6) = 5;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, *((_QWORD *)&v6 + 1), 2LL)
        || *(_BYTE *)(v10 + 101) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v10 + 40) + 80LL, v8, v9) )
      {
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        v22 = &v19;
        *(_QWORD *)&UserData.Size = 8LL;
        v24 = &v18;
        v23 = 8LL;
        v25 = 4LL;
        EtwWrite(v10, &PPM_ETW_PERF_CHECK_START, 0LL, 3u, &UserData);
      }
    }
  }
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  PpmCheckLatencyBoostActive = (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008];
  v11 = 0;
  v12 = *(__int64 (**)(void))PpmCheckPipeline;
  if ( *(_QWORD *)PpmCheckPipeline )
  {
    while ( 1 )
    {
      PpmCheckPipelineIndex = v11 + 1;
      result = v12();
      if ( !(_BYTE)result )
        break;
      v11 = PpmCheckPipelineIndex;
      v12 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
      if ( !v12 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    result = PpmReleaseLock(&PpmPerfPolicyLock);
    if ( PpmEtwRegistered )
    {
      if ( PpmEtwHandle )
      {
        LOBYTE(v14) = 5;
        result = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, v14, 2LL);
        if ( (_BYTE)result
          || *(_BYTE *)(v17 + 101)
          && (result = EtwpLevelKeywordEnabled(*(_QWORD *)(v17 + 40) + 80LL, v15, v16), (_BYTE)result) )
        {
          v20.Ptr = (ULONGLONG)&PpmCheckTime;
          *(_QWORD *)&v20.Size = 8LL;
          return EtwWrite(v17, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &v20);
        }
      }
    }
  }
  return result;
}
