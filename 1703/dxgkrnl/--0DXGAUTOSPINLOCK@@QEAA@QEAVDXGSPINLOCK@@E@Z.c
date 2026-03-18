/*
 * XREFs of ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C00036E8
 * Callers:
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C00068F4 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00069D0 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001316C (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0020624 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00216DC (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0021B2C (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

DXGAUTOSPINLOCK *__fastcall DXGAUTOSPINLOCK::DXGAUTOSPINLOCK(DXGAUTOSPINLOCK *this, KSPIN_LOCK *a2, char a3)
{
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 40) = 0;
  if ( a3 )
  {
    KeAcquireInStackQueuedSpinLock(a2, (PKLOCK_QUEUE_HANDLE)((char *)this + 16));
    a2[1] = (KSPIN_LOCK)KeGetCurrentThread();
    *((_BYTE *)this + 40) = 1;
  }
  return this;
}
