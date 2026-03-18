/*
 * XREFs of ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180172AF8
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C8A00 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x1801ACFE0 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 */

__int64 __fastcall CDirectFlipInfo::TransferAdvancedDirectFlipState(
        CDirectFlipInfo *this,
        const struct CDirectFlipInfo *a2)
{
  int v2; // eax
  struct CRegionWrapper **v3; // rsi
  unsigned int v4; // ebx
  __int64 *v6; // rcx
  int v7; // eax
  int v8; // eax
  struct IRenderTargetDisplay *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a2 + 15);
  v3 = (struct CRegionWrapper **)((char *)this + 48);
  v4 = 0;
  *((_DWORD *)this + 15) = v2;
  v10 = 0LL;
  v6 = (__int64 *)((char *)this + 48);
  if ( v2 < 2 )
  {
    ReleaseInterface<CD3DSurface>(v6);
  }
  else
  {
    ReplaceInterface<CRegionWrapper,CRegionWrapper>(v6, *((__int64 (__fastcall ****)(_QWORD))a2 + 6));
    v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRenderTargetDisplay **))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v10);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1DDu);
    }
    else
    {
      v8 = CCompositionSurfaceInfo::SetAdvancedDirectFlipState(*((CCompositionSurfaceInfo **)this + 4), v10, *v3);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1E0u);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)v10 + 16LL))(v10);
  return v4;
}
