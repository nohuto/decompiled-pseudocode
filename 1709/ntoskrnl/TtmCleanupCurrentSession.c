/*
 * XREFs of TtmCleanupCurrentSession @ 0x14070F158
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PsGetProcessSessionIdEx @ 0x140121C00 (PsGetProcessSessionIdEx.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PoUnregisterPowerSettingCallback @ 0x1406FA220 (PoUnregisterPowerSettingCallback.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14070FD64 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1407116D0 (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x140711774 (TtmiLogCleanupCurrentSessionStop.c)
 */

__int64 TtmCleanupCurrentSession()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  TtmiLogCleanupCurrentSessionStart();
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v3 = TtmpSession;
  if ( !TtmpSession || *(_DWORD *)TtmpSession == v2 )
  {
    v4 = *(void **)(TtmpSession + 24);
    *(_QWORD *)(TtmpSession + 32) = 0LL;
    ObCloseHandle(v4, 0);
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_DWORD *)(v3 + 4) |= 4u;
    TtmpDereferenceSessionMaybeLast(v3);
    TtmpSession = 0LL;
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = *(void **)(v3 + 168);
    if ( v5 )
    {
      PoUnregisterPowerSettingCallback(v5);
      *(_QWORD *)(v3 + 168) = 0LL;
      TtmpDereferenceSessionMaybeLast(v3);
    }
    v6 = *(void **)(v3 + 176);
    if ( v6 )
    {
      PoUnregisterPowerSettingCallback(v6);
      *(_QWORD *)(v3 + 176) = 0LL;
      TtmpDereferenceSessionMaybeLast(v3);
    }
  }
  else
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return TtmiLogCleanupCurrentSessionStop();
}
