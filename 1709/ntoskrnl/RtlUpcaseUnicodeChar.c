/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1404817B0
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140016F80 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x140160300 (towupper.c)
 *     PfpRpFileKeyUpdate @ 0x140456360 (PfpRpFileKeyUpdate.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpFindNameInListCellWithStatus @ 0x140479530 (CmpFindNameInListCellWithStatus.c)
 *     CmpCheckLeaf @ 0x14047FD10 (CmpCheckLeaf.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpGetNameControlBlock @ 0x140480E00 (CmpGetNameControlBlock.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404814F0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpCompareInIndex @ 0x140481810 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x140481960 (CmpDoCompareKeyName.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     RtlpHashStringToAtom @ 0x1404D2DE0 (RtlpHashStringToAtom.c)
 *     AslStringPatternMatchW @ 0x1404F5024 (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x140542624 (AslEnvVarQuery.c)
 *     CmpHashCompressedComponent @ 0x140562B74 (CmpHashCompressedComponent.c)
 *     CmpComputeComponentHashes @ 0x140564870 (CmpComputeComponentHashes.c)
 *     CmpCheckLexicographicalOrder @ 0x140564F40 (CmpCheckLexicographicalOrder.c)
 *     CmpCompareCompressedName @ 0x140565134 (CmpCompareCompressedName.c)
 *     ObpLookupDirectoryEntryEx @ 0x14056EC10 (ObpLookupDirectoryEntryEx.c)
 *     CmpCompareUnicodeString @ 0x140581BD0 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x14058C2D8 (ObpCreateSymbolicLinkName.c)
 *     CmpCompareTwoCompressedNames @ 0x140697834 (CmpCompareTwoCompressedNames.c)
 *     VrpAllocateDiffHiveEntry @ 0x1406A895C (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1406A8C94 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     SdbpGetProcessHistory @ 0x140770114 (SdbpGetProcessHistory.c)
 *     VfUtilPrintCheckinString @ 0x1407A6F0C (VfUtilPrintCheckinString.c)
 * Callees:
 *     <none>
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter > 0x7Au )
    return SourceCharacter
         + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (SourceCharacter & 0xF)
                                                                   + 2
                                                                   * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((SourceCharacter >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)SourceCharacter >> 8)]]];
  return SourceCharacter - 32;
}
