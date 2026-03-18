/*
 * XREFs of ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x1801BCF14
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801A6270 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x1801BCDD8 (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEB.c)
 */

__int64 __fastcall CTileBrushUtils::GetIntermediateBaseTile(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 a6,
        __int64 *a7,
        struct CMILMatrix *a8,
        int *a9,
        int *a10)
{
  int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  struct IRenderTarget *v22; // [rsp+58h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v23; // [rsp+60h] [rbp-20h] BYREF

  v22 = 0LL;
  *(_QWORD *)&v23.r = 0LL;
  v21 = 0LL;
  v12 = CTileBrushUtils::CreateTileBrushIntermediate(
          a2,
          a3,
          a4,
          a5,
          a6,
          &v22,
          (struct CDrawingContext **)&v23,
          a8,
          a9,
          a10);
  v13 = *(_QWORD *)&v23.r;
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x16Eu);
  }
  else if ( !*a9 )
  {
    v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v22 + 232LL))(v22, &v21);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x179u);
    }
    else
    {
      v16 = CDrawingContext::BeginFrame((CDrawingContext *)v13, v22, 0LL, 0, 0LL, 0LL, 0, 0LL);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x182u);
      }
      else
      {
        *(_QWORD *)&v23.r = 0LL;
        *(_QWORD *)&v23.b = 0LL;
        v17 = CDrawingContext::Clear((CDrawingContext *)v13, &v23);
        v14 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x18Du);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 248LL))(a1, a2, v13);
          v14 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x191u);
          }
          else
          {
            CDrawingContext::EndFrame((CDrawingContext *)v13);
            v19 = v21;
            v21 = 0LL;
            *a7 = v19;
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<IBitmapSource>(v21);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v22);
  if ( v13 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v13 + 16));
  return v14;
}
