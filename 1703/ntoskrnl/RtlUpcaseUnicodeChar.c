/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x140502520
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14008C120 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x14016BA20 (towupper.c)
 *     ObpCreateSymbolicLinkName @ 0x14044E9DC (ObpCreateSymbolicLinkName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140490670 (CmpFindNameInListCellWithStatus.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     CmpCompareCompressedName @ 0x1404D3030 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1404D3620 (CmpCompareUnicodeString.c)
 *     ObpLookupDirectoryEntryEx @ 0x1404F72C0 (ObpLookupDirectoryEntryEx.c)
 *     RtlpHashStringToAtom @ 0x1404FA780 (RtlpHashStringToAtom.c)
 *     CmpComputeComponentHashes @ 0x140500780 (CmpComputeComponentHashes.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     CmpCompareInIndex @ 0x140501AE0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140501DA0 (CmpFindSubKeyInLeafWithStatus.c)
 *     PfpRpFileKeyUpdate @ 0x140502050 (PfpRpFileKeyUpdate.c)
 *     CmpGetNameControlBlock @ 0x140502E40 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpCheckRegistry2 @ 0x140505E80 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpHashCompressedComponent @ 0x140572750 (CmpHashCompressedComponent.c)
 *     AslStringPatternMatchW @ 0x1405BB08C (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x1405BBF44 (AslEnvVarQuery.c)
 *     CmpCompareTwoCompressedNames @ 0x14066D1BC (CmpCompareTwoCompressedNames.c)
 *     VrpAllocateDiffHiveEntry @ 0x14067D8C8 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14067DC08 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     SdbpGetProcessHistory @ 0x14072CF3C (SdbpGetProcessHistory.c)
 *     AslStringUpper @ 0x14072E6F4 (AslStringUpper.c)
 *     VfUtilPrintCheckinString @ 0x14076533C (VfUtilPrintCheckinString.c)
 * Callees:
 *     <none>
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter <= 0x7Au )
    return SourceCharacter - 32;
  return SourceCharacter
       + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (SourceCharacter & 0xF)
                                                                 + 2
                                                                 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((SourceCharacter >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)SourceCharacter >> 8)]]];
}
