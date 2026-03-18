/*
 * XREFs of ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0035750
 * Callers:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C000F7DC (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerD0StartingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00355E0 (-PowerD0StartingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C00A1EEC (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C000EEC4 (WPP_IFR_SF_qqqd.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x1C00359CC (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     WPP_IFR_SF_qDDDDsdxsd @ 0x1C00A2224 (WPP_IFR_SF_qDDDDsdxsd.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C00A24DC (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 */

__int64 __fastcall FxInterrupt::Connect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int id; // edi
  struct _KINTERRUPT **p_m_Interrupt; // rsi
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax
  const char *_a10; // r11
  const char *flags; // r9
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v12; // rbx
  unsigned __int16 v13; // cx
  const void *v14; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  FxInterrupt *SynchronizeContext; // [rsp+80h] [rbp-18h] BYREF
  int _a4; // [rsp+88h] [rbp-10h]

  m_Globals = this->m_Globals;
  if ( (NotifyFlags & 8) == 0
    || (m_WakeInterruptMachine = this->m_WakeInterruptMachine) == 0LL
    || !m_WakeInterruptMachine->m_ActiveForWake )
  {
    if ( this->m_UseSoftDisconnect
      && FxLibraryGlobals.IoReportInterruptInactive
      && this->m_Interrupt
      && this->m_Connected
      && (NotifyFlags & 8) != 0 )
    {
      FxInterrupt::ReportActive(this, 1u);
    }
    else
    {
      if ( this->m_ForceDisconnected || !this->m_InterruptInfo.Vector )
        return 0LL;
      if ( (NotifyFlags & 1) == 0 )
      {
        id = FxInterrupt::ConnectInternal(this);
        if ( id < 0 )
        {
          this->m_Interrupt = 0LL;
          _a10 = "True";
          flags = "True";
          if ( !this->m_FloatingSave )
            flags = "False";
          if ( this->m_InterruptInfo.ShareDisposition != 3 )
            _a10 = "False";
          WPP_IFR_SF_qDDDDsdxsd(
            m_Globals,
            this->m_SynchronizeIrql,
            this->m_InterruptInfo.Irql,
            (unsigned __int16)flags,
            traceGuid,
            this->m_SpinLock,
            this->m_InterruptInfo.Vector,
            this->m_InterruptInfo.Irql,
            this->m_SynchronizeIrql,
            this->m_InterruptInfo.Mode,
            _a10,
            this->m_InterruptInfo.Group,
            this->m_InterruptInfo.TargetProcessorSet,
            flags,
            id);
          return (unsigned int)id;
        }
        this->m_Connected = 1;
        this->m_Active = 1;
      }
    }
    id = 0;
    SynchronizeContext = this;
    _a4 = 0;
    if ( this->m_EvtInterruptEnable
      && (p_m_Interrupt = &this->m_Interrupt,
          KeSynchronizeExecution(
            this->m_Interrupt,
            (PKSYNCHRONIZE_ROUTINE)FxInterrupt::_InterruptEnableThunk,
            &SynchronizeContext),
          id = _a4,
          _a4 < 0) )
    {
      m_DeviceBase = this->m_DeviceBase;
      m_ObjectSize = this->m_ObjectSize;
      v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v13 = m_DeviceBase->m_ObjectSize;
      if ( !m_ObjectSize )
        v12 = 0LL;
      v14 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v13 )
        v14 = 0LL;
      WPP_IFR_SF_qqqd(m_Globals, 2u, 0xCu, 0x18u, WPP_InterruptObject_cpp_Traceguids, v14, v12, *p_m_Interrupt, _a4);
    }
    else
    {
      this->m_Enabled = 1;
    }
    return (unsigned int)id;
  }
  m_WakeInterruptMachine->m_ActiveForWake = 0;
  return 0LL;
}
