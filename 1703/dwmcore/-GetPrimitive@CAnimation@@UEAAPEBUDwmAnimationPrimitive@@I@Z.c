/*
 * XREFs of ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800BC560
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

const struct DwmAnimationPrimitive *__fastcall CAnimation::GetPrimitive(CAnimation *this, unsigned int a2)
{
  CSharedSectionAnimationPrimitiveBuffer *v2; // rcx
  __int64 (*v3)(void); // rax

  v2 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)this + 2);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 24LL);
  if ( (char *)v3 == (char *)CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    return CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v2, a2);
  else
    return (const struct DwmAnimationPrimitive *)v3();
}
