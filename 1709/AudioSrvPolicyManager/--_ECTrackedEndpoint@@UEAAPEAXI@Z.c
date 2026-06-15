/*
 * XREFs of ??_ECTrackedEndpoint@@UEAAPEAXI@Z @ 0x180023998
 * Callers:
 *     ??_ECTrackedEndpoint@@WBA@EAAPEAXI@Z @ 0x180024650 (--_ECTrackedEndpoint@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CTrackedEndpoint@@UEAA@XZ @ 0x1800239CC (--1CTrackedEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CTrackedEndpoint *__fastcall CTrackedEndpoint::`vector deleting destructor'(CTrackedEndpoint *this, char a2)
{
  CTrackedEndpoint::~CTrackedEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
