/*
 * XREFs of ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A9D0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x18003454C (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x180037CA0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180054900 (-NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800B0F54 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180143E5C (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z @ 0x180162730 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180162AFC (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCShape@@@Z @ 0x180162C08 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderContent(CWindowNode *this, struct CDrawingContext *a2, bool *a3)
{
  BOOL v3; // r12d
  unsigned int v4; // r15d
  char v7; // r14
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v9; // rbx
  CCompositionSurfaceBitmap *v10; // rcx
  unsigned int v11; // ebx
  CFlipChain *v12; // rcx
  int v13; // eax
  int Bounds; // edi
  int v16; // eax
  unsigned int Blink; // edx
  CGdiSpriteBitmap *v18; // rcx
  __int64 (*v19)(void); // rax
  char updated; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v22; // r10
  struct _LIST_ENTRY *i; // rcx
  int v24; // eax
  const struct ConfirmPresentHistoryToken *v25; // rax
  int v26; // r9d
  __int64 v27; // rax
  struct CShape *v28; // r8
  unsigned int v29; // eax
  __m128i v30; // xmm0
  int v31; // eax
  D3DVALUE v32; // xmm0_4
  int v33; // eax
  __int64 v34; // rax
  int v35; // r15d
  struct _D3DCOLORVALUE *v36; // r12
  unsigned int Flink_high; // r15d
  __int64 v38; // rdi
  CRectanglesShape **DxClipShape; // rax
  int LastKnownGoodDxClipShape; // eax
  unsigned int Blink_high; // r8d
  int v42; // eax
  __int64 v43; // rdi
  CRectanglesShape **v44; // rax
  unsigned int v45; // [rsp+20h] [rbp-E0h]
  char v46; // [rsp+81h] [rbp-7Fh]
  char v47; // [rsp+82h] [rbp-7Eh]
  CRectanglesShape *v48; // [rsp+88h] [rbp-78h] BYREF
  char v49; // [rsp+90h] [rbp-70h]
  BOOL v50; // [rsp+98h] [rbp-68h]
  bool *v51; // [rsp+A0h] [rbp-60h]
  _D3DCOLORVALUE v52; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v53[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v54; // [rsp+D8h] [rbp-28h]
  __int64 v55; // [rsp+DCh] [rbp-24h]
  _BYTE v56[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v57; // [rsp+F8h] [rbp-8h]

  v4 = 0;
  v51 = a3;
  LOBYTE(v3) = 0;
  v50 = v3;
  if ( (*((_QWORD *)this + 112) || *((_QWORD *)this + 115)) && *((_BYTE *)this + 990) )
  {
    CWindowNode::GetDxClipShape(this, &v52);
    if ( *(_QWORD *)&v52.r )
    {
      v3 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v52.r + 16LL))(*(_QWORD *)&v52.r) == 0;
      v50 = v3;
    }
    CShapePtr::Release((CShapePtr *)&v52);
  }
  v7 = 0;
  if ( !*((_BYTE *)this + 989) )
  {
LABEL_4:
    Flink = 0LL;
    if ( *(_BYTE *)(*((_QWORD *)a2 + 808) + 32LL) )
    {
      v9 = (struct _LIST_ENTRY *)((char *)this + 264);
LABEL_6:
      if ( v9 )
      {
        if ( !v9[2].Flink )
          v9[2].Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v9[1].Blink->Flink[17].Blink)(v9[1].Blink);
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
          if ( i[2].Flink == v22 )
            goto LABEL_6;
        }
      }
    }
    if ( *((_QWORD *)this + 95) && !*((_BYTE *)this + 986) )
    {
      v16 = CWindowNode::EnsureEffectiveSpriteClip(this);
      Bounds = v16;
      if ( v16 < 0 )
      {
        v45 = 2845;
        goto LABEL_49;
      }
      if ( Flink )
        Blink = (unsigned int)Flink[1].Blink;
      else
        Blink = 0;
      v16 = CWindowNode::RenderImage(
              this,
              (__int64)a2,
              (__int64)Flink,
              *((struct IImageSource **)this + 95),
              *((CRectanglesShape **)this + 121),
              *((_DWORD *)this + 219),
              (__int64)this + 824,
              (_DWORD *)this + 215,
              Blink,
              v3,
              0,
              0,
              0LL);
      Bounds = v16;
      if ( v16 < 0 )
      {
        v45 = 2856;
        goto LABEL_49;
      }
      v18 = (CGdiSpriteBitmap *)*((_QWORD *)this + 95);
      v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 184LL);
      if ( (char *)v19 == (char *)CGdiSpriteBitmap::NeedsConfirmUpdateId )
        updated = CGdiSpriteBitmap::NeedsConfirmUpdateId(v18);
      else
        updated = v19();
      if ( updated )
      {
        v25 = (const struct ConfirmPresentHistoryToken *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 95)
                                                                                           + 192LL))(*((_QWORD *)this + 95));
        v16 = FRAME_TIME_INFO::AddTokenForRenderContent(*(FRAME_TIME_INFO **)(*((_QWORD *)this + 2) + 392LL), v25);
        Bounds = v16;
        if ( v16 < 0 )
        {
          v45 = 2860;
LABEL_49:
          v26 = v16;
LABEL_51:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v45);
LABEL_54:
          v7 = 0;
          goto LABEL_16;
        }
      }
    }
    v10 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 115);
    v11 = *((_DWORD *)this + 219) & 0xFFFFFFFD;
    if ( v10 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1360LL) )
      {
        v27 = *((_QWORD *)v10 + 59);
        if ( v27 )
        {
          if ( (*(_BYTE *)(v27 + 236) & 2) != 0 )
          {
            CWindowNode::GetDxClipShape(this, &v48);
            v28 = v48;
            v53[0] = &CRectanglesShape::`vftable';
            v53[1] = v56;
            v53[2] = v56;
            v54 = 1;
            v55 = 1LL;
            v57 = 0LL;
            if ( !v48 )
            {
              v52.r = 0.0;
              v52.g = 0.0;
              v29 = 0;
              if ( *((_DWORD *)this + 165) - *((_DWORD *)this + 163) >= 0 )
                v29 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
              v30 = _mm_cvtsi32_si128(v29);
              v31 = 0;
              LODWORD(v32) = _mm_cvtepi32_ps(v30).m128_u32[0];
              if ( *((_DWORD *)this + 166) - *((_DWORD *)this + 164) >= 0 )
                v31 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
              v52.b = v32;
              v52.a = (float)v31;
              CRectanglesShape::SetSingleRect((CRectanglesShape *)v53, (const struct MilRectF *)&v52);
              CShapePtr::Release((CShapePtr *)&v48);
              v28 = (struct CShape *)v53;
              v49 = 0;
              v48 = (CRectanglesShape *)v53;
            }
            v33 = CWindowNode::RenderBlackShape(this, a2, v28);
            Bounds = v33;
            if ( v33 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xB67u);
              CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v53);
LABEL_53:
              CShapePtr::Release((CShapePtr *)&v48);
              goto LABEL_54;
            }
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v53);
            goto LABEL_66;
          }
        }
      }
      v34 = *((_QWORD *)v10 + 59);
      v35 = 1;
      if ( v34 )
        v35 = *(_DWORD *)(v34 + 136);
      v46 = v35 == 1;
      Bounds = CCompositionSurfaceBitmap::GetBounds(v10, 0LL, 0LL, (__int64)&v52);
      if ( Bounds < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xB3Fu);
LABEL_15:
        v7 = 0;
        goto LABEL_16;
      }
      if ( v35 == 1 )
        *(_D3DCOLORVALUE *)&v52.r = *(_D3DCOLORVALUE *)&CCompositionSurfaceBitmap::GetBorderColor(
                                                          (CCompositionSurfaceBitmap *)(*((_QWORD *)this + 115) + 56LL),
                                                          &v52)->r;
      v36 = &v52;
      if ( v35 != 1 )
        v36 = 0LL;
      v47 = v35 != 1;
      if ( Flink )
        Flink_high = HIDWORD(Flink[2].Flink);
      else
        Flink_high = 0;
      v38 = *((_QWORD *)this + 115);
      DxClipShape = (CRectanglesShape **)CWindowNode::GetDxClipShape(this, &v48);
      Bounds = CWindowNode::RenderImage(
                 this,
                 (__int64)a2,
                 (__int64)Flink,
                 (struct IImageSource *)((v38 + 64) & -(__int64)(v38 != 0)),
                 *DxClipShape,
                 v11,
                 0LL,
                 0LL,
                 Flink_high,
                 v50,
                 v47,
                 v46,
                 v36);
      CShapePtr::Release((CShapePtr *)&v48);
      if ( Bounds >= 0 )
      {
LABEL_13:
        v13 = CVisual::RenderContent(this, a2, 0LL);
        Bounds = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xBABu);
        goto LABEL_15;
      }
      v45 = 2897;
    }
    else
    {
      v12 = (CFlipChain *)*((_QWORD *)this + 112);
      if ( !v12 )
        goto LABEL_13;
      if ( !CFlipChain::DisplayBufferReady(v12) && *((_QWORD *)this + 113) )
      {
        v48 = 0LL;
        v49 = 0;
        LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, (struct CShapePtr *)&v48);
        Bounds = LastKnownGoodDxClipShape;
        if ( LastKnownGoodDxClipShape < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, LastKnownGoodDxClipShape, 0xB9Cu);
          goto LABEL_53;
        }
        if ( Flink )
          Blink_high = HIDWORD(Flink[1].Blink);
        else
          Blink_high = 0;
        v42 = CWindowNode::RenderImage(
                this,
                (__int64)a2,
                (__int64)Flink,
                (struct IImageSource *)((*((_QWORD *)this + 113) + 8LL) & -(__int64)(*((_QWORD *)this + 113) != 0LL)),
                v48,
                v11,
                0LL,
                (_DWORD *)this + 215,
                Blink_high,
                v3,
                0,
                0,
                0LL);
        Bounds = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xBA7u);
          goto LABEL_53;
        }
LABEL_66:
        CShapePtr::Release((CShapePtr *)&v48);
        goto LABEL_13;
      }
      CResource::UnRegisterNotifier<CImageSource *>(this, (struct CResource **)this + 113);
      if ( Flink )
        v4 = HIDWORD(Flink[1].Blink);
      v43 = *((_QWORD *)this + 112);
      v44 = (CRectanglesShape **)CWindowNode::GetDxClipShape(this, &v52);
      Bounds = CWindowNode::RenderImage(
                 this,
                 (__int64)a2,
                 (__int64)Flink,
                 (struct IImageSource *)((v43 + 8) & -(__int64)(v43 != 0)),
                 *v44,
                 v11,
                 0LL,
                 (_DWORD *)this + 215,
                 v4,
                 v3,
                 0,
                 0,
                 0LL);
      CShapePtr::Release((CShapePtr *)&v52);
      if ( Bounds >= 0 )
        goto LABEL_13;
      v45 = 2955;
    }
    v26 = Bounds;
    goto LABEL_51;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 1360LL) )
  {
    *((_BYTE *)a2 + 6776) = 1;
    goto LABEL_4;
  }
  v24 = CWindowNode::RenderBlackContent(this, a2);
  Bounds = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xAFFu);
  else
    v7 = 1;
LABEL_16:
  if ( v51 && v7 )
    *v51 = 1;
  return (unsigned int)Bounds;
}
