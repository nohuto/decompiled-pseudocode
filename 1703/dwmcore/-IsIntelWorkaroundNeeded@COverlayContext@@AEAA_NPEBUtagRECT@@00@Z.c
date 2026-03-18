/*
 * XREFs of ?IsIntelWorkaroundNeeded@COverlayContext@@AEAA_NPEBUtagRECT@@00@Z @ 0x18015172C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 */

char __fastcall COverlayContext::IsIntelWorkaroundNeeded(
        COverlayContext *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v4; // rax
  char v5; // bl
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  int v11; // esi
  float v12; // xmm2_4
  float v13; // xmm1_4
  struct tagRECT v15; // [rsp+20h] [rbp-48h] BYREF

  v4 = *((_QWORD *)this + 9);
  v5 = 0;
  if ( *(_DWORD *)(v4 + 248) == 32902 && *(__int64 *)(*(_QWORD *)(v4 + 24) + 352LL) <= 0x140013000F112DLL )
  {
    *(_QWORD *)&v15.left = 0LL;
    *(_QWORD *)&v15.right = 0LL;
    IntersectRect(&v15, a3, a4);
    v8 = (float)(v15.bottom - v15.top) / (float)(a3->bottom - a3->top);
    v9 = (float)((float)(v15.right - v15.left) / (float)(a3->right - a3->left)) * (float)(a2->right - a2->left);
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
    if ( v10 < 8388608.0 )
      v9 = (float)(int)floorf_0(v9);
    v11 = (int)v9;
    v12 = (float)(a2->bottom - a2->top) * v8;
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
    if ( v13 < 8388608.0 )
      v12 = (float)(int)floorf_0(v12);
    if ( (unsigned int)(v11 - 129) > 0xF7D || (unsigned int)((int)v12 - 1) > 0xFFE )
      return 1;
  }
  return v5;
}
