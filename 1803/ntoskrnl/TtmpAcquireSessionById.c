/*
 * XREFs of TtmpAcquireSessionById @ 0x14065363C
 * Callers:
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140653570 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x140772A3C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmNotifyConsoleUserPresent @ 0x140772CD8 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x140772D70 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x140772DE4 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140772E60 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140772FA4 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140773034 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1407730CC (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x140773184 (TtmiAcquireCurrentSession.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
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
      TtmiLogError("TtmpAcquireSessionById", 755, -1, -1073740715);
      ExReleaseResourceLite(&TtmpSessionLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 744, -1, -1073741637);
  }
  return v2;
}
