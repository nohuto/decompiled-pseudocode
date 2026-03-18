/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1404A8BB8
 * Callers:
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 *     CmpLockKcbStackExclusive @ 0x14049A938 (CmpLockKcbStackExclusive.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpIsKeyStackSymlink @ 0x1404A5108 (CmpIsKeyStackSymlink.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404A81C4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpReportNotifyForKcbStack @ 0x1404E25D4 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1404E2660 (CmpReportNotifyHelper.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpDoWritethroughReparse @ 0x1405529F0 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1406EF400 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1406EFBBC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1406F09E4 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1406F0CB4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1406FF780 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140700010 (CmpKeyEnumStackVerifyResumeContext.c)
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
