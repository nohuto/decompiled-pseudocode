/*
 * XREFs of ?SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z @ 0x1800F983C
 * Callers:
 *     ?SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800F9AC0 (-SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogWnfApplicationInfoUpdate@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1800F87EC (-LogWnfApplicationInfoUpdate@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1800F9AE8 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

void __fastcall CExclusiveModeListener::SetExclusiveModeActive(
        CExclusiveModeListener *this,
        unsigned __int8 a2,
        const GUID *a3,
        const GUID *a4)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != *((_BYTE *)this + 360) )
  {
    CSpatialAudioResourceManagerTraceLogger::LogWnfApplicationInfoUpdate(this, a2, a3, a4);
    *((_BYTE *)this + 360) = a2;
    updated = CExclusiveModeListener::UpdateExclusiveViewingMode(this);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        451LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)updated);
  }
}
