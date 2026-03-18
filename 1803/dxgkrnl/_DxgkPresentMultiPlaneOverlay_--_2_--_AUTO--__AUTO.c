/*
 * XREFs of _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1C01D7A48
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01DB5A0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01DBC00 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO(void **a1)
{
  operator delete[](*a1);
  operator delete[](a1[1]);
}
