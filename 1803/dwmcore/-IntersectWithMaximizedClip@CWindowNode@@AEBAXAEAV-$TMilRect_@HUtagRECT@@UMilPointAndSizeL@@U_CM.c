/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18013BF14
 * Callers:
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x18013C044 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18013C274 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CWindowNode::IntersectWithMaximizedClip(const RECT *a1, LONG *a2)
{
  LONG right; // ecx
  LONG v5; // ecx
  LONG v6; // eax
  LONG v7; // eax
  LONG v8; // ecx
  LONG v9; // edx
  __int64 v10; // rcx
  struct tagRECT rcDst; // [rsp+20h] [rbp-20h] BYREF

  right = a1[52].right;
  if ( right || a1[53].left || a1[52].bottom || a1[53].top )
  {
    v5 = a1[40].left + right;
    rcDst.right = a1[40].right - a1[52].bottom;
    rcDst.top = a1[40].top + a1[53].left;
    v6 = a1[40].bottom - a1[53].top;
    rcDst.left = v5;
    rcDst.bottom = v6;
    IntersectRect(&rcDst, &rcDst, a1 + 43);
    if ( !EqualRect(&rcDst, a1 + 43) )
    {
      OffsetRect(&rcDst, -a1[43].left, -a1[43].top);
      if ( rcDst.left > *a2 )
        *a2 = rcDst.left;
      if ( rcDst.top > a2[1] )
        a2[1] = rcDst.top;
      v7 = a2[2];
      v8 = rcDst.right;
      if ( rcDst.right < v7 )
      {
        a2[2] = rcDst.right;
        v7 = v8;
      }
      v9 = a2[3];
      v10 = HIDWORD(*(_QWORD *)&rcDst.right);
      if ( rcDst.bottom < v9 )
      {
        a2[3] = rcDst.bottom;
        v9 = v10;
        v7 = a2[2];
      }
      if ( v7 <= *a2 || v9 <= a2[1] )
      {
        a2[3] = 0;
        a2[2] = 0;
        a2[1] = 0;
        *a2 = 0;
      }
    }
  }
}
