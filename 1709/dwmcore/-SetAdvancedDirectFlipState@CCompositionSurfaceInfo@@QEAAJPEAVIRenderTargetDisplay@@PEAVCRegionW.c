/*
 * XREFs of ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x18017CC20
 * Callers:
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180149748 (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x18017C048 (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::SetAdvancedDirectFlipState(
        CCompositionSurfaceInfo *this,
        unsigned __int64 a2,
        struct CRegionWrapper *a3)
{
  unsigned int v6; // ebx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v8; // r15
  char v9; // di
  signed int v10; // eax
  signed int v11; // eax
  signed int v12; // eax
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this);
  v15 = 0LL;
  v14[0] = 0LL;
  v8 = RenderingRealizationNoRef;
  if ( (**(int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
         RenderingRealizationNoRef,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v15) >= 0 )
  {
    v9 = 0;
    if ( !*((_QWORD *)this + 16) )
    {
      v10 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, __int64 *, _QWORD))(*(_QWORD *)v8 + 56LL))(
              v8,
              v14,
              0LL);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xAAu);
        goto LABEL_10;
      }
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)a2 + 352LL))(a2, v14[0]);
      if ( !v9 )
      {
        v11 = CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer((CCompositionSurfaceInfo *)((char *)this + 48));
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xB4u);
          goto LABEL_10;
        }
      }
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct CRegionWrapper *))(*(_QWORD *)v15 + 24LL))(
            v15,
            *((_QWORD *)this + 16),
            a2 & -(__int64)(v9 != 0),
            a3);
    v6 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xBAu);
  }
LABEL_10:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  ReleaseInterfaceNoNULL<CManipulationManager>(v14[0]);
  return v6;
}
