/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x14016A630
 * Callers:
 *     MiEmptyAccessLogs @ 0x14016A490 (MiEmptyAccessLogs.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x14007A104 (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x14007A164 (MiQueuePageAccessLog.c)
 */

void __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  _SLIST_ENTRY *v3; // rcx

  if ( qword_1403CBF00 )
  {
    v3 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_1403CBF00, 0LL);
    if ( v3 )
    {
      if ( a1 - (unsigned __int64)v3[1].Next > PfKernelGlobals || a2 )
        MiQueuePageAccessLog(v3);
      else
        MiReturnCcAccessLog((signed __int64)v3, 0);
    }
  }
}
