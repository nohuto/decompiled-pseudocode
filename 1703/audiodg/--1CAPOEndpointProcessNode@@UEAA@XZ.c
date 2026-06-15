/*
 * XREFs of ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14003FC9C
 * Callers:
 *     ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x14003FD30 (--_ECAPOEndpointProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140030644 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAPOEndpointProcessNode::~CAPOEndpointProcessNode(CAPOEndpointProcessNode *this)
{
  CEndpointInstance *v2; // rcx
  CAudioMediaType *v3; // rcx
  __int64 (__fastcall *v4)(CAudioMediaType *); // rax

  *(_QWORD *)this = &CAPOEndpointProcessNode::`vftable';
  v2 = (CEndpointInstance *)*((_QWORD *)this + 4);
  if ( v2 )
    CEndpointInstance::`scalar deleting destructor'(v2);
  *((_QWORD *)this + 4) = 0LL;
  v3 = (CAudioMediaType *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v3 + 16LL);
    if ( v4 == CAudioMediaType::Release )
      CAudioMediaType::Release(v3);
    else
      v4(v3);
  }
  CProcessNode::~CProcessNode(this);
}
