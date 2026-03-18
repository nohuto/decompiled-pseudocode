/*
 * XREFs of ?TimedOutIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C009F210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::TimedOutIoIncrement(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp *Next; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx

  Next = (FxPkgPnp *)This[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  if ( (This->m_Flags & 0x40) != 0 )
  {
    m_DeviceBase = Next->m_DeviceBase;
    m_Globals = Next->m_Globals;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 4u, 0xCu, 0xAu, WPP_PowerIdleStateMachine_cpp_Traceguids, _a1);
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent(Next, PwrPolIoPresent, a3);
    This->m_Flags |= 0x40u;
  }
  return 12LL;
}
