/*
 * XREFs of PspGetNextMonitor @ 0x1406E31B4
 * Callers:
 *     PspNotifyServerSiloCreation @ 0x1406E32E0 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406E33E8 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PspGetNextMonitor(__int64 **a1)
{
  __int64 *result; // rax
  __int64 *v2; // rcx

  result = 0LL;
  if ( a1 )
    v2 = *a1;
  else
    v2 = (__int64 *)PspSiloMonitorList;
  if ( v2 != &PspSiloMonitorList )
    return v2;
  return result;
}
