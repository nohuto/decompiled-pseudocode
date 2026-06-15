/*
 * XREFs of ??_ECAPOEndpointProcessNode@@UEAAPEAXI@Z @ 0x1400406C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x140040648 (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
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
