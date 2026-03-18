/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180025B00
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180053AF0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x180022D50 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028BB0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800298A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D170 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005D830 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$As@VISwapChainContent@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VISwapChainContent@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B2530 (--$As@VISwapChainContent@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@V.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1800C4D38 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@_NPEAULayoutData@1@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v5; // rcx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  char v8; // al
  int v9; // ebx
  char (__fastcall *v10)(CSpriteVisualContent *); // rax
  char IsEmptyDrawing; // al
  CShape **v12; // r14
  struct CShape *v13; // rsi
  CRectanglesShape *v14; // rcx
  CCompositionSurfaceBitmap *v15; // rcx
  __int64 (*v16)(void); // rax
  char IsOpaque; // al
  __int64 v18; // rcx
  void *(__fastcall *v19)(CRectanglesShape *__hidden, unsigned int); // rax
  int v21; // eax
  int v22; // eax
  void *(__fastcall *v23)(CRectanglesShape *__hidden, unsigned int); // rax
  int v24; // r9d
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-99h]
  CShape *v28; // [rsp+30h] [rbp-89h] BYREF
  __int64 v29; // [rsp+38h] [rbp-81h] BYREF
  _DWORD v30[6]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v31; // [rsp+58h] [rbp-61h]
  __int64 v32; // [rsp+60h] [rbp-59h]
  int v33; // [rsp+68h] [rbp-51h]
  int v34; // [rsp+6Ch] [rbp-4Dh]
  int v35; // [rsp+70h] [rbp-49h]
  int v36; // [rsp+74h] [rbp-45h]
  int v37; // [rsp+78h] [rbp-41h]
  int v38; // [rsp+7Ch] [rbp-3Dh]
  int v39; // [rsp+80h] [rbp-39h]
  CShape **v40; // [rsp+90h] [rbp-29h] BYREF
  struct CShape *v41; // [rsp+98h] [rbp-21h] BYREF
  char v42; // [rsp+A0h] [rbp-19h]
  _DWORD v43[10]; // [rsp+A8h] [rbp-11h] BYREF

  v5 = *((_QWORD *)this + 12);
  if ( !v5
    || ((v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL),
         v7 != CCompositionSurfaceBitmap::IsOfType)
      ? (v8 = v7(v5, 15LL))
      : (v8 = CCompositionSurfaceBitmap::IsOfType(v5, 15LL)),
        !v8) )
  {
    v9 = 0;
    v10 = *(char (__fastcall **)(CSpriteVisualContent *))(*(_QWORD *)this + 192LL);
    if ( v10 == CSpriteVisualContent::IsEmptyDrawing )
      IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing(this);
    else
      IsEmptyDrawing = v10(this);
    if ( IsEmptyDrawing || !a3 || a3->width <= 0.0 || a3->height <= 0.0 )
      return (unsigned int)v9;
    v28 = 0LL;
    v41 = 0LL;
    v40 = &v28;
    v42 = 1;
    v9 = CSurfaceBrush::ComputeLayout(this, a3, 0LL, 0, (struct CSurfaceBrush::LayoutData *)v43, &v41);
    if ( v42 )
    {
      v12 = v40;
      v13 = v41;
      v14 = *v40;
      if ( v41 != *v40 )
      {
        if ( v14 )
        {
          v23 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v14;
          if ( v23 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v14, 1u);
          else
            v23(v14, 1u);
        }
        *v12 = v13;
      }
    }
    if ( v9 == -2003304441 )
    {
      v9 = 0;
      goto LABEL_25;
    }
    if ( v9 < 0 )
    {
      v27 = 289;
      v24 = v9;
    }
    else
    {
      if ( !CShape::IsAxisAlignedRectangle(v28) || (v15 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 13)) == 0LL )
      {
LABEL_25:
        if ( v28 )
        {
          v19 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v28;
          if ( v19 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v28, 1u);
          else
            v19(v28, 1u);
        }
        return (unsigned int)v9;
      }
      v16 = *(__int64 (**)(void))(*(_QWORD *)v15 + 104LL);
      if ( (char *)v16 == (char *)CCompositionSurfaceBitmap::IsOpaque )
        IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v15);
      else
        IsOpaque = v16();
      if ( !IsOpaque )
        goto LABEL_22;
      v21 = (*(__int64 (__fastcall **)(CShape *, CShape ***, _QWORD))(*(_QWORD *)v28 + 32LL))(v28, &v40, 0LL);
      v9 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x12Cu);
        goto LABEL_25;
      }
      v22 = COcclusionContext::DrawOcclusionRectangle(a2, &v40);
      v9 = v22;
      if ( v22 >= 0 )
      {
LABEL_22:
        v29 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IImageSource>::As<ISwapChainContent>((char *)this + 104, &v29) >= 0 )
        {
          if ( *((_BYTE *)a2 + 817) )
          {
            v25 = *((_QWORD *)a2 + 101);
            v39 = 0;
            v30[2] = 0;
            v30[3] = 0;
            v31 = 0LL;
            v32 = 0LL;
            v34 = 0;
            v37 = 0;
            v30[0] = v43[0];
            v30[1] = v43[1];
            v30[4] = v43[2];
            v30[5] = v43[3];
            v35 = v43[4];
            v36 = v43[5];
            v33 = 1065353216;
            v38 = 1065353216;
            v26 = COcclusionContext::CheckAndRecordOverlayCandidate(a2, v25, v29, v30, v28, 0);
            v9 = v26;
            if ( v26 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x13Au);
          }
        }
        v18 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_25;
      }
      v27 = 302;
      v24 = v22;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v27);
    goto LABEL_25;
  }
  return 0LL;
}
