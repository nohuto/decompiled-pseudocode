/*
 * XREFs of ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18016AF48
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18002F614 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800B3368 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x18016B8A0 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::CConditionalExpression(
        CConditionalExpression *this,
        struct CComposition *a2)
{
  __int64 v3; // r9

  CBaseExpression::CBaseExpression(this, a2);
  *((_DWORD *)this + 56) = -1;
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  *((_DWORD *)this + 57) = 0x7FFFFFFF;
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 232, 0LL, 0, v3, 16);
  *((_QWORD *)this + 33) = 0LL;
  CConditionalExpression::Reset(this);
  return this;
}
