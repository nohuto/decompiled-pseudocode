/*
 * XREFs of StorPortPause @ 0x1C0030B10
 * Callers:
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x1C002F638 (RaidpLinkDown.c)
 *     StorPortPauseVrfy @ 0x1C006A6A0 (StorPortPauseVrfy.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0003B44 (DbgLogRequest.c)
 *     RaidQueueDeferredItem @ 0x1C0003D6C (RaidQueueDeferredItem.c)
 *     RaidResumeAdapterQueue @ 0x1C000EFB0 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C000F520 (RaidPauseAdapterQueue.c)
 *     McTemplateK0pqq @ 0x1C0024104 (McTemplateK0pqq.c)
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
