/*
 * XREFs of ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BC64
 * Callers:
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x18004BB0C (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18004BBC4 (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180076684 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x180076A28 (--$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  struct CBitmapRealization *v2; // rbx
  unsigned int v5; // ebp
  int v6; // eax
  struct CBitmapRealization *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  v5 = 0;
  if ( *((_QWORD *)this + 7) != *((_QWORD *)a2 + 2) )
  {
    CCompositionSurfaceInfo::CBindInfo::Reset((CCompositionSurfaceInfo *)((char *)this + 48));
    CCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL, 1);
  }
  if ( *((_QWORD *)a2 + 2) )
  {
    v6 = CCompositionSurfaceInfo::EnsureRealization(this, a2, &v8);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x172u);
      v2 = v8;
    }
    else
    {
      *((_DWORD *)this + 18) = *((_DWORD *)a2 + 7);
      *((_DWORD *)this + 19) = *((_DWORD *)a2 + 48);
      v2 = v8;
      CCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        (__int64 (__fastcall ***)(CBitmapRealization *, const struct _GUID *, void **))v8,
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 72),
        *((HRGN *)a2 + 4),
        (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 40),
        0);
    }
  }
  ReleaseInterfaceNoNULL<CBitmapRealization>(v2);
  return v5;
}
