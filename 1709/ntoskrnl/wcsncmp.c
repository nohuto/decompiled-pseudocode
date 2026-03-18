/*
 * XREFs of wcsncmp @ 0x140160550
 * Callers:
 *     EtwpApplyPredicate @ 0x140282E20 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140442AE4 (PfSnFindPrefetchVolumeInfoInList.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1404490D4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     LdrpCompareResourceNames_U @ 0x1404DA6A0 (LdrpCompareResourceNames_U.c)
 *     LdrpResCompareResourceNames @ 0x140534094 (LdrpResCompareResourceNames.c)
 *     AslPathClean @ 0x1405417F0 (AslPathClean.c)
 *     WmipFindISinGEbyName @ 0x140545B38 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x1405D2CF4 (pIoQueryBusDescription.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406F8324 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1406F987C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1406FA890 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1406FAB20 (PopWakeSourceIsParent.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
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
