/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x140524598
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x14052447C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v2; // rbx
  __int64 *v4; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  *a1 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  v4 = (__int64 *)PiPnpRtlActiveOperations;
  while ( v4 != &PiPnpRtlActiveOperations )
  {
    v2 = v4;
    if ( (struct _KTHREAD *)v4[2] == CurrentThread )
      break;
    v4 = (__int64 *)*v4;
    v2 = 0LL;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 )
    *a1 = v2;
  return v2 == 0LL ? 0xC0000225 : 0;
}
