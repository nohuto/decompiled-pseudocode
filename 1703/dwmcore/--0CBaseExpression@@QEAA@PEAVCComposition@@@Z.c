/*
 * XREFs of ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18002F614
 * Callers:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18002F76C (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18016AF48 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18016B928 (--0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801812D0 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  CBaseExpression *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  memset_0((char *)this + 64, 0, 0x40uLL);
  *((_DWORD *)this + 32) = 18;
  *((_BYTE *)this + 132) = 0;
  *((_QWORD *)this + 18) = -1LL;
  *((_QWORD *)this + 19) = -1LL;
  *((_QWORD *)this + 25) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  result = this;
  *((_BYTE *)this + 208) |= 1u;
  return result;
}
