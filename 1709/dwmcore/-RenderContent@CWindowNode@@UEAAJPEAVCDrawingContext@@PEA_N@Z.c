/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028B70 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18009D530 (-NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800A9818 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18011C4C0 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x18012FEB4 (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x18015DE40 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x180165398 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z @ 0x180178CC8 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180179974 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x180179A80 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct CDrawingContext *a2, bool *a3)
{
  char v5; // r13
  int v6; // r14d
  char v7; // si
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v9; // rbx
  CCompositionSurfaceBitmap *v10; // rcx
  CFlipChain *v11; // rcx
  signed int v12; // eax
  int v13; // ebx
  int Bounds; // eax
  int Blink; // ecx
  CGdiSpriteBitmap *v17; // rcx
  __int64 (*v18)(void); // rax
  char updated; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v21; // r10
  struct _LIST_ENTRY *i; // rcx
  signed int v23; // eax
  const struct ConfirmPresentHistoryToken *v24; // rax
  DWORD v25; // r9d
  __int64 v26; // rax
  const struct CShape *v27; // r8
  unsigned int v28; // eax
  __m128i v29; // xmm0
  int v30; // eax
  D3DVALUE v31; // xmm0_4
  signed int v32; // eax
  __int64 v33; // rax
  struct _D3DCOLORVALUE *v34; // r12
  int Flink_high; // r14d
  __int64 v36; // rbx
  struct CShape **DxClipShape; // rax
  signed int LastKnownGoodDxClipShape; // eax
  int Blink_high; // r8d
  signed int v40; // eax
  int v41; // r14d
  __int64 v42; // rbx
  struct CShape **v43; // rax
  unsigned int v44; // [rsp+20h] [rbp-A9h]
  bool v45; // [rsp+71h] [rbp-58h]
  bool v46; // [rsp+72h] [rbp-57h]
  __int64 v47; // [rsp+78h] [rbp-51h] BYREF
  char v48; // [rsp+80h] [rbp-49h]
  bool *v49; // [rsp+88h] [rbp-41h]
  struct _D3DCOLORVALUE v50; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v51[3]; // [rsp+A0h] [rbp-29h] BYREF
  int v52; // [rsp+B8h] [rbp-11h]
  __int64 v53; // [rsp+BCh] [rbp-Dh]
  _BYTE v54[16]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v55; // [rsp+D8h] [rbp+Fh]

  v49 = a3;
  v5 = 0;
  v6 = 1;
  if ( (*((_QWORD *)this + 115) || *((_QWORD *)this + 118)) && *((_BYTE *)this + 1014) )
  {
    CWindowNode::GetDxClipShape(this, &v50);
    if ( *(_QWORD *)&v50.r )
      v5 = !CShapePtr::IsEmpty((CShapePtr *)&v50);
    CShapePtr::Release((CRegionShape **)&v50);
  }
  v7 = 0;
  if ( *((_BYTE *)this + 1013) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1296LL) )
    {
      v23 = CWindowNode::RenderBlackContent(this, a2);
      v13 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0xACDu);
      else
        v7 = 1;
      goto LABEL_16;
    }
    *((_BYTE *)a2 + 6832) = 1;
  }
  Flink = 0LL;
  if ( *(_BYTE *)(*((_QWORD *)a2 + 816) + 32LL) )
  {
    v9 = (struct _LIST_ENTRY *)((char *)this + 280);
LABEL_6:
    if ( v9 )
    {
      if ( !v9[2].Flink )
        v9[2].Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v9[1].Blink->Flink[20].Flink)(v9[1].Blink);
      Flink = v9[2].Flink;
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v9 = i - 14;
        if ( i[2].Flink == v21 )
          goto LABEL_6;
      }
    }
  }
  if ( *((_QWORD *)this + 98) && !*((_BYTE *)this + 1010) )
  {
    Bounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    v13 = Bounds;
    if ( Bounds < 0 )
    {
      v44 = 2795;
      goto LABEL_50;
    }
    if ( Flink )
      Blink = (int)Flink[1].Blink;
    else
      Blink = 0;
    Bounds = CWindowNode::RenderImage(
               this,
               a2,
               (void **)&Flink->Flink,
               *((struct IImageSource **)this + 98),
               *((struct CShape **)this + 124),
               (_DWORD *)this + 221,
               Blink,
               v5,
               0,
               0,
               0LL);
    v13 = Bounds;
    if ( Bounds < 0 )
    {
      v44 = 2804;
      goto LABEL_50;
    }
    v17 = (CGdiSpriteBitmap *)*((_QWORD *)this + 98);
    v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 192LL);
    if ( (char *)v18 == (char *)CGdiSpriteBitmap::NeedsConfirmUpdateId )
      updated = CGdiSpriteBitmap::NeedsConfirmUpdateId(v17);
    else
      updated = v18();
    if ( updated )
    {
      v24 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 98)
                                                                                         + 200LL))(*((_QWORD *)this + 98));
      Bounds = FRAME_TIME_INFO::AddTokenForRenderContent(*(FRAME_TIME_INFO **)(*((_QWORD *)this + 2) + 352LL), v24);
      v13 = Bounds;
      if ( Bounds < 0 )
      {
        v44 = 2808;
LABEL_50:
        v25 = Bounds;
LABEL_52:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, v44);
LABEL_55:
        v7 = 0;
        goto LABEL_16;
      }
    }
  }
  v10 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 118);
  if ( v10 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1296LL) )
    {
      v26 = *((_QWORD *)v10 + 12);
      if ( v26 )
      {
        if ( (*(_BYTE *)(v26 + 268) & 2) != 0 )
        {
          CWindowNode::GetDxClipShape(this, &v47);
          v27 = (const struct CShape *)v47;
          v51[0] = &CRectanglesShape::`vftable';
          v51[1] = v54;
          v51[2] = v54;
          v52 = 1;
          v53 = 1LL;
          v55 = 0LL;
          if ( !v47 )
          {
            v50.r = 0.0;
            v50.g = 0.0;
            v28 = 0;
            if ( *((_DWORD *)this + 172) - *((_DWORD *)this + 170) >= 0 )
              v28 = *((_DWORD *)this + 172) - *((_DWORD *)this + 170);
            v29 = _mm_cvtsi32_si128(v28);
            v30 = 0;
            LODWORD(v31) = _mm_cvtepi32_ps(v29).m128_u32[0];
            if ( *((_DWORD *)this + 173) - *((_DWORD *)this + 171) >= 0 )
              v30 = *((_DWORD *)this + 173) - *((_DWORD *)this + 171);
            v50.b = v31;
            v50.a = (float)v30;
            CRectanglesShape::SetSingleRect((CRectanglesShape *)v51, (const struct MilRectF *)&v50);
            CShapePtr::Release((CRegionShape **)&v47);
            v27 = (const struct CShape *)v51;
            v48 = 0;
            v47 = (__int64)v51;
          }
          v32 = CWindowNode::RenderBlackShape(this, a2, v27);
          v13 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v32, 0xB2Bu);
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v51);
LABEL_54:
            CShapePtr::Release((CRegionShape **)&v47);
            goto LABEL_55;
          }
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v51);
LABEL_67:
          CShapePtr::Release((CRegionShape **)&v47);
          goto LABEL_13;
        }
      }
    }
    v33 = *((_QWORD *)v10 + 12);
    if ( v33 )
      v6 = *(_DWORD *)(v33 + 168);
    v45 = v6 == 1;
    Bounds = CCompositionSurfaceBitmap::GetBounds(v10, 0LL, 0LL, (__int64)&v50);
    v13 = Bounds;
    if ( Bounds < 0 )
    {
      v44 = 2821;
      goto LABEL_50;
    }
    if ( v6 == 1 )
      *(struct _D3DCOLORVALUE *)&v50.r = *(struct _D3DCOLORVALUE *)&CCompositionSurfaceBitmap::GetBorderColor(
                                                                      (CCompositionSurfaceBitmap *)(*((_QWORD *)this + 118)
                                                                                                  + 56LL),
                                                                      &v50)->r;
    v34 = &v50;
    if ( v6 != 1 )
      v34 = 0LL;
    v46 = v6 != 1;
    if ( Flink )
      Flink_high = HIDWORD(Flink[2].Flink);
    else
      Flink_high = 0;
    v36 = *((_QWORD *)this + 118);
    DxClipShape = (struct CShape **)CWindowNode::GetDxClipShape(this, &v47);
    v13 = CWindowNode::RenderImage(
            this,
            a2,
            (void **)&Flink->Flink,
            (struct IImageSource *)((v36 + 64) & -(__int64)(v36 != 0)),
            *DxClipShape,
            0LL,
            Flink_high,
            v5,
            v46,
            v45,
            (__int64)v34);
    CShapePtr::Release((CRegionShape **)&v47);
    if ( v13 >= 0 )
      goto LABEL_13;
    v44 = 2837;
LABEL_51:
    v25 = v13;
    goto LABEL_52;
  }
  v11 = (CFlipChain *)*((_QWORD *)this + 115);
  if ( v11 )
  {
    if ( !CFlipChain::DisplayBufferReady(v11) && *((_QWORD *)this + 116) )
    {
      v47 = 0LL;
      v48 = 0;
      LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, (struct CShapePtr *)&v47);
      v13 = LastKnownGoodDxClipShape;
      if ( LastKnownGoodDxClipShape < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LastKnownGoodDxClipShape, 0xB5Eu);
        goto LABEL_54;
      }
      if ( Flink )
        Blink_high = HIDWORD(Flink[1].Blink);
      else
        Blink_high = 0;
      v40 = CWindowNode::RenderImage(
              this,
              a2,
              (void **)&Flink->Flink,
              (struct IImageSource *)((*((_QWORD *)this + 116) + 8LL) & -(__int64)(*((_QWORD *)this + 116) != 0LL)),
              (struct CShape *)v47,
              (_DWORD *)this + 221,
              Blink_high,
              v5,
              0,
              0,
              0LL);
      v13 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v40, 0xB67u);
        goto LABEL_54;
      }
      goto LABEL_67;
    }
    CResource::UnRegisterNotifier<CImageSource *>(this, (char *)this + 928);
    if ( Flink )
      v41 = HIDWORD(Flink[1].Blink);
    else
      v41 = 0;
    v42 = *((_QWORD *)this + 115);
    v43 = (struct CShape **)CWindowNode::GetDxClipShape(this, &v50);
    v13 = CWindowNode::RenderImage(
            this,
            a2,
            (void **)&Flink->Flink,
            (struct IImageSource *)((v42 + 8) & -(__int64)(v42 != 0)),
            *v43,
            (_DWORD *)this + 221,
            v41,
            v5,
            0,
            0,
            0LL);
    CShapePtr::Release((CRegionShape **)&v50);
    if ( v13 >= 0 )
      goto LABEL_13;
    v44 = 2893;
    goto LABEL_51;
  }
LABEL_13:
  v12 = CVisual::RenderContent(this, a2, 0LL);
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xB6Bu);
  v7 = 0;
LABEL_16:
  if ( v49 && v7 )
    *v49 = 1;
  return (unsigned int)v13;
}
