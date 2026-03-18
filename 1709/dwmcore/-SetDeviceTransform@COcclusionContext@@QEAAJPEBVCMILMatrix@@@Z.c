/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180060D80
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18003B2A0 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180060F58 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z @ 0x1800363E0 (-SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058F90 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  unsigned int v2; // ebp
  bool v3; // si
  const struct CMILMatrix *v4; // rdi
  const struct CMILMatrix *v6; // rdx
  char v7; // al
  CArrayBasedCoverageSet *v9; // rcx
  void (__fastcall *v10)(CArrayBasedCoverageSet *, const struct CMILMatrix *); // rax
  __m128 v11; // xmm0
  int v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  int v15; // eax
  __m128 v16; // xmm1
  __m128 v17[4]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+70h] [rbp-18h]

  v2 = 0;
  v3 = 0;
  v4 = a2;
  if ( a2 && !CMILMatrix::IsIdentity<0>((__int64)a2) )
  {
    v18 = 0;
    if ( CMILMatrix::SetToInverse(v17, v6) )
    {
      if ( !*((_BYTE *)this + 816) || !CMILMatrix::IsEqualTo<0>((float *)this + 205, (float *)v4) )
        v3 = 1;
      *(_OWORD *)((char *)this + 820) = *(_OWORD *)v4;
      *(_OWORD *)((char *)this + 836) = *((_OWORD *)v4 + 1);
      *(_OWORD *)((char *)this + 852) = *((_OWORD *)v4 + 2);
      v11 = v17[0];
      *(_OWORD *)((char *)this + 868) = *((_OWORD *)v4 + 3);
      v12 = *((_DWORD *)v4 + 16);
      v13 = v17[1];
      *(__m128 *)((char *)this + 888) = v11;
      *((_DWORD *)this + 221) = v12;
      v14 = v17[2];
      v15 = v18;
      *(__m128 *)((char *)this + 904) = v13;
      *((_BYTE *)this + 816) = 1;
      v16 = v17[3];
      *(__m128 *)((char *)this + 920) = v14;
      *(__m128 *)((char *)this + 936) = v16;
      *((_DWORD *)this + 238) = v15;
    }
    else
    {
      v2 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x96u);
    }
  }
  else
  {
    v7 = *((_BYTE *)this + 816);
    if ( v7 )
      *((_BYTE *)this + 816) = 0;
    v3 = v7 != 0;
    v4 = 0LL;
    if ( this != (COcclusionContext *)-820LL )
    {
      *((_WORD *)this + 442) = 32085;
      *(_OWORD *)((char *)this + 820) = _xmm;
      *(_OWORD *)((char *)this + 836) = _xmm;
      *(_OWORD *)((char *)this + 852) = _xmm;
      *(_OWORD *)((char *)this + 868) = _xmm;
    }
    if ( this != (COcclusionContext *)-888LL )
    {
      *((_WORD *)this + 476) = 32085;
      *(_OWORD *)((char *)this + 888) = _xmm;
      *(_OWORD *)((char *)this + 904) = _xmm;
      *(_OWORD *)((char *)this + 920) = _xmm;
      *(_OWORD *)((char *)this + 936) = _xmm;
    }
  }
  if ( v3 )
  {
    v9 = (CArrayBasedCoverageSet *)*((_QWORD *)this + 49);
    v10 = *(void (__fastcall **)(CArrayBasedCoverageSet *, const struct CMILMatrix *))(*(_QWORD *)v9 + 24LL);
    if ( v10 == CArrayBasedCoverageSet::SetDeviceTransform )
      CArrayBasedCoverageSet::SetDeviceTransform(v9, v4);
    else
      v10(v9, v4);
  }
  return v2;
}
