/*
 * XREFs of ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18013C558
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18003B87C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003CCF8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18007B408 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18011A3F4 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18011A640 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801770E8 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x18017E878 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBspPolygonList(CDrawingContext *this, struct CVisual *a2, struct CVisual *a3)
{
  signed int v4; // ebx
  unsigned int v5; // r15d
  struct CVisual *v6; // r11
  char v7; // di
  char v8; // si
  __int64 v9; // rsi
  _QWORD *BspPolygonList; // rax
  const struct CVisual *v11; // rdx
  __int64 v12; // r13
  struct CVisual *v13; // r12
  enum D2D1_FACTORY_TYPE v14; // ecx
  struct CD2DFactory *v15; // rax
  signed int v16; // eax
  signed int v17; // eax
  struct CD2DFactory *v18; // rsi
  signed int v19; // eax
  _DWORD *v20; // r15
  const struct CMILMatrix *TopByReference; // rax
  signed int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  signed int v28; // eax
  signed int v29; // eax
  int v30; // eax
  unsigned int v32; // [rsp+28h] [rbp-79h]
  struct ID2D1PathGeometry *v33; // [rsp+48h] [rbp-59h] BYREF
  unsigned int BspPolygonListCount; // [rsp+50h] [rbp-51h]
  struct CD2DFactory *v35; // [rsp+58h] [rbp-49h]
  __int64 v36; // [rsp+60h] [rbp-41h]
  _OWORD v37[4]; // [rsp+68h] [rbp-39h] BYREF
  int v38; // [rsp+A8h] [rbp+7h]
  unsigned int v41; // [rsp+120h] [rbp+7Fh]

  v4 = 0;
  v35 = 0LL;
  v33 = 0LL;
  v5 = 0;
  BspPolygonListCount = CVisual::GetBspPolygonListCount(a2);
  v7 = 0;
  v41 = 0;
  v8 = 0;
  if ( !BspPolygonListCount )
    goto LABEL_40;
  v7 = 1;
  v9 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList((__int64)v6);
    v11 = a3;
    v12 = *(_QWORD *)(v9 + *BspPolygonList);
    v13 = *(struct CVisual **)(v12 + 216);
    if ( v13 != v6 )
      v11 = (const struct CVisual *)*((_QWORD *)v13 + 10);
    if ( !*(_BYTE *)(v12 + 240) && *((_DWORD *)this + 67) )
      goto LABEL_27;
    if ( CVisual::IsSimple3DRootOrHasEffects(*(CVisual **)(v12 + 216), v11) )
      break;
    CDrawingContext::DrawPolygon(this, (struct CPolygon *)v12);
LABEL_26:
    v6 = a2;
LABEL_27:
    ++v5;
    v9 += 8LL;
    v41 = v5;
    v36 = v9;
    if ( v5 >= BspPolygonListCount )
      goto LABEL_39;
  }
  EnterCriticalSection(&CriticalSection);
  v15 = qword_18026EF28;
  v4 = 0;
  if ( qword_18026EF28 )
    goto LABEL_16;
  v16 = CD2DFactory::Create(v14, 0, &qword_18026EF28);
  v4 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x10Fu);
    goto LABEL_30;
  }
  v17 = CMesh2DEffect::Register(qword_18026EF28);
  v4 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x13Fu);
  if ( v4 >= 0 )
  {
    v15 = qword_18026EF28;
LABEL_16:
    v18 = v15;
    v35 = v15;
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x111u);
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x3FFu);
  v18 = v35;
LABEL_17:
  LeaveCriticalSection(&CriticalSection);
  if ( v4 >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v18 + 3) + 80LL))(
            *((_QWORD *)v18 + 3),
            &v33);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x9B4u);
      goto LABEL_39;
    }
    v20 = (_DWORD *)((char *)this + 480);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    v22 = CPolygon::D2DGeometryFromPolygon((CPolygon *)v12, v33, TopByReference);
    v8 = 0;
    v4 = v22;
    if ( v22 < 0 )
    {
      v32 = 2488;
      goto LABEL_35;
    }
    v22 = CDrawingContext::PushD2DLayer(this, v13, 0LL, (__int64)v33, 0LL, 1.0, 0, 0);
    v4 = v22;
    if ( v22 < 0 )
    {
      v32 = 2490;
LABEL_35:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, v32);
      goto LABEL_36;
    }
    v25 = *(_OWORD *)(v12 + 160);
    LOBYTE(v23) = 1;
    v26 = *(_OWORD *)(v12 + 144);
    v38 = *(_DWORD *)(v12 + 208);
    v37[1] = v25;
    v27 = *(_OWORD *)(v12 + 192);
    LOBYTE(v38) = v38 | 0xF;
    v8 = 1;
    v37[0] = v26;
    v37[3] = v27;
    v37[2] = 0LL;
    v28 = CMatrixStack::Push((CDrawingContext *)((char *)this + 480), (const struct CMILMatrix *)v37, v23, v24);
    v4 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x9CCu);
LABEL_36:
      v7 = 0;
      goto LABEL_40;
    }
    v29 = CDrawingContext::DrawVisual((struct CComposition **)this, v13, 0);
    v4 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x9CFu);
      goto LABEL_40;
    }
    if ( *v20 )
      --*v20;
    CDrawingContext::PopLayer(this);
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)&v33);
    v5 = v41;
    v9 = v36;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x9B3u);
LABEL_39:
  v7 = 0;
  v8 = 0;
LABEL_40:
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)&v33);
  if ( v7 )
  {
    v30 = *((_DWORD *)this + 120);
    if ( v30 )
      *((_DWORD *)this + 120) = v30 - 1;
  }
  if ( v8 )
    CDrawingContext::PopLayer(this);
  return (unsigned int)v4;
}
