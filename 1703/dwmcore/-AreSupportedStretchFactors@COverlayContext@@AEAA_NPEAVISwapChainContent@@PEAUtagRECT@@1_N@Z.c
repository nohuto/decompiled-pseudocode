/*
 * XREFs of ?AreSupportedStretchFactors@COverlayContext@@AEAA_NPEAVISwapChainContent@@PEAUtagRECT@@1_N@Z @ 0x1800718AC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 */

char __fastcall COverlayContext::AreSupportedStretchFactors(
        COverlayContext *this,
        struct ISwapChainContent *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        bool a5)
{
  char v5; // bl
  int v6; // r11d
  int v7; // eax
  float v8; // xmm3_4
  float v9; // xmm4_4
  __int64 v11; // rax

  v5 = 0;
  v6 = a3->right - a3->left;
  v7 = a3->bottom - a3->top;
  if ( !a5 )
  {
    v7 = a3->right - a3->left;
    v6 = a3->bottom - a3->top;
  }
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a4->right - a4->left) / (float)v7)) & _xmm);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a4->bottom - a4->top) / (float)v6)) & _xmm);
  if ( *((float *)this + 36) >= fmaxf(v8, v9) && fminf(v8, v9) >= *((float *)this + 37) )
    return 1;
  v11 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 184LL))(a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xd(
      *(unsigned int *)(v11 + 40),
      &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
      *(unsigned int *)(v11 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v11 + 40)) << 32),
      4LL);
  return v5;
}
