/*
 * XREFs of ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180171614
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180171320 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 *     ?ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z @ 0x1801C1D70 (-ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B694C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::IsHDRTarget(CDrawingContext *this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-28h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v3; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 45) + 24LL))(*((_QWORD *)this + 45), v2);
  return IsDXGIColorSpaceHDR(v3);
}
