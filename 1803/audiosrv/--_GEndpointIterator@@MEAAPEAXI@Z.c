/*
 * XREFs of ??_GEndpointIterator@@MEAAPEAXI@Z @ 0x180117594
 * Callers:
 *     ??_EEndpointIterator@@O7EAAPEAXI@Z @ 0x180066840 (--_EEndpointIterator@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EndpointIterator@@MEAA@XZ @ 0x1801174CC (--1EndpointIterator@@MEAA@XZ.c)
 */

EndpointIterator *__fastcall EndpointIterator::`scalar deleting destructor'(EndpointIterator *this, char a2)
{
  EndpointIterator::~EndpointIterator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
