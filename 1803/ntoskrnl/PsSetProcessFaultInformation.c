/*
 * XREFs of PsSetProcessFaultInformation @ 0x1405C3C50
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     DbgkForwardException @ 0x1405C0D3C (DbgkForwardException.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     TelemetryCoverageStringHashInternal @ 0x1400C31C0 (TelemetryCoverageStringHashInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     PsSetProcessTelemetryAppState @ 0x140510498 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall PsSetProcessFaultInformation(ULONG_PTR a1, int *a2)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // [rsp+48h] [rbp+10h] BYREF
  int v18; // [rsp+50h] [rbp+18h] BYREF

  if ( (*a2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 1740));
    v11 = *(_DWORD *)(a1 + 1740);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1740), v11 | 4, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 4) == 0 )
    {
      if ( (unsigned int)dword_140399994 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140399990 )
          dword_140399990 = TelemetryCoverageStringHashInternal(off_140399988, &v17);
        EtwTelemetryCoverageReport((__int64)&off_140399988);
      }
      PsSetProcessTelemetryAppState(a1, 4);
    }
  }
  v4 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    if ( (unsigned int)dword_14039997C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140399978 )
        dword_140399978 = TelemetryCoverageStringHashInternal(off_140399970, &v18);
      EtwTelemetryCoverageReport((__int64)&off_140399970);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (volatile signed __int64 *)(a1 + 728);
    ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
    LOBYTE(v16) = 15;
    if ( (*(_BYTE *)(a1 + 1739) & 0xF) != 0xF )
      *(_BYTE *)(a1 + 1739) ^= (*(_BYTE *)(a1 + 1739) ^ (*(_BYTE *)(a1 + 1739) + 1)) & 0xF;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728), v16, v14, v15);
    KeAbPostRelease(a1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v4 = *a2;
  }
  else
  {
    v5 = (volatile signed __int64 *)(a1 + 728);
  }
  if ( (v4 & 4) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    if ( (*(_BYTE *)(a1 + 1739) & 0xF0u) < 0xF0 )
      *(_BYTE *)(a1 + 1739) += 16;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5, v7, v8, v9);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)v6);
  }
  return 0LL;
}
