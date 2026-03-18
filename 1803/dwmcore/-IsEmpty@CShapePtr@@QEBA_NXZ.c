/*
 * XREFs of ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18013F478
 * Callers:
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x1800902E8 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801A468C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801A4764 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CShapePtr::IsEmpty(CShapePtr *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( !v1 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1) )
    return 1;
  return v2;
}
