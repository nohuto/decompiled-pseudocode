/*
 * XREFs of CmpRecordParseFailure @ 0x140444E0C
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     CmpCreateHiveRootCell @ 0x1405D06F4 (CmpCreateHiveRootCell.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  unsigned __int8 v3; // al

  if ( a1 )
  {
    v3 = *(_BYTE *)(a1 + 186);
    if ( v3 < 4u )
    {
      *(_DWORD *)(a1 + 4LL * v3 + 188) = a2;
      *(_DWORD *)(a1 + 4LL * (unsigned __int8)(*(_BYTE *)(a1 + 186))++ + 204) = a3;
    }
  }
}
