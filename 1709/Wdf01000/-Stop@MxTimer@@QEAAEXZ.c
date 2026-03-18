/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x1C000E098
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001C50 (imp_WdfTimerStop.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C00053F4 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C000E030 (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00290D0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C002CB30 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0064980 (-Stop@FxTimer@@QEAAEE@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall MxTimer::Stop(MxTimer *this)
{
  if ( this->m_Timer.m_IsExtTimer )
    return ExCancelTimer(this->m_Timer.m_KernelExTimer, 0LL);
  else
    return KeCancelTimer(&this->m_Timer.KernelTimer);
}
