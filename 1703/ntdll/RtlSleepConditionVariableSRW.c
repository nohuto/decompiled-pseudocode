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

NTSTATUS __cdecl RtlSleepConditionVariableSRW(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_SRWLOCK SRWLock,
        PLARGE_INTEGER Timeout,
        ULONG Flags)
{
  signed __int64 Ptr; // rdi
  ULONG v8; // r14d
  signed __int32 v9; // eax
  unsigned __int64 v10; // rbx
  signed __int64 v11; // rax
  int i; // ecx
  NTSTATUS v13; // ebx
  unsigned __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v17; // [rsp+28h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-20h]
  HANDLE UniqueThread; // [rsp+38h] [rbp-18h]
  signed __int32 v20; // [rsp+44h] [rbp-Ch] BYREF
  PRTL_SRWLOCK v21; // [rsp+48h] [rbp-8h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v20 = 2;
  v8 = Flags & 1;
  v18 = 0LL;
  v9 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( (Flags & 1) == 0 )
    v9 = 3;
  v21 = SRWLock;
  v20 = v9;
  while ( 1 )
  {
    v10 = (unsigned __int64)&v16 | Ptr & 0xF;
    v16 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v17 = 0LL;
      v10 |= 8uLL;
    }
    else
    {
      v17 = &v16;
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v10, Ptr);
    if ( Ptr == v11 )
      break;
    Ptr = v11;
  }
  if ( (Flags & 1) != 0 )
    RtlReleaseSRWLockShared(SRWLock);
  else
    RtlReleaseSRWLockExclusive(SRWLock);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v10) & 8) != 0 )
    sub_1800711F0(ConditionVariable, v10);
  for ( i = dword_180159A14; i; --i )
  {
    if ( (v20 & 2) == 0 )
      break;
    _mm_pause();
  }
  v13 = 0;
  if ( _interlockedbittestandreset(&v20, 1u) )
    v13 = ZwWaitForAlertByThreadId(SRWLock, Timeout);
  else
    _InterlockedOr(&v20, 4u);
  if ( v13 == 258 || (v20 & 4) == 0 )
  {
    if ( (unsigned __int8)sub_18007139C(ConditionVariable, &v16) )
    {
      if ( v13 != 258 )
        v13 = 0;
      goto LABEL_20;
    }
    do
      ZwWaitForAlertByThreadId(SRWLock, 0LL);
    while ( (v20 & 4) == 0 );
  }
  v13 = 0;
LABEL_20:
  if ( v8 )
    RtlAcquireSRWLockShared(SRWLock);
  else
    RtlAcquireSRWLockExclusive(SRWLock);
  return v13;
}
