/*
 * XREFs of ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C002B288
 * Callers:
 *     ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0028190 (--_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C002DB20 (--_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C013FA90 (--_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C013FBC0 (--_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
        DirectComposition::CBaseExpressionMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &DirectComposition::CBaseExpressionMarshaler::`vftable';
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    Win32FreePool(v4, a2, a3);
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
    Win32FreePool(v5, a2, a3);
}
