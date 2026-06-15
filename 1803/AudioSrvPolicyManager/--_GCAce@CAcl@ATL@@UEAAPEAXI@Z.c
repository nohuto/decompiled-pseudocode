/*
 * XREFs of ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x1800324F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180032170 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall ATL::CAcl::CAce::`scalar deleting destructor'(void **this, char a2)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
