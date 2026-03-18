/*
 * XREFs of ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x1801874B4
 * Callers:
 *     ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x1801874E0 (--_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(void **this)
{
  *this = &CPayloadedAnimationPrimitiveBuffer::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  *this = &CMILRefCountBase::`vftable';
}
