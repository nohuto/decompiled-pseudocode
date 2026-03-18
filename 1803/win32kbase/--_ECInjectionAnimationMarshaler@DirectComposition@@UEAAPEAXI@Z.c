/*
 * XREFs of ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0145C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C000A050 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CInjectionAnimationMarshaler *__fastcall DirectComposition::CInjectionAnimationMarshaler::`vector deleting destructor'(
        DirectComposition::CInjectionAnimationMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CInjectionAnimationMarshaler::`vftable';
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
