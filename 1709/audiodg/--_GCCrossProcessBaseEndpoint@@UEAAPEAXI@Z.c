/*
 * XREFs of ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140051B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140017C58 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseEndpoint *this,
        char a2)
{
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
