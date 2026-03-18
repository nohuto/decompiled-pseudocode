/*
 * XREFs of CmpRecordParseFailure @ 0x14056D188
 * Callers:
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     CmpDoWritethroughReparse @ 0x1405529F0 (CmpDoWritethroughReparse.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpCreateHiveRootCell @ 0x14064F024 (CmpCreateHiveRootCell.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  unsigned __int8 v3; // al

  if ( a1 )
  {
    v3 = *(_BYTE *)(a1 + 258);
    if ( v3 < 4u )
    {
      *(_DWORD *)(a1 + 4LL * v3 + 260) = a2;
      *(_DWORD *)(a1 + 4LL * (unsigned __int8)(*(_BYTE *)(a1 + 258))++ + 276) = a3;
    }
  }
}
