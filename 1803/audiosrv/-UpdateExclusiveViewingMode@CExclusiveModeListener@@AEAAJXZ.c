/*
 * XREFs of ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1800F9AE8
 * Callers:
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800F89C0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800F8C40 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x1800F8F58 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Win.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x1800F9204 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z @ 0x1800F983C (-SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogExclusiveModeListenerUpdateSessionState@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@HH@Z @ 0x1800F865C (-LogExclusiveModeListenerUpdateSessionState@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_G.c)
 *     ?UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z @ 0x1800F9B68 (-UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::UpdateExclusiveViewingMode(CExclusiveModeListener *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 361) )
    return 0LL;
  v2 = *((_DWORD *)this + 42);
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerUpdateSessionState(
    this,
    (const struct _GUID *)this + 8,
    (const GUID *)*((unsigned __int8 *)this + 360),
    (const GUID *)v2);
  v3 = 0LL;
  if ( v2 == 2 )
    v3 = (unsigned int)(*((_BYTE *)this + 360) != 0) + 1;
  updated = CExclusiveModeListener::UpdateSpatialSessionState(this, v3);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x161,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
