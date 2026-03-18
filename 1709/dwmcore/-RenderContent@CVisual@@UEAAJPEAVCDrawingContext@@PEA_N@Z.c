/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180022550 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x18001F270 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x1800236A0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180023CF0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180025750 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z @ 0x180027DC0 (-ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028200 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800293F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ??_GCBackdropRegion@@UEAAPEAXI@Z @ 0x180030B50 (--_GCBackdropRegion@@UEAAPEAXI@Z.c)
 *     ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x1800341D0 (--_ECDirtyRegion@@UEAAPEAXI@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18003B160 (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x1800407E0 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18006ABC0 (-DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800B2960 (-GetCache@CDrawListCacheSet@@QEAAJIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18013EA64 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18017709C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     McTemplateU0pffffss @ 0x180178170 (McTemplateU0pffffss.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  struct CDrawingContext *v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // r15d
  CSpriteVisualContent *v10; // r14
  bool (__fastcall *v11)(CPrimitiveGroup *, struct CDrawingContext *); // rax
  char ShouldUseDrawListRenderPath; // al
  int v13; // r12d
  struct _LIST_ENTRY *v14; // rcx
  int Cache; // eax
  struct D2D_SIZE_F *v16; // r8
  __int64 (__usercall *v17)@<rax>(CSpriteVisualContent *@<rcx>, struct CDrawingContext *@<rdx>, struct D2D_SIZE_F *@<r8>, int, struct CDrawListCache *); // rax
  int v18; // eax
  __int64 (__fastcall *v19)(CMILRefCountBase *); // rax
  __int64 (__fastcall *v21)(CSpriteVisualContent *, struct CDrawingContext *, struct D2D_SIZE_F *, bool *, __int64 *); // rax
  int v22; // eax
  unsigned int *i; // rcx
  __int64 v24; // rax
  CDrawListCache *(__fastcall *v25)(CDrawListCache *, char); // rax
  struct D2D_SIZE_F *v26; // r8
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v28; // r10
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v30; // ecx
  int v31; // eax
  const struct CMILMatrix *TopByReference; // rax
  unsigned int j; // r14d
  int v34; // eax
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm3_4
  int v39; // eax
  const char *v40; // r14
  const char *v41; // rbx
  char v42; // r12
  __int64 v43; // rcx
  int v44; // edx
  int v45; // ecx
  int v46; // r9d
  bool v47[4]; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v48; // [rsp+54h] [rbp-35h]
  CBackdropRegion *v49; // [rsp+58h] [rbp-31h] BYREF
  __int64 v50; // [rsp+60h] [rbp-29h]
  __int64 v51[2]; // [rsp+68h] [rbp-21h] BYREF
  float v52; // [rsp+78h] [rbp-11h] BYREF
  float v53; // [rsp+7Ch] [rbp-Dh]
  float v54; // [rsp+80h] [rbp-9h]
  float v55; // [rsp+84h] [rbp-5h]
  _BYTE v56[16]; // [rsp+88h] [rbp-1h] BYREF
  _BYTE v57[16]; // [rsp+98h] [rbp+Fh] BYREF

  v3 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = a2;
  v48 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *(_QWORD *)(v5 + 360) != *((_QWORD *)this + 27) )
  {
    v8 = *((_QWORD *)this + 26);
    if ( (*(_DWORD *)(v8 + 4) & 0x20000) != 0 )
    {
      a2 = (struct CDrawingContext *)*(unsigned int *)(v8 + 12);
      for ( i = (unsigned int *)(v8 + 12); (*i & 0x7F000000) != 0xF000000; a2 = (struct CDrawingContext *)*i )
        i = (unsigned int *)((char *)i + ((unsigned int)a2 & 0xFFFFFF) + 4);
      v50 = *(_QWORD *)(i + 1);
      v24 = v50;
      if ( v50 )
      {
        *(_DWORD *)(v50 + 64) = 0;
        *(_QWORD *)(v24 + 68) = 1LL;
      }
    }
    *((_BYTE *)this + 93) &= ~1u;
  }
  v9 = 0;
  if ( *((_BYTE *)v7 + 6828) )
  {
    if ( qword_18026EEA8 )
    {
      a3 = (bool *)*((unsigned int *)qword_18026EEA8 + 18);
      v30 = 0;
      if ( (_DWORD)a3 )
      {
        while ( 1 )
        {
          a2 = *(struct CDrawingContext **)(*((_QWORD *)qword_18026EEA8 + 6) + 8LL * v30);
          if ( *((_BYTE *)a2 + 309) || *((_BYTE *)a2 + 308) || *((_BYTE *)a2 + 208) )
            break;
          if ( ++v30 >= (unsigned int)a3 )
            goto LABEL_5;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 139LL) )
        {
          v31 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, _BYTE *))(*(_QWORD *)this + 192LL))(
                  this,
                  *((_QWORD *)v7 + 504),
                  v56);
          v9 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1D08u);
          }
          else
          {
            TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)v7 + 480));
            CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, v56, v57);
            for ( j = 0; j < *((_DWORD *)v7 + 1674); ++j )
              CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)v7 + 834) + 8LL * j), v57, v7);
          }
        }
      }
    }
  }
LABEL_5:
  if ( (v9 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xD46u);
    goto LABEL_29;
  }
  v10 = (CSpriteVisualContent *)*((_QWORD *)this + 30);
  if ( v10 )
  {
    v47[0] = 0;
    v49 = 0LL;
    *(_OWORD *)v51 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( *((_BYTE *)v7 + 3136)
      || *((_QWORD *)v7 + 846)
      || ((v11 = *(bool (__fastcall **)(CPrimitiveGroup *, struct CDrawingContext *))(*(_QWORD *)v10 + 208LL),
           v11 == CPrimitiveGroup::ShouldUseDrawListRenderPath)
        ? (ShouldUseDrawListRenderPath = CPrimitiveGroup::ShouldUseDrawListRenderPath(v10, v7))
        : (ShouldUseDrawListRenderPath = ((__int64 (__fastcall *)(CSpriteVisualContent *, struct CDrawingContext *, bool *))v11)(
                                           v10,
                                           v7,
                                           a3)),
          !ShouldUseDrawListRenderPath) )
    {
      v21 = *(__int64 (__fastcall **)(CSpriteVisualContent *, struct CDrawingContext *, struct D2D_SIZE_F *, bool *, __int64 *))(*(_QWORD *)v10 + 160LL);
      if ( (char *)v21 == (char *)CRenderData::Draw )
      {
        if ( *((_BYTE *)v7 + 3136) || *((_QWORD *)v7 + 846) )
          LODWORD(v6) = 1;
        v22 = CRenderData::Draw(v10, (__int64)v7, (int)v6);
      }
      else
      {
        v26 = (struct D2D_SIZE_F *)((char *)this + 132);
        if ( (char *)v21 == (char *)CPrimitiveGroup::Draw )
          v22 = CPrimitiveGroup::Draw(v10, (__int64)v7, v26, v47, (float *)v51);
        else
          v22 = v21(v10, v7, v26, v47, v51);
      }
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v22, 0xE1Au);
      }
      else if ( !*((_BYTE *)v7 + 3136) && !*((_QWORD *)v7 + 846) )
      {
        ++dword_18026EE34;
      }
      goto LABEL_27;
    }
    if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)v7 + 6830) || *((_QWORD *)v7 + 417) )
      goto LABEL_20;
    v13 = -2003292412;
    if ( *(_BYTE *)(*((_QWORD *)v7 + 816) + 32LL) )
    {
      v14 = (struct _LIST_ENTRY *)((char *)this + 280);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_88;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_88;
      while ( 1 )
      {
        v14 = Flink - 14;
        if ( Flink[2].Flink == v28 )
          break;
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_88;
      }
    }
    if ( v14 )
    {
      Cache = CDrawListCacheSet::GetCache((CDrawListCacheSet *)&v14[8], 0, *((struct IRenderTarget **)v7 + 45), &v49);
      v13 = Cache;
      if ( Cache >= 0 )
      {
        v6 = (volatile signed __int32 *)v49;
LABEL_20:
        v16 = (struct D2D_SIZE_F *)((char *)this + 132);
        v17 = *(__int64 (__usercall **)@<rax>(CSpriteVisualContent *@<rcx>, struct CDrawingContext *@<rdx>, struct D2D_SIZE_F *@<r8>, int, struct CDrawListCache *))(*(_QWORD *)v10 + 232LL);
        if ( (char *)v17 == (char *)CSpriteVisualContent::DrawAsDrawList )
        {
          v18 = CSpriteVisualContent::DrawAsDrawList(
                  v10,
                  v7,
                  v16,
                  (__int64)v47,
                  (__int64)v51,
                  (struct CDrawListCache *)v6);
        }
        else if ( (char *)v17 == (char *)CSurfaceBrush::DrawAsDrawList )
        {
          v18 = CSurfaceBrush::DrawAsDrawList(v10, v7, v16, (__int64)v47, (__int64)v51, (struct CDrawListCache *)v6);
        }
        else if ( v17 == CAtlasedRectsGroup::DrawAsDrawList )
        {
          v18 = CAtlasedRectsGroup::DrawAsDrawList(v10, v7, v16, (int)v51, (struct CDrawListCache *)v6);
        }
        else if ( (char *)v17 == (char *)CCompositionSurfaceBitmap::DrawAsDrawList )
        {
          v18 = CCompositionSurfaceBitmap::DrawAsDrawList(
                  v10,
                  v7,
                  v16,
                  (__int64)v47,
                  (int)v51,
                  (struct CDrawListCache *)v6);
        }
        else
        {
          v18 = ((__int64 (__fastcall *)(CSpriteVisualContent *, struct CDrawingContext *, struct D2D_SIZE_F *, bool *, __int64 *))v17)(
                  v10,
                  v7,
                  v16,
                  v47,
                  v51);
        }
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v18, 0xE16u);
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Cache, 0x5FDu);
      v6 = (volatile signed __int32 *)v49;
    }
LABEL_88:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v13, 0xE0Eu);
LABEL_24:
    if ( v6 )
    {
      v19 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v6 + 8LL);
      if ( v19 == CMILRefCountBase::Release )
      {
        if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
        {
          v25 = *(CDrawListCache *(__fastcall **)(CDrawListCache *, char))(*(_QWORD *)v49 + 16LL);
          if ( v25 == CBackdropRegion::`scalar deleting destructor' )
          {
            CBackdropRegion::`scalar deleting destructor'(v49, 1);
          }
          else if ( v25 == CDirtyRegion::`vector deleting destructor' )
          {
            CDirtyRegion::`vector deleting destructor'(v49, 1);
          }
          else if ( v25 == CHWDrawListEntry::`scalar deleting destructor' )
          {
            CHWDrawListEntry::`scalar deleting destructor'(v49, 1);
          }
          else if ( v25 == CCommonRenderingEffect::`scalar deleting destructor' )
          {
            CCommonRenderingEffect::`scalar deleting destructor'(v49, 1);
          }
          else if ( v25 == CDrawListCache::`scalar deleting destructor' )
          {
            CDrawListCache::`scalar deleting destructor'(v49, 1);
          }
          else
          {
            v25(v49, 1);
          }
        }
      }
      else
      {
        v19((CMILRefCountBase *)v6);
      }
    }
LABEL_27:
    if ( v47[0] && qword_18026EEA8 && CDisplaySet::NeedsDesktopMoves(qword_18026EEA8) )
    {
      v34 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 192LL))(
              this,
              *((_QWORD *)v7 + 504),
              &v52);
      v9 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xD63u);
      }
      else
      {
        v35 = *(float *)v51;
        if ( v52 > *(float *)v51 )
        {
          *(float *)v51 = v52;
          v35 = v52;
        }
        v36 = *((float *)v51 + 1);
        if ( v53 > *((float *)v51 + 1) )
        {
          *((float *)v51 + 1) = v53;
          v36 = v53;
        }
        v37 = *(float *)&v51[1];
        if ( *(float *)&v51[1] > v54 )
        {
          *(float *)&v51[1] = v54;
          v37 = v54;
        }
        v38 = *((float *)&v51[1] + 1);
        if ( *((float *)&v51[1] + 1) > v55 )
        {
          *((float *)&v51[1] + 1) = v55;
          v38 = v55;
        }
        if ( v37 <= v35 || v38 <= v36 )
        {
          v51[1] = 0LL;
          v51[0] = 0LL;
        }
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 264LL))(this) )
          CDrawingContext::RecordVisualMove(v7, this);
        v39 = CDrawingContext::VisualWasRendered((__int64)v7, (__int128 *)v51, this);
        v9 = v39;
        if ( v39 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xD73u);
      }
    }
    v3 = v48;
  }
LABEL_29:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0
    || !(*(unsigned __int8 (__fastcall **)(CVisual *, struct CDrawingContext *, bool *))(*(_QWORD *)this + 224LL))(
          this,
          a2,
          a3) )
  {
    return v9;
  }
  v40 = (const char *)&word_1801EFD5E;
  v41 = (const char *)&word_1801EFD5E;
  v42 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 139LL) )
  {
    v40 = "Window";
    goto LABEL_141;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 123LL) )
    v40 = "Sprite";
  else
    v42 = 0;
  v43 = *((_QWORD *)this + 30);
  if ( !v43 )
    goto LABEL_141;
  if ( v3 != CCachedVisualImage::s_CVIEnsureBitmapCount )
  {
    v41 = "CVI";
    goto LABEL_141;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 48LL))(v43, 98LL) )
  {
    v41 = "PG";
    goto LABEL_140;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
         *((_QWORD *)this + 30),
         107LL) )
  {
    v41 = "RD";
    goto LABEL_140;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
         *((_QWORD *)this + 30),
         35LL) )
  {
    v41 = "CS";
    goto LABEL_140;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
         *((_QWORD *)this + 30),
         69LL) )
  {
    v41 = "HWnd";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              140LL) )
  {
    v41 = "YCbCr";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              121LL) )
  {
    v41 = "Snap";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              38LL) )
  {
    v41 = "CoR";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              75LL) )
  {
    v41 = "Ink";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              54LL) )
  {
    v41 = "GenInk";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              95LL) )
  {
    v41 = "RT";
  }
  else if ( !v42 )
  {
LABEL_140:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) == 0 )
      return v9;
  }
LABEL_141:
  CDrawingContext::EtwLogCurrentState(v7);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0pffffss(
      v45,
      v44,
      (_DWORD)this,
      v46,
      *((_DWORD *)this + 42),
      *((_DWORD *)this + 43),
      *((_DWORD *)this + 44),
      (__int64)v40,
      (__int64)v41);
  return v9;
}
