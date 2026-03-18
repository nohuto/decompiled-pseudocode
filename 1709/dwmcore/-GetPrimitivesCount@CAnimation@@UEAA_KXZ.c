/*
 * XREFs of ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x18002CAB0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800B6794 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimation::GetPrimitivesCount(CAnimation *this)
{
  unsigned int *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (unsigned int *)*((_QWORD *)this + 2);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 32LL);
  if ( (char *)v2 == (char *)CSharedSectionAnimationPrimitiveBuffer::GetCount )
    return (unsigned __int64)v1[6] >> 5;
  else
    return v2();
}
