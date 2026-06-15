/*
 * XREFs of ??_ECProcessNode@@UEAAPEAXI@Z @ 0x14000D330
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B290 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

CProcessNode *__fastcall CProcessNode::`vector deleting destructor'(CProcessNode *this, char a2)
{
  CAudioMediaType *v4; // rcx
  __int64 (__fastcall *v5)(CAudioMediaType *); // rax
  CAudioMediaType *v6; // rcx
  __int64 (__fastcall *v7)(CAudioMediaType *); // rax

  *(_QWORD *)this = &CProcessNode::`vftable';
  v4 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CAudioMediaType::Release )
      CAudioMediaType::Release(v4);
    else
      v5(v4);
  }
  v6 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v7(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
