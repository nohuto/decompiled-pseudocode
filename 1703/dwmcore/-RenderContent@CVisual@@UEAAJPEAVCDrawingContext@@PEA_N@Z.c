/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C920 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180008C70 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AD00 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?ShouldUseDrawListRenderPath@CCompositionSurfaceBitmap@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18000B1D0 (-ShouldUseDrawListRenderPath@CCompositionSurfaceBitmap@@UEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000B310 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C380 (-DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18000C700 (-ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C830 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18000F62C (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800105A0 (-Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMil.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180010B50 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010E20 (-PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180010EA0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180038B00 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180038C00 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800393D0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180039790 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180039830 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x180077010 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18008ADF0 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18008B900 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008CAD0 (-PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x180092B20 (--_ECDirtyRegion@@UEAAPEAXI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1800A6148 (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800AB150 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x1800AB6D0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AED48 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AEEA0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800BF9F0 (-PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800BFA40 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     Template_pffffss @ 0x180161250 (Template_pffffss.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, unsigned __int64 a2, bool *a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rcx
  struct CDrawingContext *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r15d
  CRenderData *v9; // rdi
  volatile signed __int32 *v10; // r12
  struct D2D_SIZE_F *v11; // r13
  __int64 (__fastcall *v12)(CPrimitiveGroup *, struct CDrawingContext *); // rax
  char ShouldUseDrawListRenderPath; // al
  __int64 v14; // r10
  int v15; // r14d
  __int64 v16; // r11
  struct _LIST_ENTRY *v17; // r13
  struct _LIST_ENTRY *v18; // rax
  int v19; // r8d
  unsigned int Blink; // r9d
  __int64 v21; // r10
  struct _LIST_ENTRY *v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 (__fastcall *v25)(CCompositionSurfaceBitmap *, __int64, __int64, __int64, __int64, __int64); // r10
  float width; // xmm0_4
  char (__fastcall *v27)(CEffectBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  __int64 (__fastcall *v29)(CSurfaceBrush *, struct CDrawingContext *); // rax
  int v30; // eax
  int v31; // r14d
  __int64 (__fastcall *v32)(CEffectBrush *, char); // rax
  int v33; // eax
  int v34; // eax
  unsigned int (__fastcall *v35)(CMILRefCountBase *__hidden); // rax
  __int64 (__fastcall *v37)(CRenderData *, struct CDrawingContext *, struct D2D_SIZE_F *, bool *, __int64 *); // rax
  int v38; // eax
  unsigned int *i; // rcx
  __int64 v40; // rax
  struct D2D_SIZE_F *v41; // r8
  int v42; // eax
  CPrimitiveGroupDrawListGenerator *(__fastcall *v43)(CPrimitiveGroupDrawListGenerator *, char); // rax
  char *v44; // rax
  __int64 v45; // r10
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v52; // r10
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v54; // rcx
  int v55; // eax
  const struct CMILMatrix *TopByReference; // rax
  __int64 j; // rdi
  int v58; // eax
  int v59; // eax
  float v60; // xmm0_4
  float v61; // xmm1_4
  float v62; // xmm2_4
  float v63; // xmm3_4
  int v64; // eax
  const char *v65; // r14
  const char *v66; // rdi
  char v67; // r12
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // edx
  int v71; // ecx
  int v72; // r9d
  unsigned int v73; // [rsp+20h] [rbp-99h]
  bool v74; // [rsp+50h] [rbp-69h] BYREF
  bool v75[3]; // [rsp+51h] [rbp-68h] BYREF
  unsigned int v76; // [rsp+54h] [rbp-65h]
  struct _LIST_ENTRY *v77; // [rsp+58h] [rbp-61h]
  __int64 v78; // [rsp+60h] [rbp-59h]
  __int128 v79; // [rsp+68h] [rbp-51h] BYREF
  __int64 v80; // [rsp+78h] [rbp-41h]
  __int64 v81[2]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v82; // [rsp+90h] [rbp-29h] BYREF
  float v83; // [rsp+98h] [rbp-21h]
  float v84; // [rsp+9Ch] [rbp-1Dh]
  _BYTE v85[16]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v86[16]; // [rsp+B0h] [rbp-9h] BYREF

  v3 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  v5 = *((_QWORD *)this + 2);
  v6 = (struct CDrawingContext *)a2;
  v76 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *(_QWORD *)(v5 + 400) != *((_QWORD *)this + 27) )
  {
    v7 = *((_QWORD *)this + 26);
    if ( (*(_DWORD *)(v7 + 4) & 0x20000) != 0 )
    {
      a2 = *(unsigned int *)(v7 + 12);
      for ( i = (unsigned int *)(v7 + 12); (*i & 0x7F000000) != 0xF000000; a2 = *i )
        i = (unsigned int *)((char *)i + (a2 & 0xFFFFFF) + 4);
      v78 = *(_QWORD *)(i + 1);
      v40 = v78;
      if ( v78 )
      {
        *(_DWORD *)(v78 + 64) = 0;
        *(_QWORD *)(v40 + 68) = 1LL;
      }
    }
    *((_BYTE *)this + 90) &= ~1u;
  }
  v8 = 0;
  if ( *((_BYTE *)v6 + 6772) )
  {
    if ( qword_18023E528 )
    {
      a3 = (bool *)*((unsigned int *)qword_18023E528 + 18);
      a2 = 0LL;
      if ( (_DWORD)a3 )
      {
        while ( 1 )
        {
          v54 = *(_QWORD *)(*((_QWORD *)qword_18023E528 + 6) + 8 * a2);
          if ( *(_BYTE *)(v54 + 299) || *(_BYTE *)(v54 + 298) || *(_BYTE *)(v54 + 212) || *(_DWORD *)(v54 + 208) )
            break;
          a2 = (unsigned int)(a2 + 1);
          if ( (unsigned int)a2 >= (unsigned int)a3 )
            goto LABEL_5;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 34LL) )
        {
          v55 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, _BYTE *))(*(_QWORD *)this + 152LL))(
                  this,
                  *((_QWORD *)v6 + 496),
                  v85);
          v8 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0x1F58u);
          }
          else
          {
            TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)v6 + 472));
            CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, v85, v86);
            for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 1658); j = (unsigned int)(j + 1) )
              CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)v6 + 826) + 8 * j), v86, v6);
          }
        }
      }
    }
  }
LABEL_5:
  if ( (v8 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xD1Du);
    goto LABEL_52;
  }
  v9 = (CRenderData *)*((_QWORD *)this + 30);
  if ( v9 )
  {
    v10 = 0LL;
    v74 = 0;
    v11 = (struct D2D_SIZE_F *)((char *)this + 128);
    *(_OWORD *)v81 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( *((_BYTE *)v6 + 3040)
      || *((_QWORD *)v6 + 838)
      || ((v12 = *(__int64 (__fastcall **)(CPrimitiveGroup *, struct CDrawingContext *))(*(_QWORD *)v9 + 192LL),
           v12 == CPrimitiveGroup::ShouldUseDrawListRenderPath)
        ? (ShouldUseDrawListRenderPath = CPrimitiveGroup::ShouldUseDrawListRenderPath(v9, v6))
        : v12 == CCompositionSurfaceBitmap::ShouldUseDrawListRenderPath
        ? (ShouldUseDrawListRenderPath = CCompositionSurfaceBitmap::ShouldUseDrawListRenderPath(v9, v6))
        : (ShouldUseDrawListRenderPath = ((__int64 (__fastcall *)(CRenderData *, struct CDrawingContext *, bool *))v12)(
                                           v9,
                                           v6,
                                           a3)),
          !ShouldUseDrawListRenderPath) )
    {
      v37 = *(__int64 (__fastcall **)(CRenderData *, struct CDrawingContext *, struct D2D_SIZE_F *, bool *, __int64 *))(*(_QWORD *)v9 + 144LL);
      if ( (char *)v37 == (char *)CRenderData::Draw )
      {
        v38 = CRenderData::Draw(v9, v6);
      }
      else
      {
        v41 = (struct D2D_SIZE_F *)((char *)this + 128);
        if ( (char *)v37 == (char *)CPrimitiveGroup::Draw )
        {
          v38 = CPrimitiveGroup::Draw(v9, (__int64)v6, v41, &v74, (float *)v81);
        }
        else if ( (char *)v37 == (char *)CAtlasedRectsGroup::Draw )
        {
          v38 = CAtlasedRectsGroup::Draw(v9, v6, v41, &v74, v81);
        }
        else if ( (char *)v37 == (char *)CCompositionSurfaceBitmap::Draw )
        {
          v38 = CCompositionSurfaceBitmap::Draw(v9, (__int64)v6, v41, (unsigned __int64)&v74, (__int64)v81);
        }
        else if ( (char *)v37 == (char *)CSpriteVisualContent::Draw )
        {
          v38 = CSpriteVisualContent::Draw(v9, v6, (__int64)v41, (__int64)&v74, (__int64)v81);
        }
        else
        {
          v38 = v37(v9, v6, v41, &v74, v81);
        }
      }
      if ( v38 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xDEAu);
      goto LABEL_50;
    }
    if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)v6 + 6774) || *((_QWORD *)v6 + 405) )
    {
LABEL_30:
      v24 = *(_QWORD *)v9;
      v25 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 216LL);
      if ( (char *)v25 != (char *)CSpriteVisualContent::DrawAsDrawList )
      {
        if ( (char *)v25 == (char *)CSurfaceBrush::DrawAsDrawList )
        {
          v42 = CSurfaceBrush::DrawAsDrawList(
                  v9,
                  (COverlayContext **)v6,
                  v11,
                  (__int64)&v74,
                  (__int64)v81,
                  (__int64)v10);
        }
        else
        {
          if ( v25 == CCompositionSurfaceBitmap::DrawAsDrawList )
          {
            v31 = CCompositionSurfaceBitmap::DrawAsDrawList(
                    v9,
                    (__int64)v6,
                    (__int64)v11,
                    (__int64)&v74,
                    (__int64)v81,
                    (__int64)v10);
            goto LABEL_45;
          }
          if ( v25 == CPrimitiveGroup::DrawAsDrawList )
          {
            v31 = CPrimitiveGroup::DrawAsDrawList(
                    v9,
                    (__int64)v6,
                    (__int64)v11,
                    (__int64)&v74,
                    (__int64)v81,
                    (__int64)v10);
            goto LABEL_45;
          }
          v42 = ((__int64 (__fastcall *)(CRenderData *, struct CDrawingContext *, struct D2D_SIZE_F *, bool *))v25)(
                  v9,
                  v6,
                  v11,
                  &v74);
        }
        v31 = v42;
        goto LABEL_45;
      }
      width = v11->width;
      v75[0] = 0;
      if ( width <= 0.0 || v11->height <= 0.0 )
        goto LABEL_44;
      v27 = *(char (__fastcall **)(CEffectBrush *, struct CDrawingContext *, bool *))(v24 + 224);
      if ( (char *)v27 == (char *)CMaskBrush::IsReadyToDraw )
      {
        IsReadyToDraw = CMaskBrush::IsReadyToDraw(v9, v6, v75);
      }
      else if ( (char *)v27 == (char *)CColorBrush::IsReadyToDraw )
      {
        IsReadyToDraw = CColorBrush::IsReadyToDraw(v9, v6, v75);
      }
      else if ( (char *)v27 == (char *)CNineGridBrush::IsReadyToDraw )
      {
        IsReadyToDraw = CNineGridBrush::IsReadyToDraw(v9, v6, v75);
      }
      else if ( (char *)v27 == (char *)CSurfaceBrush::IsReadyToDraw )
      {
        IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(v9, v6, v75);
      }
      else
      {
        IsReadyToDraw = v27 == CEffectBrush::IsReadyToDraw ? CEffectBrush::IsReadyToDraw(v9, v6, v75) : v27(v9, v6, v75);
      }
      if ( !IsReadyToDraw || v75[0] )
        goto LABEL_44;
      v29 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *))(*(_QWORD *)v9 + 232LL);
      if ( v29 == CMaskBrush::PrepareForDrawing )
      {
        v30 = CMaskBrush::PrepareForDrawing(v9, v6);
      }
      else if ( v29 == CSpriteVisualContent::PrepareForDrawing )
      {
        v30 = CSpriteVisualContent::PrepareForDrawing(v9, v6);
      }
      else if ( v29 == CNineGridBrush::PrepareForDrawing )
      {
        v30 = CNineGridBrush::PrepareForDrawing(v9, v6);
      }
      else if ( v29 == CSurfaceBrush::PrepareForDrawing )
      {
        v30 = CSurfaceBrush::PrepareForDrawing(v9, v6);
      }
      else if ( v29 == CEffectBrush::PrepareForDrawing )
      {
        v30 = CEffectBrush::PrepareForDrawing(v9, v6);
      }
      else
      {
        v30 = v29(v9, v6);
      }
      v31 = v30;
      if ( v30 < 0 )
      {
        v73 = 119;
      }
      else
      {
        v32 = *(__int64 (__fastcall **)(CEffectBrush *, char))(*(_QWORD *)v9 + 256LL);
        if ( v32 == CMaskBrush::EnsureBrushGraph )
        {
          v33 = CMaskBrush::EnsureBrushGraph(v9, 0);
        }
        else if ( v32 == CEffectBrush::EnsureBrushGraph )
        {
          v33 = CEffectBrush::EnsureBrushGraph(v9, 0);
        }
        else
        {
          v33 = v32(v9, 0);
        }
        v31 = v33;
        if ( v33 >= 0 )
        {
          v34 = CContent::DrawAsDrawList(v9, v6, v11, (int)v81, (CDrawListCache *)v10);
          v31 = v34;
          if ( v34 >= 0 )
          {
LABEL_44:
            v31 = 0;
            goto LABEL_45;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x7Cu);
LABEL_45:
          if ( v31 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xDE2u);
          goto LABEL_47;
        }
        v73 = 122;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, v73);
      goto LABEL_45;
    }
    v14 = *((_QWORD *)v6 + 808);
    v15 = -2003292412;
    v16 = *((_QWORD *)v6 + 46);
    v82 = v16;
    if ( *(_BYTE *)(v14 + 32) )
    {
      v17 = (struct _LIST_ENTRY *)((char *)this + 264);
      v77 = (struct _LIST_ENTRY *)((char *)this + 264);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_154;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_154;
      while ( 1 )
      {
        v17 = Flink - 14;
        v77 = Flink - 14;
        if ( Flink[2].Flink == v52 )
          break;
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_154;
      }
    }
    if ( !v17 )
    {
LABEL_154:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xDDAu);
LABEL_47:
      if ( v10 )
      {
        v35 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v10 + 8LL);
        if ( v35 == CMILRefCountBase::Release )
        {
          if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
          {
            v43 = *(CPrimitiveGroupDrawListGenerator *(__fastcall **)(CPrimitiveGroupDrawListGenerator *, char))(*(_QWORD *)v10 + 16LL);
            if ( (char *)v43 == (char *)CDirtyRegion::`vector deleting destructor' )
            {
              CDirtyRegion::`vector deleting destructor'((CDirtyRegion *)v10, 1u);
            }
            else if ( (char *)v43 == (char *)CHWDrawListEntry::`scalar deleting destructor' )
            {
              CHWDrawListEntry::`scalar deleting destructor'((CHWDrawListEntry *)v10, 1u);
            }
            else if ( v43 == CCommonRenderingEffect::`scalar deleting destructor' )
            {
              CCommonRenderingEffect::`scalar deleting destructor'((CCommonRenderingEffect *)v10, 1);
            }
            else if ( (char *)v43 == (char *)CDrawListCache::`scalar deleting destructor' )
            {
              CDrawListCache::`scalar deleting destructor'((CDrawListCache *)v10, 1u);
            }
            else if ( v43 == CPrimitiveGroupDrawListGenerator::`scalar deleting destructor' )
            {
              CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'((CPrimitiveGroupDrawListGenerator *)v10, 1);
            }
            else
            {
              v43((CPrimitiveGroupDrawListGenerator *)v10, 1);
            }
          }
        }
        else
        {
          v35((CMILRefCountBase *)v10);
        }
      }
LABEL_50:
      if ( v74 && qword_18023E528 && CDisplaySet::NeedsDesktopMoves(qword_18023E528) )
      {
        v59 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, __int64 *))(*(_QWORD *)this + 152LL))(
                this,
                *((_QWORD *)v6 + 496),
                &v82);
        v8 = v59;
        if ( v59 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xD39u);
        }
        else
        {
          v60 = *(float *)v81;
          if ( *(float *)&v82 > *(float *)v81 )
          {
            LODWORD(v81[0]) = v82;
            v60 = *(float *)&v82;
          }
          v61 = *((float *)v81 + 1);
          if ( *((float *)&v82 + 1) > *((float *)v81 + 1) )
          {
            HIDWORD(v81[0]) = HIDWORD(v82);
            v61 = *((float *)&v82 + 1);
          }
          v62 = *(float *)&v81[1];
          if ( *(float *)&v81[1] > v83 )
          {
            *(float *)&v81[1] = v83;
            v62 = v83;
          }
          v63 = *((float *)&v81[1] + 1);
          if ( *((float *)&v81[1] + 1) > v84 )
          {
            *((float *)&v81[1] + 1) = v84;
            v63 = v84;
          }
          if ( v62 <= v60 || v63 <= v61 )
          {
            v81[1] = 0LL;
            v81[0] = 0LL;
          }
          if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 224LL))(this) )
            CDrawingContext::RecordVisualMove(v6, this);
          v64 = CDrawingContext::VisualWasRendered(v6, v81, this);
          v8 = v64;
          if ( v64 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0xD49u);
        }
      }
      v3 = v76;
      goto LABEL_52;
    }
    v18 = v17[8].Flink;
    v19 = 0;
    if ( v18 )
    {
      Blink = (unsigned int)v18[1].Blink;
      v21 = 0LL;
      if ( Blink )
      {
        v22 = v18->Flink;
        while ( *((CRenderData **)&v22->Flink + 3 * v21) != v9 || *((_QWORD *)&v22->Blink + 3 * v21) != v16 )
        {
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= Blink )
            goto LABEL_100;
        }
        v23 = (__int64)v22 + 24 * v21;
        if ( v23 )
        {
LABEL_25:
          v15 = v19;
          if ( v19 >= 0 )
          {
            if ( *(_QWORD *)(v23 + 16)
              || (v50 = CDrawListCache::Create((struct CDrawListCache **)(v23 + 16)), v15 = v50, v50 >= 0) )
            {
              v10 = *(volatile signed __int32 **)(v23 + 16);
              (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x153u);
            }
            goto LABEL_28;
          }
LABEL_147:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x14Fu);
LABEL_28:
          if ( v15 >= 0 )
          {
            v11 = (struct D2D_SIZE_F *)((char *)this + 128);
            goto LABEL_30;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x7Fu);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x5D2u);
          goto LABEL_154;
        }
        v17 = v77;
      }
    }
    else
    {
      v44 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
      if ( v44 )
      {
        *((_DWORD *)v44 + 4) = 2;
        *(_QWORD *)v44 = v44 + 32;
        *((_QWORD *)v44 + 1) = v44 + 32;
        *(_QWORD *)(v44 + 20) = 2LL;
      }
      v17[8].Flink = (struct _LIST_ENTRY *)v44;
      if ( !v44 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12Fu);
        v19 = -2147024882;
        v15 = -2147024882;
        goto LABEL_147;
      }
      v16 = v82;
    }
LABEL_100:
    v45 = (__int64)v17[8].Flink;
    v19 = 0;
    *(_QWORD *)&v79 = v9;
    *((_QWORD *)&v79 + 1) = v16;
    v80 = 0LL;
    v46 = *(unsigned int *)(v45 + 24);
    v47 = v46 + 1;
    if ( (int)v46 + 1 < (unsigned int)v46 )
    {
      LODWORD(v77) = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v19 = -2147024362;
    }
    else
    {
      if ( v47 <= *(_DWORD *)(v45 + 20) )
      {
        v48 = 3 * v46;
        v49 = *(_QWORD *)v45;
        *(_OWORD *)(v49 + 8 * v48) = v79;
        *(_QWORD *)(v49 + 8 * v48 + 16) = v80;
        *(_DWORD *)(v45 + 24) = v47;
        goto LABEL_103;
      }
      v58 = DynArrayImpl<0>::AddMultipleAndSet(v45, 0x18u, 1, &v79);
      LODWORD(v77) = v58;
      v19 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0xC0u);
        v19 = (int)v77;
      }
    }
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x137u);
      v19 = (int)v77;
      v23 = v82;
      goto LABEL_25;
    }
LABEL_103:
    v23 = (__int64)v17[8].Flink->Flink + 24 * (unsigned int)(LODWORD(v17[8].Flink[1].Blink) - 1);
    goto LABEL_25;
  }
LABEL_52:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0
    || !(*(unsigned __int8 (__fastcall **)(CVisual *, unsigned __int64, bool *))(*(_QWORD *)this + 184LL))(this, a2, a3) )
  {
    return v8;
  }
  v65 = (const char *)&word_1801EA0DE;
  v66 = (const char *)&word_1801EA0DE;
  v67 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 34LL) )
  {
    v65 = "Window";
    goto LABEL_210;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 32LL) )
    v65 = "Sprite";
  else
    v67 = 0;
  v69 = *((_QWORD *)this + 30);
  if ( !v69 )
    goto LABEL_210;
  if ( v3 != CCachedVisualImage::s_CVIEnsureBitmapCount )
  {
    v66 = "CVI";
    goto LABEL_210;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v69 + 48LL))(v69, 102LL) )
  {
    v66 = "PG";
    goto LABEL_209;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
         *((_QWORD *)this + 30),
         35LL) )
  {
    v66 = "RD";
    goto LABEL_209;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
         *((_QWORD *)this + 30),
         97LL) )
  {
    v66 = "CS";
    goto LABEL_209;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
         *((_QWORD *)this + 30),
         99LL) )
  {
    v66 = "HWnd";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              105LL) )
  {
    v66 = "YCbCr";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              106LL) )
  {
    v66 = "Snap";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              120LL) )
  {
    v66 = "CoR";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              121LL) )
  {
    v66 = "Ink";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              122LL) )
  {
    v66 = "Pen";
  }
  else if ( !v67 )
  {
LABEL_209:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) == 0 )
      return v8;
  }
LABEL_210:
  CDrawingContext::EtwLogCurrentState(v6, v68);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    Template_pffffss(
      v71,
      v70,
      (_DWORD)this,
      v72,
      *((_DWORD *)this + 41),
      *((_DWORD *)this + 42),
      *((_DWORD *)this + 43),
      (__int64)v65,
      (__int64)v66);
  return v8;
}
