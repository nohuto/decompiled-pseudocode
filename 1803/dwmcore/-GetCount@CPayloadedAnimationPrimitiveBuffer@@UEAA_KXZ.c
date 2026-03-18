/*
 * XREFs of ?GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x1800C88D0
 * Callers:
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x18003F910 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPayloadedAnimationPrimitiveBuffer::GetCount(CPayloadedAnimationPrimitiveBuffer *this)
{
  return *((unsigned int *)this + 10);
}
