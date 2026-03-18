/*
 * XREFs of ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C000E194
 * Callers:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0028DC0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0063354 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1C00A1E50 (-ForceDisconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ?DisconnectInternal@FxInterrupt@@QEAAXXZ @ 0x1C000E2C8 (-DisconnectInternal@FxInterrupt@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x1C000EEC4 (WPP_IFR_SF_qqqd.c)
 *     ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C00A25D8 (-ReportInactive@FxInterrupt@@QEAAXE@Z.c)
 */

__int64 __fastcall FxInterrupt::Disconnect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // ebp
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax
  int _a4; // esi
  FxSystemWorkItem *m_SystemWorkItem; // rsi
  FxWakeInterruptMachine *v9; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  const void *_a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10
  struct _KINTERRUPT *m_Interrupt; // rcx
  FxInterrupt *SynchronizeContext; // [rsp+50h] [rbp-28h] BYREF
  int v17; // [rsp+58h] [rbp-20h]

  m_Globals = this->m_Globals;
  v5 = 0;
  if ( !this->m_InterruptInfo.Vector )
    return 0LL;
  m_WakeInterruptMachine = this->m_WakeInterruptMachine;
  if ( !m_WakeInterruptMachine || (NotifyFlags & 0x40) == 0 )
  {
    if ( (NotifyFlags & 0x20) != 0 )
    {
      if ( this->m_UseSoftDisconnect
        && FxLibraryGlobals.IoReportInterruptInactive
        && this->m_Interrupt
        && this->m_Connected )
      {
        goto LABEL_5;
      }
      if ( !m_WakeInterruptMachine || !m_WakeInterruptMachine->m_ActiveForWake )
        return 0LL;
    }
    if ( !this->m_Connected )
    {
      if ( !this->m_Interrupt || (NotifyFlags & 4) == 0 )
        return 0LL;
      goto $Disconnect;
    }
LABEL_5:
    if ( this->m_Enabled && (NotifyFlags & 2) == 0 )
    {
      _a4 = 0;
      SynchronizeContext = this;
      v17 = 0;
      if ( this->m_EvtInterruptDisable )
      {
        KeSynchronizeExecution(
          this->m_Interrupt,
          (PKSYNCHRONIZE_ROUTINE)FxInterrupt::_InterruptDisableThunk,
          &SynchronizeContext);
        _a4 = v17;
      }
      this->m_Enabled = 0;
      if ( _a4 < 0 )
      {
        m_DeviceBase = this->m_DeviceBase;
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qqqd(
          m_Globals,
          2u,
          0xCu,
          0x19u,
          WPP_InterruptObject_cpp_Traceguids,
          _a1,
          _a2,
          this->m_Interrupt,
          _a4);
        v5 = _a4;
      }
    }
    if ( this->m_IsEdgeTriggeredNonMsiInterrupt == 1 )
    {
      m_Interrupt = this->m_Interrupt;
      if ( m_Interrupt )
        KeSynchronizeExecution(m_Interrupt, (PKSYNCHRONIZE_ROUTINE)FxInterrupt::_InterruptMarkDisconnecting, this);
      this->m_InterruptCaptured = 0LL;
    }
    KeFlushQueuedDpcs();
    m_SystemWorkItem = this->m_SystemWorkItem;
    if ( m_SystemWorkItem )
    {
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( this->m_UseSoftDisconnect
      && FxLibraryGlobals.IoReportInterruptInactive
      && this->m_Interrupt
      && this->m_Connected
      && (NotifyFlags & 0x10) != 0 )
    {
      FxInterrupt::ReportInactive(this, 1u);
      goto $Exit;
    }
    if ( (NotifyFlags & 1) != 0 )
    {
$Exit:
      this->m_Disconnecting = 0;
      return v5;
    }
$Disconnect:
    FxInterrupt::DisconnectInternal(this);
    v9 = this->m_WakeInterruptMachine;
    if ( v9 )
    {
      if ( v9->m_ActiveForWake )
        v9->m_ActiveForWake = 0;
    }
    this->m_Connected = 0;
    this->m_Active = 0;
    goto $Exit;
  }
  m_WakeInterruptMachine->m_ActiveForWake = 1;
  return 0LL;
}
