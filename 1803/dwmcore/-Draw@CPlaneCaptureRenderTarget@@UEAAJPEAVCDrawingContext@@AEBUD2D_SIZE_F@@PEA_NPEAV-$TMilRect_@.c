/*
 * XREFs of ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015BA40
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006EC50 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CPlaneCaptureRenderTarget::Draw(__int64 a1, CDrawingContext *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v6; // eax
  FLOAT v7; // xmm1_4
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-50h]
  struct D2D_SIZE_F v13; // [rsp+30h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v14; // [rsp+38h] [rbp-38h] BYREF
  int v15; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v16[8]; // [rsp+4Ch] [rbp-24h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+5Ch] [rbp-14h]
  struct CRenderTargetImageSource *v19; // [rsp+90h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v19 = 0LL;
  if ( !*(_BYTE *)(v2 + 266) )
    goto LABEL_17;
  if ( *(_DWORD *)(v2 + 412) )
  {
    memset_0(v16, 0, 0x24uLL);
    v6 = *(_DWORD *)(v2 + 360);
    v15 = 20;
    v17 = 1;
    v18 = 1;
    v7 = (float)*(int *)(v2 + 364);
    *(_QWORD *)&v14.r = 0LL;
    *(_QWORD *)&v14.b = 0LL;
    v13.width = (float)v6;
    v13.height = v7;
    v8 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v15, 1);
    v3 = v8;
    if ( v8 >= 0 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode )
        *(struct _D3DCOLORVALUE *)&v14.r = (struct _D3DCOLORVALUE)_xmm;
      v9 = CDrawingContext::DrawColorRectangle(a2, &v14, &v13);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x17Fu);
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
      goto LABEL_17;
    }
    v12 = 368;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v12);
    goto LABEL_17;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 216LL))(v2);
  v3 = v8;
  if ( v8 < 0 )
  {
    v12 = 389;
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v19);
  v10 = CRenderTargetImageSource::Create(**(struct IRenderTarget ***)(*(_QWORD *)(a1 + 56) + 272LL), 1, &v19);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x187u);
    goto LABEL_17;
  }
  v8 = CDrawingContext::DrawBitmap(a2, v19, 0);
  v3 = v8;
  if ( v8 < 0 )
  {
    v12 = 393;
    goto LABEL_16;
  }
LABEL_17:
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v19);
  return v3;
}
