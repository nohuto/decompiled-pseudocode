/*
 * XREFs of ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C001F36C
 * Callers:
 *     ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0018520 (--_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00201B0 (--_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0140520 (--_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0140680 (--_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &DirectComposition::CBaseExpressionMarshaler::`vftable';
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_DWORD *)this + 24) = 0;
  }
}
