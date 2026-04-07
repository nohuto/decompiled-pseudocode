/*
 * XREFs of ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18007FBA4
 * Callers:
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x1800080FC (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180038590 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z @ 0x18007FF28 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x18007FF58 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall CThumbnailVisual::GetCVI(
        CThumbnailVisual *this,
        const struct tagRECT *a2,
        struct CResource **a3,
        struct MilPoint3F *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // esi
  double v12; // xmm2_8
  int v13; // eax
  int v14; // r14d
  double v15; // xmm3_8
  const struct tagRECT *v16; // rdx
  unsigned int v17; // eax
  __m128i v18; // xmm0
  unsigned int v19; // eax
  double v20; // xmm0_8
  float v21; // xmm0_4
  __m128i v22; // xmm0
  volatile signed __int32 *v23; // rax

  v8 = -2147467259;
  if ( *((_QWORD *)this + 48)
    && *((_QWORD *)this + 54)
    && *((_QWORD *)this + 47)
    && !CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v9 = *((_QWORD *)this + 46);
    if ( v9 && (*(_BYTE *)(v9 + 36) & 2) != 0 )
      IsRectEmpty((const RECT *)(v9 + 56));
    v10 = 0;
    v11 = a2->right - a2->left;
    v12 = *((double *)this + 60);
    if ( v11 >= 0 )
      v10 = a2->right - a2->left;
    if ( CThumbnailVisual::s_IsCloseEnoughToReuse((double)v10, *((double *)this + 60)) )
    {
      v13 = 0;
      v14 = a2->bottom - a2->top;
      v15 = *((double *)this + 61);
      if ( v14 >= 0 )
        v13 = a2->bottom - a2->top;
      if ( CThumbnailVisual::s_IsCloseEnoughToReuse((double)v13, *((double *)this + 61))
        && CThumbnailVisual::s_IsCloseEnoughToReuse(a2, v16) )
      {
        v17 = 0;
        if ( v11 >= 0 )
          v17 = v11;
        v18 = _mm_cvtsi32_si128(v17);
        v19 = 0;
        *(_QWORD *)&v20 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
        if ( v14 >= 0 )
          v19 = v14;
        v21 = v20 / v12;
        *(float *)a4 = v21;
        v22 = _mm_cvtsi32_si128(v19);
        v23 = (volatile signed __int32 *)*((_QWORD *)this + 54);
        *a3 = (struct CResource *)v23;
        *((float *)a4 + 1) = _mm_cvtepi32_pd(v22).m128d_f64[0] / v15;
        if ( v23 )
          _InterlockedIncrement(v23 + 2);
        return 0;
      }
    }
  }
  return v8;
}
