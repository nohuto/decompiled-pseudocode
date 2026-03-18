/*
 * XREFs of ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x18006F5B4
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraph::CleanupEffectStage(CBrushRenderingGraph *this, struct EffectStage *a2)
{
  unsigned int i; // esi
  __int64 v4; // rdi
  CSurfaceDrawListBrush *v5; // rcx
  void *(__fastcall *v6)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rcx

  for ( i = 0; i < *((_DWORD *)a2 + 1); ++i )
  {
    v4 = 104LL * i;
    if ( !*((_BYTE *)a2 + v4 + 52) )
    {
      v5 = *(CSurfaceDrawListBrush **)((char *)a2 + v4 + 64);
      if ( v5 )
      {
        v6 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v5;
        if ( v6 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v5, 1u);
        else
          v6(v5, 1u);
      }
      *(_QWORD *)((char *)a2 + v4 + 64) = 0LL;
      v7 = *(void (__fastcall ****)(_QWORD, __int64))((char *)a2 + v4 + 72);
      if ( v7 )
        (**v7)(v7, 1LL);
      *(_QWORD *)((char *)a2 + v4 + 72) = 0LL;
    }
  }
  *((_DWORD *)a2 + 1) = 0;
}
