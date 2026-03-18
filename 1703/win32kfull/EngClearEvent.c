/*
 * XREFs of EngClearEvent @ 0x1C02565E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngClearEvent(PEVENT pEvent)
{
  KeClearEvent((PRKEVENT)pEvent->pKEvent);
}
