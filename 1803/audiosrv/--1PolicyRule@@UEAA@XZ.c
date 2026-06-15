/*
 * XREFs of ??1PolicyRule@@UEAA@XZ @ 0x1800FBAA8
 * Callers:
 *     ??1AvoidEndpointPolicyRule@@UEAA@XZ @ 0x1800FB9F8 (--1AvoidEndpointPolicyRule@@UEAA@XZ.c)
 *     ??_GPolicyRule@@UEAAPEAXI@Z @ 0x1800FBB98 (--_GPolicyRule@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PolicyRule::~PolicyRule(PolicyRule *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &PolicyRule::`vftable'{for `IPolicyRule'};
  *((_QWORD *)this + 1) = &PolicyRule::`vftable'{for `CUnknown'};
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
