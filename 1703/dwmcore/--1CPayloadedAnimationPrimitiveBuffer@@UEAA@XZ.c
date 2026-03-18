/*
 * XREFs of ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x180021AAC
 * Callers:
 *     ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180021AE0 (--_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(
        CPayloadedAnimationPrimitiveBuffer *this)
{
  *(_QWORD *)this = &CPayloadedAnimationPrimitiveBuffer::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 16);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
