/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0021FD0
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0039F80 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C002C750 (-SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxPkgPdo::DispatchDeviceSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxPowerEvent v5; // edx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a2; // rcx
  FxPowerPolicyOwnerSettings *v9; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( !m_Owner->m_RequestedPowerUpIrp && !m_Owner->m_RequestedPowerDownIrp )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqq(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        WPP_PdoPower_cpp_Traceguids,
        Irp->m_Irp,
        _a2,
        m_DeviceBase->m_DeviceObject.m_DeviceObject);
    }
    v9 = this->m_PowerPolicyMachine.m_Owner;
    if ( v9->m_RequestedPowerUpIrp )
      v9->m_RequestedPowerUpIrp = 0;
    else
      v9->m_RequestedPowerDownIrp = 0;
  }
  FxPkgPnp::SetPendingDevicePowerIrp(this, Irp);
  v5 = PowerD0;
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    v5 = PowerDx;
  FxPkgPnp::PowerProcessEvent(this, v5, 0);
  return 259LL;
}
