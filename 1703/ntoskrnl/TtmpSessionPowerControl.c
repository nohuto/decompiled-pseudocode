/*
 * XREFs of TtmpSessionPowerControl @ 0x1406D9984
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1406D9834 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1406D98DC (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PoSessionPowerControl @ 0x1406D4864 (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x1406DC974 (TtmiLogSessionPowerControlStart.c)
 */

__int64 __fastcall TtmpSessionPowerControl(int *a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // ebx
  int *v5; // r14
  struct _KTHREAD *CurrentThread; // rax

  v3 = *a1;
  v5 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionPowerControlStart(a1, a3);
  *((_QWORD *)v5 + 20) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PoSessionPowerControl(a2, a3, v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *((_QWORD *)v5 + 20) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
