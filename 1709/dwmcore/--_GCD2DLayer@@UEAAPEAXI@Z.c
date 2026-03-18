/*
 * XREFs of ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x180081870
 * Callers:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003B61C (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18003B87C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CD2DLayer *__fastcall CD2DLayer::`scalar deleting destructor'(CD2DLayer *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CD2DLayer::`vftable';
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)this = &CLayer::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
