/*
 * XREFs of ??1CAnimationTrigger@@UEAA@XZ @ 0x180166544
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x180153D20 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CAnimationTrigger::~CAnimationTrigger(void **this)
{
  *this = &CAnimationTrigger::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 7);
  CResource::~CResource((CResource *)this);
}
