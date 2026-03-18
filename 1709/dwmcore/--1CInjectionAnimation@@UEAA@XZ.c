/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x180168144
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x180168170 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  WPF::ProcessHeapImpl::Free(this[34]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
