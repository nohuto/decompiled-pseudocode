/*
 * XREFs of PfpScenCtxScenarioSet @ 0x140478314
 * Callers:
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x1406129BC (PfpProcessScenarioPhase.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PfpServiceMainThreadBoost @ 0x1401559D8 (PfpServiceMainThreadBoost.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14015627C (PfpScenCtxWaiterTimedOut.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1404764FC (PfpScenCtxPrefetchStateSet.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1405EEF48 (PfpServiceMainThreadBoostPrep.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  KPRIORITY v13; // ebp
  int v14; // eax
  BOOL v15; // eax
  PVOID Object; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+28h] [rbp-10h]

  Object = 0LL;
  P = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, &Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v12 = *(_DWORD *)(BugCheckParameter2 + 48);
    v13 = 1;
    v15 = v12
       && (PfpScenCtxPrefetchStateSet(BugCheckParameter2, v12, 0LL, 1LL),
           PfpScenCtxWaiterTimedOut(BugCheckParameter2),
           v14 = *(_DWORD *)(BugCheckParameter2 + 48),
           *(_QWORD *)(BugCheckParameter2 + 40) = 0LL,
           *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3,
           v14)
       || a3;
    *(_DWORD *)(BugCheckParameter2 + 48) = a3;
    if ( a3 )
      ++*(_DWORD *)(BugCheckParameter2 + 52);
    if ( a3 == 3 )
      *(_QWORD *)(BugCheckParameter2 + 56) = a4;
    if ( v15 )
    {
      if ( a3 )
      {
        if ( Object )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (__int64 *)&Object);
          v13 = 0;
        }
        else
        {
          v13 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v13, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v9, v10, v11);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
