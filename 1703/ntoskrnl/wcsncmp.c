/*
 * XREFs of wcsncmp @ 0x14016BC70
 * Callers:
 *     EtwpApplyPredicate @ 0x140259244 (EtwpApplyPredicate.c)
 *     LdrpCompareResourceNames_U @ 0x14042ADC4 (LdrpCompareResourceNames_U.c)
 *     LdrpResCompareResourceNames @ 0x1404A8828 (LdrpResCompareResourceNames.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14053DF48 (PfSnFindPrefetchVolumeInfoInList.c)
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 *     WmipFindISinGEbyName @ 0x1405A0BD0 (WmipFindISinGEbyName.c)
 *     AslPathClean @ 0x1405BC6D4 (AslPathClean.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406C7904 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1406C8DF4 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1406C9854 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1406C9AE4 (PopWakeSourceIsParent.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
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
