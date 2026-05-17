/*
 * XREFs of EtwpStopUmLogger @ 0x180062764
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180063350 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800857D8 (EtwpShutdownPrivateLoggers.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     EtwpStopLoggerInstance @ 0x180060DE0 (EtwpStopLoggerInstance.c)
 *     EtwpSynchronizeWithLogger @ 0x180060E5C (EtwpSynchronizeWithLogger.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     EtwpGetPrivateLoggerContext @ 0x180062A00 (EtwpGetPrivateLoggerContext.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x18006442C (EtwpGetUmLoggerInfoFromContext.c)
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall EtwpStopUmLogger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  char v6; // r12
  unsigned int PrivateLoggerContext; // edi
  __int64 v8; // rbx
  char v9; // r15
  int v10; // ebp
  void *v11; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS v14; // eax
  unsigned int v15; // esi
  int v17; // eax
  unsigned int v18; // [rsp+60h] [rbp+8h]
  unsigned __int64 v19; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+70h] [rbp+18h]
  int v21; // [rsp+74h] [rbp+1Ch]

  v21 = HIDWORD(a3);
  v19 = 0LL;
  v4 = 0;
  v20 = 0;
  v6 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a4, &v19);
  if ( PrivateLoggerContext )
    return PrivateLoggerContext;
  v8 = v19;
  v9 = 1;
  v10 = *(_DWORD *)(v19 + 324) & 0x400;
  v11 = *(void **)(v19 + 32);
  v18 = *(_DWORD *)(v19 + 20);
  if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
  {
    v6 = 1;
    v4 = *(_DWORD *)(v19 + 384);
    v20 = *(_DWORD *)(v19 + 388);
    *(_DWORD *)(v19 + 384) = *(_DWORD *)(a4 + 104);
    *(_DWORD *)(v8 + 388) = *(_DWORD *)(a4 + 112);
    if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
      *(_QWORD *)(v8 + 376) = *(_QWORD *)(a4 + 16);
  }
  PrivateLoggerContext = EtwpStopLoggerInstance(v8);
  if ( !PrivateLoggerContext )
  {
    if ( v10 || (v14 = EtwpSynchronizeWithLogger(v8, 8, v12, v13), v14 >= 0) )
    {
      EtwpGetUmLoggerInfoFromContext(a4, v8, 0LL);
      v15 = v18;
      v9 = 0;
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v18 + 8));
      if ( v10 )
        EtwpFreeLoggerContext(v19);
      v8 = 0LL;
      v19 = 0LL;
      if ( v11 )
      {
        NtWaitForSingleObject(v11, 0, 0LL);
        NtClose(v11);
      }
      goto LABEL_10;
    }
    PrivateLoggerContext = RtlNtStatusToDosError(v14);
  }
  v15 = v18;
LABEL_10:
  if ( v6 && v8 )
  {
    v17 = v20;
    *(_DWORD *)(v8 + 384) = v4;
    *(_DWORD *)(v8 + 388) = v17;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v15 + 8));
  return PrivateLoggerContext;
}
