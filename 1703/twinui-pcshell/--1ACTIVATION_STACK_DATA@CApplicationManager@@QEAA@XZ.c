/*
 * XREFs of ??1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ @ 0x180007C50
 * Callers:
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$3 @ 0x180197B4E (_CApplicationManager--_CApplicationManager_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::ACTIVATION_STACK_DATA::~ACTIVATION_STACK_DATA(
        CApplicationManager::ACTIVATION_STACK_DATA *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
