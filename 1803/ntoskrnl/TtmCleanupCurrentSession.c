/*
 * XREFs of TtmCleanupCurrentSession @ 0x14077292C
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PoUnregisterPowerSettingCallback @ 0x1405E8D90 (PoUnregisterPowerSettingCallback.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1407735D8 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1407750B0 (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x140775154 (TtmiLogCleanupCurrentSessionStop.c)
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
    v5 = *(void **)(v3 + 176);
    if ( v5 )
    {
      PoUnregisterPowerSettingCallback(v5);
      *(_QWORD *)(v3 + 176) = 0LL;
      TtmpDereferenceSessionMaybeLast(v3);
    }
    v6 = *(void **)(v3 + 184);
    if ( v6 )
    {
      PoUnregisterPowerSettingCallback(v6);
      *(_QWORD *)(v3 + 184) = 0LL;
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
