/*
 * XREFs of ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180033330
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180032170 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall ATL::CDacl::CAccessObjectAce::`vector deleting destructor'(void **this, char a2)
{
  void *v4; // rcx

  *this = &ATL::CDacl::CAccessObjectAce::`vftable';
  operator delete(this[19], (const struct std::nothrow_t *)0x10);
  operator delete(this[20], (const struct std::nothrow_t *)0x10);
  v4 = this[17];
  *this = &ATL::CAcl::CAce::`vftable';
  free(v4);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
