/*
 * XREFs of ??1InputTarget@@UEAA@XZ @ 0x180082028
 * Callers:
 *     _InputTargetWithHostRegistration::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800D05CF (_InputTargetWithHostRegistration--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _InputAttemptedTarget::InputAttemptedTarget_::_1_::dtor$0 @ 0x1800D05EB (_InputAttemptedTarget--InputAttemptedTarget_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputTarget::~InputTarget(InputTarget *this)
{
  __int64 v1; // rdx

  *(_QWORD *)this = &InputTarget::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
