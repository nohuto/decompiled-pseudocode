/*
 * XREFs of RaidAdapterRequestAddtionalTimerDeferred @ 0x1C001E0E4
 * Callers:
 *     StorpRequestTimer @ 0x1C000C9F4 (StorpRequestTimer.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C000D0E0 (RaidQueueDeferredItem.c)
 */

__int64 __fastcall RaidAdapterRequestAddtionalTimerDeferred(
        union _SLIST_HEADER *a1,
        __int64 a2,
        _SLIST_ENTRY *a3,
        int a4)
{
  PSLIST_ENTRY v8; // rax

  v8 = ExpInterlockedPopEntrySList(a1 + 73);
  if ( v8 )
  {
    LODWORD(v8[1].Next) = 134684674;
    LODWORD(v8[2].Next) = 11;
    *((_QWORD *)&v8[2].Next + 1) = a2;
    v8[3].Next = a3;
    *((_DWORD *)&v8[3].Next + 2) = a4;
    RaidQueueDeferredItem((__int64)&a1[68], v8);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    return 3238002691LL;
  }
}
