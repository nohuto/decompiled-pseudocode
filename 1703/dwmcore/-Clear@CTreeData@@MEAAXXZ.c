/*
 * XREFs of ?Clear@CTreeData@@MEAAXXZ @ 0x180134740
 * Callers:
 *     <none>
 * Callees:
 *     ??$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x180004170 (--$SAFE_DELETE_ARRAY@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@@YAXAEAPEAU_DXGI_PRESENT_MULTIPLANE_OVE.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18004F708 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Clear(void **this)
{
  (*((void (__fastcall **)(void **))*this + 5))(this);
  CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(this + 16));
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(this + 19);
  SAFE_DELETE_ARRAY<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(this + 20);
  this[3] = 0LL;
}
