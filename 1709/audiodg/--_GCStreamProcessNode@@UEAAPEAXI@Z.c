/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x1400021E0
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140005B70 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x1400020C8 (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(CStreamProcessNode *this, char a2)
{
  CStreamProcessNode::~CStreamProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
