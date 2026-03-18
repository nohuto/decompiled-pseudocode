/*
 * XREFs of ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x1800197DC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraph::CleanupEffectStage(CBrushRenderingGraph *this, struct EffectStage *a2)
{
  unsigned int i; // esi
  __int64 v4; // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx

  for ( i = 0; i < *((_DWORD *)a2 + 1); ++i )
  {
    v4 = 88LL * i;
    if ( !*((_BYTE *)a2 + v4 + 36) )
    {
      v5 = *(void (__fastcall ****)(_QWORD, __int64))((char *)a2 + v4 + 48);
      if ( v5 )
        (**v5)(v5, 1LL);
      *(_QWORD *)((char *)a2 + v4 + 48) = 0LL;
      v6 = *(void (__fastcall ****)(_QWORD, __int64))((char *)a2 + v4 + 56);
      if ( v6 )
        (**v6)(v6, 1LL);
      *(_QWORD *)((char *)a2 + v4 + 56) = 0LL;
    }
  }
  *((_DWORD *)a2 + 1) = 0;
}
