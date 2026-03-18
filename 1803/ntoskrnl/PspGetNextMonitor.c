/*
 * XREFs of PspGetNextMonitor @ 0x14077D4E4
 * Callers:
 *     PspNotifyServerSiloCreation @ 0x14077D614 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14077D71C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PspGetNextMonitor(__int64 **a1)
{
  __int64 *result; // rax

  result = (__int64 *)PspSiloMonitorList;
  if ( a1 )
    result = *a1;
  if ( result == &PspSiloMonitorList )
    return 0LL;
  return result;
}
