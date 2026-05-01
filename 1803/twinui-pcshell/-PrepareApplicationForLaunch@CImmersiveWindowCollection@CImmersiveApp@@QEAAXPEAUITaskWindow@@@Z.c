/*
 * XREFs of ?PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z @ 0x1800F9404
 * Callers:
 *     ?PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ @ 0x18012F650 (-PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0001@@W4GHOST_STATUS@@@Z @ 0x18009DED8 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::PrepareApplicationForLaunch(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2)
{
  if ( !a2 || !(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
      (__int64)this,
      2,
      *(_BYTE *)(*((_QWORD *)this + 18) + 714LL) != 0 ? 0x20 : 0);
}
