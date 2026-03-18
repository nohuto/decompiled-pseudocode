/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009DD60 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180007470 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180040CE0 (-GetCache@CDrawListCacheSet@@QEAAJIIPEAVIRenderTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18006B130 (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18006E4A0 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800973C0 (-DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z @ 0x1800975A0 (-ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180099B40 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B34B0 (-DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRec.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180162A00 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801A7810 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     McTemplateU0pffffss @ 0x1801A92E0 (McTemplateU0pffffss.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, unsigned __int64 a3)
{
  unsigned int v4; // r12d
  struct CDrawingContext *v5; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rax
  unsigned int v8; // r15d
  CPrimitiveGroup *v9; // r14
  _QWORD *ThreadLocalStoragePointer; // rax
  __int64 v11; // rax
  bool (__fastcall *v12)(CPrimitiveGroup *__hidden, struct CDrawingContext *); // rax
  char ShouldUseDrawListRenderPath; // al
  volatile signed __int32 *v14; // rbx
  int v15; // r13d
  char **v16; // rcx
  int Cache; // eax
  struct D2D_SIZE_F *v18; // r8
  __int64 (__fastcall *v19)(CCompositionSurfaceBitmap *, CDrawingContext *, struct D2D_SIZE_F *, __int64, int, struct CDrawListCache *); // rax
  int v20; // eax
  __int64 (__fastcall *v22)(); // rax
  int v23; // eax
  unsigned int *i; // rcx
  __int64 v25; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v27; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v29; // r9
  int v30; // r8d
  int v31; // eax
  CMILMatrix *TopByReference; // rax
  unsigned int j; // ebx
  int v34; // eax
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm3_4
  float v38; // xmm1_4
  int v39; // eax
  const char *v40; // r14
  const char *v41; // rbx
  char v42; // r12
  __int64 v43; // rcx
  int v44; // edx
  int v45; // ecx
  int v46; // r9d
  char v47[8]; // [rsp+50h] [rbp-49h] BYREF
  struct CDrawListCache *v48; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-39h]
  __int64 v50; // [rsp+68h] [rbp-31h]
  int v51[4]; // [rsp+70h] [rbp-29h] BYREF
  float v52; // [rsp+80h] [rbp-19h] BYREF
  float v53; // [rsp+84h] [rbp-15h]
  float v54; // [rsp+88h] [rbp-11h]
  float v55; // [rsp+8Ch] [rbp-Dh]
  char v56[16]; // [rsp+90h] [rbp-9h] BYREF
  char v57[16]; // [rsp+A0h] [rbp+7h] BYREF

  v49 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  v4 = 0;
  v5 = a2;
  v6 = 1;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 384LL) != *((_QWORD *)this + 28) )
  {
    v7 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v7 + 4) & 0x20000) != 0 )
    {
      a2 = (struct CDrawingContext *)*(unsigned int *)(v7 + 12);
      for ( i = (unsigned int *)(v7 + 12); (*i & 0x7F000000) != 0xF000000; a2 = (struct CDrawingContext *)*i )
        i = (unsigned int *)((char *)i + ((unsigned int)a2 & 0xFFFFFF) + 4);
      v50 = *(_QWORD *)(i + 1);
      v25 = v50;
      if ( v50 )
      {
        *(_DWORD *)(v50 + 64) = 0;
        *(_QWORD *)(v25 + 68) = 1LL;
      }
    }
    *((_BYTE *)this + 93) &= ~0x10u;
  }
  v8 = 0;
  if ( *((_BYTE *)v5 + 6828) )
  {
    a2 = qword_1802D6428;
    if ( qword_1802D6428 )
    {
      a3 = 0LL;
      if ( *((_DWORD *)qword_1802D6428 + 18) )
      {
        v29 = *((_QWORD *)qword_1802D6428 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v29 + 8LL * (unsigned int)a3)) )
        {
          a3 = (unsigned int)(v30 + 1);
          if ( (unsigned int)a3 >= *((_DWORD *)a2 + 18) )
            goto LABEL_5;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 158LL) )
        {
          v31 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, char *))(*(_QWORD *)this + 192LL))(
                  this,
                  *((_QWORD *)v5 + 504),
                  v56);
          v8 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x1E0Bu);
          }
          else
          {
            TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)v5 + 480));
            CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
            for ( j = 0; j < *((_DWORD *)v5 + 1674); ++j )
              CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)v5 + 834) + 8LL * j), v57, v5);
          }
        }
      }
    }
  }
LABEL_5:
  if ( (v8 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xE5Bu);
    goto LABEL_27;
  }
  v9 = (CPrimitiveGroup *)*((_QWORD *)this + 31);
  if ( v9 )
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v47[0] = 0;
    v11 = ThreadLocalStoragePointer[tls_index];
    *(_OWORD *)v51 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    if ( dword_1802D6BA0 > *(_DWORD *)(v11 + 4) )
    {
      Init_thread_header(&dword_1802D6BA0);
      if ( dword_1802D6BA0 == -1 )
      {
        dword_1802D485C = -2147022876;
        Init_thread_footer(&dword_1802D6BA0);
      }
    }
    if ( *((_BYTE *)v5 + 3136)
      || *((_QWORD *)v5 + 846)
      || ((v12 = *(bool (__fastcall **)(CPrimitiveGroup *__hidden, struct CDrawingContext *))(*(_QWORD *)v9 + 208LL),
           v12 == CPrimitiveGroup::ShouldUseDrawListRenderPath)
        ? (ShouldUseDrawListRenderPath = CPrimitiveGroup::ShouldUseDrawListRenderPath(v9, v5))
        : (ShouldUseDrawListRenderPath = ((__int64 (__fastcall *)(CPrimitiveGroup *, struct CDrawingContext *, unsigned __int64))v12)(
                                           v9,
                                           v5,
                                           a3)),
          !ShouldUseDrawListRenderPath) )
    {
      v22 = *(__int64 (__fastcall **)())(*(_QWORD *)v9 + 160LL);
      if ( v22 == CRenderData::Draw )
      {
        if ( !*((_BYTE *)v5 + 3136) && !*((_QWORD *)v5 + 846) )
          v6 = 0;
        v23 = CRenderData::Draw(v9, v5, v6);
      }
      else
      {
        v23 = ((__int64 (__fastcall *)(CPrimitiveGroup *, struct CDrawingContext *, char *, char *, int *))v22)(
                v9,
                v5,
                (char *)this + 132,
                v47,
                v51);
      }
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4858, 2u, v23, 0xF33u);
      }
      else if ( !*((_BYTE *)v5 + 3136) && !*((_QWORD *)v5 + 846) )
      {
        ++dword_1802D6374;
      }
LABEL_26:
      if ( v47[0] )
      {
        if ( qword_1802D6428 )
        {
          a2 = (struct CDrawingContext *)*((unsigned int *)qword_1802D6428 + 18);
          if ( (_DWORD)a2 )
          {
            a3 = *((_QWORD *)qword_1802D6428 + 6);
            while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(a3 + 8LL * v4)) )
            {
              if ( ++v4 >= (unsigned int)a2 )
                goto LABEL_27;
            }
            v34 = (*(__int64 (__fastcall **)(CVisual *, _QWORD, float *))(*(_QWORD *)this + 192LL))(
                    this,
                    *((_QWORD *)v5 + 504),
                    &v52);
            v8 = v34;
            if ( v34 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xE79u);
            }
            else
            {
              v35 = *(float *)v51;
              if ( v52 > *(float *)v51 )
              {
                *(float *)v51 = v52;
                v35 = v52;
              }
              v36 = *(float *)&v51[1];
              if ( v53 > *(float *)&v51[1] )
              {
                *(float *)&v51[1] = v53;
                v36 = v53;
              }
              v37 = *(float *)&v51[2];
              if ( *(float *)&v51[2] > v54 )
              {
                *(float *)&v51[2] = v54;
                v37 = v54;
              }
              v38 = *(float *)&v51[3];
              if ( *(float *)&v51[3] > v55 )
              {
                *(float *)&v51[3] = v55;
                v38 = v55;
              }
              if ( v37 <= v35 || v38 <= v36 )
                memset(v51, 0, sizeof(v51));
              if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 272LL))(this) )
                CDrawingContext::RecordVisualMove(v5, this);
              v39 = CDrawingContext::VisualWasRendered(v5, v51, this);
              v8 = v39;
              if ( v39 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xE89u);
            }
          }
        }
      }
      goto LABEL_27;
    }
    v14 = 0LL;
    v48 = 0LL;
    if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_BYTE *)v5 + 6830) )
      goto LABEL_20;
    v15 = -2003292412;
    if ( *(_BYTE *)(*((_QWORD *)v5 + 816) + 32LL) )
    {
      v16 = (char **)((char *)this + 288);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_80;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_80;
      while ( 1 )
      {
        v16 = (char **)&Flink[-14];
        if ( Flink[2].Flink == v27 )
          break;
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_80;
      }
    }
    if ( v16 )
    {
      Cache = CDrawListCacheSet::GetCache(v16 + 16, 0, 0, *((struct IRenderTarget **)v5 + 45), &v48);
      v15 = Cache;
      if ( Cache >= 0 )
      {
        v14 = (volatile signed __int32 *)v48;
LABEL_20:
        v18 = (struct D2D_SIZE_F *)((char *)this + 132);
        v19 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, CDrawingContext *, struct D2D_SIZE_F *, __int64, int, struct CDrawListCache *))(*(_QWORD *)v9 + 232LL);
        if ( (char *)v19 == (char *)CSpriteVisualContent::DrawAsDrawList )
        {
          v20 = CSpriteVisualContent::DrawAsDrawList(v9, v5, v18, (int)v51, (struct CDrawListCache *)v14);
        }
        else if ( (char *)v19 == (char *)CSurfaceBrush::DrawAsDrawList )
        {
          v20 = CSurfaceBrush::DrawAsDrawList(v9, v5, v18, (unsigned int)v51, (struct CDrawListCache *)v14);
        }
        else if ( (char *)v19 == (char *)CAtlasedRectsGroup::DrawAsDrawList )
        {
          v20 = CAtlasedRectsGroup::DrawAsDrawList(v9, v5, v18, (int)v51, (struct CDrawListCache *)v14);
        }
        else if ( v19 == CCompositionSurfaceBitmap::DrawAsDrawList )
        {
          v20 = CCompositionSurfaceBitmap::DrawAsDrawList(
                  v9,
                  v5,
                  v18,
                  (__int64)v47,
                  (int)v51,
                  (struct CDrawListCache *)v14);
        }
        else if ( (char *)v19 == (char *)CPrimitiveGroup::DrawAsDrawList )
        {
          v20 = CPrimitiveGroup::DrawAsDrawList(
                  (_DWORD)v9,
                  (_DWORD)v5,
                  (_DWORD)v18,
                  (unsigned int)v47,
                  (__int64)v51,
                  (__int64)v14);
        }
        else
        {
          v20 = ((__int64 (__fastcall *)(CPrimitiveGroup *, struct CDrawingContext *, struct D2D_SIZE_F *, char *, int *))v19)(
                  v9,
                  v5,
                  v18,
                  v47,
                  v51);
        }
        if ( v20 >= 0 )
        {
          if ( v14 && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(struct CDrawListCache *, __int64))(*(_QWORD *)v48 + 16LL))(v48, 1LL);
          goto LABEL_26;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4858, 2u, v20, 0xF2Fu);
        goto LABEL_82;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Cache, 0x66Fu);
      v14 = (volatile signed __int32 *)v48;
    }
LABEL_80:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4858, 2u, v15, 0xF27u);
LABEL_82:
    if ( v14 )
      CMILRefCountBase::Release((CMILRefCountBase *)v14);
    goto LABEL_26;
  }
LABEL_27:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0
    || !(*(unsigned __int8 (__fastcall **)(CVisual *, struct CDrawingContext *, unsigned __int64))(*(_QWORD *)this
                                                                                                 + 224LL))(
          this,
          a2,
          a3) )
  {
    return v8;
  }
  v40 = (const char *)&word_18025290E;
  v41 = (const char *)&word_18025290E;
  v42 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 158LL) )
  {
    v40 = "Window";
    goto LABEL_135;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 138LL) )
    v40 = "Sprite";
  else
    v42 = 0;
  v43 = *((_QWORD *)this + 31);
  if ( !v43 )
    goto LABEL_135;
  if ( v49 != CCachedVisualImage::s_CVIEnsureBitmapCount )
  {
    v41 = "CVI";
    goto LABEL_135;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 48LL))(v43, 106LL) )
  {
    v41 = "PG";
    goto LABEL_134;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
         *((_QWORD *)this + 31),
         119LL) )
  {
    v41 = "RD";
    goto LABEL_134;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
         *((_QWORD *)this + 31),
         37LL) )
  {
    v41 = "CS";
    goto LABEL_134;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
         *((_QWORD *)this + 31),
         75LL) )
  {
    v41 = "HWnd";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
              *((_QWORD *)this + 31),
              160LL) )
  {
    v41 = "YCbCr";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
              *((_QWORD *)this + 31),
              134LL) )
  {
    v41 = "Snap";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
              *((_QWORD *)this + 31),
              41LL) )
  {
    v41 = "CoR";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
              *((_QWORD *)this + 31),
              81LL) )
  {
    v41 = "Ink";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
              *((_QWORD *)this + 31),
              59LL) )
  {
    v41 = "GenInk";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
              *((_QWORD *)this + 31),
              103LL) )
  {
    v41 = "RT";
  }
  else if ( !v42 )
  {
LABEL_134:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) == 0 )
      return v8;
  }
LABEL_135:
  CDrawingContext::EtwLogCurrentState(v5);
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
  return v8;
}
