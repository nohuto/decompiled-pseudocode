/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x140075758
 * Callers:
 *     PopSetWatchdog @ 0x1400754B0 (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x140280110 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1402801A0 (PopWatchdogWorker.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
