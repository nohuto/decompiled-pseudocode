/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x140230700
 * Callers:
 *     MiEmptyAccessLogs @ 0x140230750 (MiEmptyAccessLogs.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x140007EDC (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140007F3C (MiQueuePageAccessLog.c)
 */

void __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  _SLIST_ENTRY *v3; // rcx

  if ( qword_140388C40 )
  {
    v3 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_140388C40, 0LL);
    if ( v3 )
    {
      if ( a1 - (unsigned __int64)v3[1].Next > PfKernelGlobals || a2 )
        MiQueuePageAccessLog(v3);
      else
        MiReturnCcAccessLog((signed __int64)v3, 0);
    }
  }
}
