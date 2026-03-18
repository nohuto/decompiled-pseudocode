/*
 * XREFs of ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180043D34
 * Callers:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180044AC0 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180044BD0 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800457B4 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180081B08 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DRemoveClip(CD2DContext *this)
{
  *((_BYTE *)this + 466) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 23) + 80LL))(*((_QWORD *)this + 23), 0LL, 1LL);
}
