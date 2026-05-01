/*
 * XREFs of ?GetPrivilegedSizeConstraintsOperations@CApplicationViewManager@@QEBA?AV?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@XZ @ 0x1800745D0
 * Callers:
 *     ?GetPrivilegedSizeConstraintsOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@XZ @ 0x18007A90C (-GetPrivilegedSizeConstraintsOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPriv.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CApplicationViewManager::GetPrivilegedSizeConstraintsOperations(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 560);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
