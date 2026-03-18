/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007200 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800900A8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180093DB0 (-NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18013F478 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x18015184C (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x180186DC0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801A9A94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A9EE4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801A9FF4 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderContent(struct IImageSource **this, struct CDrawingContext *a2, bool *a3)
{
  unsigned __int8 v5; // r13
  int v6; // r14d
  char v7; // si
  __int64 Flink; // rsi
  struct _LIST_ENTRY *v9; // rbx
  CCompositionSurfaceBitmap *v10; // rcx
  int v11; // eax
  int v12; // ebx
  int Bounds; // eax
  unsigned int v15; // ecx
  CGdiSpriteBitmap *v16; // rcx
  __int64 (*v17)(void); // rax
  char updated; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v20; // r10
  struct _LIST_ENTRY *i; // rcx
  int v22; // eax
  const struct ConfirmPresentHistoryToken *v23; // rax
  int v24; // r9d
  __int64 v25; // rax
  const struct CShape *v26; // r8
  unsigned int v27; // eax
  __m128i v28; // xmm0
  int v29; // eax
  D3DVALUE v30; // xmm0_4
  int v31; // eax
  __int64 v32; // rax
  struct IImageSource *v33; // rbx
  struct _D3DCOLORVALUE *v34; // r12
  unsigned int v35; // r14d
  CRectanglesShape **DxClipShape; // rax
  unsigned int v37; // [rsp+20h] [rbp-B9h]
  bool v38; // [rsp+71h] [rbp-68h]
  bool v39; // [rsp+72h] [rbp-67h]
  CRectanglesShape *v40; // [rsp+78h] [rbp-61h] BYREF
  char v41; // [rsp+80h] [rbp-59h]
  bool *v42; // [rsp+88h] [rbp-51h]
  struct _D3DCOLORVALUE v43; // [rsp+90h] [rbp-49h] BYREF
  _QWORD v44[4]; // [rsp+A0h] [rbp-39h] BYREF
  int v45; // [rsp+C0h] [rbp-19h]
  __int64 v46; // [rsp+C4h] [rbp-15h]
  _BYTE v47[16]; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v48; // [rsp+E0h] [rbp+7h]

  v42 = a3;
  v5 = 0;
  v6 = 1;
  if ( this[108] && *((_BYTE *)this + 918) )
  {
    CWindowNode::GetDxClipShape(this, &v43);
    if ( *(_QWORD *)&v43.r )
      v5 = !CShapePtr::IsEmpty((CShapePtr *)&v43);
    CShapePtr::Release((CRectanglesShape **)&v43);
  }
  v7 = 0;
  if ( *((_BYTE *)this + 917) )
  {
    if ( *((_BYTE *)this[2] + 1344) )
    {
      v22 = CWindowNode::RenderBlackContent((CWindowNode *)this, a2);
      v12 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x81Fu);
      else
        v7 = 1;
      goto LABEL_13;
    }
    *((_BYTE *)a2 + 6834) = 1;
  }
  Flink = 0LL;
  if ( *(_BYTE *)(*((_QWORD *)a2 + 816) + 32LL) )
  {
    v9 = (struct _LIST_ENTRY *)(this + 36);
LABEL_5:
    if ( v9 )
    {
      Flink = (__int64)v9[2].Flink;
      if ( !Flink )
      {
        Flink = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v9[1].Blink->Flink[20].Blink)(v9[1].Blink);
        v9[2].Flink = (struct _LIST_ENTRY *)Flink;
      }
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)this);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v9 = i - 14;
        if ( i[2].Flink == v20 )
          goto LABEL_5;
      }
    }
  }
  if ( this[90] && !*((_BYTE *)this + 914) )
  {
    Bounds = CWindowNode::EnsureEffectiveSpriteClip((CWindowNode *)this);
    v12 = Bounds;
    if ( Bounds < 0 )
    {
      v37 = 2109;
      goto LABEL_47;
    }
    if ( Flink )
      v15 = *(_DWORD *)(Flink + 24);
    else
      v15 = 0;
    Bounds = CWindowNode::RenderImage(
               (struct CWindowNode *)this,
               a2,
               Flink,
               this[90],
               this[113],
               (_DWORD *)this + 205,
               v15,
               v5,
               0,
               0,
               0LL);
    v12 = Bounds;
    if ( Bounds < 0 )
    {
      v37 = 2118;
      goto LABEL_47;
    }
    v16 = this[90];
    v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 192LL);
    if ( (char *)v17 == (char *)CGdiSpriteBitmap::NeedsConfirmUpdateId )
      updated = CGdiSpriteBitmap::NeedsConfirmUpdateId(v16);
    else
      updated = v17();
    if ( updated )
    {
      v23 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(struct IImageSource *))(*(_QWORD *)this[90] + 200LL))(this[90]);
      Bounds = FRAME_TIME_INFO::AddTokenForRenderContent(*((FRAME_TIME_INFO **)this[2] + 47), v23);
      v12 = Bounds;
      if ( Bounds < 0 )
      {
        v37 = 2122;
LABEL_47:
        v24 = Bounds;
LABEL_48:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v37);
LABEL_50:
        v7 = 0;
        goto LABEL_13;
      }
    }
  }
  v10 = this[108];
  if ( v10 )
  {
    if ( *((_BYTE *)this[2] + 1344) && (v25 = *((_QWORD *)v10 + 12)) != 0 && (*(_BYTE *)(v25 + 268) & 2) != 0 )
    {
      CWindowNode::GetDxClipShape(this, &v40);
      v26 = v40;
      v44[0] = &CRectanglesShape::`vftable';
      v44[2] = v47;
      v44[3] = v47;
      v44[1] = 0LL;
      v45 = 1;
      v46 = 1LL;
      v48 = 0LL;
      if ( !v40 )
      {
        v43.r = 0.0;
        v43.g = 0.0;
        v27 = 0;
        if ( *((_DWORD *)this + 174) - *((_DWORD *)this + 172) >= 0 )
          v27 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
        v28 = _mm_cvtsi32_si128(v27);
        v29 = 0;
        LODWORD(v30) = _mm_cvtepi32_ps(v28).m128_u32[0];
        if ( *((_DWORD *)this + 175) - *((_DWORD *)this + 173) >= 0 )
          v29 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
        v43.b = v30;
        v43.a = (float)v29;
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v44, (const struct MilRectF *)&v43);
        CShapePtr::Release(&v40);
        v26 = (const struct CShape *)v44;
        v41 = 0;
        v40 = (CRectanglesShape *)v44;
      }
      v31 = CWindowNode::RenderBlackShape((CWindowNode *)this, a2, v26);
      v12 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x87Du);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v44);
        CShapePtr::Release(&v40);
        goto LABEL_50;
      }
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v44);
      CShapePtr::Release(&v40);
    }
    else
    {
      v32 = *((_QWORD *)v10 + 12);
      if ( v32 )
        v6 = *(_DWORD *)(v32 + 168);
      v38 = v6 == 1;
      Bounds = CCompositionSurfaceBitmap::GetBounds(v10, 0LL, 0LL, (__int64)&v43);
      v12 = Bounds;
      if ( Bounds < 0 )
      {
        v37 = 2135;
        goto LABEL_47;
      }
      v33 = this[108];
      if ( v6 == 1 )
        *(struct _D3DCOLORVALUE *)&v43.r = *(struct _D3DCOLORVALUE *)&CCompositionSurfaceBitmap::GetBorderColor(
                                                                        (struct IImageSource *)((char *)v33 + 56),
                                                                        &v43)->r;
      v34 = &v43;
      if ( v6 != 1 )
        v34 = 0LL;
      v39 = v6 != 1;
      if ( Flink )
        v35 = *(_DWORD *)(Flink + 32);
      else
        v35 = 0;
      DxClipShape = (CRectanglesShape **)CWindowNode::GetDxClipShape(this, &v40);
      v12 = CWindowNode::RenderImage(
              (struct CWindowNode *)this,
              a2,
              Flink,
              (struct IImageSource *)(((unsigned __int64)v33 + 64) & -(__int64)(v33 != 0LL)),
              *DxClipShape,
              0LL,
              v35,
              v5,
              v39,
              v38,
              v34);
      CShapePtr::Release(&v40);
      if ( v12 < 0 )
      {
        v37 = 2151;
        v24 = v12;
        goto LABEL_48;
      }
    }
  }
  v11 = CVisual::RenderContent((CVisual *)this, a2, 0LL);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x881u);
  v7 = 0;
LABEL_13:
  if ( v42 && v7 )
    *v42 = 1;
  return (unsigned int)v12;
}
