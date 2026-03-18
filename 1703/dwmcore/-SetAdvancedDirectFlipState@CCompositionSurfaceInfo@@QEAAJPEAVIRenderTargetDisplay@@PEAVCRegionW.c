/*
 * XREFs of ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180175C08
 * Callers:
 *     ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18015553C (-TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180175008 (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::SetAdvancedDirectFlipState(
        CCompositionSurfaceInfo *this,
        unsigned __int64 a2,
        struct CRegionWrapper *a3)
{
  unsigned int v6; // ebx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v8; // r14
  char v9; // di
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this);
  v16 = 0LL;
  v15[0] = 0LL;
  v8 = RenderingRealizationNoRef;
  if ( (**(int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))RenderingRealizationNoRef)(
         RenderingRealizationNoRef,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v16) >= 0 )
  {
    v9 = 0;
    if ( !*((_QWORD *)this + 16) )
    {
      v10 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, __int64 *, _QWORD))(*(_QWORD *)v8 + 72LL))(
              v8,
              v15,
              0LL);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xAAu);
        goto LABEL_10;
      }
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)a2 + 344LL))(a2, v15[0]);
      if ( !v9 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
        v12 = CCompositionSurfaceInfo::CBindInfo::EnsureRestoreBuffer(
                (CCompositionSurfaceInfo *)((char *)this + 48),
                (struct _GUID *)(v11 + 324));
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB4u);
          goto LABEL_10;
        }
      }
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct CRegionWrapper *))(*(_QWORD *)v16 + 24LL))(
            v16,
            *((_QWORD *)this + 16),
            a2 & -(__int64)(v9 != 0),
            a3);
    v6 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xBAu);
  }
LABEL_10:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  ReleaseInterfaceNoNULL<CD2DPencil>(v15[0]);
  return v6;
}
