/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180002590
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x1800025C0 (--1ResultException@wil@@UEAA@XZ.c)
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
