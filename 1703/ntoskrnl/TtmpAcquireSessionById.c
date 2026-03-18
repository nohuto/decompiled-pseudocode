/*
 * XREFs of TtmpAcquireSessionById @ 0x140584CE8
 * Callers:
 *     TtmiAcquireCurrentSession @ 0x140584CA4 (TtmiAcquireCurrentSession.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405D5F00 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x1406D8ED4 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmNotifyConsoleUserPresent @ 0x1406D9168 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x1406D9200 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1406D9278 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1406D92FC (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x1406D9408 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1406D9498 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1406D9530 (TtmSessionMonitorControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  struct _KTHREAD *CurrentThread; // rax

  v2 = 0;
  v4 = TtmpEnabled == 1;
  *a1 = 0LL;
  if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    if ( TtmpSession && *(_DWORD *)TtmpSession == a2 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById");
      ExReleaseResourceLite(&TtmpSessionLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById");
  }
  return v2;
}
