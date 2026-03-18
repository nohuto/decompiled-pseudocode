/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800A51D8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A3220 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = (char *)this + 352;
  *((_QWORD *)this + 41) = (char *)this + 352;
  *((_DWORD *)this + 84) = 2;
  *(_QWORD *)((char *)this + 340) = 2LL;
  result = this;
  *((_DWORD *)this + 62) = 1;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 107) = 1065353216;
  return result;
}
