/*
 * XREFs of ??1CAnimationTrigger@@UEAA@XZ @ 0x180181480
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x18016E3E0 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAnimationTrigger::~CAnimationTrigger(CAnimationTrigger *this)
{
  *(_QWORD *)this = &CAnimationTrigger::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 56);
  CResource::~CResource(this);
}
