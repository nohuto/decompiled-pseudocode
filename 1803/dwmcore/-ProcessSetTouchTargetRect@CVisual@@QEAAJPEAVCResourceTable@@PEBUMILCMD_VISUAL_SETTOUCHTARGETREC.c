/*
 * XREFs of ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x180050AC4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18004CCB4 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CD34 (-SetTouchTargetBounds@CVisual@@IEAAXV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180064E00 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800651D4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::ProcessSetTouchTargetRect(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTOUCHTARGETRECT *a3,
        __int64 a4)
{
  float v5; // xmm1_4
  __m128i v6; // xmm0
  float v7; // xmm1_4
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF

  v5 = (float)*((int *)a3 + 3);
  *(float *)&v9 = (float)*((int *)a3 + 2);
  v6 = _mm_cvtsi32_si128(*((_DWORD *)a3 + 4));
  *((float *)&v9 + 1) = v5;
  v7 = (float)*((int *)a3 + 5);
  DWORD2(v9) = _mm_cvtepi32_ps(v6).m128_u32[0];
  *((float *)&v9 + 3) = v7;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(&v9, a2, a3, a4) )
    v9 = 0uLL;
  CVisual::GetTouchTargetBounds((__int64)this, &v10);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v10, &v9) )
  {
    v10 = v9;
    CVisual::SetTouchTargetBounds((__int64)this, &v10);
    CVisual::PropagateFlags((__int64)this, 1u, 0);
  }
  return 0LL;
}
