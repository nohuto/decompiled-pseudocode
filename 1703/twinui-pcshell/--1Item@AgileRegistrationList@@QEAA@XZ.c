/*
 * XREFs of ??1Item@AgileRegistrationList@@QEAA@XZ @ 0x180025020
 * Callers:
 *     _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x180198F3D (_AgileRegistrationList--Register_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AgileRegistrationList::Item::~Item(AgileRegistrationList::Item *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
