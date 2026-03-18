/*
 * XREFs of CmpRecordParseFailure @ 0x14057F118
 * Callers:
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     CmpDoWritethroughReparse @ 0x140581B10 (CmpDoWritethroughReparse.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  unsigned __int8 v3; // al

  if ( a1 )
  {
    v3 = *(_BYTE *)(a1 + 202);
    if ( v3 < 4u )
    {
      *(_DWORD *)(a1 + 4LL * v3 + 204) = a2;
      *(_DWORD *)(a1 + 4LL * (unsigned __int8)(*(_BYTE *)(a1 + 202))++ + 220) = a3;
    }
  }
}
