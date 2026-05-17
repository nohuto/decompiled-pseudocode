/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x1800380E0
 * Callers:
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 *     TpTrimPools @ 0x180083540 (TpTrimPools.c)
 * Callees:
 *     RtlpWakeSingle @ 0x180037FA8 (RtlpWakeSingle.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x180079714 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableSRW(signed __int64 *a1, __int64 a2, __int64 a3, int a4)
{
  signed __int64 v7; // rdi
  int v8; // esi
  unsigned __int64 v9; // rbx
  signed __int64 v10; // rax
  int i; // eax
  unsigned int v12; // ebx
  unsigned __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  void *UniqueThread; // [rsp+38h] [rbp-30h]
  signed __int32 v19; // [rsp+44h] [rbp-24h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  _m_prefetchw(a1);
  v7 = *a1;
  v17 = 0LL;
  v19 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v20 = a2;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
    v19 = 3;
  while ( 1 )
  {
    v9 = (unsigned __int64)&v15 | v7 & 0xF;
    v15 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v16 = 0LL;
      v9 |= 8uLL;
    }
    else
    {
      v16 = &v15;
    }
    v10 = _InterlockedCompareExchange64(a1, v9, v7);
    if ( v7 == v10 )
      break;
    v7 = v10;
  }
  if ( (a4 & 1) != 0 )
    RtlReleaseSRWLockShared(a2, a2, a3);
  else
    RtlReleaseSRWLockExclusive(a2);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v9) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(a1, v9);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v19 & 2) == 0 )
      break;
    _mm_pause();
  }
  v12 = 0;
  if ( _interlockedbittestandreset(&v19, 1u) )
  {
    v12 = NtWaitForAlertByThreadId(a2, a3);
    if ( v12 == 258 )
      goto LABEL_16;
  }
  else
  {
    _InterlockedOr(&v19, 4u);
  }
  if ( (v19 & 4) != 0 )
    goto LABEL_23;
LABEL_16:
  if ( !RtlpWakeSingle(a1, (__int64)&v15) )
  {
    do
      NtWaitForAlertByThreadId(a2, 0LL);
    while ( (v19 & 4) == 0 );
    goto LABEL_23;
  }
  if ( v12 != 258 )
LABEL_23:
    v12 = 0;
  if ( v8 )
    RtlAcquireSRWLockShared(a2);
  else
    RtlAcquireSRWLockExclusive(a2);
  return v12;
}
