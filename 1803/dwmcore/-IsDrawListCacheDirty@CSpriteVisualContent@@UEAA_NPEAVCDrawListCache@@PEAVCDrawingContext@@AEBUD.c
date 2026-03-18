/*
 * XREFs of ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18009D1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004F67C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006C768 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18009AF60 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CSpriteVisualContent::IsDrawListCacheDirty(
        CSpriteVisualContent *this,
        struct CDrawListCache *a2,
        const struct CVisualTree **a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  CVisual *v9; // rdi
  char v10; // bl
  float width; // xmm0_4
  float height; // xmm1_4
  struct CVisual *CurrentVisual; // rax
  _DWORD v15[4]; // [rsp+30h] [rbp-68h] BYREF
  struct D2D_RECT_F v16; // [rsp+40h] [rbp-58h] BYREF

  if ( CContent::IsDrawListCacheDirty(this, a2, (struct CDrawingContext *)a3, a4, a5) )
    return 1;
  v9 = 0LL;
  if ( *((_BYTE *)a3 + 6520) )
  {
    if ( *((_BYTE *)a3 + 6521) )
      v9 = a3[395];
    else
      v9 = (CVisual *)*((_QWORD *)a3[816] + 3);
  }
  if ( (*((_BYTE *)v9 + 264) & 3) == 0 )
    return 0;
  v10 = 1;
  if ( (struct _LIST_ENTRY *)*((_QWORD *)a2 + 3) >= CVisual::FindTreeData(v9, a3[816])[7].Blink )
  {
    if ( (*((_BYTE *)v9 + 264) & 1) != 0 )
    {
      width = a4->width;
      height = a4->height;
      v15[0] = 0;
      v15[1] = 0;
      *(float *)&v15[2] = width + 0.0;
      *(float *)&v15[3] = height + 0.0;
      CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a3, (__int64)v15, &v16.left);
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)a2 + 68, &v16)
        || (*((_BYTE *)v9 + 520) & 1) != 0
        && ((*((_BYTE *)v9 + 94) & 4) == 0
         || *(_QWORD *)(*((_QWORD *)this + 2) + 496LL) - *((_QWORD *)a2 + 11) >= CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta) )
      {
        ++dword_1802D62FC;
        return v10;
      }
      return 0;
    }
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 1));
    if ( !CurrentVisual )
      return 0;
    do
    {
      if ( (*(_DWORD *)(*((_QWORD *)CurrentVisual + 27) + 4LL) & 0x10000) != 0 )
        break;
      CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 10);
    }
    while ( CurrentVisual );
    if ( !CurrentVisual || !*((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual) + 357) )
      return 0;
  }
  return v10;
}
