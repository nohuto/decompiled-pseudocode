/*
 * XREFs of wcsncmp @ 0x14018A6F0
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1401A6D4C (LdrpCompareResourceNamesWithValidation.c)
 *     EtwpApplyPredicate @ 0x1402B6D34 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1404A2224 (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x14056D664 (LdrpResCompareResourceNames.c)
 *     WmipFindISinGEbyName @ 0x1405FF918 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 *     AslPathClean @ 0x14061F85C (AslPathClean.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14075F7F0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x140760D3C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x140762264 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1407624F4 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407ABDF4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x1407D9D08 (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x1407DB938 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407F2A34 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
