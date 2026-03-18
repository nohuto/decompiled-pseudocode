/*
 * XREFs of PspGetPreviousProcessThread @ 0x14054EFE0
 * Callers:
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspGetPreviousProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r14
  __int64 v5; // r15
  int v6; // edi
  signed __int64 *v7; // rsi
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 1160;
  v5 = 0LL;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = (signed __int64 *)(a1 + 728);
  ExAcquirePushLockSharedEx(a1 + 728, 0LL);
  if ( a2 )
    v8 = a2[213];
  else
    v8 = *(_QWORD *)(v3 + 8);
  while ( v8 != v3 )
  {
    v5 = v8 - 1696;
    if ( ObReferenceObjectSafeWithTag(v8 - 1696) )
    {
      v6 = 1;
      break;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5 & -(__int64)(v6 != 0);
}
