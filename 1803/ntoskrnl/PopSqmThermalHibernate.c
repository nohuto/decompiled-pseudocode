/*
 * XREFs of PopSqmThermalHibernate @ 0x14077019C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140180F10 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopSqmThermalCriticalEvent @ 0x14076FFA8 (PopSqmThermalCriticalEvent.c)
 */

char __fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 188), 0);
}
