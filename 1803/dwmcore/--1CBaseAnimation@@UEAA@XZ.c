/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x1800C1F50
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800403B0 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x18016E430 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1801A3734 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  CResource::~CResource(this);
}
