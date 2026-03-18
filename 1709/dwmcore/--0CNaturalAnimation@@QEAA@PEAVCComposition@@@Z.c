/*
 * XREFs of ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180145F18
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A3220 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x180172CF0 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::CNaturalAnimation(CNaturalAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  memset_0((char *)this + 272, 0, 0x30uLL);
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_BYTE *)this + 524) |= 0x44u;
  CNaturalAnimation::ClearState(this);
  return this;
}
