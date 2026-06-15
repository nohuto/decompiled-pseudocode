/*
 * XREFs of ??_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z @ 0x1400584A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140057F88 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessClientEndpoint *__fastcall CSpatialCrossProcessClientEndpoint::`vector deleting destructor'(
        CSpatialCrossProcessClientEndpoint *this,
        char a2)
{
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
