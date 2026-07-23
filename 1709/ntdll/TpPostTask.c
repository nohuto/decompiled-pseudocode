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

int __fastcall TpPostTask(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  _RTL_SRWLOCK **v8; // r14
  _RTL_SRWLOCK *v9; // rsi
  volatile signed __int64 *v10; // rdi
  _RTL_SRWLOCK **Value; // rax
  signed __int64 v12; // rax
  int v13; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v15; // rax
  signed __int64 v16; // rax
  int v17; // edx
  signed __int64 v18; // rtt
  signed __int32 v19; // edx
  signed __int32 v20; // ett
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  signed __int64 v23; // rdx
  signed __int64 v24; // rtt
  signed __int64 v26; // [rsp+40h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = (char *)TppPoolpSerializedPool;
      goto LABEL_32;
    }
    v4 = (char *)TppPoolpGlobalPool;
  }
  if ( v4 == (char *)TppPoolpSerializedPool )
LABEL_32:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw(v4 + 428);
  v7 = *((_DWORD *)v4 + 107);
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
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 107, v19, v7);
  }
  while ( v20 != v7 );
  v8 = (_RTL_SRWLOCK **)(a1 + 16);
  v9 = (_RTL_SRWLOCK *)(*(_QWORD *)&v4[8 * a3 + 16] + 24 * v6);
  v10 = (volatile signed __int64 *)&v9[2];
  RtlAcquireSRWLockExclusive(v9 + 2);
  Value = (_RTL_SRWLOCK **)v9[1].Value;
  if ( *Value != v9 )
    __fastfail(3u);
  v8[1] = (_RTL_SRWLOCK *)Value;
  *v8 = v9;
  *Value = (_RTL_SRWLOCK *)v8;
  v9[1].Value = (unsigned __int64)v8;
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
      RtlpWakeSRWLock(&v9[2], v23, 0LL);
  }
  if ( *((_DWORD *)v4 + 106) != MEMORY[0x7FFE03C0] )
    TppAdjustRunningThreadGoal(v4);
  v13 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v15 = *ThreadPoolData;
    if ( *(char **)(v15 + 48) == v4 && *(_DWORD *)(v15 + 128) == 3 )
    {
      *(_DWORD *)(v15 + 128) = 4;
      v13 = 1;
    }
  }
  _m_prefetchw(v4 + 8);
  v16 = *((_QWORD *)v4 + 1);
  LODWORD(v26) = v16;
  do
  {
    if ( (v26 & 0xFFFF0000) != 0 || v13 )
    {
      v17 = 0;
    }
    else
    {
      LODWORD(v26) = (unsigned __int16)v26 | ((v26 & 0xFFFF0000) + 0x10000);
      v17 = 1;
    }
    v18 = v16;
    HIDWORD(v26) = HIDWORD(v16) + 1;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, v26, v16);
    LODWORD(v26) = v16;
  }
  while ( v18 != v16 );
  if ( v17 )
    LODWORD(v16) = NtReleaseWorkerFactoryWorker(*((HANDLE *)v4 + 7));
  return v16;
}
