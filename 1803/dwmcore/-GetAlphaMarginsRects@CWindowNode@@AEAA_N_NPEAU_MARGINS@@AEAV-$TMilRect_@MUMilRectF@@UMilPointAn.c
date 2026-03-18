/*
 * XREFs of ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x18013C044
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180019964 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800292D8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180094DF4 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18013BF14 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 */

char __fastcall CWindowNode::GetAlphaMarginsRects(const RECT *a1, char a2, _DWORD *a3, __int64 a4, LONG *a5, int *a6)
{
  char v10; // r12
  __int64 v11; // rdx
  char v12; // r9
  char v13; // bp
  int v14; // r8d
  int v15; // r10d
  int v16; // r9d
  int v17; // r8d
  int v18; // r11d
  int v19; // r9d
  int *v20; // rax
  int v21; // r10d
  __int64 v22; // rdx
  int *v23; // rax
  int v24; // r11d
  __int64 v25; // rdx
  int *v26; // rax
  int v27; // r8d
  __int64 v28; // rdx
  int *v29; // rax
  int v30; // r9d
  LONG v31; // eax
  LONG v32; // ecx
  int v33; // eax
  LONG v34; // edx
  int v35; // ecx
  int v36; // edx
  int v37; // r8d
  int v39[4]; // [rsp+20h] [rbp-48h] BYREF

  v10 = 0;
  *(_OWORD *)a5 = *(_OWORD *)CMilRectLFromMilRectF(v39, a4);
  *(_OWORD *)a6 = *(_OWORD *)CMilRectLFromMilRectF(v39, v11);
  CWindowNode::IntersectWithMaximizedClip(a1, a5);
  v12 = 0;
  v13 = 1;
  if ( a3 && (*a3 || a3[2] || a3[1] || a3[3]) )
  {
    v10 = 1;
    v14 = a6[2];
    v15 = *a3 + *a6;
    v16 = a6[3];
    *a6 = v15;
    v17 = v14 - a3[1];
    a6[2] = v17;
    v18 = a6[1] + a3[2];
    a6[1] = v18;
    v19 = v16 - a3[3];
    a6[3] = v19;
    if ( a2 )
    {
      v20 = CMilRectLFromMilRectF(v39, a4);
      *a6 = v21 - *v20;
      v23 = CMilRectLFromMilRectF(v39, v22);
      a6[1] = v24 - v23[1];
      v26 = CMilRectLFromMilRectF(v39, v25);
      a6[2] = a1[43].right - a1[43].left - v26[2] + v27;
      v29 = CMilRectLFromMilRectF(v39, v28);
      v19 = a1[43].bottom - a1[43].top - v29[3] + v30;
      a6[3] = v19;
    }
    if ( v17 <= v15 )
      v17 = v15;
    a6[2] = v17;
    if ( v19 <= v18 )
      v19 = v18;
    a6[3] = v19;
    v12 = 0;
  }
  if ( *a5 > *a6 )
    *a6 = *a5;
  v31 = a5[1];
  if ( v31 > a6[1] )
    a6[1] = v31;
  v32 = a5[2];
  v33 = a6[2];
  if ( v32 < v33 )
  {
    a6[2] = v32;
    v33 = v32;
  }
  v34 = a5[3];
  v35 = a6[3];
  if ( v34 < v35 )
  {
    a6[3] = v34;
    v35 = v34;
    v33 = a6[2];
  }
  v36 = *a6;
  if ( v33 <= *a6 || (v37 = a6[1], v35 <= v37) )
  {
    *((_QWORD *)a6 + 1) = 0LL;
    v36 = 0;
    *(_QWORD *)a6 = 0LL;
    v33 = 0;
    v35 = 0;
    v37 = 0;
  }
  if ( !v10
    || v36 == *a5 && v37 == a5[1] && v33 == a5[2] && v35 == a5[3]
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a6)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a5)
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(a6)
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(a5) )
  {
    return v12;
  }
  return v13;
}
