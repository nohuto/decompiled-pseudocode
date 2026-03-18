/*
 * XREFs of TtmpSetCsSessionGoal @ 0x140710064
 * Callers:
 *     TtmpActivateSessionWorker @ 0x14070FC40 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x14070FCE8 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PoSetCsSessionGoal @ 0x1402435C0 (PoSetCsSessionGoal.c)
 *     TtmiLogSessionSetCsSessionGoalStart @ 0x140713230 (TtmiLogSessionSetCsSessionGoalStart.c)
 *     TtmiLogSessionSetCsSessionGoalStop @ 0x140713324 (TtmiLogSessionSetCsSessionGoalStop.c)
 */

__int64 __fastcall TtmpSetCsSessionGoal(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v6; // ebx

  v3 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionSetCsSessionGoalStart(a1, a3);
  *(_QWORD *)(v3 + 160) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v4 = PoSetCsSessionGoal();
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *(_QWORD *)(v3 + 160) = KeGetCurrentThread();
  TtmiLogSessionSetCsSessionGoalStop(v6);
  return v6;
}
