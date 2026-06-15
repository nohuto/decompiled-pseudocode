/*
 * XREFs of ??_ECProcessNode@@UEAAPEAXI@Z @ 0x14000E260
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B9C0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

CProcessNode *__fastcall CProcessNode::`vector deleting destructor'(CProcessNode *this, char a2)
{
  CAudioMediaType *v3; // rcx
  void (*v5)(void); // rax
  CAudioMediaType *v6; // rcx
  void (*v7)(void); // rax

  *(_QWORD *)this = &CProcessNode::`vftable';
  v3 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v5 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v3);
    else
      v5();
  }
  v6 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v7();
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
