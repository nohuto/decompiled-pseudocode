/*
 * XREFs of PspExitProcess @ 0x140498A28
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     ExCleanTimerResolutionRequest @ 0x14003C378 (ExCleanTimerResolutionRequest.c)
 *     PfpLogApplicationEvent @ 0x1400618B4 (PfpLogApplicationEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     PfSnEndProcessTrace @ 0x140454310 (PfSnEndProcessTrace.c)
 *     PsSetProcessTelemetryAppState @ 0x140498E00 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1404FA068 (PspCallProcessNotifyRoutines.c)
 *     DbgkpDeleteErrorPort @ 0x140681000 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14068102C (DbgkpRemoveErrorPort.c)
 */

__int64 __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  void *v6; // rcx
  struct _KTHREAD *v7; // rsi
  volatile signed __int32 *v8; // rdi

  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((PEPROCESS)a2);
    result = *(unsigned int *)(a2 + 1740);
    if ( (result & 1) == 0 || *(_QWORD *)(a2 + 1808) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines(a2, 0LL, 0LL);
      result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
    if ( (PVOID)a2 == DbgkpErrorProcess )
    {
      v7 = KeGetCurrentThread();
      v8 = 0LL;
      --v7->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&DbgkpErrorPortLock, 0LL);
      if ( (PVOID)a2 == DbgkpErrorProcess )
      {
        v8 = (volatile signed __int32 *)DbgkpErrorPort;
        _InterlockedIncrement((volatile signed __int32 *)DbgkpErrorPort);
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&DbgkpErrorPortLock);
      KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
      KeLeaveCriticalRegionThread((__int64)v7);
      if ( v8 )
      {
        DbgkpRemoveErrorPort(v7, v8);
        if ( !_InterlockedDecrement(v8) )
          DbgkpDeleteErrorPort(v8);
      }
    }
    result = PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      return PfSnEndProcessTrace(a2, 2, 0LL);
  }
  return result;
}
