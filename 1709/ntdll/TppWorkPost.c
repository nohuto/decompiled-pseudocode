/*
 * XREFs of TppWorkPost @ 0x180047168
 * Callers:
 *     TppSingleTimerExpiration @ 0x180010418 (TppSingleTimerExpiration.c)
 *     TpPostWork @ 0x180047120 (TpPostWork.c)
 *     TpSimpleTryPost @ 0x18007C640 (TpSimpleTryPost.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001B60 (RtlpTpETWCallbackEnqueue.c)
 *     TppIteWakeWaiters @ 0x18000A5B0 (TppIteWakeWaiters.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TpPostTask @ 0x180046308 (TpPostTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWorkPost(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  char v5; // bp
  signed __int64 v6; // rbx
  signed __int64 v7; // rdi
  signed __int64 v8; // rbx
  __int64 result; // rax
  int v10; // r8d
  int v11; // ett
  _DWORD *SharedData; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rbx

  v5 = 0;
  _m_prefetchw((const void *)(a1 + 56));
  v6 = *(_QWORD *)(a1 + 56);
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
      v5 = 0;
    }
    v7 = v6;
    v8 = (v6 ^ (v6 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v6;
    if ( v7 < 0 && (v8 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v8 &= ~0x8000000000000000uLL;
      v5 = 1;
      RtlAcquireSRWLockExclusive(a1 + 64, a2, a3, a4);
    }
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v8, v7);
  }
  while ( v7 != v6 );
  if ( v5 )
  {
    v14 = *(_QWORD **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    TppIteWakeWaiters(v14);
  }
  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(result) = *(_DWORD *)(a1 + 232);
  do
  {
    v10 = result & 1;
    v11 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 232),
                             (result & 0xFFFFFFFE) + 2,
                             result);
  }
  while ( v11 != (_DWORD)result );
  if ( v10 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a1, 2u);
    *(_QWORD *)(a1 + 128) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v13 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v13 = 2147353478LL;
    if ( *(_BYTE *)v13 )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a1 + 144),
        a1 + 200,
        *(_QWORD *)(a1 + 80),
        *(_QWORD *)(a1 + 88),
        *(_QWORD *)(a1 + 104));
    TpPostTask(a1 + 200, *(_QWORD *)(a1 + 144), *(unsigned int *)(a1 + 192), 0LL);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
