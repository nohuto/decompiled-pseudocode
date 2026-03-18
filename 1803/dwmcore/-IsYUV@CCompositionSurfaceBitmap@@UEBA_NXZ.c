/*
 * XREFs of ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180007040
 * Callers:
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x180006F8C (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800456C0 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsYUV(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  char v2; // bl
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, _BYTE *); // rax
  int *PixelFormatInfo; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v3 = v1 + 144;
    v4 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 24LL);
    if ( (char *)v4 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
      PixelFormatInfo = (int *)CDxHandleBitmapRealization::GetPixelFormatInfo(v3, v7);
    else
      PixelFormatInfo = (int *)v4(v3, v7);
    if ( *PixelFormatInfo == 103 || *PixelFormatInfo > 105 && *PixelFormatInfo <= 107 )
      return 1;
  }
  return v2;
}
