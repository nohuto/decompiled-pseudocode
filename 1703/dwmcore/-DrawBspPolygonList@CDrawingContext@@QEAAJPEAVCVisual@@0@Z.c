/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18000D414 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004D094 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18004EC58 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18012B344 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18012B4B0 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18014BEDC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x180160680 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801776AC (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  struct CVisual *v6; // r11
  char v7; // di
  char v8; // si
  __int64 v9; // rsi
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v11; // rdx
  __int64 v12; // r15
  struct CVisual *v13; // r13
  CD3DDeviceManager *v14; // rcx
  int D2DFactoryNoRef; // eax
  int v16; // eax
  _DWORD *v17; // r12
  const struct CMILMatrix *TopByReference; // rax
  int v19; // eax
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // eax
  int v25; // eax
  int v26; // eax
  struct ID2D1PathGeometry *v28; // [rsp+48h] [rbp-59h] BYREF
  unsigned int BspPolygonListCount; // [rsp+50h] [rbp-51h]
  struct CD2DFactory *v30; // [rsp+58h] [rbp-49h] BYREF
  __int64 v31; // [rsp+60h] [rbp-41h]
  _OWORD v32[4]; // [rsp+68h] [rbp-39h] BYREF
  int v33; // [rsp+A8h] [rbp+7h]
  unsigned int v36; // [rsp+120h] [rbp+7Fh]

  v4 = 0;
  v30 = 0LL;
  v28 = 0LL;
  v5 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  v7 = 0;
  v36 = 0;
  v8 = 0;
  if ( !BspPolygonListCount )
    goto LABEL_28;
  v7 = 1;
  v9 = 0LL;
  v31 = 0LL;
  while ( 1 )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)v6);
    v11 = a3;
    v12 = *(_QWORD *)(v9 + *BspPolygonList);
    v13 = *(struct CVisual **)(v12 + 216);
    if ( v13 != v6 )
      v11 = (const struct CVisual *)*((_QWORD *)v13 + 10);
    if ( !*(_BYTE *)(v12 + 240) && *((_DWORD *)this + 69) )
      goto LABEL_19;
    if ( CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v12 + 216), v11) )
      break;
    CDrawingContext::DrawPolygon(this, (struct CPolygon *)v12);
LABEL_18:
    v6 = a2;
LABEL_19:
    ++v5;
    v9 += 8LL;
    v36 = v5;
    v31 = v9;
    if ( v5 >= BspPolygonListCount )
    {
      v7 = 0;
      v8 = 0;
      goto LABEL_28;
    }
  }
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v14, &v30);
  v8 = 0;
  v4 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v30 + 3) + 80LL))(
            *((_QWORD *)v30 + 3),
            &v28);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB1Bu);
      goto LABEL_27;
    }
    v17 = (_DWORD *)((char *)this + 472);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
    v19 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v12, v28, TopByReference);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB1Fu);
      goto LABEL_27;
    }
    v20 = CDrawingContext::PushD2DLayer(this, v13, 0LL, (__int64)v28, 0LL, 1.0, 0, 0);
    v4 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xB21u);
      goto LABEL_27;
    }
    v21 = *(_OWORD *)(v12 + 160);
    v22 = *(_OWORD *)(v12 + 144);
    v33 = *(_DWORD *)(v12 + 208);
    v32[1] = v21;
    v23 = *(_OWORD *)(v12 + 192);
    LOBYTE(v33) = v33 | 0xF;
    v8 = 1;
    v32[0] = v22;
    v32[3] = v23;
    v32[2] = 0LL;
    v24 = CMatrixStack::Push((CDrawingContext *)((char *)this + 472), (const struct CMILMatrix *)v32, 1);
    v4 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xB33u);
      v7 = 0;
      goto LABEL_28;
    }
    v25 = CDrawingContext::DrawVisual((struct CComposition **)this, v13, 0);
    v4 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xB36u);
      goto LABEL_28;
    }
    if ( *v17 )
      --*v17;
    CDrawingContext::PopLayer(this);
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)&v28);
    v9 = v31;
    v5 = v36;
    goto LABEL_18;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0xB1Au);
LABEL_27:
  v7 = 0;
LABEL_28:
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)&v28);
  if ( v7 )
  {
    v26 = *((_DWORD *)this + 118);
    if ( v26 )
      *((_DWORD *)this + 118) = v26 - 1;
  }
  if ( v8 )
    CDrawingContext::PopLayer(this);
  return v4;
}
