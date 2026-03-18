/*
 * XREFs of PsThawProcess @ 0x14057CE6C
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x1406AC2E4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1406AC3DC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x1406ACD40 (DbgkpResumeProcess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeThawProcess @ 0x140121A60 (KeThawProcess.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     PspWow64GetSharedInformation @ 0x14045FB80 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x14045FB98 (PsWow64GetProcessNtdllType.c)
 *     PsInvokeWin32Callout @ 0x1404D24E0 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1404FD040 (PsSetProcessTelemetryAppState.c)
 *     VslUpdateFreezeTimeBias @ 0x1406B4440 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1407457F8 (EtwTraceFreezeThawProcess.c)
 */

void __fastcall PsThawProcess(ULONG_PTR a1, char a2)
{
  int v4; // esi
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // r13
  int ProcessNtdllType; // eax
  _QWORD **SharedInformation; // rax
  int ProcessSessionId; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h]

  v4 = *(_DWORD *)(a1 + 616) + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  v10 = v4;
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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
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
  KeThawProcess(a1, a2);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState(a1, 2);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v4 )
        EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
}
