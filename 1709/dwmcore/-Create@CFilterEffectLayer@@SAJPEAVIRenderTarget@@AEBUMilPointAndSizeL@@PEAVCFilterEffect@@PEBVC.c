/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18014C86C
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18003BAAC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800812B8 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180081418 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1801637D8 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18016443C (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 */

__int64 __fastcall CFilterEffectLayer::Create(
        struct IRenderTarget *a1,
        const struct MilPointAndSizeL *a2,
        struct CFilterEffect *a3,
        const struct CVisual *a4,
        const struct MilPointAndSizeF *a5,
        struct CFilterEffectLayer **a6)
{
  struct IRenderTargetBitmap *v6; // rsi
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  bool IsOpaque; // al
  int v14; // ecx
  char v15; // bl
  bool v16; // zf
  __int64 v17; // rax
  signed int v18; // eax
  unsigned int v19; // edi
  char v20; // al
  signed int v21; // eax
  CExternalLayer *v22; // rax
  CExternalLayer *v23; // rbx
  unsigned int v25; // [rsp+50h] [rbp-39h] BYREF
  struct IRenderTargetBitmap *v26; // [rsp+58h] [rbp-31h] BYREF
  __int64 v27; // [rsp+60h] [rbp-29h] BYREF
  int v28; // [rsp+68h] [rbp-21h]
  __int64 v29; // [rsp+70h] [rbp-19h] BYREF
  const char *v30; // [rsp+78h] [rbp-11h] BYREF
  int v31; // [rsp+80h] [rbp-9h]

  v6 = 0LL;
  v25 = 0;
  v26 = 0LL;
  *a6 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IRenderTarget *, const char **))(*(_QWORD *)a1 + 24LL))(a1, &v30);
  v12 = *(_QWORD *)v11;
  LODWORD(v11) = *(_DWORD *)(v11 + 8);
  v27 = v12;
  v28 = v11;
  IsOpaque = CFilterEffect::IsOpaque(a3, a4);
  v14 = HIDWORD(v12);
  v15 = 1;
  v16 = !IsOpaque;
  v17 = *(_QWORD *)a1;
  if ( v16 )
    v14 = 1;
  HIDWORD(v27) = v14;
  v18 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, unsigned int *))(v17 + 88))(a1, &v29, &v25);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x24u);
  }
  else
  {
    if ( (int)CFilterEffect::ContainEffectInChainInputs(a3, 52LL) < 0
      && (int)CFilterEffect::ContainEffectInChainInputs(a3, 117LL) < 0 )
    {
      v15 = 0;
    }
    v31 = 46;
    v30 = "DWM Scratch Rendertarget (filter effect layer)";
    v20 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 152LL))(a1);
    v21 = CExternalLayer::CreateRenderTargetBitmap((__int64)&v30, a2, &v27, v29, v25, v20, 1, v15, (__int64 *)&v26);
    v19 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x35u);
      v6 = v26;
    }
    else
    {
      v22 = (CExternalLayer *)operator new(0x88uLL);
      v6 = v26;
      v23 = v22;
      if ( v22 )
      {
        CExternalLayer::CExternalLayer(v22, a2, v26);
        *((_QWORD *)v23 + 14) = a3;
        *(_QWORD *)v23 = &CFilterEffectLayer::`vftable';
      }
      else
      {
        v23 = 0LL;
      }
      *a6 = v23;
      if ( v23 )
      {
        *(_OWORD *)((char *)v23 + 120) = *(_OWORD *)a5;
      }
      else
      {
        v19 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x3Bu);
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v6);
  return v19;
}
