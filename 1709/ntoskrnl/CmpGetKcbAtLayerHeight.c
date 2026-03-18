/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x140481B64
 * Callers:
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 *     CmpLockKcbStackExclusive @ 0x140472C1C (CmpLockKcbStackExclusive.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpIsKeyStackSymlink @ 0x14047B64C (CmpIsKeyStackSymlink.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpConstructNameFromKeyNodes @ 0x14047F860 (CmpConstructNameFromKeyNodes.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140482B3C (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpDoWritethroughReparse @ 0x140581B10 (CmpDoWritethroughReparse.c)
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140698350 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14069AB9C (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14069B424 (CmpKeyEnumStackVerifyResumeContext.c)
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
