/*
 * XREFs of ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180098B70
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009CE90 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180011A40 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180099460 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180099560 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18009AC50 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800C35B0 (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  const struct CDrawingContext *v2; // rax
  int v4; // xmm1_4
  CColorBrush *v6; // rcx
  __int64 (__fastcall *v7)(CLinearGradientBrush *, const struct CDrawingContext **); // rax
  int BrushParameters; // eax
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  char v15; // al
  const struct CDrawingContext *v16; // rax
  CSurfaceBrush *v17; // rcx
  int v18; // xmm1_4
  int (*v19)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int v20; // eax
  __int64 v21; // rcx
  CSurfaceDrawListBrush *v23[2]; // [rsp+30h] [rbp-39h] BYREF
  const struct CDrawingContext *v24; // [rsp+40h] [rbp-29h] BYREF
  int v25; // [rsp+48h] [rbp-21h]
  int v26; // [rsp+4Ch] [rbp-1Dh]
  int v27; // [rsp+50h] [rbp-19h]
  __int128 v28; // [rsp+54h] [rbp-15h]
  CSurfaceDrawListBrush *v29; // [rsp+68h] [rbp-1h]
  __int64 v30; // [rsp+70h] [rbp+7h]
  __int64 v31; // [rsp+78h] [rbp+Fh]
  __int64 v32; // [rsp+80h] [rbp+17h]
  int v33; // [rsp+88h] [rbp+1Fh]
  __int16 v34; // [rsp+8Ch] [rbp+23h]
  char v35; // [rsp+8Eh] [rbp+25h]

  v2 = *(const struct CDrawingContext **)a2;
  v4 = *((_DWORD *)a2 + 3);
  v6 = (CColorBrush *)*((_QWORD *)this + 10);
  v25 = *((_DWORD *)a2 + 2);
  v24 = v2;
  v28 = _xmm;
  v27 = 0;
  v26 = v4;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v34 = 256;
  v35 = 0;
  v7 = *(__int64 (__fastcall **)(CLinearGradientBrush *, const struct CDrawingContext **))(*(_QWORD *)v6 + 296LL);
  if ( (char *)v7 == (char *)CColorBrush::GetBrushParameters )
  {
    BrushParameters = CColorBrush::GetBrushParameters(v6, (struct CBrushDrawListGenerator *)&v24);
  }
  else if ( v7 == CLinearGradientBrush::GetBrushParameters )
  {
    BrushParameters = CLinearGradientBrush::GetBrushParameters(v6, &v24);
  }
  else
  {
    BrushParameters = v7(v6, &v24);
  }
  v9 = BrushParameters;
  if ( BrushParameters < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BrushParameters, 0x188u);
    goto LABEL_29;
  }
  v10 = v28;
  *((_BYTE *)a2 + 76) = v34;
  v23[0] = v29;
  *(_OWORD *)((char *)a2 + 20) = v10;
  v29 = 0LL;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, v23);
  v12 = v27;
  if ( v23[0] )
    std::default_delete<CDrawListBrush>::operator()(v11, v23[0]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v24);
  v13 = *((_QWORD *)this + 9);
  if ( !v13 )
    goto LABEL_16;
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL);
  if ( v14 == CSurfaceBrush::IsOfType )
    v15 = CSurfaceBrush::IsOfType(v13, 100LL);
  else
    v15 = v14(v13, 100LL);
  if ( v15 && !CMaskBrush::IsValidMaskResource(*(const struct CResource **)(*((_QWORD *)this + 9) + 72LL)) )
  {
    v9 = -2147024846;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MASKBRUSH_DRAW_ERROR_INVALID_INPUT,
        2147942450LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024846, 0x1A1u);
    goto LABEL_30;
  }
  v16 = *(const struct CDrawingContext **)a2;
  v17 = (CSurfaceBrush *)*((_QWORD *)this + 9);
  v18 = *((_DWORD *)a2 + 3);
  v25 = *((_DWORD *)a2 + 2);
  v24 = v16;
  v28 = _xmm;
  v27 = 0;
  v26 = v18;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v34 = 256;
  v35 = 0;
  v19 = *(int (**)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *))(*(_QWORD *)v17 + 296LL);
  if ( v19 == CSurfaceBrush::GetBrushParameters )
    v20 = CSurfaceBrush::GetBrushParameters(v17, (struct CBrushDrawListGenerator *)&v24);
  else
    v20 = ((__int64 (__fastcall *)(CSurfaceBrush *, const struct CDrawingContext **))v19)(v17, &v24);
  v9 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1A9u);
LABEL_29:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v24);
LABEL_30:
    CBrushDrawListGenerator::Reset(a2);
    return v9;
  }
  v23[0] = v29;
  v29 = 0LL;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 1u, v23);
  v12 |= v27;
  if ( v23[0] )
    std::default_delete<CDrawListBrush>::operator()(v21, v23[0]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v24);
LABEL_16:
  *((_DWORD *)a2 + 4) = v12;
  return 0;
}
