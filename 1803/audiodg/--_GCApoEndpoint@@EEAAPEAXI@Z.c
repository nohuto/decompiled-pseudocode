/*
 * XREFs of ??_GCApoEndpoint@@EEAAPEAXI@Z @ 0x140033530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApoEndpoint@@EEAA@XZ @ 0x140033428 (--1CApoEndpoint@@EEAA@XZ.c)
 */

CApoEndpoint *__fastcall CApoEndpoint::`scalar deleting destructor'(CApoEndpoint *this, char a2)
{
  CApoEndpoint::~CApoEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
