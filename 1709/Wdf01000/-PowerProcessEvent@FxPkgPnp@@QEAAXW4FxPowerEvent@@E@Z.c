/*
 * XREFs of ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0
 * Callers:
 *     ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000E330 (-RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000E620 (-PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E650 (-_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000E7A0 (-PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000FC40 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C000FE00 (-PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0021FD0 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0023224 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0028C18 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002D340 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C002F200 (-PowerPolStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003A8C0 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?NotPowerPolOwnerStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003AF50 (-NotPowerPolOwnerStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0063B28 (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C009B8D4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C009C7F0 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C009CEE4 (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0660 (-PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STA.c)
 *     ?PowerPolRestarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0760 (-PowerPolRestarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0A50 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0B40 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0CC0 (-PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0DE0 (-PowerPolStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0F30 (-PowerPolStoppingDisarmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A3AA0 (-NotPowerPolOwnerStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0027BC0 (WPP_IFR_SF_qqLL.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00290D0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009E054 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerProcessEvent(
        FxPkgPnp *this,
        unsigned int Event,
        unsigned __int8 ProcessOnDifferentThread)
{
  KIRQL v6; // bp
  FxPowerMachine *p_m_PowerMachine; // rbx
  unsigned int m_QueueDepth; // r8d
  int v9; // ecx
  int v10; // ecx
  __int64 m_QueueTail; // r9
  NTSTATUS v12; // ecx
  KIRQL v13; // bp
  unsigned __int8 m_QueueFlags; // al
  char v15; // si
  FxPkgPnp *v16; // rcx
  int m_SingularEventsPresent; // eax
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  FxDeviceBase *v20; // rdx
  const void *v21; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *v23; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v25; // r8
  FxPostProcessInfo info; // [rsp+50h] [rbp-48h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+B8h] [rbp+20h] BYREF

  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x100) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqLL(
        this->m_Globals,
        4u,
        0xCu,
        0xAu,
        WPP_PowerStateMachine_cpp_Traceguids,
        _a1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        HIDWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable),
        Event);
      KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
      return;
    }
    this->m_PowerMachine.m_SingularEventsPresent = Event | m_SingularEventsPresent;
  }
  p_m_PowerMachine = &this->m_PowerMachine;
  m_QueueDepth = this->m_PowerMachine.m_QueueDepth;
  v9 = this->m_PowerMachine.m_QueueHead + m_QueueDepth - 1;
  if ( m_QueueDepth == 8 )
    v10 = v9 % 8;
  else
    v10 = v9 % (int)m_QueueDepth;
  m_QueueTail = this->m_PowerMachine.m_QueueTail;
  if ( v10 == this->m_PowerMachine.m_QueueTail % m_QueueDepth )
  {
LABEL_39:
    KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
    return;
  }
  if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
  {
    v20 = this->m_DeviceBase;
    v21 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v20->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qqLL(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PowerStateMachine_cpp_Traceguids,
      v21,
      v20->m_DeviceObject.m_DeviceObject,
      HIDWORD(v20[1].FxNonPagedObject::FxObject::__vftable),
      Event);
    goto LABEL_39;
  }
  if ( (Event & 0x3900) != 0 )
  {
    p_m_PowerMachine->m_QueueHead = v10;
    this->m_PowerMachine.m_Queue.Events[(unsigned __int8)v10] = Event;
  }
  else
  {
    this->m_PowerMachine.m_QueueTail = ((int)m_QueueTail + 1) % m_QueueDepth;
    this->m_PowerMachine.m_Queue.Events[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v6);
  if ( !v6 && !ProcessOnDifferentThread )
  {
    Timeout.QuadPart = 0LL;
    KeEnterCriticalRegion();
    v12 = KeWaitForSingleObject(&this->m_PowerMachine.m_StateMachineLock, Executive, 0, 0, &Timeout);
    if ( v12 == 258 )
    {
      KeLeaveCriticalRegion();
    }
    else
    {
      this->m_PowerMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
      if ( v12 >= 0 )
      {
        info.m_Event = 0LL;
        *(_WORD *)&info.m_DeleteObject = 0;
        info.m_FireAndForgetIrp = 0LL;
        FxPkgPnp::PowerProcessEventInner(this, &info);
        this->m_PowerMachine.m_StateMachineLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        if ( info.m_SetRemovedEvent )
        {
          KeSetEvent(&this->m_DeviceRemoveProcessed->m_Event, 0, 0);
        }
        else
        {
          if ( info.m_FireAndForgetIrp )
          {
            m_FireAndForgetIrp = info.m_FireAndForgetIrp;
            this->FireAndForgetIrp(this, (FxIrp *)&m_FireAndForgetIrp);
          }
          if ( info.m_DeleteObject )
            FxPkgPnp::ProcessDelayedDeletion(this);
          if ( info.m_Event )
            KeSetEvent(&info.m_Event->m_Event.m_Event, 0, 0);
        }
        return;
      }
    }
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
  if ( p_m_PowerMachine->m_QueueHead == this->m_PowerMachine.m_QueueTail )
  {
    v15 = 0;
    m_PkgPnp = this->m_PowerMachine.m_PkgPnp;
    v23 = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v23->m_ObjectSize )
      v25 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, v25, v23->m_DeviceObject.m_DeviceObject);
  }
  else
  {
    m_QueueFlags = this->m_PowerMachine.m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      this->m_PowerMachine.m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_PowerMachine.m_QueueLock.m_Lock, v13);
  if ( v15 )
  {
    v16 = this->m_PowerMachine.m_PkgPnp;
    if ( v16->m_HasPowerThread )
      v16->m_PowerThreadInterface.PowerThreadEnqueue(
        v16->m_PowerThreadInterface.Interface.Context,
        &this->m_PowerMachine.m_EventWorkQueueItem);
    else
      IoQueueWorkItem(
        this->m_PowerMachine.m_WorkItem.m_WorkItem,
        FxThreadedEventQueue::_WorkItemCallback,
        DelayedWorkQueue,
        &this->m_PowerMachine);
  }
}
