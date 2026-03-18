/*
 * XREFs of ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660
 * Callers:
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000C420 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18002001C (-DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilR.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800098A0 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180009930 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000AD30 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000B0F0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000C3B0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?IsDrawListCacheDirty@CPrimitiveGroup@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000C6B0 (-IsDrawListCacheDirty@CPrimitiveGroup@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SI.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DE04 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18001344C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?HasDirtyBackdrop@CDirtyRegion@@QEBA_NAEBUMilRectF@@PEBVCVisualTree@@H@Z @ 0x18001DECC (-HasDirtyBackdrop@CDirtyRegion@@QEBA_NAEBUMilRectF@@PEBVCVisualTree@@H@Z.c)
 *     ?GetDirtyRegion@CHwndRenderTarget@@QEAAPEBVCDirtyRegion@@XZ @ 0x180023714 (-GetDirtyRegion@CHwndRenderTarget@@QEAAPEBVCDirtyRegion@@XZ.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037F70 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008BF10 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AED48 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BF9D0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0D30 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C12E0 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CContent::DrawAsDrawList(
        CSpriteVisualContent *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5,
        CDrawListCache *a6)
{
  CMILRefCountBase *v6; // rbx
  struct D2D_SIZE_F *v7; // r14
  struct CDrawListCache *v9; // rdi
  char (__fastcall *v11)(CSpriteVisualContent *, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *, const struct CMILMatrix *); // rax
  struct _LIST_ENTRY *v12; // r11
  char v13; // r13
  int v14; // edx
  CVisual *v15; // rcx
  __int64 v16; // r12
  struct _LIST_ENTRY *v17; // r10
  __int64 v18; // rax
  CVisual *v19; // rcx
  struct _LIST_ENTRY *v20; // r10
  int v21; // eax
  struct CDrawListCache *Blink; // r12
  CDirtyRegion *v23; // rax
  __int64 (__fastcall *v24)(CSpriteVisualContent *, __int64); // rax
  char v25; // al
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // r14d
  char IsDrawListCacheDirty; // al
  __int64 (__fastcall *v31)(CPrimitiveGroup *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *); // rax
  int DrawList; // eax
  __m128 v33; // xmm2
  int v34; // eax
  __int64 (__fastcall *v35)(CMILRefCountBase *); // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v38; // rax
  struct _LIST_ENTRY *v39; // rdx
  __int64 v40; // rdx
  unsigned int v41; // ecx
  __int64 v42; // r10
  CDirtyRegion *v43; // rax
  int v44; // eax
  float v45; // xmm1_4
  __int64 v46; // r12
  int v47; // eax
  __int64 v48; // rcx
  const struct _D3DCOLORVALUE *v49; // rdx
  int v50; // eax
  struct CVisual *CurrentVisual; // rax
  unsigned int v52; // [rsp+28h] [rbp-E0h]
  char v53; // [rsp+38h] [rbp-D0h]
  struct D2D_SIZE_F *v54; // [rsp+40h] [rbp-C8h]
  unsigned int v55; // [rsp+4Ch] [rbp-BCh]
  int v56; // [rsp+50h] [rbp-B8h]
  struct CDrawListCache *v57; // [rsp+58h] [rbp-B0h] BYREF
  struct CDrawListCache *v58[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+70h] [rbp-98h] BYREF
  char v60; // [rsp+78h] [rbp-90h]
  char v61; // [rsp+80h] [rbp-88h]
  _BYTE v62[64]; // [rsp+88h] [rbp-80h] BYREF
  int v63; // [rsp+C8h] [rbp-40h]
  CDirtyRegion *v64[2]; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v65[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-10h] BYREF
  float v67; // [rsp+100h] [rbp-8h]
  float v68; // [rsp+104h] [rbp-4h]
  float v69[4]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v70[16]; // [rsp+118h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = a3;
  v9 = a6;
  v54 = a3;
  v57 = 0LL;
  if ( *((_BYTE *)a2 + 3040) || *((_QWORD *)a2 + 838) )
  {
    v27 = (*(__int64 (__fastcall **)(CSpriteVisualContent *, _QWORD, struct D2D_SIZE_F *, CDirtyRegion **))(*(_QWORD *)this + 152LL))(
            this,
            0LL,
            a3,
            v64);
    v28 = v27;
    if ( v27 < 0 )
    {
      v52 = 33;
      goto LABEL_145;
    }
    v27 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)v64);
    v28 = v27;
    if ( v27 < 0 )
    {
      v52 = 35;
LABEL_145:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v52);
      goto LABEL_44;
    }
  }
  else if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 1232LL)
         || (*(unsigned __int8 (__fastcall **)(CSpriteVisualContent *, __int64))(*(_QWORD *)this + 48LL))(this, 102LL) )
  {
    if ( !a6 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v57);
      v34 = CDrawListCache::Create(&v57);
      v28 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x2Fu);
        v6 = v57;
        goto LABEL_47;
      }
      v6 = v57;
      v7 = v54;
      v9 = v57;
    }
    v11 = *(char (__fastcall **)(CSpriteVisualContent *, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *, const struct CMILMatrix *))(*(_QWORD *)this + 200LL);
    if ( v11 == CSpriteVisualContent::IsDrawListCacheDirty )
    {
      v12 = (struct _LIST_ENTRY *)*((_QWORD *)v9 + 3);
      v13 = 0;
      if ( !v12 )
        goto LABEL_54;
      if ( CCommonRegistryData::m_fDisableDrawListCaching )
        goto LABEL_54;
      if ( !*((_BYTE *)a2 + 6774) )
        goto LABEL_54;
      if ( *((_QWORD *)a2 + 405) )
        goto LABEL_54;
      v14 = *((_DWORD *)v9 + 22);
      if ( (v14 & 2) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1360LL) != ((v14 & 4) != 0) )
        goto LABEL_54;
      if ( *((_DWORD *)v9 + 24) != (*((_DWORD *)a2 + 66) != 0) )
        goto LABEL_54;
      if ( (v14 & 0x40) != 0 )
      {
        v63 = 0;
        CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 472), (struct CMILMatrix *)v62);
        if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v62) )
          goto LABEL_54;
      }
      if ( *((_DWORD *)v9 + 4) == 2 && *((_DWORD *)a2 + 67) == 4 )
        goto LABEL_54;
      v15 = 0LL;
      if ( *((_BYTE *)a2 + 6456) )
      {
        if ( *((_BYTE *)a2 + 6457) )
          v15 = (CVisual *)*((_QWORD *)a2 + 383);
        else
          v15 = *(CVisual **)(*((_QWORD *)a2 + 808) + 24LL);
      }
      v16 = *((_QWORD *)a2 + 808);
      if ( *(_BYTE *)(v16 + 32) )
      {
        v17 = (struct _LIST_ENTRY *)((char *)v15 + 264);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v15);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( Flink[2].Flink != (struct _LIST_ENTRY *)v16 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_19;
            }
            v17 = Flink - 14;
          }
        }
      }
LABEL_19:
      if ( v12 >= v17[12].Blink )
        goto LABEL_32;
      if ( *((_BYTE *)v9 + 100) )
        goto LABEL_54;
      if ( (*((_BYTE *)v9 + 92) & 0x20) == 0 )
        goto LABEL_32;
      v18 = (unsigned int)(*((_DWORD *)a2 + 234) - 1);
      v59 = 0LL;
      *(_OWORD *)v58 = 0LL;
      v60 = 0;
      v61 = 0;
      if ( !*(_BYTE *)(*((_QWORD *)a2 + 114) + 80 * v18) )
        goto LABEL_32;
      v19 = 0LL;
      if ( *((_BYTE *)a2 + 6456) )
      {
        if ( *((_BYTE *)a2 + 6457) )
          v19 = (CVisual *)*((_QWORD *)a2 + 383);
        else
          v19 = *(CVisual **)(v16 + 24);
      }
      if ( *(_BYTE *)(v16 + 32) )
      {
        v20 = (struct _LIST_ENTRY *)((char *)v19 + 264);
      }
      else
      {
        v38 = CVisual::GetTreeDataListHead(v19);
        if ( v38 )
        {
          v39 = v38->Flink;
          if ( v38->Flink != v38 )
          {
            while ( v39[2].Flink != (struct _LIST_ENTRY *)v16 )
            {
              v39 = v39->Flink;
              if ( v39 == v38 )
                goto LABEL_28;
            }
            v20 = v39 - 14;
          }
        }
      }
LABEL_28:
      v21 = *((_DWORD *)a2 + 234);
      Blink = (struct CDrawListCache *)v20[9].Blink;
      v56 = 0;
      if ( !v21
        || (a3 = (struct D2D_SIZE_F *)*(unsigned int *)(*((_QWORD *)a2 + 114) + 80LL * (unsigned int)(v21 - 1) + 8),
            !(_DWORD)a3) )
      {
        v23 = 0LL;
        goto LABEL_31;
      }
      if ( *(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)a2 + 442) - 1) + *((_QWORD *)a2 + 218) + 88)
        || (v40 = 0LL, v41 = *((_DWORD *)a2 + 442) - (_DWORD)a3, v55 = v41, v41 >= *((_DWORD *)a2 + 442)) )
      {
LABEL_72:
        v23 = *(CDirtyRegion **)(120LL * (unsigned int)(*((_DWORD *)a2 + 442) - 1) + *((_QWORD *)a2 + 218) + 88);
        goto LABEL_73;
      }
      while ( 1 )
      {
        v42 = *((_QWORD *)a2 + 218);
        v43 = (CDirtyRegion *)(120LL * v41);
        v64[0] = v43;
        if ( !*(_QWORD *)((char *)v43 + v42 + 88) )
        {
          if ( v40 )
          {
            v47 = CShape::Combine(
                    v40,
                    v40,
                    *(_QWORD *)((char *)v64[0] + v42),
                    (char *)v64[0] + v42 + 16,
                    1,
                    (char *)v43 + v42 + 88);
            v56 = v47;
            if ( v47 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0xC9u);
              goto LABEL_134;
            }
          }
          else
          {
            v44 = CShape::CopyShape(
                    *(CShape **)(v42 + 120LL * v41),
                    (const struct CMILMatrix *)(120LL * v41 + v42 + 16),
                    (struct CShape **)(120LL * v41 + v42 + 88));
            v56 = v44;
            if ( v44 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xBDu);
LABEL_134:
              v23 = v64[0];
LABEL_73:
              if ( v56 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x356u);
                goto LABEL_32;
              }
LABEL_31:
              v59 = 0LL;
              v60 = 0;
              v61 = 0;
              v58[0] = v23;
              v58[1] = Blink;
              if ( v23 )
              {
                v33 = *(__m128 *)((char *)v9 + 44);
                v65[0] = v33.m128_i32[0];
                v65[3] = _mm_shuffle_ps(v33, v33, 255).m128_u32[0];
                v65[1] = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
                v65[2] = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
                if ( !(unsigned __int8)CCpuClip::FullyContains(v58, v65, 0LL) )
                {
                  CShapePtr::Release((CShapePtr *)&v59);
                  goto LABEL_54;
                }
              }
LABEL_32:
              if ( *((_QWORD *)v9 + 3) < *((_QWORD *)this + 9) )
                goto LABEL_54;
              v24 = *(__int64 (__fastcall **)(CSpriteVisualContent *, __int64))(*(_QWORD *)this + 48LL);
              if ( (char *)v24 != (char *)CMaskBrush::IsOfType )
              {
                if ( (char *)v24 == (char *)CColorBrush::IsOfType )
                {
                  v25 = CColorBrush::IsOfType((__int64)this, 89);
                }
                else if ( (char *)v24 == (char *)CNineGridBrush::IsOfType )
                {
                  v25 = CNineGridBrush::IsOfType(this, 89LL, a3);
                }
                else if ( (char *)v24 == (char *)CSurfaceBrush::IsOfType )
                {
                  v25 = CSurfaceBrush::IsOfType((__int64)this, 89);
                }
                else
                {
                  v25 = (char *)v24 == (char *)CLinearGradientBrush::IsOfType
                      ? CLinearGradientBrush::IsOfType(this, 89LL)
                      : v24(this, 89LL);
                }
                if ( v25 )
                  v13 = 1;
              }
              v26 = *((_QWORD *)this + 8);
              if ( v26 )
              {
                v53 = *(_BYTE *)(v26 + 353);
                if ( !*(_BYTE *)(v26 + 352) )
                  goto LABEL_113;
                v66 = 0LL;
                v45 = v54->height + 0.0;
                v67 = v54->width + 0.0;
                v68 = v45;
                CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)&v66, v69);
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)v9 + 15, v69) )
                {
                  v46 = *((_QWORD *)a2 + 48);
                  if ( v46 )
                  {
                    v64[0] = CHwndRenderTarget::GetDirtyRegion(*((CHwndRenderTarget **)a2 + 48));
                    if ( v64[0] )
                    {
                      CMILMatrix::Transform2DBoundsHelper<0>(v46 + 300, v69, v70);
                      if ( !CDirtyRegion::HasDirtyBackdrop(
                              v64[0],
                              (const struct MilRectF *)v70,
                              *((const struct CVisualTree **)a2 + 808),
                              *((_DWORD *)a2 + 1674))
                        || v53
                        && *(_QWORD *)(*((_QWORD *)this + 2) + 520LL) - *((_QWORD *)v9 + 10) < CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta )
                      {
LABEL_113:
                        if ( !*(_BYTE *)(*((_QWORD *)this + 8) + 354LL) )
                          goto LABEL_39;
                        goto LABEL_135;
                      }
                    }
                  }
                }
              }
              else
              {
LABEL_39:
                if ( !v13 )
                  goto LABEL_40;
LABEL_135:
                CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
                if ( !CurrentVisual )
                  goto LABEL_40;
                while ( (*(_DWORD *)(*((_QWORD *)CurrentVisual + 26) + 4LL) & 0x8000) == 0 )
                {
                  CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 10);
                  if ( !CurrentVisual )
                    goto LABEL_40;
                }
                if ( !*((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual) + 279) )
                {
LABEL_40:
                  v7 = v54;
                  goto LABEL_41;
                }
              }
LABEL_54:
              if ( !*((_QWORD *)v9 + 3) )
                goto LABEL_40;
              if ( *((_DWORD *)v9 + 4) == 1 )
              {
                _InterlockedExchangeAdd(
                  (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 15,
                  1u);
                goto LABEL_57;
              }
              if ( *((_DWORD *)v9 + 4) == 2 )
              {
                _InterlockedExchangeAdd(
                  (volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 17,
                  1u);
LABEL_57:
                v6 = v57;
              }
              *((_QWORD *)v9 + 3) = 0LL;
              *((_DWORD *)v9 + 4) = 0;
              CDrawListCache::ReleaseDrawListEntries(v9);
              *((_BYTE *)v9 + 100) = 0;
              goto LABEL_40;
            }
          }
          v41 = v55;
        }
        v55 = ++v41;
        v40 = *(_QWORD *)((char *)v64[0] + *((_QWORD *)a2 + 218) + 88);
        if ( v41 >= *((_DWORD *)a2 + 442) )
          goto LABEL_72;
      }
    }
    if ( (char *)v11 == (char *)CCompositionSurfaceBitmap::IsDrawListCacheDirty )
    {
      IsDrawListCacheDirty = CCompositionSurfaceBitmap::IsDrawListCacheDirty(this, v9, a2, v7);
    }
    else if ( (char *)v11 == (char *)CPrimitiveGroup::IsDrawListCacheDirty )
    {
      IsDrawListCacheDirty = CPrimitiveGroup::IsDrawListCacheDirty(this, v9, a2, v7, 0LL);
    }
    else
    {
      IsDrawListCacheDirty = v11(this, v9, a2, v7, 0LL);
    }
    if ( IsDrawListCacheDirty )
      goto LABEL_54;
LABEL_41:
    if ( !*((_QWORD *)v9 + 3) )
    {
      v31 = *(__int64 (__fastcall **)(CPrimitiveGroup *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)this + 208LL);
      if ( (char *)v31 == (char *)CSpriteVisualContent::GenerateDrawList )
      {
        DrawList = CSpriteVisualContent::GenerateDrawList((CBrushRenderingGraph **)this, a2, v7, v9);
      }
      else if ( (char *)v31 == (char *)CCompositionSurfaceBitmap::GenerateDrawList )
      {
        DrawList = CCompositionSurfaceBitmap::GenerateDrawList(
                     (struct CPrimitiveGroupDrawListGenerator **)this,
                     a2,
                     v7,
                     v9);
      }
      else
      {
        DrawList = v31 == CPrimitiveGroup::GenerateDrawList
                 ? CPrimitiveGroup::GenerateDrawList(this, a2, v7, v9)
                 : v31(this, a2, v7, v9);
      }
      v28 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0x3Bu);
        goto LABEL_44;
      }
    }
    v27 = CDrawingContext::EmitDrawListCache(a2, v9);
    v28 = v27;
    if ( v27 < 0 )
    {
      v52 = 62;
      goto LABEL_145;
    }
  }
  else
  {
    v48 = *((_QWORD *)this + 2);
    v49 = 0LL;
    v50 = *(_DWORD *)(v48 + 1232);
    if ( v50 )
      v49 = (const struct _D3DCOLORVALUE *)(*(_QWORD *)(v48 + 1248) + 16LL * (unsigned int)(v50 - 1));
    v27 = CDrawingContext::DrawColorRectangle(a2, v49, v7);
    v28 = v27;
    if ( v27 < 0 )
    {
      v52 = 39;
      goto LABEL_145;
    }
  }
  v28 = 0;
LABEL_44:
  if ( v9 && *((char *)v9 + 88) < 0 )
    CDrawListCache::Invalidate(v9);
LABEL_47:
  if ( v6 )
  {
    v35 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v6 + 8LL);
    if ( v35 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v6);
    else
      v35(v6);
  }
  return v28;
}
