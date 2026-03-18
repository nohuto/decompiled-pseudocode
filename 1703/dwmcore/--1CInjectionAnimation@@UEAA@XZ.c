/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x18016B95C
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x18016B990 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  WPF::ProcessHeapImpl::Free(this[28]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
