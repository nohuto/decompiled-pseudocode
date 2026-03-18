/*
 * XREFs of ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x18006DEAC
 * Callers:
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x18006BDD4 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x18006C824 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderingTechnique::IsExternallyImplementedSubgraph(CRenderingTechnique *this, struct _GUID *a2)
{
  int v3; // edi
  unsigned int *v5; // rbx
  __int64 v6; // rax

  v3 = *((_DWORD *)this + 24) & 1;
  if ( (*((_BYTE *)this + 96) & 1) != 0 && a2 )
  {
    v5 = (unsigned int *)*((_QWORD *)this + 2);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 16LL))(*(_QWORD *)v5);
    (*(void (__fastcall **)(__int64, _QWORD, struct _GUID *))(*(_QWORD *)v6 + 88LL))(v6, v5[4], a2);
  }
  return v3;
}
