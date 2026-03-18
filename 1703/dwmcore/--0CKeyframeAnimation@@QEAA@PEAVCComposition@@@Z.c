/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18002F76C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18002F614 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AnInitializeEngine@@YAXXZ @ 0x1800C6048 (-AnInitializeEngine@@YAXXZ.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable'{for `CBaseExpression'};
  *((_QWORD *)this + 28) = &CKeyframeAnimation::`vftable'{for `IKeyframeAnimationOwner'};
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 34) = (char *)this + 304;
  *((_QWORD *)this + 35) = (char *)this + 304;
  *((_DWORD *)this + 72) = 2;
  *((_DWORD *)this + 73) = 2;
  AnInitializeEngine();
  result = this;
  *((_DWORD *)this + 94) = 1;
  return result;
}
