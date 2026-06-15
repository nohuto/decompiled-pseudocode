/*
 * XREFs of ?SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z @ 0x1800F983C (-SetExclusiveModeActive@CExclusiveModeListener@@AEAAX_N@Z.c)
 */

__int64 __fastcall CExclusiveModeListener::SpatialApplicationInfoUpdateCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        const GUID *a3,
        CExclusiveModeListener *a4,
        _DWORD *a5,
        unsigned int a6)
{
  if ( a6 )
    CExclusiveModeListener::SetExclusiveModeActive(a4, a5[1] != 0, a3, (const GUID *)a4);
  return 0LL;
}
