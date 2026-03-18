/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009B140 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180178E28 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180098048 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x1800993B0 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  unsigned int v2; // edi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  CGeometry *v5; // rcx
  unsigned int v6; // eax
  int v7; // edx
  int v8; // ecx
  __m128i v9; // xmm0
  int v10; // eax
  unsigned __int32 v11; // xmm0_4
  signed int v12; // eax
  struct CShape *v13; // rsi
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rdx
  struct CShape *v17; // rsi
  signed int v18; // eax
  __int64 v19; // rdx
  signed int v20; // eax
  struct CShape *v21; // [rsp+38h] [rbp-39h] BYREF
  CRegionShape *v22; // [rsp+40h] [rbp-31h] BYREF
  char v23; // [rsp+48h] [rbp-29h]
  struct CShape *v24; // [rsp+50h] [rbp-21h] BYREF
  CRegionShape *v25; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int32 v26; // [rsp+60h] [rbp-11h]
  float v27; // [rsp+64h] [rbp-Dh]
  _QWORD v28[3]; // [rsp+68h] [rbp-9h] BYREF
  int v29; // [rsp+80h] [rbp+Fh]
  __int64 v30; // [rsp+84h] [rbp+13h]
  _BYTE v31[16]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v32; // [rsp+A0h] [rbp+2Fh]

  v2 = 0;
  v21 = 0LL;
  if ( !*((_BYTE *)this + 1008) )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 124);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *((_QWORD *)this + 124) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 124) )
  {
    v5 = (CGeometry *)*((_QWORD *)this + 105);
    v28[0] = &CRectanglesShape::`vftable';
    v28[1] = v31;
    v28[2] = v31;
    v22 = 0LL;
    v23 = 0;
    v29 = 1;
    v30 = 1LL;
    v32 = 0LL;
    if ( v5 )
    {
      CGeometry::GetShapeData(v5, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShapePtr *)&v22);
    }
    else
    {
      v6 = 0;
      v7 = *((_DWORD *)this + 173) - *((_DWORD *)this + 171);
      v8 = *((_DWORD *)this + 172) - *((_DWORD *)this + 170);
      v25 = 0LL;
      if ( v8 >= 0 )
        v6 = v8;
      v9 = _mm_cvtsi32_si128(v6);
      v10 = 0;
      v11 = _mm_cvtepi32_ps(v9).m128_u32[0];
      if ( v7 >= 0 )
        v10 = v7;
      v26 = v11;
      v27 = (float)v10;
      CRectanglesShape::SetSingleRect((CRectanglesShape *)v28, (const struct MilRectF *)&v25);
      CShapePtr::Release(&v22);
      v23 = 0;
      v22 = (CRegionShape *)v28;
    }
    if ( CWindowNode::IsDxShapeExclusionNeeded(this) )
    {
      CWindowNode::GetDxClipShape(this, &v25);
      v20 = CShape::Combine((__int64)v22, v19, (__int64)v25, 0LL, 2, &v21);
      v2 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x1158u);
LABEL_27:
        CShapePtr::Release(&v25);
LABEL_30:
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
        CShapePtr::Release(&v22);
        v17 = v21;
        goto LABEL_31;
      }
      CShapePtr::Release(&v25);
    }
    else
    {
      v12 = CShapePtr::CopyShape(&v22, 0LL, &v21);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x115Du);
        goto LABEL_30;
      }
    }
    if ( !*((_BYTE *)this + 1009) )
    {
      v13 = v21;
LABEL_16:
      *((_QWORD *)this + 124) = v13;
      *((_BYTE *)this + 1008) = 1;
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
      CShapePtr::Release(&v22);
      return v2;
    }
    v14 = *((_QWORD *)this + 98);
    v25 = 0LL;
    LOBYTE(v26) = 0;
    v24 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, CRegionShape **, _QWORD))(*(_QWORD *)v14 + 184LL))(v14, &v25, 0LL);
    v2 = v15;
    if ( v15 >= 0 )
    {
      v17 = v21;
      v18 = CShape::Combine((__int64)v21, v16, (__int64)v25, 0LL, 1, &v24);
      v2 = v18;
      if ( v18 >= 0 )
      {
        if ( v17 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v17)(v17, 1LL);
        v13 = v24;
        CShapePtr::Release(&v25);
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x116Cu);
      CShapePtr::Release(&v25);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
      CShapePtr::Release(&v22);
LABEL_31:
      if ( v17 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v17)(v17, 1LL);
      return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x1167u);
    goto LABEL_27;
  }
  return v2;
}
