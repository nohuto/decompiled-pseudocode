/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x1400323A0
 * Callers:
 *     PspSetProcessBackgroundCountCallback @ 0x14044DD50 (PspSetProcessBackgroundCountCallback.c)
 *     PspAddProcessToJobChain @ 0x140547D90 (PspAddProcessToJobChain.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x140066A40 (KeAbProcessBaseIoPriorityChange.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspNotifyProcessBackgroundTransition(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v5; // rdi
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
  v5 = (volatile signed __int64 *)(a1 + 1712);
  ExAcquirePushLockSharedEx(a1 + 1712, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = (__int64 *)(a1 + 1160);
  for ( i = *(__int64 **)(a1 + 1160); i != v7; i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i - 904) | *((_BYTE *)i - 274)) != 63 )
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
        KeAbProcessBaseIoPriorityChange(i - 212);
    }
  }
  __writecr8(CurrentIrql);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread(CurrentThread);
}
