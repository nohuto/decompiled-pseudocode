/*
 * XREFs of PspExitProcess @ 0x14050FEC8
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 * Callees:
 *     ExCleanTimerResolutionRequest @ 0x140003E2C (ExCleanTimerResolutionRequest.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14006ED00 (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x14006EDFC (PfpLogApplicationEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PfSnEndProcessTrace @ 0x14048C130 (PfSnEndProcessTrace.c)
 *     PspCallProcessNotifyRoutines @ 0x1404B655C (PspCallProcessNotifyRoutines.c)
 *     EtwTraceProcess @ 0x1404F846C (EtwTraceProcess.c)
 *     DbgkFlushErrorPort @ 0x1405103C0 (DbgkFlushErrorPort.c)
 *     PsSetProcessTelemetryAppState @ 0x140510498 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  void *v6; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((PEPROCESS)a2, 770);
    result = *(unsigned int *)(a2 + 1740);
    if ( (result & 1) == 0 || *(_QWORD *)(a2 + 1808) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines((_QWORD *)a2, 0LL, 0);
      result = (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v6 = *(void **)(a2 + 1120);
  if ( !v6 )
    goto LABEL_7;
  if ( v6 != (void *)1 )
  {
    result = ObfDereferenceObject(v6);
LABEL_7:
    *(_QWORD *)(a2 + 1120) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 772) < 0 )
      ExCleanTimerResolutionRequest((__int64)v6);
    DbgkFlushErrorPort(a2);
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2, 0LL);
    return PspProcessUnbindVirtualizedTimers(a2);
  }
  return result;
}
