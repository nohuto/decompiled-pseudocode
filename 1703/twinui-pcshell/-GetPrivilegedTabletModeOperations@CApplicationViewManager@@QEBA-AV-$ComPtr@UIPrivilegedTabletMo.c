/*
 * XREFs of ?GetPrivilegedTabletModeOperations@CApplicationViewManager@@QEBA?AV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@XZ @ 0x180074630
 * Callers:
 *     ?GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@XZ @ 0x18007AA34 (-GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivilege.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CApplicationViewManager::GetPrivilegedTabletModeOperations(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 576);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
