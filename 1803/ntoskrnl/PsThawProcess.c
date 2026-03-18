/*
 * XREFs of PsThawProcess @ 0x140565D8C
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x140710C10 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140710D08 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x1407115E8 (DbgkpResumeProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeThawProcess @ 0x1400BD08C (KeThawProcess.c)
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PsInvokeWin32Callout @ 0x1404B6460 (PsInvokeWin32Callout.c)
 *     PspWow64GetSharedInformation @ 0x1404EA240 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1404EA258 (PsWow64GetProcessNtdllType.c)
 *     PsSetProcessTelemetryAppState @ 0x140510498 (PsSetProcessTelemetryAppState.c)
 *     VslUpdateFreezeTimeBias @ 0x140719070 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1407A7764 (EtwTraceFreezeThawProcess.c)
 */

__int64 __fastcall PsThawProcess(ULONG_PTR a1, char a2)
{
  int v4; // esi
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int ProcessNtdllType; // eax
  _QWORD **SharedInformation; // rax
  __int64 result; // rax
  int ProcessSessionId; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h]

  v4 = *(_DWORD *)(a1 + 616) + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  v14 = v4;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 936) && (*(_DWORD *)(a1 + 772) & 8) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(23, a1, 1, (__int64)&ProcessSessionId);
    }
    v5 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    if ( *(_QWORD *)(a1 + 1792) )
    {
      v5 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 1792);
      *(_QWORD *)(a1 + 1792) = 0LL;
      *(_QWORD *)(a1 + 1896) += v5;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728), v7, v8, v9);
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (*(_BYTE *)(a1 + 720) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v5);
    }
    else
    {
      *(_QWORD *)PspFreezeTimeBiasAddress += v5;
      ProcessNtdllType = PsWow64GetProcessNtdllType(a1);
      if ( ProcessNtdllType )
      {
        SharedInformation = (_QWORD **)PspWow64GetSharedInformation(ProcessNtdllType);
        *SharedInformation[8] += v5;
      }
    }
  }
  result = KeThawProcess(a1, a2);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState(a1, 2);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v4 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
