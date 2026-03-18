/*
 * XREFs of TtmpSessionPowerControl @ 0x140773604
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1407734B4 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x140773558 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PoSessionPowerControl @ 0x14076DBA8 (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x140776F28 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x14077701C (TtmiLogSessionPowerControlStop.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PoSessionPowerControl(a2, a3, v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *((_QWORD *)v5 + 20) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
