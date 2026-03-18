/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x140498E00
 * Callers:
 *     PsSetProcessFaultInformation @ 0x14041FC34 (PsSetProcessFaultInformation.c)
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     PsFreezeProcess @ 0x1404C7A84 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407111B0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsGetProcessDeepFreezeStats @ 0x1404996FC (PsGetProcessDeepFreezeStats.c)
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(ULONG_PTR BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v5; // edi
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h]
  __int64 v11; // [rsp+30h] [rbp-50h]
  _QWORD v12[7]; // [rsp+40h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(BugCheckParameter1, &v9);
    v5 = 0;
    v6 = v10 - v11 - *(_QWORD *)(BugCheckParameter1 + 1864);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
    v7 = *(_QWORD *)(BugCheckParameter1 + 1888);
    if ( v7 >> 61 != 3 && *(_QWORD *)(BugCheckParameter1 + 1880) <= v9 )
    {
      v12[2] = *(_QWORD *)(BugCheckParameter1 + 1880);
      LODWORD(v12[6]) = (v7 >> 61) & 7;
      v12[3] = v7 & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && *(_QWORD *)(BugCheckParameter1 + 1888) >> 61 == 1 )
        a2 = 6;
      *(_QWORD *)(BugCheckParameter1 + 1880) = v9;
      *(_QWORD *)(BugCheckParameter1 + 1888) = v6 & 0x1FFFFFFFFFFFFFFFLL ^ ((__int64)a2 << 61);
      v5 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
    KeAbPostRelease(BugCheckParameter1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(BugCheckParameter1 + 1888) >> 61 == 3 )
      break;
    if ( v5 )
      goto LABEL_10;
  }
  if ( !v5 )
    return v5;
LABEL_10:
  v12[0] = v9;
  v12[1] = v10;
  v12[5] = v11;
  v12[4] = v6;
  HIDWORD(v12[6]) = a2;
  EtwTraceAppStateChange(BugCheckParameter1);
  return v5;
}
