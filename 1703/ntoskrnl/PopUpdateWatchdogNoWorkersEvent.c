/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x140070050
 * Callers:
 *     PopSetWatchdog @ 0x14006FDA8 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140235050 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1402350E0 (PopWatchdogWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
