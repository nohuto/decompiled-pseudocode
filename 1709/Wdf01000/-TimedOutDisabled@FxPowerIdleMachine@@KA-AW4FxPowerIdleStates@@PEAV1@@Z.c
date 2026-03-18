/*
 * XREFs of ?TimedOutDisabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C000DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C000E060 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::TimedOutDisabled(FxPowerIdleMachine *This)
{
  FxPowerIdleMachine::SendD0Notification(This);
  This->m_Flags &= ~0x40u;
  return 5LL;
}
