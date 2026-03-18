/*
 * XREFs of ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C
 * Callers:
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18001EBC8 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800297CC (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x180055120 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x1800598B4 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18008CF00 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x1800934D8 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE9D4 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18015C44C (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18017B1F0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x180006D30 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180093F00 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180094010 (-GetRectangles@CRectanglesShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x180094214 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BDD80 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x1800C45BC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801B02B0 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CShape::CopyShape(CShape *this, const struct CMILMatrix *a2, struct CShape **a3)
{
  unsigned int v3; // edi
  char *v4; // r15
  int v8; // eax
  int v9; // eax
  int Current; // eax
  _DWORD *v11; // rcx
  _DWORD *v12; // rbx
  int v13; // edx
  __int64 v14; // r13
  void *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  CRegionShape *v20; // r13
  bool (__fastcall *v22)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  SIZE_T v24; // rax
  char *v25; // rax
  char *v26; // rdx
  void (__fastcall *v27)(CShape *, char *, _QWORD); // rax
  struct CRectanglesShape *v28; // rcx
  char *v29; // rbx
  struct CObjectCache *ObjectCache; // rax
  int v31; // edx
  unsigned int v32; // r13d
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  struct CShape *v36; // rax
  int v37; // eax
  char *v38; // rax
  __int128 v39; // xmm0
  int v40; // eax
  CComplexShape *v41; // rax
  unsigned int v42; // [rsp+20h] [rbp-60h]
  unsigned int v43; // [rsp+30h] [rbp-50h] BYREF
  CRegionShape *v44; // [rsp+38h] [rbp-48h]
  CRegionShape *v45; // [rsp+40h] [rbp-40h] BYREF
  void *Src; // [rsp+48h] [rbp-38h] BYREF
  struct ID2D1Geometry *v47; // [rsp+50h] [rbp-30h] BYREF
  const struct CMILMatrix *v48; // [rsp+58h] [rbp-28h]
  LPVOID lpMem[2]; // [rsp+60h] [rbp-20h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]

  v48 = a2;
  v47 = 0LL;
  v3 = 0;
  *a3 = 0LL;
  v4 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  lpMem[0] = 0LL;
  if ( a2 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a2) )
  {
    v22 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)this + 40LL);
    if ( v22 == CRectanglesShape::IsRectangles )
      IsRectangles = CRectanglesShape::IsRectangles(this, &v43);
    else
      IsRectangles = v22(this, &v43);
    if ( !IsRectangles || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a2) )
      goto LABEL_19;
    if ( v43 )
    {
      v24 = 16LL * v43;
      if ( !is_mul_ok(v43, 0x10uLL) )
        v24 = -1LL;
      if ( !v24 )
        v24 = 1LL;
      v25 = (char *)HeapAlloc(WPF::g_processHeap, 0, v24);
      v4 = v25;
      if ( !v25 )
      {
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
      v26 = v25;
      v27 = *(void (__fastcall **)(CShape *, char *, _QWORD))(*(_QWORD *)this + 48LL);
      if ( (char *)v27 == (char *)CRectanglesShape::GetRectangles )
        CRectanglesShape::GetRectangles(this, v26, v43);
      else
        v27(this, v26, v43);
      if ( v43 )
      {
        do
        {
          v29 = &v4[16 * v3];
          CMILMatrix::Transform2DBoundsHelper<0>(a2, v29, lpMem);
          ++v3;
          *(_OWORD *)v29 = *(_OWORD *)lpMem;
        }
        while ( v3 < v43 );
      }
      ObjectCache = CThreadContext::GetObjectCache(v28);
      v12 = 0LL;
      v31 = *((_DWORD *)ObjectCache + 1);
      if ( v31 )
      {
        v12 = (_DWORD *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v12;
        *((_DWORD *)ObjectCache + 1) = v31 - 1;
      }
      if ( !v12 )
      {
        v12 = HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
        if ( !v12 )
        {
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
          __debugbreak();
        }
      }
      *(_QWORD *)v12 = &CRectanglesShape::`vftable';
      v12[8] = 0;
      *((_QWORD *)v12 + 1) = v12 + 10;
      *((_QWORD *)v12 + 2) = v12 + 10;
      v12[6] = 1;
      v12[7] = 1;
      *((_QWORD *)v12 + 7) = 0LL;
      v32 = v43;
      v12[8] = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)(v12 + 2), 0x10u);
      v33 = *((_QWORD *)v12 + 7);
      if ( v33 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        *((_QWORD *)v12 + 7) = 0LL;
      }
      v34 = DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
              v12 + 2,
              v4,
              v32);
      v3 = v34;
      if ( v34 >= 0 )
      {
        *a3 = (struct CShape *)v12;
        goto LABEL_19;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x149u);
      goto LABEL_70;
    }
    v36 = (struct CShape *)operator new(0x10uLL);
    if ( v36 )
    {
      *((_QWORD *)v36 + 1) = 0LL;
      *(_QWORD *)v36 = &CRegionShape::`vftable';
    }
    *a3 = v36;
    if ( v36 )
      goto LABEL_19;
    v42 = 337;
LABEL_62:
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v42);
    goto LABEL_23;
  }
  v8 = (*(__int64 (__fastcall **)(CShape *))(*(_QWORD *)this + 8LL))(this);
  if ( !v8 )
  {
    v38 = (char *)operator new(0x48uLL);
    if ( v38 )
    {
      *(_QWORD *)v38 = &CRoundedRectangleShape::`vftable';
      *(_OWORD *)(v38 + 8) = *(_OWORD *)((char *)this + 8);
      *(_OWORD *)(v38 + 24) = *(_OWORD *)((char *)this + 24);
      v39 = *(_OWORD *)((char *)this + 40);
      *((_QWORD *)v38 + 7) = 0LL;
      *((_QWORD *)v38 + 8) = 0LL;
      *(_OWORD *)(v38 + 40) = v39;
    }
    *a3 = (struct CShape *)v38;
    if ( v38 )
      goto LABEL_19;
    v42 = 276;
    goto LABEL_62;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    Current = CThreadContext::GetCurrent((struct CThreadContext **)&Src);
    if ( Current < 0 )
    {
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      __debugbreak();
    }
    v11 = Src;
    v12 = 0LL;
    v13 = *((_DWORD *)Src + 3);
    if ( v13 )
    {
      v12 = (_DWORD *)*((_QWORD *)Src + 2);
      *((_QWORD *)Src + 2) = *(_QWORD *)v12;
      v11[3] = v13 - 1;
    }
    if ( !v12 )
    {
      v12 = HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
      if ( !v12 )
      {
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
    }
    *(_QWORD *)v12 = &CRectanglesShape::`vftable';
    v12[8] = 0;
    *((_QWORD *)v12 + 1) = v12 + 10;
    *((_QWORD *)v12 + 2) = v12 + 10;
    v12[6] = 1;
    v12[7] = 1;
    *((_QWORD *)v12 + 7) = 0LL;
    v14 = *((unsigned int *)this + 8);
    if ( (_DWORD)v14 )
    {
      v15 = (void *)*((_QWORD *)this + 1);
      v12[8] = 0;
      Src = v15;
      DynArrayImpl<0>::ShrinkToSize((__int64)(v12 + 2), 0x10u);
      v16 = *((_QWORD *)v12 + 7);
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        *((_QWORD *)v12 + 7) = 0LL;
      }
      v17 = v12[8];
      v18 = (unsigned int)v45;
      v19 = v17 + v14;
      if ( v17 + (unsigned int)v14 >= v17 )
        v18 = v17 + v14;
      v3 = v19 < v17 ? 0x80070216 : 0;
      LODWORD(v45) = v18;
      if ( v19 < v17 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v18 > v12[7] )
      {
        v37 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(v12 + 2), 0x10u, v14, Src);
        v3 = v37;
        if ( v37 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC0u);
      }
      else
      {
        memcpy_0((void *)(*((_QWORD *)v12 + 1) + 16LL * v17), Src, 16 * v14);
        v12[8] = (_DWORD)v45;
      }
    }
    else
    {
      CRectanglesShape::Reset((CRectanglesShape *)v12);
    }
    if ( (v3 & 0x80000000) == 0 )
    {
      v4 = (char *)lpMem[0];
      *a3 = (struct CShape *)v12;
      goto LABEL_19;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x120u);
    v4 = (char *)lpMem[0];
LABEL_70:
    v20 = v44;
    goto LABEL_82;
  }
  if ( v9 == 1 )
  {
    v35 = CRegionShape::Create(*((struct ID2D1RegionGeometry **)this + 1), &v45);
    v3 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x12Du);
      v20 = v45;
      goto LABEL_84;
    }
    v20 = 0LL;
    *a3 = v45;
    goto LABEL_20;
  }
LABEL_19:
  v20 = v44;
LABEL_20:
  if ( *a3 )
    goto LABEL_21;
  v40 = (*(__int64 (__fastcall **)(CShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)this + 24LL))(
          this,
          v48,
          &v47);
  v3 = v40;
  if ( v40 >= 0 )
  {
    v41 = (CComplexShape *)operator new(0x10uLL);
    if ( v41 )
      v41 = CComplexShape::CComplexShape(v41, v47);
    if ( v41 )
    {
      *a3 = v41;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x15Au);
    }
    goto LABEL_21;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x157u);
  v12 = 0LL;
LABEL_82:
  if ( v12 )
  {
    CRectanglesShape::`scalar deleting destructor'((CRectanglesShape *)v12, 1u);
LABEL_84:
    if ( v20 )
      CRegionShape::`vector deleting destructor'(v20, 1);
  }
LABEL_21:
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
LABEL_23:
  if ( v47 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v47 + 16LL))(v47);
  return v3;
}
