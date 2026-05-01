/*
 * XREFs of ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036964
 * Callers:
 *     ?get_DisplayInfo@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x1800258F0 (-get_DisplayInfo@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDis.c)
 *     ?LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x1800259B0 (-LaunchAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyncOpe.c)
 *     ?get_Category@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCategory@2345@@Z @ 0x180025A90 (-get_Category@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCate.c)
 *     ?get_Properties@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x180025B50 (-get_Properties@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IMapVi.c)
 *     ?SetCategoryAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180025C10 (-SetCategoryAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCat.c)
 *     ?get_LaunchableState@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x180025CD0 (-get_LaunchableState@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameL.c)
 *     ?get_LauncherExecutable@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIStorageFile@Storage@5@@Z @ 0x180025D90 (-get_LauncherExecutable@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU.c)
 *     ?get_LaunchParameters@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180025E50 (-get_LaunchParameters@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHS.c)
 *     ?SetLauncherExecutableFileAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180025F10 (-SetLauncherExecutableFileAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAA.c)
 *     ?SetLauncherExecutableFileWithParamsAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180025FE0 (-SetLauncherExecutableFileWithParamsAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?get_TitleId@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800260B0 (-get_TitleId@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@.c)
 *     ?SetTitleIdAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180026170 (-SetTitleIdAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@.c)
 *     ?get_GameModeConfiguration@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeConfiguration@2345@@Z @ 0x180026240 (-get_GameModeConfiguration@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAP.c)
 *     ?GetTrustLevel@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAW4TrustLevel@@@Z @ 0x180035C00 (-GetTrustLevel@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Mic_ea_180035C00.c)
 *     ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035C80 (-GetRuntimeClassName@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@W_ea_180035C80.c)
 *     ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180035D00 (-GetIids@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft_ea_180035D00.c)
 *     ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x180040860 (-Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFTMCrossProcClientImpl::_GetRemoteIdentity(
        CFTMCrossProcClientImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi

  *a3 = 0LL;
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v6;
}
