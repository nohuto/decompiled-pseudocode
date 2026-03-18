/*
 * XREFs of ?InputBrushRequiresClamping@CBrushRenderingGraph@@QEBA_NI@Z @ 0x18006EEE4
 * Callers:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18006B834 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024FA0 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBrushRenderingGraph::InputBrushRequiresClamping(CBrushRenderingGraph *this, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // di
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  bool (__fastcall *v7)(__int64, int); // rax
  bool (__fastcall *v9)(__int64, int); // rax
  bool (__fastcall *v11)(__int64, int); // rax

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  v4 = (unsigned __int64)a2 << 6;
  v5 = *(_QWORD *)(v4 + v2);
  if ( !v5 )
    return 1;
  v6 = *(_QWORD *)(v4 + v2);
  v7 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 48LL);
  if ( !(v7 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType(v6, 81) : v7(v6, 81)) )
  {
    v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 48LL);
    if ( !(v9 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType(v5, 8) : v9(v5, 8)) )
    {
      v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v5 + 48LL);
      if ( !(v11 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType(v5, 138) : v11(v5, 138)) )
        return 1;
    }
  }
  return v3;
}
