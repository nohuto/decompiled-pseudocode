/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180038E60
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800877F0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D8EC (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037990 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037CE0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180093F00 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18009B620 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v5; // rcx
  _BOOL8 (__fastcall *v7)(__int64, int); // rax
  bool v8; // al
  unsigned int v9; // edi
  bool (__fastcall *v10)(CSpriteVisualContent *__hidden); // rax
  bool IsEmptyDrawing; // al
  CRectanglesShape **v12; // r14
  struct CShape *v13; // rbx
  CRectanglesShape *v14; // rcx
  CRectanglesShape *v15; // rbx
  bool (__fastcall *v16)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  CCompositionSurfaceBitmap *v18; // rcx
  __int64 (*v19)(void); // rax
  char IsOpaque; // al
  int (__fastcall ***v21)(_QWORD, GUID *, unsigned int *); // rcx
  CCompositionSurfaceBitmap *v22; // rcx
  void *(__fastcall **v23)(CRectanglesShape *__hidden, unsigned int); // rax
  CRectanglesShape *v24; // rcx
  void *(__fastcall *v25)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 (__fastcall *v27)(CRectanglesShape *, CRectanglesShape ***, _QWORD); // rax
  int TightBounds; // eax
  int v29; // eax
  void *(__fastcall *v30)(CRectanglesShape *__hidden, unsigned int); // rax
  __int64 v31; // rdx
  int v32; // eax
  CRectanglesShape *v33; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v34[2]; // [rsp+38h] [rbp-81h] BYREF
  _DWORD v35[6]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v36; // [rsp+58h] [rbp-61h]
  __int64 v37; // [rsp+60h] [rbp-59h]
  int v38; // [rsp+68h] [rbp-51h]
  int v39; // [rsp+6Ch] [rbp-4Dh]
  int v40; // [rsp+70h] [rbp-49h]
  int v41; // [rsp+74h] [rbp-45h]
  int v42; // [rsp+78h] [rbp-41h]
  int v43; // [rsp+7Ch] [rbp-3Dh]
  int v44; // [rsp+80h] [rbp-39h]
  CRectanglesShape **v45; // [rsp+90h] [rbp-29h] BYREF
  struct CShape *v46; // [rsp+98h] [rbp-21h] BYREF
  char v47; // [rsp+A0h] [rbp-19h]
  _DWORD v48[10]; // [rsp+A8h] [rbp-11h] BYREF

  v5 = *((_QWORD *)this + 12);
  if ( !v5
    || ((v7 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 48LL), v7 != CCompositionSurfaceBitmap::IsOfType)
      ? (v8 = v7(v5, 61))
      : (v8 = CCompositionSurfaceBitmap::IsOfType(v5, 61)),
        !v8) )
  {
    v9 = 0;
    v10 = *(bool (__fastcall **)(CSpriteVisualContent *__hidden))(*(_QWORD *)this + 176LL);
    if ( v10 == CSpriteVisualContent::IsEmptyDrawing )
      IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing(this);
    else
      IsEmptyDrawing = v10(this);
    if ( IsEmptyDrawing || !a3 || a3->width <= 0.0 || a3->height <= 0.0 )
      return v9;
    v33 = 0LL;
    v46 = 0LL;
    v45 = &v33;
    v47 = 1;
    v9 = CSurfaceBrush::ComputeLayout(this, a3, 0LL, (struct CSurfaceBrush::LayoutData *)v48, &v46);
    if ( v47 )
    {
      v12 = v45;
      v13 = v46;
      v14 = *v45;
      if ( v46 != *v45 )
      {
        if ( v14 )
        {
          v30 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v14;
          if ( v30 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v14, 1u);
          else
            v30(v14, 1u);
        }
        *v12 = v13;
      }
    }
    if ( v9 == -2003304441 )
    {
      v9 = 0;
      goto LABEL_55;
    }
    if ( (v9 & 0x80000000) == 0 )
    {
      v15 = v33;
      v16 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v33 + 40LL);
      if ( v16 == CRectanglesShape::IsRectangles )
      {
        IsRectangles = CRectanglesShape::IsRectangles(v33, v34);
      }
      else
      {
        IsRectangles = v16(v33, v34);
        v15 = v33;
      }
      if ( IsRectangles && v34[0] == 1 )
      {
        v18 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 13);
        if ( v18 )
        {
          v19 = *(__int64 (**)(void))(*(_QWORD *)v18 + 96LL);
          if ( (char *)v19 == (char *)CCompositionSurfaceBitmap::IsOpaque )
            IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v18);
          else
            IsOpaque = v19();
          if ( IsOpaque )
          {
            v27 = *(__int64 (__fastcall **)(CRectanglesShape *, CRectanglesShape ***, _QWORD))(*(_QWORD *)v33 + 32LL);
            if ( (char *)v27 == (char *)CRectanglesShape::GetTightBounds )
              TightBounds = CRectanglesShape::GetTightBounds(v33, &v45, 0LL);
            else
              TightBounds = v27(v33, &v45, 0LL);
            v9 = TightBounds;
            if ( TightBounds < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x10Fu);
              goto LABEL_55;
            }
            v29 = COcclusionContext::DrawOcclusionRectangle(a2, &v45, 0LL);
            v9 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x111u);
              goto LABEL_55;
            }
          }
          v21 = (int (__fastcall ***)(_QWORD, GUID *, unsigned int *))*((_QWORD *)this + 13);
          *(_QWORD *)v34 = 0LL;
          if ( (**v21)(v21, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, v34) >= 0 )
          {
            if ( *((_BYTE *)a2 + 729) )
            {
              v31 = *((_QWORD *)a2 + 90);
              v44 = 0;
              v35[2] = 0;
              v35[3] = 0;
              v36 = 0LL;
              v37 = 0LL;
              v39 = 0;
              v42 = 0;
              v35[0] = v48[0];
              v35[1] = v48[1];
              v35[4] = v48[2];
              v35[5] = v48[3];
              v40 = v48[4];
              v41 = v48[5];
              v38 = 1065353216;
              v43 = 1065353216;
              v32 = COcclusionContext::CheckAndRecordOverlayCandidate(
                      (__int64)a2,
                      v31,
                      *(CCompositionSurfaceBitmap **)v34,
                      (__int64)v35,
                      v33,
                      0);
              v9 = v32;
              if ( v32 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x11Du);
                Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(v34);
                goto LABEL_55;
              }
            }
          }
          v22 = *(CCompositionSurfaceBitmap **)v34;
          if ( *(_QWORD *)v34 )
          {
            *(_QWORD *)v34 = 0LL;
            (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v22 + 16LL))(v22);
          }
          v15 = v33;
        }
      }
      if ( v15 )
      {
        v23 = *(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v15;
        v24 = v15;
        goto LABEL_31;
      }
      return v9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x104u);
LABEL_55:
    v24 = v33;
    if ( v33 )
    {
      v23 = *(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v33;
LABEL_31:
      v25 = *v23;
      if ( v25 == CRectanglesShape::`scalar deleting destructor' )
        CRectanglesShape::`scalar deleting destructor'(v24, 1u);
      else
        v25(v24, 1u);
      return v9;
    }
    return v9;
  }
  return 0LL;
}
