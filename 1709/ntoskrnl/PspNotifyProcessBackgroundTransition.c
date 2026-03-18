/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x140127588
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x14050D3E4 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessBackgroundCountCallback @ 0x140589260 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x1400218CC (KeAbProcessBaseIoPriorityChange.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspNotifyProcessBackgroundTransition(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 *v7; // r14
  __int64 *i; // rbx
  int v10; // r8d
  int v11; // edx

  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 772), 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 772), 0x14u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 1712);
  ExAcquirePushLockSharedEx(a1 + 1712, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = (__int64 *)(a1 + 1160);
  for ( i = *(__int64 **)(a1 + 1160); i != v7; i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i - 912) | *((_BYTE *)i - 282)) != 63 )
    {
      if ( a2 )
      {
        v10 = 0;
        v11 = (*((_DWORD *)i + 10) >> 9) & 7;
      }
      else
      {
        v11 = 0;
        v10 = (*((_DWORD *)i + 10) >> 9) & 7;
      }
      if ( v11 != v10 )
        KeAbProcessBaseIoPriorityChange((__int64)(i - 213), v11, v10);
    }
  }
  __writecr8(CurrentIrql);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
