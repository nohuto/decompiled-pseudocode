/*
 * XREFs of RtlSleepConditionVariableSRW @ 0x180071060
 * Callers:
 *     TpTrimPools @ 0x180070D30 (TpTrimPools.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800711F0 @ 0x1800711F0 (sub_1800711F0.c)
 *     sub_18007139C @ 0x18007139C (sub_18007139C.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A8B30 (ZwWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableSRW(signed __int64 *a1, volatile signed __int64 *a2, __int64 a3, int a4)
{
  signed __int64 v7; // rdi
  int v8; // r14d
  signed __int32 v9; // eax
  unsigned __int64 v10; // rbx
  signed __int64 v11; // rax
  int i; // ecx
  unsigned int v13; // ebx
  unsigned __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v17; // [rsp+28h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-20h]
  HANDLE UniqueThread; // [rsp+38h] [rbp-18h]
  signed __int32 v20; // [rsp+44h] [rbp-Ch] BYREF
  volatile signed __int64 *v21; // [rsp+48h] [rbp-8h]

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  _m_prefetchw(a1);
  v7 = *a1;
  v20 = 2;
  v8 = a4 & 1;
  v18 = 0LL;
  v9 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( (a4 & 1) == 0 )
    v9 = 3;
  v21 = a2;
  v20 = v9;
  while ( 1 )
  {
    v10 = (unsigned __int64)&v16 | v7 & 0xF;
    v16 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v17 = 0LL;
      v10 |= 8uLL;
    }
    else
    {
      v17 = &v16;
    }
    v11 = _InterlockedCompareExchange64(a1, v10, v7);
    if ( v7 == v11 )
      break;
    v7 = v11;
  }
  if ( (a4 & 1) != 0 )
    RtlReleaseSRWLockShared(a2);
  else
    RtlReleaseSRWLockExclusive(a2);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v10) & 8) != 0 )
    sub_1800711F0(a1, v10);
  for ( i = dword_180159A14; i; --i )
  {
    if ( (v20 & 2) == 0 )
      break;
    _mm_pause();
  }
  v13 = 0;
  if ( _interlockedbittestandreset(&v20, 1u) )
    v13 = ZwWaitForAlertByThreadId(a2, a3);
  else
    _InterlockedOr(&v20, 4u);
  if ( v13 == 258 || (v20 & 4) == 0 )
  {
    if ( (unsigned __int8)sub_18007139C(a1, &v16) )
    {
      if ( v13 != 258 )
        v13 = 0;
      goto LABEL_20;
    }
    do
      ZwWaitForAlertByThreadId(a2, 0LL);
    while ( (v20 & 4) == 0 );
  }
  v13 = 0;
LABEL_20:
  if ( v8 )
    RtlAcquireSRWLockShared(a2);
  else
    RtlAcquireSRWLockExclusive(a2);
  return v13;
}
