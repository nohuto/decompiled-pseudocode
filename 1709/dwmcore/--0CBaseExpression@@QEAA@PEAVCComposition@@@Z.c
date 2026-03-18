/*
 * XREFs of ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A3220
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800A51D8 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180145F18 (--0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18015E230 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180168110 (--0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180188680 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  memset_0((char *)this + 64, 0, 0x40uLL);
  *((_DWORD *)this + 32) = 18;
  *((_BYTE *)this + 132) = 0;
  *((_BYTE *)this + 192) |= 1u;
  *((_QWORD *)this + 18) = -1LL;
  *((_QWORD *)this + 19) = -1LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 25) = (char *)this + 232;
  *((_QWORD *)this + 26) = (char *)this + 232;
  *((_DWORD *)this + 54) = 2;
  *((_DWORD *)this + 55) = 2;
  *((_DWORD *)this + 62) = 1;
  *((_QWORD *)this + 33) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  return this;
}
