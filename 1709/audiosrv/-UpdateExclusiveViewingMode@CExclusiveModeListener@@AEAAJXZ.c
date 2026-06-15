/*
 * XREFs of ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1800C7488
 * Callers:
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180036448 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXAEBW4ShellState@Holographic@Shell@Internal@.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800C64C0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800C67E0 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x1800C6BDC (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z @ 0x1800C7184 (-SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogExclusiveModeListenerUpdateSessionState@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@HH@Z @ 0x1800C615C (-LogExclusiveModeListenerUpdateSessionState@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_G.c)
 *     ?UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z @ 0x1800C7508 (-UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::UpdateExclusiveViewingMode(CExclusiveModeListener *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 369) )
    return 0LL;
  v2 = *((_DWORD *)this + 44);
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerUpdateSessionState(
    this,
    (const struct _GUID *)((char *)this + 136),
    (const GUID *)*((unsigned __int8 *)this + 368),
    (const GUID *)v2);
  v3 = 0LL;
  if ( v2 == 2 )
    v3 = (unsigned int)(*((_BYTE *)this + 368) != 0) + 1;
  updated = CExclusiveModeListener::UpdateSpatialSessionState(this, v3);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x15C,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
