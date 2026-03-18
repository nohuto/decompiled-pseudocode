/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004A730 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006D04 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800478F0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800479A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180064290 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18008AA10 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180097670 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18009CC60 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A9470 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  bool (__fastcall *v8)(__int64, int); // rax
  bool v9; // al
  bool (__fastcall *v10)(CSpriteVisualContent *__hidden); // rax
  bool v11; // al
  struct CShape *v12; // rcx
  CRectanglesShape *v13; // rdx
  CRectanglesShape *v14; // rbx
  char (__fastcall *v15)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  CCompositionSurfaceBitmap *v17; // rcx
  __int64 (*v18)(void); // rax
  char IsOpaque; // al
  __int64 (__fastcall *v20)(__int64, __int64, CMILMatrix *); // rax
  int TightBounds; // eax
  int v22; // eax
  int (__fastcall ***v23)(_QWORD, GUID *, unsigned int *); // rcx
  __int64 v24; // rcx
  CRectanglesShape *(__fastcall *v25)(CRectanglesShape *, char); // rax
  int v27; // r9d
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-89h]
  CRectanglesShape *v31; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v32[2]; // [rsp+38h] [rbp-71h] BYREF
  _DWORD v33[6]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v34; // [rsp+58h] [rbp-51h]
  __int64 v35; // [rsp+60h] [rbp-49h]
  int v36; // [rsp+68h] [rbp-41h]
  int v37; // [rsp+6Ch] [rbp-3Dh]
  int v38; // [rsp+70h] [rbp-39h]
  int v39; // [rsp+74h] [rbp-35h]
  int v40; // [rsp+78h] [rbp-31h]
  int v41; // [rsp+7Ch] [rbp-2Dh]
  int v42; // [rsp+80h] [rbp-29h]
  CRectanglesShape **v43; // [rsp+90h] [rbp-19h] BYREF
  struct CShape *v44; // [rsp+98h] [rbp-11h] BYREF
  char v45; // [rsp+A0h] [rbp-9h]
  _DWORD v46[10]; // [rsp+A8h] [rbp-1h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 11);
  if ( !v5 )
    return v4;
  v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 48LL);
  if ( v8 == CCompositionSurfaceBitmap::IsOfType )
    v9 = CCompositionSurfaceBitmap::IsOfType(v5, 15);
  else
    v9 = v8 == CPrimitiveGroup::IsOfType ? CPrimitiveGroup::IsOfType(v5, 15) : v8(v5, 15);
  if ( v9 )
    return v4;
  v10 = *(bool (__fastcall **)(CSpriteVisualContent *__hidden))(*(_QWORD *)this + 192LL);
  v11 = v10 == CSpriteVisualContent::IsEmptyDrawing ? CSpriteVisualContent::IsEmptyDrawing(this) : v10(this);
  if ( v11 || !a3 || a3->width <= 0.0 || a3->height <= 0.0 )
    return v4;
  v31 = 0LL;
  v44 = 0LL;
  v43 = &v31;
  v45 = 1;
  v4 = CSurfaceBrush::ComputeLayout(this, a3, 0, (struct CContent::LayoutData *)v46, &v44);
  if ( v45 )
  {
    v12 = v44;
    v13 = *v43;
    *v43 = v44;
    if ( v13 )
      std::default_delete<CShape>::operator()((__int64)v12, v13);
  }
  if ( v4 == -2003304441 )
  {
    v4 = 0;
    goto LABEL_52;
  }
  if ( (v4 & 0x80000000) != 0 )
  {
    v30 = 245;
    v27 = v4;
    goto LABEL_51;
  }
  v14 = v31;
  v15 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v31 + 40LL);
  if ( v15 == CRectanglesShape::IsRectangles )
  {
    IsRectangles = CRectanglesShape::IsRectangles(v31, v32);
  }
  else
  {
    IsRectangles = v15(v31, v32);
    v14 = v31;
  }
  if ( IsRectangles )
  {
    if ( v32[0] == 1 )
    {
      v17 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 12);
      if ( v17 )
      {
        v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 104LL);
        if ( (char *)v18 == (char *)CCompositionSurfaceBitmap::IsOpaque )
          IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v17);
        else
          IsOpaque = v18();
        if ( !IsOpaque )
          goto LABEL_28;
        v20 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)v31 + 32LL);
        if ( v20 == CRectanglesShape::GetTightBounds )
          TightBounds = CRectanglesShape::GetTightBounds((__int64)v31, (__int64)&v43, 0LL);
        else
          TightBounds = v20((__int64)v31, (__int64)&v43, 0LL);
        v4 = TightBounds;
        if ( TightBounds < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x100u);
          goto LABEL_52;
        }
        v22 = COcclusionContext::DrawOcclusionRectangle(a2, &v43, 0LL);
        v4 = v22;
        if ( v22 >= 0 )
        {
LABEL_28:
          v23 = (int (__fastcall ***)(_QWORD, GUID *, unsigned int *))*((_QWORD *)this + 12);
          *(_QWORD *)v32 = 0LL;
          if ( (**v23)(v23, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, v32) >= 0 )
          {
            if ( *((_BYTE *)a2 + 817) )
            {
              v28 = *((_QWORD *)a2 + 101);
              v42 = 0;
              v33[2] = 0;
              v33[3] = 0;
              v34 = 0LL;
              v35 = 0LL;
              v37 = 0;
              v40 = 0;
              v33[0] = v46[0];
              v33[1] = v46[1];
              v33[4] = v46[2];
              v33[5] = v46[3];
              v38 = v46[4];
              v39 = v46[5];
              v36 = 1065353216;
              v41 = 1065353216;
              v29 = COcclusionContext::CheckAndRecordOverlayCandidate(
                      (__int64)a2,
                      v28,
                      *(_QWORD **)v32,
                      (__int64)v33,
                      v31,
                      0);
              v4 = v29;
              if ( v29 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x10Eu);
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v32);
                goto LABEL_52;
              }
            }
          }
          v24 = *(_QWORD *)v32;
          if ( *(_QWORD *)v32 )
          {
            *(_QWORD *)v32 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v14 = v31;
          goto LABEL_32;
        }
        v30 = 258;
        v27 = v22;
LABEL_51:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, v30);
LABEL_52:
        if ( v31 )
          std::default_delete<CShape>::operator()((__int64)v12, v31);
        return v4;
      }
    }
  }
LABEL_32:
  if ( v14 )
  {
    v25 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v14;
    if ( v25 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v14, 1);
    else
      v25(v14, 1);
  }
  return v4;
}
