/*
 * XREFs of ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x1800994D4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18007816C (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180096FFC (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180098EE4 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18009E574 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CWindowNode::GetAlphaMarginsRects(_DWORD *a1, char a2, _DWORD *a3, __int64 a4, LONG *a5, LONG *a6)
{
  char v10; // r14
  __int64 v11; // rdx
  LONG v12; // eax
  LONG v13; // eax
  LONG v14; // eax
  char v15; // r8
  LONG v17; // eax
  LONG v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  _BYTE v23[16]; // [rsp+20h] [rbp-48h] BYREF

  v10 = 0;
  *(_OWORD *)a5 = *(_OWORD *)CMilRectLFromMilRectF(v23, a4);
  *(_OWORD *)a6 = *(_OWORD *)CMilRectLFromMilRectF(v23, v11);
  CWindowNode::IntersectWithMaximizedClip((__int64)a1, a5);
  if ( a3 && (*a3 || a3[2] || a3[1] || a3[3]) )
  {
    *a6 += *a3;
    v10 = 1;
    a6[2] -= a3[1];
    a6[1] += a3[2];
    a6[3] -= a3[3];
    if ( a2 )
    {
      *a6 -= *(_DWORD *)CMilRectLFromMilRectF(v23, a4);
      a6[1] -= *(_DWORD *)(CMilRectLFromMilRectF(v23, v19) + 4);
      a6[2] += a1[172] - a1[170] - *(_DWORD *)(CMilRectLFromMilRectF(v23, v20) + 8);
      a6[3] += a1[173] - a1[171] - *(_DWORD *)(CMilRectLFromMilRectF(v23, v21) + 12);
    }
    v17 = *a6;
    if ( a6[2] > *a6 )
      v17 = a6[2];
    a6[2] = v17;
    v18 = a6[1];
    if ( a6[3] > v18 )
      v18 = a6[3];
    a6[3] = v18;
  }
  if ( *a5 > *a6 )
    *a6 = *a5;
  v12 = a5[1];
  if ( v12 > a6[1] )
    a6[1] = v12;
  v13 = a5[2];
  if ( v13 < a6[2] )
    a6[2] = v13;
  v14 = a5[3];
  if ( v14 < a6[3] )
    a6[3] = v14;
  if ( a6[2] <= *a6 || a6[3] <= a6[1] )
  {
    a6[3] = 0;
    a6[2] = 0;
    a6[1] = 0;
    *a6 = 0;
  }
  if ( !v10 || *a6 == *a5 && a6[1] == a5[1] && a6[2] == a5[2] && a6[3] == a5[3] )
    return 0;
  if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a6)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a5) )
  {
    return 0;
  }
  if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(a6)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(a5) )
  {
    return 0;
  }
  return v15;
}
