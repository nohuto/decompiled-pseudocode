/*
 * XREFs of KiTryToAcquireSpinLockInstrumented @ 0x14024281C
 * Callers:
 *     KxTryToAcquireSpinLock @ 0x1400B8074 (KxTryToAcquireSpinLock.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     PerfLogSpinLockAcquire @ 0x1402B1DE4 (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiTryToAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v2; // bl
  char v4; // si
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // r15d
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned int v10; // [rsp+58h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v7 = v5;
  }
  else
  {
    v7 = v10;
    v4 = 0;
    InterruptCount = v10;
  }
  KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v2 = 0;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    _mm_pause();
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v4 )
    {
      v8 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a1, v8, v8 - v7, 0, InterruptCount, 0);
    }
  }
  return v2;
}
