/*
 * XREFs of ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003FA50
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A9A7C (--1CDrawingContext@@MEAA@XZ.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 * Callees:
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18003CC5C (-Clear@Mesh@@AEAAXXZ.c)
 *     ?Reset@CDrawListPrimitiveBuilder@@QEAAXXZ @ 0x18003F86C (-Reset@CDrawListPrimitiveBuilder@@QEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder(CDrawListPrimitiveBuilder *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  void **v7; // rsi
  _QWORD *v8; // rdi
  void *v9; // r8
  void *v10; // r8
  void *v11; // r8
  void *v12; // r8
  _QWORD *v13; // rdi
  void *v14; // r8
  void *v15; // r8
  void *v16; // r8
  void *v17; // r8
  void *v18; // r8
  void *v19; // rcx

  CDrawListPrimitiveBuilder::Reset(this);
  v2 = *((_QWORD *)this + 307);
  if ( v2 )
  {
    *((_QWORD *)this + 307) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = (void *)*((_QWORD *)this + 294);
  if ( v3 != *((void **)this + 295) )
  {
    WPF::ProcessHeapImpl::Free(v3);
    *((_QWORD *)this + 294) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 169);
  if ( v4 != *((void **)this + 170) )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 169) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 45);
  if ( v5 != *((void **)this + 46) )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 45) = 0LL;
  }
  v6 = *((_QWORD *)this + 44);
  if ( v6 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (void **)((char *)this + 112);
  Mesh::Clear((CDrawListPrimitiveBuilder *)((char *)this + 112));
  v8 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v8 )
  {
    v9 = (void *)v8[2];
    if ( v9 )
      HeapFree(WPF::g_processHeap, 0, v9);
    v10 = (void *)v8[5];
    if ( v10 )
      HeapFree(WPF::g_processHeap, 0, v10);
    v11 = (void *)v8[9];
    if ( v11 )
      HeapFree(WPF::g_processHeap, 0, v11);
    v12 = (void *)v8[14];
    if ( v12 )
      HeapFree(WPF::g_processHeap, 0, v12);
    HeapFree(WPF::g_processHeap, 0, v8);
  }
  v13 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v13 )
  {
    v14 = (void *)v13[2];
    if ( v14 )
      HeapFree(WPF::g_processHeap, 0, v14);
    v15 = (void *)v13[5];
    if ( v15 )
      HeapFree(WPF::g_processHeap, 0, v15);
    v16 = (void *)v13[9];
    if ( v16 )
      HeapFree(WPF::g_processHeap, 0, v16);
    v17 = (void *)v13[14];
    if ( v17 )
      HeapFree(WPF::g_processHeap, 0, v17);
    HeapFree(WPF::g_processHeap, 0, v13);
  }
  v18 = (void *)*((_QWORD *)this + 32);
  if ( v18 )
    HeapFree(WPF::g_processHeap, 0, v18);
  if ( *((_QWORD *)this + 14) != *((_QWORD *)this + 15) )
  {
    WPF::ProcessHeapImpl::Free(*v7);
    *v7 = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 5);
  if ( v19 != *((void **)this + 6) )
  {
    WPF::ProcessHeapImpl::Free(v19);
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((char *)this + 32);
}
