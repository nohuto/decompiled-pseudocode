/*
 * XREFs of HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C000F5E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00041F0 (HUBHTX_Get20PortChangeEvent.c)
 */

__int64 __fastcall HUBPSM20_GettingPortChangeEventInSuspended(__int64 a1, __int64 a2)
{
  return HUBHTX_Get20PortChangeEvent(*(_QWORD **)(a1 + 960), a2);
}
