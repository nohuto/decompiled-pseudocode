/*
 * XREFs of KiActivateWaiterPriQueue @ 0x140115EEC
 * Callers:
 *     KiPriQueueThreadPriorityChanged @ 0x14002CE38 (KiPriQueueThreadPriorityChanged.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140114EE8 (KiActivateWaiterQueueWithNoLocks.c)
 * Callees:
 *     KiWakePriQueueWaiter @ 0x140068B20 (KiWakePriQueueWaiter.c)
 *     KiAttemptFastRemovePriQueue @ 0x140115F60 (KiAttemptFastRemovePriQueue.c)
 */

_QWORD *__fastcall KiActivateWaiterPriQueue(ULONG_PTR a1, signed int a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rdi
  ULONG_PTR v5; // rcx

  result = (_QWORD *)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      result = (_QWORD *)KiAttemptFastRemovePriQueue(a1);
      v4 = result;
      if ( result )
      {
        result = (_QWORD *)KiWakePriQueueWaiter((__int64)KeGetCurrentPrcb(), a1, (__int64)result, a2);
        if ( !(_BYTE)result )
        {
          ++*(_DWORD *)(a1 + 4);
          v5 = a1 + 16LL * a2 + 24;
          result = *(_QWORD **)v5;
          if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
            __fastfail(3u);
          *v4 = result;
          v4[1] = v5;
          result[1] = v4;
          *(_QWORD *)v5 = v4;
        }
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
