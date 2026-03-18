/*
 * XREFs of ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180149748
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180067654 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C0664 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x18017CC20 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 */

__int64 __fastcall CDirectFlipInfo::TransferAdvancedDirectFlipState(
        CDirectFlipInfo *this,
        const struct CDirectFlipInfo *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 *v5; // rcx
  signed int v6; // eax
  signed int v7; // eax
  struct IRenderTargetDisplay *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a2 + 15);
  v3 = 0;
  v9 = 0LL;
  *((_DWORD *)this + 15) = v2;
  v5 = (__int64 *)((char *)this + 48);
  if ( v2 < 2 )
  {
    ReleaseInterface<CRemoteApplicationWindow>(v5);
  }
  else
  {
    ReplaceInterface<CRegionWrapper,CRegionWrapper>(v5, *((__int64 (__fastcall ****)(_QWORD))a2 + 6));
    v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRenderTargetDisplay **))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v9);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1DDu);
    }
    else
    {
      v7 = CCompositionSurfaceInfo::SetAdvancedDirectFlipState(
             *((CCompositionSurfaceInfo **)this + 4),
             v9,
             *((struct CRegionWrapper **)this + 6));
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1E0u);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v9);
  return v3;
}
