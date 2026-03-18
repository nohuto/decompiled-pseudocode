/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800900A8
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800925D0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801A9B5C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180028168 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x1800902E8 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801A9A94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
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
  int v12; // eax
  struct CShape *v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  struct CShape *v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  struct CShape *v21; // [rsp+38h] [rbp-49h] BYREF
  CRectanglesShape *v22; // [rsp+40h] [rbp-41h] BYREF
  char v23; // [rsp+48h] [rbp-39h]
  struct CShape *v24; // [rsp+50h] [rbp-31h] BYREF
  CRectanglesShape *v25; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int32 v26; // [rsp+60h] [rbp-21h]
  float v27; // [rsp+64h] [rbp-1Dh]
  _QWORD v28[4]; // [rsp+68h] [rbp-19h] BYREF
  int v29; // [rsp+88h] [rbp+7h]
  __int64 v30; // [rsp+8Ch] [rbp+Bh]
  _BYTE v31[16]; // [rsp+98h] [rbp+17h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+27h]

  v2 = 0;
  v21 = 0LL;
  if ( !*((_BYTE *)this + 912) )
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 113);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *((_QWORD *)this + 113) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 113) )
  {
    v5 = (CGeometry *)*((_QWORD *)this + 97);
    v28[0] = &CRectanglesShape::`vftable';
    v28[2] = v31;
    v28[3] = v31;
    v22 = 0LL;
    v23 = 0;
    v28[1] = 0LL;
    v29 = 1;
    v30 = 1LL;
    v32 = 0LL;
    if ( v5 )
    {
      CGeometry::GetShapeData(v5, (const struct D2D_SIZE_F *)((char *)this + 132), &v22);
    }
    else
    {
      v6 = 0;
      v7 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
      v8 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
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
      v22 = (CRectanglesShape *)v28;
    }
    if ( CWindowNode::IsDxShapeExclusionNeeded(this) )
    {
      CWindowNode::GetDxClipShape(this, &v25);
      v20 = CShape::Combine(v22, v19, v25, 0LL, 2, &v21);
      v2 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xE1Eu);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE23u);
        goto LABEL_30;
      }
    }
    if ( !*((_BYTE *)this + 913) )
    {
      v13 = v21;
LABEL_16:
      *((_QWORD *)this + 113) = v13;
      *((_BYTE *)this + 912) = 1;
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
      CShapePtr::Release(&v22);
      return v2;
    }
    v14 = *((_QWORD *)this + 90);
    v25 = 0LL;
    LOBYTE(v26) = 0;
    v24 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, CRectanglesShape **, _QWORD))(*(_QWORD *)v14 + 184LL))(v14, &v25, 0LL);
    v2 = v15;
    if ( v15 >= 0 )
    {
      v17 = v21;
      v18 = CShape::Combine(v21, v16, v25, 0LL, 1, &v24);
      v2 = v18;
      if ( v18 >= 0 )
      {
        if ( v17 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v17)(v17, 1LL);
        v13 = v24;
        CShapePtr::Release(&v25);
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xE32u);
      CShapePtr::Release(&v25);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
      CShapePtr::Release(&v22);
LABEL_31:
      if ( v17 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v17)(v17, 1LL);
      return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xE2Du);
    goto LABEL_27;
  }
  return v2;
}
