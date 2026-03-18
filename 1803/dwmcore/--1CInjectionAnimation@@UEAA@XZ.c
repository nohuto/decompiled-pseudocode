/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x180190A54
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x180190A80 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[36]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
