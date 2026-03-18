/*
 * XREFs of ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18008CF00
 * Callers:
 *     <none>
 * Callees:
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
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BF9D0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0D30 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C12E0 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEAVCVisual@@PEAV2@@Z @ 0x180178730 (-GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEAVCVisual@@PEAV2@@Z.c)
 */

char __fastcall CSpriteVisualContent::IsDrawListCacheDirty(
        CSpriteVisualContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  struct _LIST_ENTRY *v5; // r11
  char v6; // r13
  struct CDrawingContext *v7; // rbx
  int v10; // edx
  __m128 *v11; // rsi
  CVisual *v12; // rcx
  __int64 v13; // r12
  struct _LIST_ENTRY *v14; // r10
  __int64 v15; // rax
  CVisual *v16; // rcx
  struct _LIST_ENTRY *v17; // r10
  int v18; // eax
  struct _LIST_ENTRY *Blink; // r12
  unsigned __int64 v20; // rax
  __int64 (__fastcall *v21)(CSpriteVisualContent *, __int64); // rax
  char v22; // al
  __int64 v23; // rax
  float v25; // xmm1_4
  __int64 v26; // rsi
  CDirtyRegion *DirtyRegion; // r12
  __m128 v28; // xmm2
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v31; // rax
  struct _LIST_ENTRY *v32; // rdx
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // r10
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  __m128 v39; // xmm4
  __m128 v40; // xmm4
  __m128 v41; // xmm4
  struct CVisual *CurrentVisual; // rax
  CVisual *WindowBackgroundTreatmentVisual; // rax
  char v44; // [rsp+30h] [rbp-91h]
  unsigned int v45; // [rsp+34h] [rbp-8Dh]
  int v46; // [rsp+38h] [rbp-89h]
  __int128 v47; // [rsp+40h] [rbp-81h] BYREF
  __int64 v48; // [rsp+50h] [rbp-71h] BYREF
  char v49; // [rsp+58h] [rbp-69h]
  char v50; // [rsp+60h] [rbp-61h]
  int v51; // [rsp+80h] [rbp-41h]
  __m128 v52; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v53[2]; // [rsp+A8h] [rbp-19h] BYREF
  __m128 v54; // [rsp+B8h] [rbp-9h] BYREF
  unsigned __int64 v55; // [rsp+C8h] [rbp+7h]

  v5 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3);
  v6 = 0;
  v53[0] = a4;
  v7 = a3;
  if ( !v5 )
    return 1;
  if ( CCommonRegistryData::m_fDisableDrawListCaching )
    return 1;
  if ( !*((_BYTE *)a3 + 6774) )
    return 1;
  if ( *((_QWORD *)a3 + 405) )
    return 1;
  v10 = *((_DWORD *)a2 + 22);
  if ( (v10 & 2) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1360LL) != ((v10 & 4) != 0) )
    return 1;
  v11 = 0LL;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 66) != 0) )
    return 1;
  if ( (v10 & 0x40) != 0 )
  {
    v51 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 472), (struct CMILMatrix *)&v47);
    if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v47) )
      return 1;
  }
  if ( *((_DWORD *)a2 + 4) == 2 && *((_DWORD *)v7 + 67) == 4 )
    return 1;
  v12 = 0LL;
  if ( *((_BYTE *)v7 + 6456) )
  {
    if ( *((_BYTE *)v7 + 6457) )
      v12 = (CVisual *)*((_QWORD *)v7 + 383);
    else
      v12 = *(CVisual **)(*((_QWORD *)v7 + 808) + 24LL);
  }
  v13 = *((_QWORD *)v7 + 808);
  if ( *(_BYTE *)(v13 + 32) )
  {
    v14 = (struct _LIST_ENTRY *)((char *)v12 + 264);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v12);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != (struct _LIST_ENTRY *)v13 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_14;
        }
        v14 = Flink - 14;
      }
    }
  }
LABEL_14:
  if ( v5 >= v14[12].Blink )
    goto LABEL_27;
  if ( *((_BYTE *)a2 + 100) )
    return 1;
  if ( (*((_BYTE *)a2 + 92) & 0x20) == 0 )
    goto LABEL_27;
  v15 = (unsigned int)(*((_DWORD *)v7 + 234) - 1);
  v48 = 0LL;
  v47 = 0LL;
  v49 = 0;
  v50 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)v7 + 114) + 80 * v15) )
    goto LABEL_27;
  v16 = 0LL;
  if ( *((_BYTE *)v7 + 6456) )
  {
    if ( *((_BYTE *)v7 + 6457) )
      v16 = (CVisual *)*((_QWORD *)v7 + 383);
    else
      v16 = *(CVisual **)(v13 + 24);
  }
  if ( *(_BYTE *)(v13 + 32) )
  {
    v17 = (struct _LIST_ENTRY *)((char *)v16 + 264);
  }
  else
  {
    v31 = CVisual::GetTreeDataListHead(v16);
    if ( v31 )
    {
      v32 = v31->Flink;
      if ( v31->Flink != v31 )
      {
        while ( v32[2].Flink != (struct _LIST_ENTRY *)v13 )
        {
          v32 = v32->Flink;
          if ( v32 == v31 )
            goto LABEL_23;
        }
        v17 = v32 - 14;
      }
    }
  }
LABEL_23:
  v18 = *((_DWORD *)v7 + 234);
  Blink = v17[9].Blink;
  v46 = 0;
  if ( !v18
    || (a3 = (struct CDrawingContext *)*(unsigned int *)(*((_QWORD *)v7 + 114) + 80LL * (unsigned int)(v18 - 1) + 8),
        !(_DWORD)a3) )
  {
    v20 = 0LL;
    goto LABEL_26;
  }
  if ( *(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)v7 + 442) - 1) + *((_QWORD *)v7 + 218) + 88)
    || (v33 = 0LL, v34 = *((_DWORD *)v7 + 442) - (_DWORD)a3, v45 = v34, v34 >= *((_DWORD *)v7 + 442)) )
  {
LABEL_51:
    v20 = *(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)v7 + 442) - 1) + *((_QWORD *)v7 + 218) + 88);
    goto LABEL_52;
  }
  while ( 1 )
  {
    v35 = *((_QWORD *)v7 + 218);
    v36 = 120LL * v34;
    v52.m128_u64[0] = v36;
    if ( !*(_QWORD *)(v35 + v36 + 88) )
      break;
LABEL_71:
    v45 = ++v34;
    v33 = *(_QWORD *)(*((_QWORD *)v7 + 218) + v52.m128_u64[0] + 88);
    if ( v34 >= *((_DWORD *)v7 + 442) )
      goto LABEL_51;
  }
  if ( v33 )
  {
    v38 = CShape::Combine(v33, v33, *(_QWORD *)(v35 + v52.m128_u64[0]), v35 + v52.m128_u64[0] + 16, 1, v35 + v36 + 88);
    v46 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xC9u);
      goto LABEL_91;
    }
    goto LABEL_70;
  }
  v37 = CShape::CopyShape(
          *(CShape **)(v35 + 120LL * v34),
          (const struct CMILMatrix *)(120LL * v34 + v35 + 16),
          (struct CShape **)(120LL * v34 + v35 + 88));
  v46 = v37;
  if ( v37 >= 0 )
  {
LABEL_70:
    v34 = v45;
    goto LABEL_71;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xBDu);
LABEL_91:
  v20 = v52.m128_u64[0];
LABEL_52:
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x356u);
    goto LABEL_27;
  }
LABEL_26:
  v48 = 0LL;
  v49 = 0;
  v50 = 0;
  *(_QWORD *)&v47 = v20;
  *((_QWORD *)&v47 + 1) = Blink;
  if ( !v20 )
    goto LABEL_27;
  if ( a5 )
  {
    v11 = &v54;
    v39 = _mm_shuffle_ps((__m128)*(unsigned int *)a5, (__m128)*(unsigned int *)a5, 225);
    v39.m128_f32[0] = *((float *)a5 + 1);
    v40 = _mm_shuffle_ps(v39, v39, 198);
    v40.m128_f32[0] = *((float *)a5 + 4);
    v41 = _mm_shuffle_ps(v40, v40, 39);
    v41.m128_f32[0] = *((float *)a5 + 5);
    v55 = _mm_unpacklo_ps((__m128)*((unsigned int *)a5 + 12), (__m128)*((unsigned int *)a5 + 13)).m128_u64[0];
    v52 = _mm_shuffle_ps(v41, v41, 57);
    v54 = v52;
  }
  v28 = *(__m128 *)((char *)a2 + 44);
  v52.m128_i32[0] = v28.m128_i32[0];
  v52.m128_i32[3] = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
  v52.m128_i32[1] = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
  v52.m128_i32[2] = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
  if ( (unsigned __int8)CCpuClip::FullyContains(&v47, &v52, v11) )
  {
LABEL_27:
    if ( *((_QWORD *)a2 + 3) >= *((_QWORD *)this + 9) )
    {
      v21 = *(__int64 (__fastcall **)(CSpriteVisualContent *, __int64))(*(_QWORD *)this + 48LL);
      if ( (char *)v21 != (char *)CMaskBrush::IsOfType )
      {
        if ( (char *)v21 == (char *)CColorBrush::IsOfType )
        {
          v22 = CColorBrush::IsOfType((__int64)this, 89);
        }
        else if ( (char *)v21 == (char *)CNineGridBrush::IsOfType )
        {
          v22 = CNineGridBrush::IsOfType(this, 89LL, a3);
        }
        else if ( (char *)v21 == (char *)CSurfaceBrush::IsOfType )
        {
          v22 = CSurfaceBrush::IsOfType((__int64)this, 89);
        }
        else if ( (char *)v21 == (char *)CLinearGradientBrush::IsOfType )
        {
          v22 = CLinearGradientBrush::IsOfType(this, 89LL);
        }
        else
        {
          v22 = v21(this, 89LL);
        }
        if ( v22 )
          v6 = 1;
      }
      v23 = *((_QWORD *)this + 8);
      if ( !v23 )
        goto LABEL_34;
      v44 = *(_BYTE *)(v23 + 353);
      if ( *(_BYTE *)(v23 + 352) )
      {
        v52.m128_u64[0] = 0LL;
        v25 = *(float *)(v53[0] + 4LL) + 0.0;
        v52.m128_f32[2] = *(float *)v53[0] + 0.0;
        v52.m128_f32[3] = v25;
        CDrawingContext::CalcWorldSpaceClippedBounds((__int64)v7, (__int64)&v52, (float *)v53);
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)a2 + 15, (float *)v53) )
          return 1;
        v26 = *((_QWORD *)v7 + 48);
        if ( !v26 )
          return 1;
        DirtyRegion = CHwndRenderTarget::GetDirtyRegion(*((CHwndRenderTarget **)v7 + 48));
        if ( !DirtyRegion )
          return 1;
        CMILMatrix::Transform2DBoundsHelper<0>(v26 + 300, v53, &v52);
        if ( CDirtyRegion::HasDirtyBackdrop(
               DirtyRegion,
               (const struct MilRectF *)&v52,
               *((const struct CVisualTree **)v7 + 808),
               *((_DWORD *)v7 + 1674)) )
        {
          if ( !v44
            || *(_QWORD *)(*((_QWORD *)this + 2) + 520LL) - *((_QWORD *)a2 + 10) >= CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta )
          {
            return 1;
          }
        }
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 8) + 354LL) )
      {
LABEL_34:
        if ( !v6 )
          return 0;
      }
      CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)v7 + 8));
      WindowBackgroundTreatmentVisual = CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(CurrentVisual);
      if ( !WindowBackgroundTreatmentVisual
        || !*((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(WindowBackgroundTreatmentVisual) + 279) )
      {
        return 0;
      }
    }
    return 1;
  }
  CShapePtr::Release((CShapePtr *)&v48);
  return 1;
}
