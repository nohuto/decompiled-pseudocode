/*
 * XREFs of HUBPSM20_CheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect @ 0x1C000F3A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CheckAndSelectIfAny20PortChangeSet @ 0x1C000457C (HUBHTX_CheckAndSelectIfAny20PortChangeSet.c)
 */

__int64 __fastcall HUBPSM20_CheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect(__int64 a1)
{
  return HUBHTX_CheckAndSelectIfAny20PortChangeSet(*(_QWORD *)(a1 + 960));
}
