/*
 * XREFs of ??0NdisWatchdogState@@QEAA@XZ @ 0x1C00B57FC
 * Callers:
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00B57BC (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 */

NdisWatchdogState *__fastcall NdisWatchdogState::NdisWatchdogState(char *DeferredContext)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  *((_DWORD *)DeferredContext + 40) = 0;
  *((_DWORD *)DeferredContext + 41) = 0;
  *((_DWORD *)DeferredContext + 48) = 0;
  memset(DeferredContext + 200, 0, 0x38uLL);
  DeferredContext[256] = 0;
  KeInitializeDpc((PRKDPC)DeferredContext, (PKDEFERRED_ROUTINE)ndisWatchdogTimeoutDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)DeferredContext + 1);
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_QWORD *)DeferredContext + 18) = ndisWatchdogTimeoutWorkerRoutine;
  *((_QWORD *)DeferredContext + 19) = DeferredContext;
  KeInitializeEvent((PRKEVENT)DeferredContext + 7, NotificationEvent, 1u);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
  v2 = (_QWORD *)qword_1C00927D0;
  v3 = DeferredContext + 264;
  if ( *(struct _LIST_ENTRY **)qword_1C00927D0 != &g_ndisWatchdogList )
    __fastfail(3u);
  *v3 = &g_ndisWatchdogList;
  *((_QWORD *)DeferredContext + 34) = v2;
  *v2 = v3;
  qword_1C00927D0 = (__int64)(DeferredContext + 264);
  ExReleasePushLockExclusiveEx(&g_ndisWatchdogLock, 0LL);
  KeLeaveCriticalRegion();
  return (NdisWatchdogState *)DeferredContext;
}
