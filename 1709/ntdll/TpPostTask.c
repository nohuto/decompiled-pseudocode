/*
 * XREFs of TpPostTask @ 0x180046308
 * Callers:
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     TppWorkPost @ 0x180047168 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 *     TppDirectExecuteCallback @ 0x180083870 (TppDirectExecuteCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1800A2D50 (NtReleaseWorkerFactoryWorker.c)
 *     TppAdjustRunningThreadGoal @ 0x18010AA10 (TppAdjustRunningThreadGoal.c)
 */

signed __int64 __fastcall TpPostTask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  __int64 *v8; // r14
  __int64 v9; // rsi
  volatile signed __int64 *v10; // rdi
  __int64 **v11; // rax
  signed __int64 v12; // rax
  __int64 v13; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v15; // rax
  signed __int64 result; // rax
  __int64 v17; // rdx
  signed __int64 v18; // rtt
  signed __int32 v19; // edx
  signed __int32 v20; // ett
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  signed __int64 v23; // rdx
  signed __int64 v24; // rtt
  signed __int64 v25; // [rsp+40h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = TppPoolpSerializedPool;
      goto LABEL_32;
    }
    v4 = TppPoolpGlobalPool;
  }
  if ( v4 == TppPoolpSerializedPool )
LABEL_32:
    a3 = 1LL;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw((const void *)(v4 + 428));
  v7 = *(_DWORD *)(v4 + 428);
  do
  {
    if ( v7 == -2 )
    {
      v19 = v6;
      goto LABEL_29;
    }
    if ( v7 == (_DWORD)v6 || v7 == -1 )
      break;
    v19 = -1;
LABEL_29:
    v20 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 428), v19, v7);
  }
  while ( v20 != v7 );
  v8 = (__int64 *)(a1 + 16);
  v9 = *(_QWORD *)(v4 + 8LL * (int)a3 + 16) + 24 * v6;
  v10 = (volatile signed __int64 *)(v9 + 16);
  RtlAcquireSRWLockExclusive(v9 + 16, (int)a3, (unsigned __int64 *)a3, a4);
  v11 = *(__int64 ***)(v9 + 8);
  if ( *v11 != (__int64 *)v9 )
    __fastfail(3u);
  v8[1] = (__int64)v11;
  *v8 = v9;
  *v11 = v8;
  *(_QWORD *)(v9 + 8) = v8;
  v12 = _InterlockedCompareExchange64(v10, 0LL, 1LL);
  if ( v12 != 1 )
  {
    do
    {
      v21 = 3LL;
      v22 = v12 & 6;
      if ( v22 != 2 )
        v21 = -1LL;
      v23 = v12 + v21;
      v24 = v12;
      v12 = _InterlockedCompareExchange64(v10, v23, v12);
    }
    while ( v24 != v12 );
    if ( v22 == 2 )
      RtlpWakeSRWLock(v9 + 16, v23, 0LL);
  }
  if ( *(_DWORD *)(v4 + 424) != MEMORY[0x7FFE03C0] )
    TppAdjustRunningThreadGoal(v4);
  v13 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v15 = *ThreadPoolData;
    if ( *(_QWORD *)(v15 + 48) == v4 && *(_DWORD *)(v15 + 128) == 3 )
    {
      *(_DWORD *)(v15 + 128) = 4;
      v13 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v4 + 8));
  result = *(_QWORD *)(v4 + 8);
  LODWORD(v25) = result;
  do
  {
    if ( (v25 & 0xFFFF0000) != 0 || (_DWORD)v13 )
    {
      v17 = 0LL;
    }
    else
    {
      LODWORD(v25) = (unsigned __int16)v25 | ((v25 & 0xFFFF0000) + 0x10000);
      v17 = 1LL;
    }
    v18 = result;
    HIDWORD(v25) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v25, result);
    LODWORD(v25) = result;
  }
  while ( v18 != result );
  if ( (_DWORD)v17 )
    return NtReleaseWorkerFactoryWorker(*(_QWORD *)(v4 + 56), v17, v13);
  return result;
}
