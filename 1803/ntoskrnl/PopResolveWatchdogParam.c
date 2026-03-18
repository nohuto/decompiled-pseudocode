/*
 * XREFs of PopResolveWatchdogParam @ 0x1402800F8
 * Callers:
 *     PopWatchdogWorker @ 0x1402801A0 (PopWatchdogWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResolveWatchdogParam(__int64 a1, char a2)
{
  if ( a2 )
    return *(_QWORD *)a1;
  else
    return a1;
}
