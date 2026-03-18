/*
 * XREFs of TtmpSetCsSessionGoal @ 0x1406D9C54
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1406D9834 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1406D98DC (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PoSetCsSessionGoal @ 0x14022F3C8 (PoSetCsSessionGoal.c)
 *     TtmiLogSessionSetCsSessionGoalStart @ 0x1406DCD6C (TtmiLogSessionSetCsSessionGoalStart.c)
 *     TtmiLogSessionSetCsSessionGoalStop @ 0x1406DCE60 (TtmiLogSessionSetCsSessionGoalStop.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v4 = PoSetCsSessionGoal();
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *(_QWORD *)(v3 + 160) = KeGetCurrentThread();
  TtmiLogSessionSetCsSessionGoalStop(v6);
  return v6;
}
