/*
 * XREFs of ??0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18016B928
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18002F614 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CInjectionAnimation *__fastcall CInjectionAnimation::CInjectionAnimation(
        CInjectionAnimation *this,
        struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CInjectionAnimation::`vftable';
  *((_QWORD *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 236) = 0LL;
  return this;
}
