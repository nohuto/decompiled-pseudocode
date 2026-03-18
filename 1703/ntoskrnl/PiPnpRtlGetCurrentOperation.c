/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x140486050
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x140485F2C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 *v4; // rdi
  __int64 *i; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v4 = 0LL;
  *a1 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; v4 = 0LL )
  {
    v4 = i;
    if ( (struct _KTHREAD *)i[2] == CurrentThread )
      break;
    i = (__int64 *)*i;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 )
    *a1 = v4;
  else
    return (unsigned int)-1073741275;
  return v2;
}
