/*
 * XREFs of RtlStringCchCopyW @ 0x1400DF0FC
 * Callers:
 *     PopLogNotifyDevice @ 0x140244000 (PopLogNotifyDevice.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x14028CB70 (SdbpGetPathAppPatchPreRS3.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1404483F0 (DrvDbGetObjectSubKeyCallback.c)
 *     AslpEnvResolveVars @ 0x140542880 (AslpEnvResolveVars.c)
 *     AslPathSplit @ 0x1405450C4 (AslPathSplit.c)
 *     WmipMangleInstanceName @ 0x140545A40 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x140547940 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x140547F20 (SdbpCreateSearchDBContext.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140550CA0 (_CmGetDeviceContainerIdFromBase.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x14055D9DC (PnpNotifyUserModeDeviceRemoval.c)
 *     PipMakeGloballyUniqueId @ 0x14058CC98 (PipMakeGloballyUniqueId.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405D3230 (_CmEnumSubkeyCallback.c)
 *     PpmRegisterProfiles @ 0x1405E0DB4 (PpmRegisterProfiles.c)
 *     TtmNotifyDeviceArrival @ 0x1405E9F20 (TtmNotifyDeviceArrival.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406F8324 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmpPublishDeviceEvent @ 0x14070DDBC (TtmpPublishDeviceEvent.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14076E53C (SdbpCheckMatchingRegistryEntry.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140772FA8 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140773204 (AslEnvGetSystem32DirPathBuf.c)
 *     AslpFileQueryVersionString @ 0x1407757E4 (AslpFileQueryVersionString.c)
 *     IopStoreSystemPartitionInformation @ 0x140844774 (IopStoreSystemPartitionInformation.c)
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
