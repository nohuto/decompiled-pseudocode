/*
 * XREFs of ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x18007F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002E7C4 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall ATL::CDacl::`vector deleting destructor'(void **this, char a2)
{
  ATL::CDacl::~CDacl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
