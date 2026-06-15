/*
 * XREFs of ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x14003FD30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14003FC9C (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
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
