/*
 * XREFs of ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180002170
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000D620 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180002DDC (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800035B4 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180015244 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffectLayer::Create(
        struct IRenderTarget *a1,
        const struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        struct CFilterEffect *a4,
        const struct CVisual *a5,
        const struct MilPointAndSizeF *a6,
        struct CFilterEffectLayer **a7)
{
  struct IRenderTargetBitmap *v7; // rsi
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  bool v14; // di
  int v15; // eax
  CExternalLayer *v16; // rax
  CExternalLayer *v17; // rbx
  unsigned int v19; // [rsp+20h] [rbp-81h]
  char v20; // [rsp+30h] [rbp-71h]
  int v21; // [rsp+50h] [rbp-51h] BYREF
  struct IRenderTargetBitmap *v22; // [rsp+58h] [rbp-49h] BYREF
  __int64 v23; // [rsp+60h] [rbp-41h] BYREF
  const struct _GUID *v24; // [rsp+68h] [rbp-39h]
  const char *v25; // [rsp+70h] [rbp-31h] BYREF
  int v26; // [rsp+78h] [rbp-29h]
  __int64 v27; // [rsp+80h] [rbp-21h] BYREF
  int v28; // [rsp+88h] [rbp-19h]

  v21 = 0;
  v7 = 0LL;
  v27 = 0LL;
  *a7 = 0LL;
  v28 = 0;
  v11 = *(_QWORD *)a1;
  v24 = a2;
  v22 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(v11 + 24))(a1, &v27);
  v13 = v12;
  if ( v12 < 0 )
  {
    v19 = 30;
    goto LABEL_21;
  }
  if ( CFilterEffect::IsOpaque(a4, a5) )
    HIDWORD(v27) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 32LL))(a1);
  else
    HIDWORD(v27) = 1;
  v28 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 40LL))(a1);
  v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, int *, _QWORD))(*(_QWORD *)a1 + 104LL))(
          a1,
          &v23,
          &v21,
          0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    v19 = 36;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v19);
    goto LABEL_12;
  }
  v14 = (int)CFilterEffect::ContainEffectInChainInputs(a4, 9LL) >= 0
     || (int)CFilterEffect::ContainEffectInChainInputs(a4, 13LL) >= 0;
  v26 = 46;
  v25 = "DWM Scratch Rendertarget (filter effect layer)";
  v20 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 168LL))(a1);
  v15 = CExternalLayer::CreateRenderTargetBitmap(&v25, v24, a3, &v27, v23, v21, v20, 1, v14, &v22);
  v13 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x36u);
    v7 = v22;
  }
  else
  {
    v16 = (CExternalLayer *)operator new(0x88uLL);
    v7 = v22;
    v17 = v16;
    if ( v16 )
    {
      CExternalLayer::CExternalLayer(v16, a3, v22);
      *((_QWORD *)v17 + 14) = a4;
      *(_QWORD *)v17 = &CFilterEffectLayer::`vftable';
    }
    else
    {
      v17 = 0LL;
    }
    *a7 = v17;
    if ( v17 )
    {
      *(_OWORD *)((char *)v17 + 120) = *(_OWORD *)a6;
    }
    else
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Cu);
    }
  }
LABEL_12:
  ReleaseInterfaceNoNULL<CD2DPencil>(v7);
  return v13;
}
