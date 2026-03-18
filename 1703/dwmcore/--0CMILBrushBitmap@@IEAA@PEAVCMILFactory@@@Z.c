/*
 * XREFs of ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180054358
 * Callers:
 *     ??0CTileLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18007C854 (--0CTileLegacyMilBrush@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1800CB3BC (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CMILBrushBitmap *__fastcall CMILBrushBitmap::CMILBrushBitmap(CMILBrushBitmap *this, struct CMILFactory *a2)
{
  *(_QWORD *)this = &CMILObject::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &CMILBrush::`vftable';
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 36) = 3LL;
  *((_QWORD *)this + 7) = (char *)this + 88;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_DWORD *)this + 18) = 2;
  *(_QWORD *)((char *)this + 76) = 2LL;
  *((_QWORD *)this + 6) = &CMILResourceCache::`vftable';
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 1;
  *(_QWORD *)this = &CMILBrushBitmap::`vftable';
  *((_QWORD *)this + 3) = &CMILBrushBitmap::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 6) = &CMILBrushBitmap::`vftable'{for `CMILResourceCache'};
  *((_DWORD *)this + 29) = 1;
  *(_OWORD *)((char *)this + 120) = _xmm;
  *((_WORD *)this + 92) = 32085;
  *(_OWORD *)((char *)this + 136) = _xmm;
  *(_OWORD *)((char *)this + 152) = _xmm;
  *(_OWORD *)((char *)this + 168) = _xmm;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 55) = 1065353216;
  *((_DWORD *)this + 56) = 1065353216;
  *((_DWORD *)this + 57) = 1065353216;
  *((_QWORD *)this + 29) = 1065353216LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_BYTE *)this + 252) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 1065353216;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  return this;
}
