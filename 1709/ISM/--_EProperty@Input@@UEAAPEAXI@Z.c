/*
 * XREFs of ??_EProperty@Input@@UEAAPEAXI@Z @ 0x180016A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall Input::Property::`vector deleting destructor'(void **this, char a2)
{
  *this = &Input::Property::`vftable';
  operator delete(this[4]);
  this[4] = 0LL;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 10) = 0;
  operator delete(this[4]);
  this[4] = 0LL;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 10) = 0;
  *this = &Input::PropertyNode::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
