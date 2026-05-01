/*
 * XREFs of ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x18005BC60
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005BA88 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005A984 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0001@@W4GHOST_STATUS@@@Z @ 0x18005AC44 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005ADE0 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005BD18 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::EnsureCanSendVisibilityState(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        int a2)
{
  char v3; // bl
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp

  v3 = 1;
  if ( a2 != 2 )
  {
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(a1) )
      CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)a1, 0x10u);
    else
      CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual((__int64)a1, 0LL, 16LL);
    v4 = (_QWORD *)*((_QWORD *)a1 + 19);
    v5 = &v4[*((_QWORD *)a1 + 20)];
    while ( v4 != v5 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 216LL))(*v4) == 3
        || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 216LL))(*v4) == 1 )
      {
        v3 = 0;
        break;
      }
      ++v4;
    }
    if ( !v3 )
      CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(a1);
  }
  return v3;
}
