/*
 * XREFs of ??_EEndpointCollection@@MEAAPEAXI@Z @ 0x180117560
 * Callers:
 *     ??_EEndpointCollection@@O7EAAPEAXI@Z @ 0x180066830 (--_EEndpointCollection@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EndpointCollection@@MEAA@XZ @ 0x180117488 (--1EndpointCollection@@MEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall EndpointCollection::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  EndpointCollection::~EndpointCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
