/*
 * XREFs of ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022920
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022DE0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036948 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18003D31C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004E5FC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CSpriteVisualContent::IsDrawListCacheDirty(
        CSpriteVisualContent *this,
        struct CDrawListCache *a2,
        const struct CVisualTree **a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  unsigned __int64 v9; // rbx
  CVisual *v10; // rdi
  bool v11; // cf
  char v12; // bl
  struct CVisual *CurrentVisual; // rax
  float width; // xmm0_4
  float height; // xmm1_4
  _DWORD v17[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-58h] BYREF

  if ( CContent::IsDrawListCacheDirty(this, a2, (struct CDrawingContext *)a3, a4, a5) )
    return 1;
  v9 = *((_QWORD *)a2 + 3);
  if ( v9 < *((_QWORD *)this + 9) )
    return 1;
  v10 = 0LL;
  if ( *((_BYTE *)a3 + 6520) )
  {
    if ( *((_BYTE *)a3 + 6521) )
      v10 = a3[395];
    else
      v10 = (CVisual *)*((_QWORD *)a3[816] + 3);
  }
  if ( (*((_BYTE *)v10 + 256) & 3) == 0 )
    return 0;
  v11 = v9 < *((_QWORD *)CVisual::FindTreeData(v10, a3[816]) + 15);
  v12 = 1;
  if ( !v11 )
  {
    if ( (*((_BYTE *)v10 + 256) & 1) != 0 )
    {
      width = a4->width;
      height = a4->height;
      v17[0] = 0;
      v17[1] = 0;
      *(float *)&v17[2] = width + 0.0;
      *(float *)&v17[3] = height + 0.0;
      CDrawingContext::CalcWorldSpaceClippedBounds(a3, v17, v18);
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((char *)a2 + 60, v18)
        || (*((_BYTE *)v10 + 512) & 1) != 0
        && ((*((_BYTE *)v10 + 93) & 0x40) == 0
         || *(_QWORD *)(*((_QWORD *)this + 2) + 472LL) - *((_QWORD *)a2 + 10) >= CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta) )
      {
        ++dword_18026EDBC;
        return v12;
      }
      return 0;
    }
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 1));
    if ( !CurrentVisual )
      return 0;
    do
    {
      if ( (*(_DWORD *)(*((_QWORD *)CurrentVisual + 26) + 4LL) & 0x10000) != 0 )
        break;
      CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 10);
    }
    while ( CurrentVisual );
    if ( !CurrentVisual || !*((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual) + 286) )
      return 0;
  }
  return v12;
}
