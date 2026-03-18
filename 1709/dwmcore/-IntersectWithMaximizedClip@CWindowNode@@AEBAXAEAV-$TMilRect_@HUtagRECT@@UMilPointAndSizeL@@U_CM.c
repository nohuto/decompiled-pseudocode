/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180098EE4
 * Callers:
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x1800994D4 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18011A1C8 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CWindowNode::IntersectWithMaximizedClip(__int64 a1, LONG *a2)
{
  _DWORD *v4; // rsi
  LONG v5; // edx
  LONG v6; // r8d
  LONG v7; // eax
  RECT rcSrc1; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 904) || *(_DWORD *)(a1 + 912) || *(_DWORD *)(a1 + 908) || *(_DWORD *)(a1 + 916) )
  {
    v4 = (_DWORD *)(a1 + 680);
    v5 = *(_DWORD *)(a1 + 912) + *(_DWORD *)(a1 + 636);
    v6 = *(_DWORD *)(a1 + 644) - *(_DWORD *)(a1 + 916);
    v7 = *(_DWORD *)(a1 + 904) + *(_DWORD *)(a1 + 632);
    rcSrc1.right = *(_DWORD *)(a1 + 640) - *(_DWORD *)(a1 + 908);
    rcSrc1.top = v5;
    rcSrc1.bottom = v6;
    rcSrc1.left = v7;
    IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)(a1 + 680));
    if ( !EqualRect(&rcSrc1, (const RECT *)(a1 + 680)) )
    {
      OffsetRect(&rcSrc1, -*v4, -*(_DWORD *)(a1 + 684));
      if ( rcSrc1.left > *a2 )
        *a2 = rcSrc1.left;
      if ( rcSrc1.top > a2[1] )
        a2[1] = rcSrc1.top;
      if ( rcSrc1.right < a2[2] )
        a2[2] = rcSrc1.right;
      if ( rcSrc1.bottom < a2[3] )
        a2[3] = rcSrc1.bottom;
      if ( a2[2] <= *a2 || a2[3] <= a2[1] )
      {
        a2[3] = 0;
        a2[2] = 0;
        a2[1] = 0;
        *a2 = 0;
      }
    }
  }
}
