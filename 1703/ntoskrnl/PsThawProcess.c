/*
 * XREFs of PsThawProcess @ 0x14054E700
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x140681108 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140681200 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x140681A78 (DbgkpResumeProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeThawProcess @ 0x14011FF68 (KeThawProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsSetProcessTelemetryAppState @ 0x140498E00 (PsSetProcessTelemetryAppState.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 *     EtwTraceFreezeThawProcess @ 0x14070A970 (EtwTraceFreezeThawProcess.c)
 */

void __fastcall PsThawProcess(ULONG_PTR a1, char a2)
{
  int v4; // esi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r13
  __int64 v7; // rax
  __int16 v8; // cx
  int v9[2]; // [rsp+20h] [rbp-B8h] BYREF
  ULONG_PTR v10; // [rsp+28h] [rbp-B0h]
  _BYTE v11[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-A0h]
  __int64 v13; // [rsp+40h] [rbp-98h]

  v10 = a1;
  v4 = *(_DWORD *)(a1 + 616) + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  v9[1] = v4;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 936) && (*(_DWORD *)(a1 + 772) & 8) == 0 )
    {
      v9[0] = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(23, a1, 1, v9);
    }
    v5 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    if ( *(_QWORD *)(a1 + 1792) )
    {
      v5 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 1792);
      *(_QWORD *)(a1 + 1792) = 0LL;
      *(_QWORD *)(a1 + 1872) += v5;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 720) )
    {
      v12 = *(_QWORD *)(a1 + 720);
      v13 = v5;
      VslpEnterIumSecureMode(1, 49LL, 0LL, (__int64)v11);
    }
    else
    {
      *(_QWORD *)PspFreezeTimeBiasAddress += v5;
      v7 = *(_QWORD *)(a1 + 1064);
      if ( v7 )
      {
        v8 = *(_WORD *)(v7 + 8);
        if ( v8 == 332 || v8 == 452 )
          *(_QWORD *)PspFreezeTimeBiasAddress32 += v5;
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
