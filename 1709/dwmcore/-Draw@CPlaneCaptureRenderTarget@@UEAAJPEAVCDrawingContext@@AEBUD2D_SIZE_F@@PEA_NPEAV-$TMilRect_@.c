/*
 * XREFs of ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801392C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180040F90 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041C44 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180041CEC (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18013C970 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CPlaneCaptureRenderTarget::Draw(__int64 a1, CDrawingContext *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  FLOAT v6; // xmm1_4
  signed int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-50h]
  struct D2D_SIZE_F v12; // [rsp+30h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v13; // [rsp+38h] [rbp-38h] BYREF
  int v14; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v15[8]; // [rsp+4Ch] [rbp-24h] BYREF
  int v16; // [rsp+54h] [rbp-1Ch]
  int v17; // [rsp+5Ch] [rbp-14h]
  struct CRenderTargetImageSource *v18; // [rsp+80h] [rbp+10h] BYREF

  v2 = 0;
  v18 = 0LL;
  if ( !*(_BYTE *)(a1 + 266) )
    goto LABEL_17;
  if ( *(_DWORD *)(a1 + 412) )
  {
    memset_0(v15, 0, 0x24uLL);
    v5 = *(_DWORD *)(a1 + 360);
    v14 = 20;
    v16 = 1;
    v17 = 1;
    v6 = (float)*(int *)(a1 + 364);
    *(_QWORD *)&v13.r = 0LL;
    *(_QWORD *)&v13.b = 0LL;
    v12.width = (float)v5;
    v12.height = v6;
    v7 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v14, 1);
    v2 = v7;
    if ( v7 >= 0 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode )
        *(struct _D3DCOLORVALUE *)&v13.r = (struct _D3DCOLORVALUE)_xmm;
      v8 = CDrawingContext::DrawColorRectangle(a2, &v13, &v12);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1A5u);
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
      goto LABEL_17;
    }
    v11 = 406;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v11);
    goto LABEL_17;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 56) + 264LL))(a1 + 56);
  v2 = v7;
  if ( v7 < 0 )
  {
    v11 = 427;
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  v9 = CRenderTargetImageSource::Create(**(struct IRenderTarget ***)(a1 + 272), 1, &v18);
  v2 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1ADu);
    goto LABEL_17;
  }
  v7 = CDrawingContext::DrawBitmap(a2, v18, 0);
  v2 = v7;
  if ( v7 < 0 )
  {
    v11 = 431;
    goto LABEL_16;
  }
LABEL_17:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  return v2;
}
