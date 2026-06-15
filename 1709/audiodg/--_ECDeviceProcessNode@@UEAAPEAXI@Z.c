/*
 * XREFs of ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140019DA0
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140005B70 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x140019C80 (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDeviceProcessNode *__fastcall CDeviceProcessNode::`vector deleting destructor'(CDeviceProcessNode *this, char a2)
{
  CDeviceProcessNode::~CDeviceProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
