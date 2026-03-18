/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1404A9730
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x140008CC0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x14018A4A0 (towupper.c)
 *     CmpFindNameInListCellWithStatus @ 0x1404A3990 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x1404A8E10 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404A8F60 (CmpFindSubKeyInLeafWithStatus.c)
 *     PfpRpFileKeyUpdate @ 0x1404A9210 (PfpRpFileKeyUpdate.c)
 *     CmpDoCompareKeyName @ 0x1404A9790 (CmpDoCompareKeyName.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpGetNameControlBlock @ 0x1404AB750 (CmpGetNameControlBlock.c)
 *     RtlpHashStringToAtom @ 0x1404B6290 (RtlpHashStringToAtom.c)
 *     CmpComputeComponentHashes @ 0x140513000 (CmpComputeComponentHashes.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpCheckLeaf @ 0x1405500E0 (CmpCheckLeaf.c)
 *     CmpCheckLexicographicalOrder @ 0x1405504B0 (CmpCheckLexicographicalOrder.c)
 *     CmpCompareCompressedName @ 0x1405506AC (CmpCompareCompressedName.c)
 *     ObpLookupDirectoryEntryEx @ 0x140558350 (ObpLookupDirectoryEntryEx.c)
 *     CmpCompareUnicodeString @ 0x1405706A4 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x14057B354 (ObpCreateSymbolicLinkName.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpHashCompressedComponent @ 0x1405E227C (CmpHashCompressedComponent.c)
 *     AslStringPatternMatchW @ 0x14061E218 (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x14061F0D4 (AslEnvVarQuery.c)
 *     CmpCompareTwoCompressedNames @ 0x1406FA938 (CmpCompareTwoCompressedNames.c)
 *     VrpAllocateDiffHiveEntry @ 0x14070CFF4 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14070D34C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     SdbpGetProcessHistory @ 0x1407D73D8 (SdbpGetProcessHistory.c)
 *     VfUtilPrintCheckinString @ 0x14081408C (VfUtilPrintCheckinString.c)
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
