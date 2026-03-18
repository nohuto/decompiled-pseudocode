/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30
 * Callers:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180017664 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800192A4 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800266D0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800275D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18006E0C0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006FC90 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800900A8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180091AB0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18009335C (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800AB230 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801A468C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801A4764 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801A9A94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1801A9AE4 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A9B0C (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801AFA94 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B1A10 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801B2720 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006F99C (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800A65D0 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18018FC4C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, CRectanglesShape **a3)
{
  char v3; // al
  unsigned int v4; // esi
  const struct D2D_SIZE_F *v8; // rbx
  __int64 (__fastcall *v9)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  __int64 v11; // rcx
  __int64 v13; // rbx
  char v14; // bl
  CRectanglesShape *v15; // rbx
  CRectanglesShape *v16; // rbx
  int ShapeDataWorker; // eax
  CShape *v18; // rcx
  int v19; // eax
  int TrimmedShapeData; // eax
  CRectanglesShape *v21; // r15
  int v22; // eax
  int v23; // eax
  struct D2D_SIZE_F v24; // [rsp+30h] [rbp-49h] BYREF
  struct CShape *v25; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v26[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h]
  int v28; // [rsp+50h] [rbp-29h]
  int v29; // [rsp+54h] [rbp-25h]
  __int64 v30; // [rsp+58h] [rbp-21h]
  __int128 v31; // [rsp+60h] [rbp-19h]
  int v32; // [rsp+70h] [rbp-9h]
  int v33; // [rsp+74h] [rbp-5h]
  int v34; // [rsp+78h] [rbp-1h]
  float v35; // [rsp+7Ch] [rbp+3h]
  int v36; // [rsp+80h] [rbp+7h]
  _DWORD v37[6]; // [rsp+90h] [rbp+17h] BYREF

  v3 = *((_BYTE *)this + 128);
  v4 = 0;
  if ( v3 )
    goto LABEL_2;
  v13 = *((_QWORD *)this + 2);
  if ( GetCurrentThreadId() == *(_DWORD *)(v13 + 584) )
  {
    v14 = *((_BYTE *)this + 32) & 1;
    if ( v14 )
    {
      ShapeDataWorker = CGeometry::GetShapeDataWorker(this, (unsigned __int64)a2, (CRectanglesShape **)this + 12);
      v4 = ShapeDataWorker;
      if ( ShapeDataWorker < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataWorker, 0x8Bu);
        return v4;
      }
      *((_DWORD *)this + 8) &= ~1u;
    }
    if ( *((_BYTE *)this + 129) )
    {
      if ( v14 || *((_BYTE *)this + 130) || (v15 = (CRectanglesShape *)*((_QWORD *)this + 14)) == 0LL )
      {
        TrimmedShapeData = CGeometry::GetTrimmedShapeData(
                             this,
                             *((const struct CShape **)this + 12),
                             (CGeometry *)((char *)this + 112));
        v4 = TrimmedShapeData;
        if ( TrimmedShapeData < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TrimmedShapeData, 0x93u);
          return v4;
        }
        v15 = (CRectanglesShape *)*((_QWORD *)this + 14);
        *((_BYTE *)this + 130) = 0;
      }
      CShapePtr::Release(a3);
    }
    else
    {
      v15 = (CRectanglesShape *)*((_QWORD *)this + 12);
      if ( *((_BYTE *)a3 + 8) && *a3 )
        (**(void (__fastcall ***)(CRectanglesShape *, __int64))*a3)(*a3, 1LL);
      *a3 = 0LL;
      *((_BYTE *)a3 + 8) = 0;
    }
    *a3 = v15;
    *((_BYTE *)a3 + 8) = 0;
  }
  else
  {
    v3 = *((_BYTE *)this + 128);
    if ( v3 || (*((_BYTE *)this + 32) & 1) != 0 || (v16 = (CRectanglesShape *)*((_QWORD *)this + 12)) == 0LL )
    {
LABEL_2:
      v8 = 0LL;
      if ( v3 )
        v8 = a2;
      v9 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 176LL);
      if ( v9 == CRectangleGeometry::GetShapeDataCore )
        ShapeDataCore = CRectangleGeometry::GetShapeDataCore(this, v8, (struct CShapePtr *)a3);
      else
        ShapeDataCore = v9(this, v8, (struct CShapePtr *)a3);
      v4 = ShapeDataCore;
      if ( ShapeDataCore < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataCore, 0xDBu);
      }
      else
      {
        v11 = *((_QWORD *)this + 9);
        if ( v11 )
        {
          v24 = 0LL;
          if ( v8 )
            v24 = *v8;
          if ( *a3 )
          {
            (*(void (__fastcall **)(__int64, struct D2D_SIZE_F *, _DWORD *))(*(_QWORD *)v11 + 176LL))(v11, &v24, v37);
            v18 = *a3;
            v26[0] = v37[0];
            v26[1] = v37[1];
            v28 = v37[2];
            v29 = v37[3];
            v32 = v37[4];
            v31 = _xmm;
            v33 = v37[5];
            v35 = FLOAT_1_0;
            v36 = 0;
            v27 = 0LL;
            v30 = 0LL;
            v34 = 0;
            v19 = CShape::CopyShape(v18, (const struct CMILMatrix *)v26, &v25);
            v4 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xEFu);
            }
            else
            {
              CShapePtr::Release(a3);
              *a3 = v25;
              *((_BYTE *)a3 + 8) = 1;
            }
          }
        }
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xA7u);
      }
      else if ( *((_BYTE *)this + 129) )
      {
        v23 = CGeometry::GetTrimmedShapeData(this, *a3, (struct CShapePtr *)a3);
        v4 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xABu);
      }
      return v4;
    }
    if ( *((_BYTE *)this + 129) )
    {
      if ( *((_BYTE *)this + 130) || (v21 = (CRectanglesShape *)*((_QWORD *)this + 14)) == 0LL )
      {
        v22 = CGeometry::GetTrimmedShapeData(this, *((const struct CShape **)this + 12), (struct CShapePtr *)a3);
        v4 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xB4u);
      }
      else
      {
        CShapePtr::Release(a3);
        *a3 = v21;
        *((_BYTE *)a3 + 8) = 0;
      }
    }
    else
    {
      if ( *((_BYTE *)a3 + 8) && *a3 )
        (**(void (__fastcall ***)(CRectanglesShape *, __int64))*a3)(*a3, 1LL);
      *a3 = v16;
      *((_BYTE *)a3 + 8) = 0;
    }
  }
  return v4;
}
