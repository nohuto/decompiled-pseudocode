/*
 * XREFs of ??0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180190A20
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18003AE00 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CInjectionAnimation *__fastcall CInjectionAnimation::CInjectionAnimation(
        CInjectionAnimation *this,
        struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CInjectionAnimation::`vftable';
  *((_QWORD *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 300) = 0LL;
  return this;
}
