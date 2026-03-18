/*
 * XREFs of ?PowerNotifyingD0EntryToWakeInterrupts@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009E238 (-SendEventToAllWakeInterrupts@FxPkgPnp@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerNotifyingD0EntryToWakeInterrupts(FxPkgPnp *This)
{
  if ( !This->m_WakeInterruptCount )
    return 821LL;
  FxPkgPnp::SendEventToAllWakeInterrupts(This, WakeInterruptEventEnteringD0);
  return 867LL;
}
