/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x140668E3C
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpDoFlushAll @ 0x14013D204 (CmpDoFlushAll.c)
 */

__int64 CmReconcileAndValidateAllHives()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = 0;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpDoFlushAll();
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  }
  else
  {
    v1 = -1073741431;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v1;
}
