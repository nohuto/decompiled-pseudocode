/*
 * XREFs of ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18015553C
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C9EE4 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180175C08 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 */

__int64 __fastcall CDirectFlipInfo::TransferAdvancedDirectFlipState(CDirectFlipInfo *this, struct CDirectFlipInfo *a2)
{
  char v2; // r8
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  struct IRenderTargetDisplay *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_BYTE *)a2 + 48);
  v3 = 0;
  v8 = 0LL;
  *((_BYTE *)this + 48) = v2;
  *((_BYTE *)this + 49) = *((_BYTE *)a2 + 49);
  if ( v2 )
  {
    ReplaceInterface<CRegionWrapper,CRegionWrapper>((__int64 *)this + 7, *((__int64 (__fastcall ****)(_QWORD))a2 + 7));
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRenderTargetDisplay **))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v8);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1DEu);
    }
    else
    {
      v6 = CCompositionSurfaceInfo::SetAdvancedDirectFlipState(
             *((CCompositionSurfaceInfo **)this + 4),
             v8,
             *((struct CRegionWrapper **)this + 7));
      v3 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1E0u);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v8);
  return v3;
}
