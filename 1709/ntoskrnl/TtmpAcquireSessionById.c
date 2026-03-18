/*
 * XREFs of TtmpAcquireSessionById @ 0x1405EA0E4
 * Callers:
 *     TtmiAcquireCurrentSession @ 0x1405EA044 (TtmiAcquireCurrentSession.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405EA090 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x14070F268 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmNotifyConsoleUserPresent @ 0x14070F4FC (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x14070F594 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x14070F608 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14070F684 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x14070F790 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x14070F820 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x14070F8B8 (TtmSessionMonitorControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById");
  }
  return v2;
}
