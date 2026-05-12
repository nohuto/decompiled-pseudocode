/*
 * XREFs of StorPortPause @ 0x1C0034070
 * Callers:
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x1C00331F0 (RaidpLinkDown.c)
 *     StorPortPauseVrfy @ 0x1C006B6B0 (StorPortPauseVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0001F0C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     RaidResumeAdapterQueue @ 0x1C00106A4 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0010E08 (RaidPauseAdapterQueue.c)
 *     McTemplateK0pqq @ 0x1C002B950 (McTemplateK0pqq.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C0056210 & 0x200) != 0 )
    DbgLogRequest(v4, 14, retaddr, **(_QWORD **)(a1 - 16), a2, 0LL, 0LL);
  v5 = 255LL;
  if ( v4 )
    v5 = *(unsigned int *)(v4 + 56);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 4) != 0 )
  {
    LODWORD(v9) = a2;
    LODWORD(v8) = v5;
    McTemplateK0pqq(v5, &EventPortPause, 0LL, a1, v8, v9);
  }
  if ( !v4 )
    return 0;
  ++*(_DWORD *)(v4 + 5444);
  *(_DWORD *)(v4 + 1456) = a2;
  _InterlockedExchange((volatile __int32 *)(v4 + 1460), 1);
  RaidPauseAdapterQueue(v4);
  v7 = v4 + 1296;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1312), 134684676, 134684677) != 134684677 )
    v7 = 0LL;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 32) = 3;
    RaidQueueDeferredItem((char *)(v4 + 1088), (struct _SLIST_ENTRY *)v7);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0056210 & 0x800) != 0 )
      DbgLogRequest(v4, 22, retaddr, 285LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)RaidResumeAdapterQueue(v4) )
      KeInsertQueueDpc((PRKDPC)(v4 + 1792), 0LL, 0LL);
  }
  return 1;
}
