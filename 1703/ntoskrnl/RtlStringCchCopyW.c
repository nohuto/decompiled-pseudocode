/*
 * XREFs of RtlStringCchCopyW @ 0x1400815D0
 * Callers:
 *     PopLogNotifyDevice @ 0x14022F85C (PopLogNotifyDevice.c)
 *     AslStringDuplicate @ 0x1404B523C (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x1404B5D20 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x1404B603C (AslPathSplit.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404DF81C (_CmGetDeviceContainerIdFromBase.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14056F120 (PnpNotifyUserModeDeviceRemoval.c)
 *     TtmNotifyDeviceArrival @ 0x140584B80 (TtmNotifyDeviceArrival.c)
 *     WmipMangleInstanceName @ 0x1405A0AD8 (WmipMangleInstanceName.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405AAA10 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405AAE70 (_CmEnumSubkeyCallback.c)
 *     AslpEnvResolveVars @ 0x1405BBB80 (AslpEnvResolveVars.c)
 *     PipMakeGloballyUniqueId @ 0x1405C146C (PipMakeGloballyUniqueId.c)
 *     PpmRegisterProfiles @ 0x1405CC9BC (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406829D0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406C7904 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmpPublishDeviceEvent @ 0x1406D7A34 (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14072B80C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbGetAppPatchDirEx @ 0x14072D598 (SdbGetAppPatchDirEx.c)
 *     AslpFileQueryVersionString @ 0x140731670 (AslpFileQueryVersionString.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407439F0 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x1407FA794 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( !cchDest )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( !cchDest )
      goto LABEL_12;
    v4 = 2147483646 - cchDest;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + cchDest) )
        break;
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_12:
      --pszDest;
      v3 = -2147483643;
    }
  }
  *pszDest = 0;
  return v3;
}
