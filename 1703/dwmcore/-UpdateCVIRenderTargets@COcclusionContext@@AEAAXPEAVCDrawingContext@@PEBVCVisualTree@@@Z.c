/*
 * XREFs of ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18009F054
 * Callers:
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x1800AB024 (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180047D18 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800C05AC (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800C6210 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18012D074 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 */

void __fastcall COcclusionContext::UpdateCVIRenderTargets(
        COcclusionContext *this,
        struct CDrawingContext *a2,
        const struct CVisualTree *a3)
{
  __int64 i; // rsi
  __int64 v6; // rdi
  void *v7; // r12
  char v8; // r15
  __int64 v9; // r13
  struct _GUID *v10; // r9
  __int64 v11; // rdi
  int v12; // ebx
  __int64 ExistingRenderTarget; // rax
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  int v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+2Ch] [rbp-4Ch]
  int v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  struct IBitmapSource *v19; // [rsp+80h] [rbp+8h] BYREF
  const struct CVisualTree *v20; // [rsp+90h] [rbp+18h]

  v20 = a3;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 270); i = (unsigned int)(i + 1) )
  {
    v6 = *((_QWORD *)this + 132);
    v7 = *(void **)(v6 + 40 * i);
    v8 = *(_BYTE *)(v6 + 40 * i + 16);
    v9 = *(_QWORD *)(v6 + 40 * i + 8);
    if ( (int)CThreadContext::RegisterGraphWalkRoot(v7) >= 0 )
    {
      if ( v8 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(a2, v20, v7, v6 + 20 + 40 * i) )
      {
        v11 = *((_QWORD *)a2 + 50);
        v12 = *((_DWORD *)a2 + 102);
        ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget(v9, v11, v12, v10);
        if ( !ExistingRenderTarget || *(_BYTE *)(ExistingRenderTarget + 44) )
        {
          v19 = 0LL;
          v16 = 0;
          v17 = 0;
          v18 = 0LL;
          v14 = v11;
          v15 = v12;
          if ( (int)CCachedVisualImage::GetBitmapSource(
                      (CCachedVisualImage *)(v9 + 8),
                      &v19,
                      (const struct BitmapSourceInfo *)&v14) >= 0 )
            ReleaseInterface<ID2D1Geometry>((__int64 *)&v19);
        }
      }
      CThreadContext::UnregisterGraphWalkRoot();
    }
  }
  *((_DWORD *)this + 270) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1056, 0x28u);
}
