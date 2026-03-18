/*
 * XREFs of ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00201B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C001F36C (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

DirectComposition::CKeyframeAnimationMarshaler *__fastcall DirectComposition::CKeyframeAnimationMarshaler::`scalar deleting destructor'(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CKeyframeAnimationMarshaler::`vftable';
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
