/*
 * XREFs of ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x18012A478
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180020680 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18004FCA8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004FDD0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800501A0 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800CC1D0 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CWindowNode::GetAlphaMarginsRects(
        _DWORD *a1,
        char a2,
        const struct _MARGINS *a3,
        __int64 a4,
        LONG *a5,
        LONG *a6)
{
  char v10; // r14
  __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // eax
  LONG v19; // eax
  LONG v20; // eax
  char v21; // r8
  int v23[4]; // [rsp+20h] [rbp-48h] BYREF

  v10 = 0;
  *(_OWORD *)a5 = *(_OWORD *)CMilRectLFromMilRectF(v23, a4);
  *(_OWORD *)a6 = *(_OWORD *)CMilRectLFromMilRectF(v23, v11);
  CWindowNode::IntersectWithMaximizedClip((__int64)a1, a5);
  if ( a3 && !AreAllMarginsZero(a3) )
  {
    v10 = v12;
    *a6 += a3->cxLeftWidth;
    a6[2] -= a3->cxRightWidth;
    a6[1] += a3->cyTopHeight;
    a6[3] -= a3->cyBottomHeight;
    if ( a2 )
    {
      *a6 -= *CMilRectLFromMilRectF(v23, a4);
      a6[1] -= CMilRectLFromMilRectF(v23, v13)[1];
      a6[2] += a1[165] - a1[163] - CMilRectLFromMilRectF(v23, v14)[2];
      a6[3] += a1[166] - a1[164] - CMilRectLFromMilRectF(v23, v15)[3];
    }
    v16 = *a6;
    if ( a6[2] > *a6 )
      v16 = a6[2];
    a6[2] = v16;
    v17 = a6[1];
    if ( a6[3] > v17 )
      v17 = a6[3];
    a6[3] = v17;
  }
  if ( *a5 > *a6 )
    *a6 = *a5;
  v18 = a5[1];
  if ( v18 > a6[1] )
    a6[1] = v18;
  v19 = a5[2];
  if ( v19 < a6[2] )
    a6[2] = v19;
  v20 = a5[3];
  if ( v20 < a6[3] )
    a6[3] = v20;
  if ( a6[2] <= *a6 || a6[3] <= a6[1] )
  {
    a6[3] = 0;
    a6[2] = 0;
    a6[1] = 0;
    *a6 = 0;
  }
  if ( !v10
    || *a6 == *a5 && a6[1] == a5[1] && a6[2] == a5[2] && a6[3] == a5[3]
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a6)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a5)
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(a6)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(a5) )
  {
    return 0;
  }
  return v21;
}
