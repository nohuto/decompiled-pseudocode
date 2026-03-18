/*
 * XREFs of ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x180143920
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 */

char __fastcall COverlayContext::IsIntelWorkaroundNeeded(
        COverlayContext *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v4; // bl
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  int v10; // esi
  float v11; // xmm2_4
  float v12; // xmm1_4
  struct tagRECT v14; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 1174) && !*((_BYTE *)this + 1173) )
  {
    *(_QWORD *)&v14.left = 0LL;
    *(_QWORD *)&v14.right = 0LL;
    IntersectRect(&v14, a3, a4);
    v7 = (float)(v14.bottom - v14.top) / (float)(a3->bottom - a3->top);
    v8 = (float)((float)(v14.right - v14.left) / (float)(a3->right - a3->left)) * (float)(a2->right - a2->left);
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
    if ( v9 < 8388608.0 )
      v8 = (float)(int)floorf_0(v8);
    v10 = (int)v8;
    v11 = (float)(a2->bottom - a2->top) * v7;
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
    if ( v12 < 8388608.0 )
      v11 = (float)(int)floorf_0(v11);
    if ( (unsigned int)(v10 - 129) > 0xF7D || (unsigned int)((int)v11 - 1) > 0xFFE )
      return 1;
  }
  return v4;
}
