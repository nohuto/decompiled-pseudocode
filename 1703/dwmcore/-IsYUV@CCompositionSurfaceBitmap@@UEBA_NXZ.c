/*
 * XREFs of ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000A730
 * Callers:
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x180009CE8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18000B3B0 (-GetTextureFormat@CDxHandleBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsYUV(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  char v2; // bl
  CDxHandleBitmapRealization *v3; // rcx
  __int64 (*v4)(void); // rax
  enum DXGI_FORMAT TextureFormat; // eax

  v1 = *((_QWORD *)this + 52);
  v2 = 0;
  if ( v1 )
  {
    v3 = (CDxHandleBitmapRealization *)(v1 + 104);
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 40LL);
    if ( (char *)v4 == (char *)CDxHandleBitmapRealization::GetTextureFormat )
      TextureFormat = CDxHandleBitmapRealization::GetTextureFormat(v3);
    else
      TextureFormat = (unsigned int)v4();
    if ( TextureFormat == DXGI_FORMAT_NV12 || TextureFormat > DXGI_FORMAT_P016 && TextureFormat <= DXGI_FORMAT_YUY2 )
      return 1;
  }
  return v2;
}
