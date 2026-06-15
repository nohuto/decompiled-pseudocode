/*
 * XREFs of ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x14003E660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14003E5EC (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 */

CAPOEndpointProcessNode *__fastcall CAPOEndpointProcessNode::`vector deleting destructor'(
        CAPOEndpointProcessNode *this,
        char a2)
{
  CAPOEndpointProcessNode::~CAPOEndpointProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
