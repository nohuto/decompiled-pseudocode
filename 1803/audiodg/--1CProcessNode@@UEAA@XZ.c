/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x14002F240
 * Callers:
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14003E5EC (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  CAudioMediaType *v2; // rcx
  __int64 (__fastcall *v3)(CAudioMediaType *); // rax
  CAudioMediaType *v4; // rcx
  __int64 (__fastcall *v5)(CAudioMediaType *); // rax

  *(_QWORD *)this = &CProcessNode::`vftable';
  v2 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == CAudioMediaType::Release )
      CAudioMediaType::Release(v2);
    else
      v3(v2);
  }
  v4 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CAudioMediaType::Release )
      CAudioMediaType::Release(v4);
    else
      v5(v4);
  }
}
