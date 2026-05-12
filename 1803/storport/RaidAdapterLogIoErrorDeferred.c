/*
 * XREFs of RaidAdapterLogIoErrorDeferred @ 0x1C00268E0
 * Callers:
 *     StorPortLogError @ 0x1C0030A80 (StorPortLogError.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C0003D6C (RaidQueueDeferredItem.c)
 */

char __fastcall RaidAdapterLogIoErrorDeferred(__int64 a1, char a2, char a3, char a4, int a5, int a6)
{
  PSLIST_ENTRY v10; // rax

  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1168));
  if ( v10 )
  {
    LODWORD(v10[1].Next) = 134684674;
    LODWORD(v10[3].Next) = a5;
    HIDWORD(v10[3].Next) = a6;
    LODWORD(v10[2].Next) = 2;
    BYTE4(v10[2].Next) = a2;
    BYTE5(v10[2].Next) = a3;
    BYTE6(v10[2].Next) = a4;
    LOBYTE(v10) = RaidQueueDeferredItem((char *)(a1 + 1088), v10);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
  return (char)v10;
}
