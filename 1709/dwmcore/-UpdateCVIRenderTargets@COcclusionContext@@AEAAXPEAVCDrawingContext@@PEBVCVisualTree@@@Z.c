/*
 * XREFs of ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18005CD64
 * Callers:
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180042D38 (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800B3330 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800B336C (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18011ACDC (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 */

void __fastcall COcclusionContext::UpdateCVIRenderTargets(
        COcclusionContext *this,
        struct CDrawingContext *a2,
        const struct CVisualTree *a3)
{
  __int64 i; // rbx
  __int64 v7; // r14
  void *v8; // r12
  char v9; // r15
  __int64 v10; // [rsp+60h] [rbp+8h]
  char v11; // [rsp+78h] [rbp+20h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 294); i = (unsigned int)(i + 1) )
  {
    v7 = *((_QWORD *)this + 144);
    v8 = *(void **)(v7 + 40 * i);
    v9 = *(_BYTE *)(v7 + 40 * i + 16);
    v10 = *(_QWORD *)(v7 + 40 * i + 8);
    if ( (int)CThreadContext::RegisterGraphWalkRoot(v8) >= 0 )
    {
      if ( v9 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(a2, a3, v8, v7 + 20 + 40 * i) )
        CCachedVisualImage::EnsureRenderTargetBitmapInfo(v10, *((_QWORD *)a2 + 49), *((unsigned int *)a2 + 100), &v11);
      CThreadContext::UnregisterGraphWalkRoot();
    }
  }
  *((_DWORD *)this + 294) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1152, 40LL);
}
