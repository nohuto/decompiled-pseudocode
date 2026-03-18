/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18009AF60
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800079B0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180056EE4 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18009D1D0 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 * Callees:
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180028168 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA4C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A3B38 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v7; // edx
  __m128 *v8; // rsi
  CVisual *v9; // rcx
  __int64 v10; // r14
  struct _LIST_ENTRY *v11; // r11
  struct _LIST_ENTRY *v12; // r10
  __int64 v13; // rax
  CVisual *v14; // rcx
  struct _LIST_ENTRY *v15; // r10
  int v16; // eax
  int v17; // r15d
  struct _LIST_ENTRY *Blink; // r14
  int v19; // r8d
  unsigned __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  int v24; // r11d
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v27; // rax
  struct _LIST_ENTRY *v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // r12d
  __int64 v31; // r13
  CShape **v32; // rax
  int v33; // eax
  int v34; // eax
  float v35; // xmm2_4
  float v36; // xmm2_4
  __m128 v37; // xmm4
  __m128 v38; // xmm4
  __m128 v39; // xmm4
  __int128 v40; // [rsp+30h] [rbp-71h] BYREF
  CRectanglesShape *v41; // [rsp+40h] [rbp-61h] BYREF
  char v42; // [rsp+48h] [rbp-59h]
  char v43; // [rsp+50h] [rbp-51h]
  int v44; // [rsp+70h] [rbp-31h]
  __m128 v45; // [rsp+80h] [rbp-21h] BYREF
  __m128 v46; // [rsp+98h] [rbp-9h] BYREF
  __int64 v47; // [rsp+A8h] [rbp+7h]

  if ( !*((_QWORD *)a2 + 3) )
    return 1;
  v7 = *((_DWORD *)a2 + 24);
  if ( (v7 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1344LL) != ((v7 & 4) != 0) )
    return 1;
  v8 = 0LL;
  if ( *((_DWORD *)a2 + 26) != (*((_DWORD *)a3 + 64) != 0) )
    return 1;
  if ( (v7 & 0xC0) != 0 )
  {
    v44 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 480), (struct CMILMatrix *)&v40);
    v24 = *((_DWORD *)a2 + 24);
    if ( (v24 & 0x40) != 0 && !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v40) )
      return 1;
    if ( (v24 & 0x80u) != 0 )
    {
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)&v40, v45.m128_f32, &v45.m128_f32[1]);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v45.m128_f32[0] - *((float *)a2 + 15))) & _xmm) > 0.0000011920929 )
        return 1;
      v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v45.m128_f32[1] - *((float *)a2 + 16))) & _xmm);
      if ( v35 > 0.0000011920929 )
        return 1;
    }
  }
  if ( *((_DWORD *)a2 + 4) == 2 && *((_DWORD *)a3 + 65) == 4 )
    return 1;
  v9 = 0LL;
  if ( *((_BYTE *)a3 + 6520) )
  {
    if ( *((_BYTE *)a3 + 6521) )
      v9 = (CVisual *)*((_QWORD *)a3 + 395);
    else
      v9 = *(CVisual **)(*((_QWORD *)a3 + 816) + 24LL);
  }
  v10 = *((_QWORD *)a3 + 816);
  v11 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3);
  if ( *(_BYTE *)(v10 + 32) )
  {
    v12 = (struct _LIST_ENTRY *)((char *)v9 + 288);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v9);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != (struct _LIST_ENTRY *)v10 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_11;
        }
        v12 = Flink - 14;
      }
    }
  }
LABEL_11:
  if ( v11 >= v12[12].Blink )
    return 0;
  if ( *((_BYTE *)a2 + 108) )
    return 1;
  if ( (*((_BYTE *)a2 + 100) & 0x20) == 0 )
    return 0;
  v13 = (unsigned int)(*((_DWORD *)a3 + 258) - 1);
  v41 = 0LL;
  v40 = 0LL;
  v42 = 0;
  v43 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a3 + 126) + 80 * v13) )
    return 0;
  v14 = 0LL;
  if ( *((_BYTE *)a3 + 6520) )
  {
    if ( *((_BYTE *)a3 + 6521) )
      v14 = (CVisual *)*((_QWORD *)a3 + 395);
    else
      v14 = *(CVisual **)(v10 + 24);
  }
  if ( *(_BYTE *)(v10 + 32) )
  {
    v15 = (struct _LIST_ENTRY *)((char *)v14 + 288);
  }
  else
  {
    v27 = CVisual::GetTreeDataListHead(v14);
    if ( v27 )
    {
      v28 = v27->Flink;
      if ( v27->Flink != v27 )
      {
        while ( v28[2].Flink != (struct _LIST_ENTRY *)v10 )
        {
          v28 = v28->Flink;
          if ( v28 == v27 )
            goto LABEL_20;
        }
        v15 = v28 - 14;
      }
    }
  }
LABEL_20:
  v16 = *((_DWORD *)a3 + 258);
  v17 = 0;
  Blink = v15[9].Blink;
  if ( !v16 || (v19 = *(_DWORD *)(*((_QWORD *)a3 + 126) + 80LL * (unsigned int)(v16 - 1) + 8)) == 0 )
  {
    v20 = 0LL;
    goto LABEL_23;
  }
  v22 = *((_QWORD *)a3 + 230);
  v23 = v22;
  if ( *(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1) + v22 + 88)
    || (v29 = 0LL, v30 = *((_DWORD *)a3 + 466) - v19, v30 >= *((_DWORD *)a3 + 466)) )
  {
LABEL_28:
    v20 = *(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1) + v23 + 88);
    goto LABEL_29;
  }
  while ( 1 )
  {
    v31 = 120LL * v30;
    v32 = (CShape **)(v22 + v31);
    if ( *(_QWORD *)(v22 + v31 + 88) )
      goto LABEL_51;
    if ( !v29 )
      break;
    v34 = CShape::Combine(v29, v22, *v32, v32 + 2, 1, v22 + v31 + 88);
    v17 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xC9u);
      goto LABEL_70;
    }
LABEL_51:
    v23 = *((_QWORD *)a3 + 230);
    ++v30;
    v22 = v23;
    v29 = *(_QWORD *)(v23 + v31 + 88);
    if ( v30 >= *((_DWORD *)a3 + 466) )
      goto LABEL_28;
  }
  v33 = CShapePtr::CopyShape(v32, (const struct CMILMatrix *)(v32 + 2), (struct CShape **)(v22 + v31 + 88));
  v17 = v33;
  if ( v33 >= 0 )
    goto LABEL_51;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xBDu);
LABEL_70:
  v20 = v45.m128_u64[0];
LABEL_29:
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x344u);
    return 0;
  }
LABEL_23:
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  *(_QWORD *)&v40 = v20;
  *((_QWORD *)&v40 + 1) = Blink;
  if ( v20 )
  {
    if ( a5 )
    {
      v8 = &v46;
      v36 = *((float *)a5 + 5);
      v37 = _mm_shuffle_ps((__m128)*(unsigned int *)a5, (__m128)*(unsigned int *)a5, 225);
      v37.m128_f32[0] = *((float *)a5 + 1);
      v38 = _mm_shuffle_ps(v37, v37, 198);
      v38.m128_f32[0] = *((float *)a5 + 4);
      v47 = *((_QWORD *)a5 + 6);
      v39 = _mm_shuffle_ps(v38, v38, 39);
      v39.m128_f32[0] = v36;
      v45 = _mm_shuffle_ps(v39, v39, 57);
      v46 = v45;
    }
    v45 = *(__m128 *)((char *)a2 + 44);
    if ( !CCpuClip::FullyContains((__int64)&v40, (__int64)&v45, (__int64)v8) )
    {
      CShapePtr::Release(&v41);
      return 1;
    }
  }
  return 0;
}
