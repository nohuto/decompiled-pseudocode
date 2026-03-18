/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x1400637B8
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1405319B4 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessBackgroundCountCallback @ 0x140582180 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x1400438F8 (KeAbProcessBaseIoPriorityChange.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspNotifyProcessBackgroundTransition(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 *v10; // r14
  __int64 *i; // rbx

  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 772), 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 772), 0x14u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a1 + 1712);
  ExAcquirePushLockSharedEx(a1 + 1712, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = (__int64 *)(a1 + 1160);
  for ( i = *(__int64 **)(a1 + 1160); i != v10; i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i - 912) | *((_BYTE *)i - 282)) != 63 )
    {
      v7 = (*((_DWORD *)i + 10) >> 9) & 7;
      if ( a2 )
      {
        v6 = (unsigned int)v7;
        v7 = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      if ( (_DWORD)v6 != (_DWORD)v7 )
        KeAbProcessBaseIoPriorityChange((__int64)(i - 213), v6, v7);
    }
  }
  __writecr8(CurrentIrql);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5, v6, v7, v8);
  KeAbPostRelease((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread(CurrentThread);
}
