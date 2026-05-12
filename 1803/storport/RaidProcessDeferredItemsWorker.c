/*
 * XREFs of RaidProcessDeferredItemsWorker @ 0x1C00036C0
 * Callers:
 *     RaidDeferredQueueDpcRoutine @ 0x1C0003640 (RaidDeferredQueueDpcRoutine.c)
 *     RaUnitStartIo @ 0x1C0009A00 (RaUnitStartIo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidProcessDeferredItemsWorker(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY v4; // rax
  _SLIST_ENTRY *v5; // rbx
  struct _SLIST_ENTRY *Next; // r8
  _SLIST_ENTRY *v7; // rdx

  v4 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 96));
  v5 = 0LL;
  if ( v4 )
  {
    do
    {
      Next = v4->Next;
      v4->Next = v5;
      v5 = v4;
      v4 = Next;
    }
    while ( Next );
  }
  while ( 1 )
  {
    v7 = v5;
    if ( !v5 )
      break;
    v5 = v5->Next;
    (*(void (__fastcall **)(__int64, _SLIST_ENTRY *))(a1 + 112))(a2, v7);
  }
  return 0LL;
}
