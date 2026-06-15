/*
 * XREFs of ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x140051B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140016FAC (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessBaseServerEndpoint *__fastcall CCrossProcessBaseServerEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *this,
        char a2)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
