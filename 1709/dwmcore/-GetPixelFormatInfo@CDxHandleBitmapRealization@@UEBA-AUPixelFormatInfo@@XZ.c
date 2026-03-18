/*
 * XREFs of ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x18004D200
 * Callers:
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028BB0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028E40 (-IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CDxHandleBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  _DWORD *v4; // rcx
  void (__fastcall *v5)(_DWORD *, _DWORD *); // rax
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 248);
  if ( v2 )
  {
    v4 = (_DWORD *)(v2 + 104);
    v5 = *(void (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)(v2 + 104) + 24LL);
    if ( (char *)v5 == (char *)CD2DBitmap::GetPixelFormatInfo )
    {
      *a2 = v4[20];
      a2[1] = v4[29];
      a2[2] = v4[36];
    }
    else
    {
      v5(v4, a2);
    }
  }
  else
  {
    *a2 = 0;
    v7 = 3;
    if ( *(_DWORD *)(a1 + 8) )
      v7 = *(_DWORD *)(a1 + 8);
    a2[1] = v7;
    a2[2] = *(_DWORD *)(a1 + 52);
  }
  return a2;
}
