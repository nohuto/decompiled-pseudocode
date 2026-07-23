/*
 * XREFs of TppSingleTimerExpiration @ 0x180010418
 * Callers:
 *     TppTimerQueueExpiration @ 0x180010040 (TppTimerQueueExpiration.c)
 * Callees:
 *     TppETWTimerExpiration @ 0x180001E14 (TppETWTimerExpiration.c)
 *     TppIteWakeWaiters @ 0x18000A5B0 (TppIteWakeWaiters.c)
 *     TppUpdateSubQueueTimer @ 0x18000FCF0 (TppUpdateSubQueueTimer.c)
 *     TppEnqueueTimer @ 0x18000FE68 (TppEnqueueTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkPost @ 0x180047168 (TppWorkPost.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A12F0 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     TppRaiseHandleStatus @ 0x18010AE2C (TppRaiseHandleStatus.c)
 */

__int64 __fastcall TppSingleTimerExpiration(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  void *v12; // rcx
  unsigned __int32 v13; // eax
  __int64 **v14; // rbx

  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWTimerExpiration((__int64)&a2[16] + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFF88uLL), a1);
  v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v8 = *(_BYTE *)(a1 + 354);
  *(_BYTE *)(a1 + 354) = 0;
  if ( (v8 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 353) )
    {
      v12 = *(void **)(a1 + 368);
      *(_QWORD *)(a1 + 328) = 0LL;
      v13 = ZwCancelWaitCompletionPacket(v12, 0);
      if ( v13 )
      {
        if ( v13 != 259 && v13 != -1073741536 )
          TppRaiseHandleStatus(v13, *(_QWORD *)(a1 + 360), a1);
        goto LABEL_9;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
      *(_QWORD *)(a1 + 360) = 0LL;
    }
    else
    {
      v9 = *(unsigned int *)(a1 + 348);
      if ( (_DWORD)v9 )
      {
        if ( a3 )
          *(_QWORD *)(a1 + 328) = v7;
        *(_QWORD *)(a1 + 328) += 10000 * v9;
        v11 = *(_QWORD *)(a1 + 328);
        if ( v11 <= v7 )
          *(_QWORD *)(a1 + 328) = v7 + 10000 * v9 - (v7 - v11) % (10000 * v9);
        _InterlockedIncrement((volatile signed __int32 *)a1);
        RtlAcquireSRWLockExclusive(a2);
        TppEnqueueTimer((__int64)&a2[16], a1);
        TppUpdateSubQueueTimer((__int64)&a2[16], 0);
        RtlReleaseSRWLockExclusive(a2);
      }
    }
    TppWorkPost(a1);
LABEL_9:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 328) = 0LL;
  v14 = *(__int64 ***)(a1 + 336);
  *(_QWORD *)(a1 + 336) = 0LL;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  TppIteWakeWaiters(v14);
LABEL_10:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
