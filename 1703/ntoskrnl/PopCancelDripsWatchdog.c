/*
 * XREFs of PopCancelDripsWatchdog @ 0x1406D4C44
 * Callers:
 *     PdcPoResiliencyClient @ 0x1406CB3C0 (PdcPoResiliencyClient.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 */

__int64 PopCancelDripsWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  if ( PopDripsWatchdog )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&stru_14036F408, 1u);
    KeCancelTimer2((__int64)&unk_14036F470);
    dword_14036F3A8 = 0;
    dword_14036F3AC = 0;
    qword_14036F3B8 = 0LL;
    qword_14036F3C0 = 0LL;
    qword_14036F3C8 = 0LL;
    dword_14036F3B0 = 0;
    qword_14036F3D0 = 0LL;
    qword_14036F3D8 = 0LL;
    qword_14036F3E0 = 0LL;
    qword_14036F3E8 = 0LL;
    qword_14036F3F0 = 0LL;
    qword_14036F3F8 = 0LL;
    qword_14036F400 = 0LL;
    ExReleaseResourceLite(&stru_14036F408);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
