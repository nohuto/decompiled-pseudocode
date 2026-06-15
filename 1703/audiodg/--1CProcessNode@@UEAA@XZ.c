/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x1400306D8
 * Callers:
 *     _CStreamProcessNode::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x140021EB0 (_CStreamProcessNode--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14003FC9C (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 *     _CAPOEndpointProcessNode::_CAPOEndpointProcessNode_::_1_::dtor$0 @ 0x14003FD06 (_CAPOEndpointProcessNode--_CAPOEndpointProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  CAudioMediaType *v2; // rcx
  void (*v3)(void); // rax
  CAudioMediaType *v4; // rcx
  void (*v5)(void); // rax

  *(_QWORD *)this = &CProcessNode::`vftable';
  v2 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v2);
    else
      v3();
  }
  v4 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v4);
    else
      v5();
  }
}
