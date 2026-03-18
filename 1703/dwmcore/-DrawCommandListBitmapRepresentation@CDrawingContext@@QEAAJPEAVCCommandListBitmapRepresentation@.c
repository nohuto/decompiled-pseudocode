/*
 * XREFs of ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000EFFC
 * Callers:
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18002001C (-DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000A274 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 *     ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x18000EF20 (-DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x1800A98FC (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawCommandListBitmapRepresentation(
        CDrawingContext *this,
        struct CCommandListBitmapRepresentation *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  struct ID2D1PrivateCompositorCommandList *v4; // rsi
  char v8; // r14
  const struct D2D_SIZE_F *CurrentLayoutSize; // rax
  int v10; // eax
  unsigned int v11; // ebx
  CDrawingContext *v12; // rcx
  int v13; // eax
  float v14; // xmm6_4
  int D2DCommandList; // eax
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-50h]
  CCompositionSurfaceBitmap *v19; // [rsp+30h] [rbp-40h] BYREF
  struct D2D_SIZE_F v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h]
  float v22[4]; // [rsp+48h] [rbp-28h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v8 = 0;
  CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize(this);
  v10 = (*(__int64 (__fastcall **)(struct CCommandListBitmapRepresentation *, _QWORD, const struct D2D_SIZE_F *, float *))(v3 + 72))(
          a2,
          0LL,
          CurrentLayoutSize,
          v22);
  v11 = v10;
  if ( v10 < 0 )
  {
    v18 = 2515;
  }
  else
  {
    if ( a3 )
    {
      v17 = CDrawingContext::PushTransformInternal(this, 0LL, a3, 1, 1);
      v11 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x9D7u);
        goto LABEL_15;
      }
      v8 = 1;
    }
    if ( CDrawingContext::IsBounding(this) )
    {
      v20 = (struct D2D_SIZE_F)0x3F8000003F800000LL;
      v21 = 0x3F8000003F800000LL;
      v10 = CDrawingContext::DrawSolidRectangle(v12, (struct MilRectF *)v22);
      v11 = v10;
      if ( v10 >= 0 )
        goto LABEL_13;
      v18 = 2587;
    }
    else
    {
      v13 = *((_DWORD *)this + 752);
      if ( !v13 )
      {
        v11 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x9E0u);
        goto LABEL_13;
      }
      v14 = *(float *)(*((_QWORD *)this + 378) + 4LL * (unsigned int)(v13 - 1));
      D2DCommandList = CCommandListBitmapRepresentation::GetD2DCommandList(
                         a2,
                         *((struct CPolygon **)this + 405),
                         (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                         *((struct ID2DContext **)this + 49),
                         (struct ID2D1PrivateCompositorCommandList **)&v20);
      v11 = D2DCommandList;
      if ( D2DCommandList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DCommandList, 0x9E6u);
        v4 = (struct ID2D1PrivateCompositorCommandList *)v20;
        goto LABEL_13;
      }
      v4 = (struct ID2D1PrivateCompositorCommandList *)v20;
      if ( !*(_QWORD *)&v20 )
        goto LABEL_13;
      v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v11 = v10;
      if ( v10 < 0 )
      {
        v18 = 2545;
      }
      else
      {
        v10 = CDrawingContext::DrawLegacyD2DCommandList(this, v4, v14);
        v11 = v10;
        if ( v10 < 0 )
        {
          v18 = 2553;
        }
        else
        {
          if ( !CCommonRegistryData::m_fRenderPathTestMode
            || (v20.width = v22[2] - v22[0],
                v20.height = v22[3] - v22[1],
                v10 = CDrawingContext::DrawColorRectangle(this, (const struct _D3DCOLORVALUE *)this + 422, &v20),
                v11 = v10,
                v10 >= 0) )
          {
            if ( v8 )
            {
              CDrawingContext::PopTransformInternal(this, 1);
              v8 = 0;
            }
            (**(void (__fastcall ***)(struct CCommandListBitmapRepresentation *, GUID *, CCompositionSurfaceBitmap **))a2)(
              a2,
              &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
              &v19);
            CDrawingContext::RecordBitmapContentInfo(this, a2, v19, 0LL);
            goto LABEL_13;
          }
          v18 = 2561;
        }
      }
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v18);
LABEL_13:
  if ( v8 )
    CDrawingContext::PopTransformInternal(this, 1);
LABEL_15:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v19);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v4);
  return v11;
}
