/*
 * XREFs of ?InputBrushRequiresClamping@CBrushRenderingGraph@@QEBA_NI@Z @ 0x18001A280
 * Callers:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800159B4 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBrushRenderingGraph::InputBrushRequiresClamping(CBrushRenderingGraph *this, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // bl
  unsigned __int64 v4; // r8
  __int64 v5; // rdi

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  v4 = (unsigned __int64)a2 << 6;
  v5 = *(_QWORD *)(v4 + v2);
  if ( !v5
    || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5 + 48LL))(*(_QWORD *)(v4 + v2), 87LL)
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 83LL)
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 89LL) )
  {
    return 1;
  }
  return v3;
}
