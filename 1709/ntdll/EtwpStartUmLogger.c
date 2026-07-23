/*
 * XREFs of EtwpStartUmLogger @ 0x1800634C8
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180063350 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     EtwpSendSessionNotification @ 0x18006384C (EtwpSendSessionNotification.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x18006442C (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpCreateEtwThread @ 0x180064500 (EtwpCreateEtwThread.c)
 *     EtwpAllocateTraceBufferPool @ 0x18006474C (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180065218 (EtwpInitLoggerContext.c)
 *     EtwpGetNextAvailableLoggerId @ 0x1800656B4 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180065798 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpInitializeCompression @ 0x180083404 (EtwpInitializeCompression.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     EtwpRegisterPrivateSession @ 0x180109CA0 (EtwpRegisterPrivateSession.c)
 */

ULONG __fastcall EtwpStartUmLogger(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v4; // cf
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  ULONG result; // eax
  __int64 NumberOfProcessors; // r8
  __int64 v15; // r14
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r9
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  int v21; // ecx
  ULONG TraceBufferPool; // esi
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 EtwThread; // rax
  _DWORD *v26; // rcx
  unsigned int v27; // edx
  NTSTATUS v28; // eax
  ULONG v29; // eax
  void *v30; // rcx
  char v31[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 inited; // [rsp+38h] [rbp-51h]
  unsigned int v33; // [rsp+40h] [rbp-49h] BYREF
  __int64 v34; // [rsp+48h] [rbp-41h] BYREF
  _DWORD *v35; // [rsp+50h] [rbp-39h]
  char SystemInformation[8]; // [rsp+60h] [rbp-29h] BYREF
  int v37; // [rsp+68h] [rbp-21h]

  v35 = a3;
  v4 = *(_DWORD *)a4 < 0xB0u;
  inited = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( v4 )
    return 87;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  v9 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v9 & 0x40B) != 0 )
  {
    v10 = (v9 & 0x40B) - (((unsigned __int64)(v9 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v10 & 0x3333333333333333LL)
          + ((v10 >> 2) & 0x3333333333333333LL)
          + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 == 1 )
      goto LABEL_4;
    return 87;
  }
  *(_DWORD *)(a4 + 64) = v9 | 1;
LABEL_4:
  v11 = *(_DWORD *)(a4 + 64);
  if ( (v11 & 0x2000000) != 0
    || (v11 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87;
  }
  v12 = *(_DWORD *)(a4 + 76);
  if ( v12 )
  {
    if ( *(_DWORD *)(a4 + 68) || v12 < 0 )
      return 87;
  }
  if ( (v11 & 6) == 6
    || (*(_DWORD *)(a4 + 64) & 0xC000) == 0xC000
    || (v11 & 0x4000000) != 0 && ((v11 & 2) != 0 || (v11 & 4) != 0 || (v11 & 0x20) != 0 || (v11 & 0x400) != 0) )
  {
    return 87;
  }
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144)) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(inited + 20) + 8));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &v33);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v27 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v8 = *(_DWORD *)a4 - v27;
      v7 = a4 + v27;
      NumberOfProcessors = 0xFFFFFFFFLL;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1LL;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v15 = v33;
    inited = EtwpInitLoggerContext(a4, v33, NumberOfProcessors, v7, v8);
    v16 = inited;
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v15 + 8));
      return 8;
    }
    v17 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v17 < 0 )
      return RtlNtStatusToDosError(v17);
    *(_DWORD *)(inited + 208) = ~(v37 - 1) & (*(_DWORD *)(inited + 208) + v37 - 1);
    if ( (*(_DWORD *)(v16 + 324) & 0x4000000) != 0 )
    {
      v28 = EtwpInitializeCompression(v16);
      if ( v28 )
      {
        v29 = RtlNtStatusToDosError(v28);
        TraceBufferPool = v29;
        if ( v29 )
          goto LABEL_61;
      }
    }
    if ( (*(_DWORD *)(v16 + 324) & 0x400) == 0 )
    {
      LOBYTE(v18) = (*(_DWORD *)(v16 + 324) & 4) != 0;
      v19 = EtwpAddLogHeaderToLogFile(v16, v7, v8, v18);
      if ( v19 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v19);
        if ( TraceBufferPool )
          goto LABEL_61;
      }
    }
    v20 = *(unsigned int *)(v16 + 208);
    v21 = 0xFFFF;
    if ( (unsigned __int64)(v20 - 72) < 0xFFFF )
      v21 = v20 - 72;
    *(_DWORD *)(v16 + 212) = v21 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool(v16);
    if ( TraceBufferPool )
      goto LABEL_61;
    if ( (*(_DWORD *)(v16 + 324) & 0x20000) == 0 )
    {
      TraceBufferPool = EtwpRegisterPrivateSession(*(unsigned __int16 *)(v16 + 20), &v34, v31);
      if ( TraceBufferPool )
        goto LABEL_61;
      *(_QWORD *)(v16 + 544) = v34;
    }
    v23 = 2 * v15;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v23 + 8));
    v24 = inited;
    if ( (*(_DWORD *)(v16 + 324) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread(EtwpLogger, inited);
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
        goto LABEL_28;
      }
      *(_QWORD *)(v24 + 32) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, v24, v31);
    _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 8 * v23), v24);
    EtwpSendSessionNotification(inited, 5LL, 0LL);
LABEL_28:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v23 + 8));
    if ( !TraceBufferPool )
    {
      v26 = v35;
      *a2 = *(_DWORD *)a4;
      *v26 = *(_DWORD *)a4;
      return TraceBufferPool;
    }
    v16 = inited;
LABEL_61:
    v30 = *(void **)(a4 + 88);
    if ( v30 )
    {
      NtClose(v30);
      *(_QWORD *)(a4 + 88) = 0LL;
      *(_QWORD *)(v16 + 144) = 0LL;
    }
    EtwpFreeLoggerContext((unsigned int *)v16);
    return TraceBufferPool;
  }
  return result;
}
