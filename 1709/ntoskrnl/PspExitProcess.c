/*
 * XREFs of PspExitProcess @ 0x1404FCEF4
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     ExCleanTimerResolutionRequest @ 0x14000DDE8 (ExCleanTimerResolutionRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PfpLogApplicationEvent @ 0x1400B9690 (PfpLogApplicationEvent.c)
 *     PfSnEndProcessTrace @ 0x140455060 (PfSnEndProcessTrace.c)
 *     PspCallProcessNotifyRoutines @ 0x1404D265C (PspCallProcessNotifyRoutines.c)
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 *     DbgkFlushErrorPort @ 0x1404FCFE8 (DbgkFlushErrorPort.c)
 *     PsSetProcessTelemetryAppState @ 0x1404FD040 (PsSetProcessTelemetryAppState.c)
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
      EtwTraceProcess(a2, 770);
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
    result = PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      return PfSnEndProcessTrace(a2, 2, 0LL);
  }
  return result;
}
