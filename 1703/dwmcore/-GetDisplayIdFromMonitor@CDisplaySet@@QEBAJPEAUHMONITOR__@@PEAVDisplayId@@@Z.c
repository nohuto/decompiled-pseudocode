/*
 * XREFs of ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18013329C
 * Callers:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180036CE4 (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800D1AF0 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x18012D42C (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERCONTENT_CREATE@@@Z @ 0x18012EA24 (-ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERC.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180148658 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B8124 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayIdFromMonitor(CDisplaySet *this, HMONITOR a2, struct DisplayId *a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rbx
  _DWORD *DisplayId; // rax
  _DWORD *v9; // r11
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = -2147024809;
  if ( (_DWORD)a2 == -6 )
  {
    *(_DWORD *)a3 = DisplayId::Hmd;
    return 0;
  }
  v5 = *((_DWORD *)this + 18);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 6);
    while ( *(HMONITOR *)(*(_QWORD *)(v7 + 8 * v6) + 16LL) != a2 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v5 )
        return v4;
    }
    DisplayId = CDisplay::GetDisplayId(*(_QWORD *)(v7 + 8LL * (unsigned int)v6), &v11);
    *v9 = *DisplayId;
    return 0;
  }
  return v4;
}
