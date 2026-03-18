/*
 * XREFs of ?DiscardIfOccluded@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9290
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001D074 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z @ 0x1800A1EC4 (-GetTargetDeviceBounds@CDrawingContext@@AEAAXPEAUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::DiscardIfOccluded(CDrawingContext *this, float *a2)
{
  char result; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  float v9[4]; // [rsp+20h] [rbp-38h] BYREF
  struct _D3DCOLORVALUE v10; // [rsp+30h] [rbp-28h] BYREF

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  if ( !result )
  {
    v7 = *((_QWORD *)this + 843);
    if ( v7 )
    {
      if ( (*(int (__fastcall **)(_QWORD, struct _D3DCOLORVALUE *))(**(_QWORD **)(v7 + 24) + 144LL))(
             *(_QWORD *)(v7 + 24),
             &v10) >= 0 )
      {
        CDrawingContext::GetTargetDeviceBounds(this, (struct MilRectF *)v9);
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(a2, v9) )
          return CDrawingContext::Clear((CD2DContext **)this, &v10);
      }
      return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 46) + 144LL))(*((_QWORD *)this + 46), a2);
    }
    if ( *((_BYTE *)this + 6771) )
    {
      v8 = *((_QWORD *)this + 835);
      if ( v8 )
      {
        LOBYTE(v6) = 1;
        result = COcclusionContext::IsOccluded(v8, v5, v6, 0x7FFFFFFFu);
        if ( result )
          return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 46) + 144LL))(
                   *((_QWORD *)this + 46),
                   a2);
      }
    }
  }
  return result;
}
