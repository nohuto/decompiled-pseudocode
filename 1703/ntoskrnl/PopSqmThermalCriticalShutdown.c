/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1406D6AC8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140168960 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     <none>
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 140), 1);
}
