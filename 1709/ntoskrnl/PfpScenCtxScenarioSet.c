/*
 * XREFs of PfpScenCtxScenarioSet @ 0x140429040
 * Callers:
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x1405EF25C (PfpProcessScenarioPhase.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140239710 (PfpScenCtxWaiterTimedOut.c)
 *     PfpServiceMainThreadBoost @ 0x140239740 (PfpServiceMainThreadBoost.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x140430CF0 (PfpScenCtxPrefetchAbortSet.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140430DB4 (PfpScenCtxPrefetchStateSet.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406F3658 (PfpServiceMainThreadBoostPrep.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  KPRIORITY v9; // ebp
  BOOL v10; // eax
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+38h] [rbp-10h]

  Object = 0LL;
  P = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, &Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v9 = 1;
    if ( *(_DWORD *)(BugCheckParameter2 + 48) )
    {
      PfpScenCtxPrefetchStateSet(BugCheckParameter2);
      PfpScenCtxWaiterTimedOut(BugCheckParameter2);
      PfpScenCtxPrefetchAbortSet(BugCheckParameter2, 1);
      *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
    }
    v10 = *(_DWORD *)(BugCheckParameter2 + 48) || a3;
    *(_DWORD *)(BugCheckParameter2 + 48) = a3;
    if ( a3 )
      ++*(_DWORD *)(BugCheckParameter2 + 52);
    if ( a3 == 3 )
      *(_QWORD *)(BugCheckParameter2 + 56) = a4;
    if ( v10 )
    {
      if ( a3 )
      {
        if ( Object )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (__int64 *)&Object);
          v9 = 0;
        }
        else
        {
          v9 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v9, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
