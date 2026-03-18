/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x1400B1CA8
 * Callers:
 *     PopSetWatchdog @ 0x1400B1A00 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x14024A1A0 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x14024A230 (PopWatchdogWorker.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
