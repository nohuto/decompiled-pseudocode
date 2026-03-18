/*
 * XREFs of ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1C01D97E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01D99B4 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 */

void __fastcall DxgkDisplayManagerDeleteProcedure(ReferenceCounted **a1)
{
  DXGDISPLAYMANAGEROBJECT *v2; // rcx
  ReferenceCounted *v3; // rcx

  v2 = *a1;
  if ( v2 )
  {
    DXGDISPLAYMANAGEROBJECT::Invalidate(v2);
    ReferenceCounted::Release(*a1);
    *a1 = 0LL;
  }
  v3 = a1[1];
  if ( v3 )
  {
    (**(void (__fastcall ***)(ReferenceCounted *, __int64))v3)(v3, 1LL);
    a1[1] = 0LL;
  }
}
