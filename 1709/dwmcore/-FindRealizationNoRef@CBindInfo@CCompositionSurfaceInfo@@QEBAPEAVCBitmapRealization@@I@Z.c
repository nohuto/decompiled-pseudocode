/*
 * XREFs of ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@I@Z @ 0x180076560
 * Callers:
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18004BBC4 (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BDE0 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     <none>
 */

struct CBitmapRealization *__fastcall CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
        CCompositionSurfaceInfo::CBindInfo *this,
        int a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r11

  v2 = *((_DWORD *)this + 14);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 4);
    while ( *(_DWORD *)(*(_QWORD *)(v5 + 8LL * v4) + 276LL) != a2 )
    {
      if ( ++v4 >= v2 )
        return (struct CBitmapRealization *)v3;
    }
    return *(struct CBitmapRealization **)(v5 + 8LL * v4);
  }
  return (struct CBitmapRealization *)v3;
}
