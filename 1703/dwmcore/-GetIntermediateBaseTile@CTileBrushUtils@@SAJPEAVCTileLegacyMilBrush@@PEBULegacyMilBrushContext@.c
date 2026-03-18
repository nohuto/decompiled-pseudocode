/*
 * XREFs of ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18017FE9C
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007C430 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18017FDC4 (-CreateTileBrushIntermediate@CTileBrushUtils@@SAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEB.c)
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
        _DWORD *a10)
{
  int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  CSwRenderTargetGetBounds *v24; // [rsp+58h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v25; // [rsp+60h] [rbp-20h] BYREF

  v24 = 0LL;
  *(_QWORD *)&v25.r = 0LL;
  v23 = 0LL;
  v12 = CTileBrushUtils::CreateTileBrushIntermediate(
          a2,
          a3,
          a4,
          a5,
          a6,
          &v24,
          (struct CDrawingContext **)&v25,
          a8,
          a9,
          a10);
  v13 = *(_QWORD *)&v25.r;
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x16Eu);
  }
  else if ( !*a9 )
  {
    v15 = (*(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, __int64 *))(*(_QWORD *)v24 + 184LL))(v24, &v23);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x179u);
    }
    else
    {
      v16 = CDrawingContext::BeginFrame((CDrawingContext *)v13, v24, 0LL, 0, 0LL, 0LL, 0, 0LL);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x182u);
      }
      else
      {
        *(_QWORD *)&v25.r = 0LL;
        *(_QWORD *)&v25.b = 0LL;
        v17 = CDrawingContext::Clear((CD2DContext **)v13, &v25);
        v14 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x18Du);
        }
        else
        {
          v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 232LL))(a1, a2, v13);
          v14 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x191u);
          }
          else
          {
            CDrawingContext::EndFrame((CDrawingContext *)v13, v19, v20);
            v21 = v23;
            v23 = 0LL;
            *a7 = v21;
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(v23);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v24);
  if ( v13 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v13 + 16));
  return v14;
}
