/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800528C0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180162890 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180050528 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x180055120 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180093F90 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  unsigned int v2; // edi
  CRectanglesShape *v4; // rcx
  void *(__fastcall *v5)(CRectanglesShape *__hidden, unsigned int); // rax
  CGeometry *v6; // rcx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // ecx
  __m128i v10; // xmm0
  int v11; // eax
  unsigned __int32 v12; // xmm0_4
  int v13; // eax
  CGdiSpriteBitmap *v14; // rcx
  int (*v15)(CGdiSpriteBitmap *__hidden, struct CShapePtr *, bool); // rax
  int AccumShape; // eax
  __int64 v17; // rdx
  CRectanglesShape *v18; // rsi
  int v19; // eax
  void *(__fastcall *v20)(CRectanglesShape *__hidden, unsigned int); // rax
  CRectanglesShape *v21; // rsi
  __int64 v22; // rdx
  int v23; // eax
  CRectanglesShape *v24; // [rsp+30h] [rbp-49h] BYREF
  CShape *v25; // [rsp+38h] [rbp-41h] BYREF
  char v26; // [rsp+40h] [rbp-39h]
  CRectanglesShape *v27; // [rsp+48h] [rbp-31h] BYREF
  __int64 v28; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int32 v29; // [rsp+58h] [rbp-21h]
  float v30; // [rsp+5Ch] [rbp-1Dh]
  _QWORD v31[3]; // [rsp+60h] [rbp-19h] BYREF
  int v32; // [rsp+78h] [rbp-1h]
  __int64 v33; // [rsp+7Ch] [rbp+3h]
  _BYTE v34[16]; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+98h] [rbp+1Fh]

  v2 = 0;
  v24 = 0LL;
  if ( !*((_BYTE *)this + 984) )
  {
    v4 = (CRectanglesShape *)*((_QWORD *)this + 121);
    if ( v4 )
    {
      v5 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v4;
      if ( v5 == CRectanglesShape::`scalar deleting destructor' )
        CRectanglesShape::`scalar deleting destructor'(v4, 1u);
      else
        v5(v4, 1u);
      *((_QWORD *)this + 121) = 0LL;
    }
  }
  if ( !*((_QWORD *)this + 121) )
  {
    v6 = (CGeometry *)*((_QWORD *)this + 102);
    v31[0] = &CRectanglesShape::`vftable';
    v31[1] = v34;
    v31[2] = v34;
    v25 = 0LL;
    v26 = 0;
    v32 = 1;
    v33 = 1LL;
    v35 = 0LL;
    if ( v6 )
    {
      CGeometry::GetShapeData(v6, (const struct D2D_SIZE_F *)this + 16, (struct CShapePtr *)&v25);
    }
    else
    {
      v7 = 0;
      v8 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
      v9 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
      v28 = 0LL;
      if ( v9 >= 0 )
        v7 = v9;
      v10 = _mm_cvtsi32_si128(v7);
      v11 = 0;
      v12 = _mm_cvtepi32_ps(v10).m128_u32[0];
      if ( v8 >= 0 )
        v11 = v8;
      v29 = v12;
      v30 = (float)v11;
      CRectanglesShape::SetSingleRect((CRectanglesShape *)v31, (const struct MilRectF *)&v28);
      CShapePtr::Release((CShapePtr *)&v25);
      v26 = 0;
      v25 = (CShape *)v31;
    }
    if ( CWindowNode::IsDxShapeExclusionNeeded(this) )
    {
      CWindowNode::GetDxClipShape(this, &v28);
      v23 = CShape::Combine(v25, v22, v28, 0LL, 2, &v24);
      v2 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x11C6u);
LABEL_34:
        CShapePtr::Release((CShapePtr *)&v28);
LABEL_38:
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v31);
        CShapePtr::Release((CShapePtr *)&v25);
        v18 = v24;
        goto LABEL_39;
      }
      CShapePtr::Release((CShapePtr *)&v28);
    }
    else
    {
      v13 = CShape::CopyShape(v25, 0LL, &v24);
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x11CBu);
        goto LABEL_38;
      }
    }
    if ( !*((_BYTE *)this + 985) )
    {
      v21 = v24;
LABEL_25:
      *((_QWORD *)this + 121) = v21;
      *((_BYTE *)this + 984) = 1;
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v31);
      CShapePtr::Release((CShapePtr *)&v25);
      return v2;
    }
    v14 = (CGdiSpriteBitmap *)*((_QWORD *)this + 95);
    v28 = 0LL;
    LOBYTE(v29) = 0;
    v27 = 0LL;
    v15 = *(int (**)(CGdiSpriteBitmap *__hidden, struct CShapePtr *, bool))(*(_QWORD *)v14 + 176LL);
    if ( v15 == CGdiSpriteBitmap::GetAccumShape )
      AccumShape = CGdiSpriteBitmap::GetAccumShape(v14, (struct CShapePtr *)&v28, 0);
    else
      AccumShape = ((__int64 (__fastcall *)(CGdiSpriteBitmap *, __int64 *, _QWORD))v15)(v14, &v28, 0LL);
    v2 = AccumShape;
    if ( AccumShape >= 0 )
    {
      v18 = v24;
      v19 = CShape::Combine(v24, v17, v28, 0LL, 1, &v27);
      v2 = v19;
      if ( v19 >= 0 )
      {
        if ( v18 )
        {
          v20 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v18;
          if ( v20 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v18, 1u);
          else
            v20(v18, 1u);
        }
        v21 = v27;
        CShapePtr::Release((CShapePtr *)&v28);
        goto LABEL_25;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x11DAu);
      CShapePtr::Release((CShapePtr *)&v28);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v31);
      CShapePtr::Release((CShapePtr *)&v25);
LABEL_39:
      if ( v18 )
        (**(void (__fastcall ***)(CRectanglesShape *, __int64))v18)(v18, 1LL);
      return v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AccumShape, 0x11D5u);
    goto LABEL_34;
  }
  return v2;
}
