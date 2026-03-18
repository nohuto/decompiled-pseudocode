/*
 * XREFs of CmpForceFlushWorker @ 0x140669760
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpDoFlushAll @ 0x14013D204 (CmpDoFlushAll.c)
 */

__int64 CmpForceFlushWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpDoFlushAll();
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return result;
}
