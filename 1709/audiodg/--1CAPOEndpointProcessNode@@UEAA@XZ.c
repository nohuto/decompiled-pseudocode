/*
 * XREFs of ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x140040648
 * Callers:
 *     ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x1400406C0 (--_ECAPOEndpointProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400301AC (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAPOEndpointProcessNode::~CAPOEndpointProcessNode(CAPOEndpointProcessNode *this)
{
  CEndpointInstance *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CAPOEndpointProcessNode::`vftable';
  v2 = (CEndpointInstance *)*((_QWORD *)this + 4);
  if ( v2 )
    CEndpointInstance::`scalar deleting destructor'(v2);
  *((_QWORD *)this + 4) = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CProcessNode::~CProcessNode(this);
}
