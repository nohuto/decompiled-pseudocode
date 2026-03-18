/*
 * XREFs of ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18017CD64
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x18006A400 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180076684 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x180144378 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1801448F0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800BE3B8 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     ?UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x1801A84BC (-UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::UnpinResources(CCompositionSurfaceInfo::CBindInfo *this)
{
  unsigned int v1; // edi
  void **v3; // r14
  __int64 *v4; // r15
  signed int v5; // eax
  __int64 i; // rsi

  v1 = 0;
  if ( *((_BYTE *)this + 172) )
  {
    v3 = (void **)((char *)this + 208);
    v4 = (__int64 *)((char *)this + 200);
    v5 = CD3DDeviceLevel1::UnpinResources(
           *((CD3DDeviceLevel1 **)this + 25),
           *((struct IDXGIResource ***)this + 26),
           *((_DWORD *)this + 54));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v5, 0x505u);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 54); i = (unsigned int)(i + 1) )
      ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)*v3 + i));
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(v3);
    *((_DWORD *)this + 54) = 0;
    *((_BYTE *)this + 172) = 0;
    ReleaseInterface<CD3DDeviceLevel1>(v4);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRECTFLIP_UNPINEVENT,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
  }
  return v1;
}
