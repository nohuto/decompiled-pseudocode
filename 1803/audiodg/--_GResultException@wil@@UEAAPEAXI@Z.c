/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x140030BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x140030B14 (--1ResultException@wil@@UEAA@XZ.c)
 */

wil::ResultException *__fastcall wil::ResultException::`scalar deleting destructor'(
        wil::ResultException *this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
