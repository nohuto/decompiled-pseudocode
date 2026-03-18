/*
 * XREFs of KiTryToAcquireQueuedSpinLockInstrumented @ 0x140242594
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400D508C (KxTryToAcquireQueuedSpinLock.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     PerfLogSpinLockAcquire @ 0x1402B1DE4 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiTryToAcquireQueuedSpinLockInstrumented(signed __int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v5; // si
  unsigned __int64 v6; // rax
  unsigned int InterruptCount; // r14d
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned int v11; // [rsp+58h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v8 = v6;
  }
  else
  {
    v8 = v11;
    v5 = 0;
    InterruptCount = v11;
  }
  KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  _m_prefetchw(a2);
  if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    _mm_pause();
    return 0LL;
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v5 )
    {
      v9 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a2, v9, v9 - v8, 0, InterruptCount, 1);
    }
    return 1LL;
  }
}
