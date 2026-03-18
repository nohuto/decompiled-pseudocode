/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x140500634
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401E0B20 (CmpCreateTombstone.c)
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     CmpIsKeyStackSymlink @ 0x14048FCAC (CmpIsKeyStackSymlink.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpLockKcbStackExclusive @ 0x1404CFFD8 (CmpLockKcbStackExclusive.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404FCEA0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140661CD0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140662EF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14066DE58 (CmpStartKeyNodeStackFromKcbStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetKcbAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (a2 - 2));
  else
    return *(_QWORD *)(a1 + 8LL * a2 + 8);
}
