/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x1800B9BEC
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x18002D6C0 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x180146A70 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x180175B84 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 8);
  CResource::~CResource(this);
}
