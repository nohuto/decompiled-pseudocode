/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022DE0
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022920 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180029600 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?IsDrawListCacheDirty@CHwndBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180168000 (-IsDrawListCacheDirty@CHwndBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 *     ?IsDrawListCacheDirty@CPrimitiveGroup@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180175020 (-IsDrawListCacheDirty@CPrimitiveGroup@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SI.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180098048 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B70C4 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  struct _LIST_ENTRY *v5; // r11
  int v8; // edx
  __m128 *v9; // rdi
  CVisual *v10; // rcx
  __int64 v11; // r14
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
  char v23; // dl
  float v24; // xmm1_4
  __m128 v25; // xmm2
  __int64 v26; // rdx
  unsigned int v27; // r12d
  __int64 v28; // r13
  struct CShape **v29; // rcx
  int v30; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v33; // eax
  float v34; // xmm1_4
  struct _LIST_ENTRY *v35; // rax
  struct _LIST_ENTRY *v36; // rcx
  __m128 v37; // xmm4
  __m128 v38; // xmm4
  __m128 v39; // xmm4
  __int128 v40; // [rsp+30h] [rbp-71h] BYREF
  __int64 v41; // [rsp+40h] [rbp-61h] BYREF
  int v42; // [rsp+48h] [rbp-59h]
  int v43; // [rsp+50h] [rbp-51h]
  int v44; // [rsp+70h] [rbp-31h]
  __m128 v45; // [rsp+80h] [rbp-21h] BYREF
  __m128 v46; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp+7h]

  v5 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3);
  if ( !v5 )
    return 1;
  if ( CCommonRegistryData::m_fDisableDrawListCaching )
    return 1;
  if ( !*((_BYTE *)a3 + 6830) )
    return 1;
  if ( *((_QWORD *)a3 + 417) )
    return 1;
  v8 = *((_DWORD *)a2 + 22);
  if ( (v8 & 6) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1296LL) != ((v8 & 4) != 0) )
    return 1;
  v9 = 0LL;
  if ( *((_DWORD *)a2 + 24) != (*((_DWORD *)a3 + 64) != 0) )
    return 1;
  if ( (v8 & 0x40) != 0 )
  {
    v44 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 480), (struct CMILMatrix *)&v40);
    LOBYTE(v22) = 1;
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<1>(&v40, v22)
      || (v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v40 + 1) - 0.0)) & _xmm), v24 >= 0.000081380211)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v41 - 0.0)) & _xmm) >= 0.000081380211 )
    {
      v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v40 - 0.0)) & _xmm);
      if ( v34 >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v41 + 1) - 0.0)) & _xmm) >= 0.000081380211 )
      {
        return v23;
      }
    }
  }
  if ( *((_DWORD *)a2 + 4) == 2 && *((_DWORD *)a3 + 65) == 4 )
    return 1;
  v10 = 0LL;
  if ( *((_BYTE *)a3 + 6520) )
  {
    if ( *((_BYTE *)a3 + 6521) )
      v10 = (CVisual *)*((_QWORD *)a3 + 395);
    else
      v10 = *(CVisual **)(*((_QWORD *)a3 + 816) + 24LL);
  }
  v11 = *((_QWORD *)a3 + 816);
  if ( *(_BYTE *)(v11 + 32) )
  {
    v12 = (struct _LIST_ENTRY *)((char *)v10 + 280);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v10);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != (struct _LIST_ENTRY *)v11 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_14;
        }
        v12 = Flink - 14;
      }
    }
  }
LABEL_14:
  if ( v5 >= v12[12].Blink )
    return 0;
  if ( *((_BYTE *)a2 + 100) )
    return 1;
  if ( (*((_BYTE *)a2 + 92) & 0x20) == 0 )
    return 0;
  v13 = (unsigned int)(*((_DWORD *)a3 + 258) - 1);
  v41 = 0LL;
  v40 = 0LL;
  LOBYTE(v42) = 0;
  LOBYTE(v43) = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a3 + 126) + 80 * v13) )
    return 0;
  v14 = 0LL;
  if ( *((_BYTE *)a3 + 6520) )
  {
    if ( *((_BYTE *)a3 + 6521) )
      v14 = (CVisual *)*((_QWORD *)a3 + 395);
    else
      v14 = *(CVisual **)(v11 + 24);
  }
  if ( *(_BYTE *)(v11 + 32) )
  {
    v15 = (struct _LIST_ENTRY *)((char *)v14 + 280);
  }
  else
  {
    v35 = CVisual::GetTreeDataListHead(v14);
    if ( v35 )
    {
      v36 = v35->Flink;
      if ( v35->Flink != v35 )
      {
        while ( v36[2].Flink != (struct _LIST_ENTRY *)v11 )
        {
          v36 = v36->Flink;
          if ( v36 == v35 )
            goto LABEL_23;
        }
        v15 = v36 - 14;
      }
    }
  }
LABEL_23:
  v16 = *((_DWORD *)a3 + 258);
  v17 = 0;
  Blink = v15[9].Blink;
  if ( !v16 || (v19 = *(_DWORD *)(*((_QWORD *)a3 + 126) + 80LL * (unsigned int)(v16 - 1) + 8)) == 0 )
  {
    v20 = 0LL;
    goto LABEL_26;
  }
  if ( *(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1) + *((_QWORD *)a3 + 230) + 88)
    || (v26 = 0LL, v27 = *((_DWORD *)a3 + 466) - v19, v27 >= *((_DWORD *)a3 + 466)) )
  {
LABEL_35:
    v20 = *(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)a3 + 466) - 1) + *((_QWORD *)a3 + 230) + 88);
    goto LABEL_36;
  }
  while ( 1 )
  {
    v28 = 120LL * v27;
    v29 = (struct CShape **)(v28 + *((_QWORD *)a3 + 230));
    if ( v29[11] )
      goto LABEL_47;
    if ( !v26 )
      break;
    v33 = CShape::Combine(v26, v26, *v29, v29 + 2, 1, v29 + 11, v40, *((_QWORD *)&v40 + 1), v41, v42, v43);
    v17 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xC9u);
      goto LABEL_73;
    }
LABEL_47:
    ++v27;
    v26 = *(_QWORD *)(*((_QWORD *)a3 + 230) + v28 + 88);
    if ( v27 >= *((_DWORD *)a3 + 466) )
      goto LABEL_35;
  }
  v30 = CShapePtr::CopyShape((CShapePtr *)v29, (const struct CMILMatrix *)(v29 + 2), v29 + 11);
  v17 = v30;
  if ( v30 >= 0 )
    goto LABEL_47;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xBDu);
LABEL_73:
  v20 = v45.m128_u64[0];
LABEL_36:
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x351u);
    return 0;
  }
LABEL_26:
  v41 = 0LL;
  LOBYTE(v42) = 0;
  LOBYTE(v43) = 0;
  *(_QWORD *)&v40 = v20;
  *((_QWORD *)&v40 + 1) = Blink;
  if ( v20 )
  {
    if ( a5 )
    {
      v9 = &v46;
      v37 = _mm_shuffle_ps((__m128)*(unsigned int *)a5, (__m128)*(unsigned int *)a5, 225);
      v37.m128_f32[0] = *((float *)a5 + 1);
      v38 = _mm_shuffle_ps(v37, v37, 198);
      v38.m128_f32[0] = *((float *)a5 + 4);
      v39 = _mm_shuffle_ps(v38, v38, 39);
      v39.m128_f32[0] = *((float *)a5 + 5);
      v47 = _mm_unpacklo_ps((__m128)*((unsigned int *)a5 + 12), (__m128)*((unsigned int *)a5 + 13)).m128_u64[0];
      v45 = _mm_shuffle_ps(v39, v39, 57);
      v46 = v45;
    }
    v25 = *(__m128 *)((char *)a2 + 44);
    v45.m128_i32[0] = v25.m128_i32[0];
    v45.m128_i32[3] = _mm_shuffle_ps(v25, v25, 255).m128_u32[0];
    v45.m128_i32[1] = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
    v45.m128_i32[2] = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
    if ( !(unsigned __int8)CCpuClip::FullyContains(&v40, &v45, v9, a4) )
    {
      CShapePtr::Release((CShapePtr *)&v41);
      return 1;
    }
  }
  return 0;
}
