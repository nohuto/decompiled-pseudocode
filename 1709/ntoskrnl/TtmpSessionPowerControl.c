/*
 * XREFs of TtmpSessionPowerControl @ 0x14070FD90
 * Callers:
 *     TtmpActivateSessionWorker @ 0x14070FC40 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x14070FCE8 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PoSessionPowerControl @ 0x14070A1BC (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x140712E40 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x140712F34 (TtmiLogSessionPowerControlStop.c)
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
