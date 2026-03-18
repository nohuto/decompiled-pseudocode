/*
 * XREFs of ?AreSupportedStretchFactors@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUtagRECT@@1_N@Z @ 0x180163AF4
 * Callers:
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801667DC (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 */

char __fastcall COverlayContext::AreSupportedStretchFactors(
        COverlayContext *this,
        struct ISwapChainContent *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        bool a5)
{
  char v5; // bl
  int v6; // r11d
  int v7; // eax
  float v8; // xmm3_4
  float v9; // xmm4_4
  __int64 v10; // rax

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
  if ( *((float *)this + 40) >= fmaxf(v8, v9) && fminf(v8, v9) >= *((float *)this + 41) )
    return 1;
  v10 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 200LL))(a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq(
      *(unsigned int *)(v10 + 40),
      &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
      *(unsigned int *)(v10 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v10 + 40)) << 32),
      4);
  return v5;
}
