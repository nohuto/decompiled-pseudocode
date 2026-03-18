/*
 * XREFs of ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18002CD70
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800B6794 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
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
