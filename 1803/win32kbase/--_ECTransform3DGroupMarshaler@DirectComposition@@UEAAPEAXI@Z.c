/*
 * XREFs of ??_ECTransform3DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145E90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CTransform3DGroupMarshaler *__fastcall DirectComposition::CTransform3DGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CTransform3DGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
