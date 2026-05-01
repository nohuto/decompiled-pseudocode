/*
 * XREFs of ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18001296C
 * Callers:
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000B5D0 (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000BC98 (-Remove@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U-$.c)
 *     ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18000C0B4 (-AddInternal@-$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$InvokeAll@PEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000C4A0 (--$InvokeAll@PEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@-$EventSource@UIG.c)
 *     _lambda_b779afd378c092c5f4a266c8bd9e00ae_::operator() @ 0x18002480C (_lambda_b779afd378c092c5f4a266c8bd9e00ae_--operator().c)
 *     ?GetMRTStateHash@MRTCacheManagerInternal@TileDataLayerItemWrappers@@SA_KXZ @ 0x180025AA0 (-GetMRTStateHash@MRTCacheManagerInternal@TileDataLayerItemWrappers@@SA_KXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180005478 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockExclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a2, a1);
  return a2;
}
