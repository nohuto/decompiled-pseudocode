/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x140247B84
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x1402AB350 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeReadGuestSchedulerAssistPriority @ 0x1401A5A6C (KeReadGuestSchedulerAssistPriority.c)
 *     KeCheckAndApplyBamQos @ 0x140247AD0 (KeCheckAndApplyBamQos.c)
 */

void __fastcall KeSetThreadSchedulerAssist(PKTHREAD Thread, void *a2, int a3)
{
  int v4; // r8d
  KPRIORITY BasePriority; // edx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v7; // si
  __int16 v8; // di
  int v9; // edx
  bool v10; // di
  signed __int32 v11; // ett
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  volatile signed __int64 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  volatile signed __int64 *v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18[3]; // [rsp+28h] [rbp-20h] BYREF
  int v19; // [rsp+40h] [rbp-8h]
  int v20; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
  {
    if ( a2 )
    {
      Thread->SchedulerAssist = a2;
      _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
      return;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v20);
      while ( Thread->ThreadLock );
    }
    KiAcquireThreadStateLock((__int64)Thread, v18, (volatile signed __int32 **)&v17);
    _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
    v14 = v17;
    v15 = v18[0];
    Thread->SchedulerAssist = 0LL;
    KiReleaseThreadStateLock(v16, v15, v14);
    KiReleaseThreadLockSafe((__int64)Thread);
    __writecr8(CurrentIrql);
    BasePriority = Thread->BasePriority;
    goto LABEL_22;
  }
  v4 = a3 - 1;
  if ( v4 )
  {
    if ( (unsigned int)(v4 - 1) > 1 )
      return;
    BasePriority = KeReadGuestSchedulerAssistPriority((__int64)Thread);
LABEL_22:
    KeSetPriorityThread(Thread, BasePriority);
    return;
  }
  SchedulerAssist = Thread->SchedulerAssist;
  if ( (KiVelocityFlags & 0x10) != 0 && SchedulerAssist )
  {
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v8 = v19;
    _disable();
    v9 = SchedulerAssist[2];
    v10 = (v8 & 0x200) != 0;
    if ( v9 != (*((_DWORD *)&Thread->0 + 1) & 3) && v9 < 4 )
    {
      do
        v11 = *(&Thread->MiscFlags + 1);
      while ( v11 != _InterlockedCompareExchange(
                       (volatile signed __int32 *)&Thread->116 + 1,
                       v9 | v11 & 0xFFFFFFFC,
                       v11) );
      KeCheckAndApplyBamQos((__int64)KeGetCurrentPrcb(), (__int64)Thread);
    }
    if ( v10 )
      _enable();
    __writecr8(v7);
  }
}
