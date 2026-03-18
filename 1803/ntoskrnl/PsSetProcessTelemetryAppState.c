/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x140510498
 * Callers:
 *     PspExitProcess @ 0x14050FEC8 (PspExitProcess.c)
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140565F94 (PsFreezeProcess.c)
 *     PsSetProcessFaultInformation @ 0x1405C3C50 (PsSetProcessFaultInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407AFB10 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 *     PsGetProcessDeepFreezeStats @ 0x140538DD4 (PsGetProcessDeepFreezeStats.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(ULONG_PTR BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v5; // edi
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+28h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-50h]
  _QWORD v15[7]; // [rsp+40h] [rbp-40h] BYREF

  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(BugCheckParameter1, &v12);
    v5 = 0;
    v6 = v13 - v14 - *(_QWORD *)(BugCheckParameter1 + 1888);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
    v10 = *(_QWORD *)(BugCheckParameter1 + 1912);
    if ( v10 >> 61 != 3 )
    {
      v7 = *(_QWORD *)(BugCheckParameter1 + 1904);
      v8 = v12;
      if ( v7 <= v12 )
      {
        v15[2] = *(_QWORD *)(BugCheckParameter1 + 1904);
        v7 = 0x1FFFFFFFFFFFFFFFLL;
        LODWORD(v15[6]) = v10 >> 61;
        v15[3] = v10 & 0x1FFFFFFFFFFFFFFFLL;
        if ( a2 == 5 && v10 >> 61 == 1 )
          a2 = 6;
        *(_QWORD *)(BugCheckParameter1 + 1904) = v12;
        *(_QWORD *)(BugCheckParameter1 + 1912) = v6 & 0x1FFFFFFFFFFFFFFFLL | ((__int64)a2 << 61);
        v5 = 1;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728), v7, v8, v9);
    KeAbPostRelease(BugCheckParameter1 + 728);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(BugCheckParameter1 + 1912) >> 61 == 3 )
      break;
    if ( v5 )
      goto LABEL_10;
  }
  if ( !v5 )
    return v5;
LABEL_10:
  v15[0] = v12;
  v15[1] = v13;
  v15[5] = v14;
  v15[4] = v6;
  HIDWORD(v15[6]) = a2;
  EtwTraceAppStateChange(BugCheckParameter1);
  return v5;
}
