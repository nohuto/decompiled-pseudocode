/*
 * XREFs of ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x1800A87CC
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006B224 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800A89A8 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z @ 0x180064B30 (-SetDeviceTransform@CArrayBasedCoverageSet@@UEAAXPEBVCMILMatrix@@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800A6200 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::SetDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  unsigned int v2; // ebp
  char v3; // si
  const struct CMILMatrix *v4; // rdi
  const struct CMILMatrix *v6; // rdx
  CArrayBasedCoverageSet *v8; // rcx
  void (__fastcall *v9)(CArrayBasedCoverageSet *, const struct CMILMatrix *); // rax
  __m128 v10; // xmm0
  int v11; // eax
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  int v14; // eax
  __m128 v15; // xmm1
  __m128 v16[4]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+70h] [rbp-18h]

  v2 = 0;
  v3 = 0;
  v4 = a2;
  if ( a2 && !CMILMatrix::IsIdentity<0>((__int64)a2) )
  {
    v17 = 0;
    if ( CMILMatrix::SetToInverse(v16, v6) )
    {
      if ( !*((_BYTE *)this + 816) || !CMILMatrix::IsEqualTo<0>((float *)this + 205, (float *)v4) )
        v3 = 1;
      *(_OWORD *)((char *)this + 820) = *(_OWORD *)v4;
      *(_OWORD *)((char *)this + 836) = *((_OWORD *)v4 + 1);
      *(_OWORD *)((char *)this + 852) = *((_OWORD *)v4 + 2);
      v10 = v16[0];
      *(_OWORD *)((char *)this + 868) = *((_OWORD *)v4 + 3);
      v11 = *((_DWORD *)v4 + 16);
      v12 = v16[1];
      *(__m128 *)((char *)this + 888) = v10;
      *((_DWORD *)this + 221) = v11;
      v13 = v16[2];
      v14 = v17;
      *(__m128 *)((char *)this + 904) = v12;
      *((_BYTE *)this + 816) = 1;
      v15 = v16[3];
      *(__m128 *)((char *)this + 920) = v13;
      *(__m128 *)((char *)this + 936) = v15;
      *((_DWORD *)this + 238) = v14;
    }
    else
    {
      v2 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x96u);
    }
  }
  else
  {
    if ( *((_BYTE *)this + 816) )
    {
      *((_BYTE *)this + 816) = 0;
      v3 = 1;
    }
    *((_WORD *)this + 442) = 32085;
    v4 = 0LL;
    *(_OWORD *)((char *)this + 820) = _xmm;
    *(_OWORD *)((char *)this + 836) = _xmm;
    *(_OWORD *)((char *)this + 852) = _xmm;
    *(_OWORD *)((char *)this + 868) = _xmm;
    *((_WORD *)this + 476) = 32085;
    *(_OWORD *)((char *)this + 888) = _xmm;
    *(_OWORD *)((char *)this + 904) = _xmm;
    *(_OWORD *)((char *)this + 920) = _xmm;
    *(_OWORD *)((char *)this + 936) = _xmm;
  }
  if ( v3 )
  {
    v8 = (CArrayBasedCoverageSet *)*((_QWORD *)this + 49);
    v9 = *(void (__fastcall **)(CArrayBasedCoverageSet *, const struct CMILMatrix *))(*(_QWORD *)v8 + 24LL);
    if ( v9 == CArrayBasedCoverageSet::SetDeviceTransform )
      CArrayBasedCoverageSet::SetDeviceTransform(v8, v4);
    else
      v9(v8, v4);
  }
  return v2;
}
