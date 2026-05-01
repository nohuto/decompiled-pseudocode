/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x180015730
 * Callers:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x18017BBA0 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$0 @ 0x1801E7128 (_CApplicationManager--_HandleWindowBecameUnowned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x1801E7140 (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x1801E717C (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
