/*
 * XREFs of ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x18005940C
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059230 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0315_0001@@W4GHOST_STATUS@@@Z @ 0x180058584 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180058724 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800594D8 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::EnsureCanSendVisibilityState(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        int a2)
{
  char v3; // bp
  char v4; // si
  _QWORD *v5; // rbx
  _QWORD *v6; // r14

  v3 = 1;
  if ( a2 != 2 )
  {
    v4 = 0;
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(a1) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)a1, 0x10u);
    else
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual((__int64)a1, 0LL, 16LL);
    v5 = (_QWORD *)*((_QWORD *)a1 + 19);
    v6 = &v5[*((_QWORD *)a1 + 20)];
    while ( v5 != v6 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 216LL))(*v5) == 3
        || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 216LL))(*v5) == 1 )
      {
        v4 = 1;
        break;
      }
      ++v5;
    }
    v3 = v4 ^ 1;
    if ( v4 == 1 )
      CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(a1);
  }
  return v3;
}
