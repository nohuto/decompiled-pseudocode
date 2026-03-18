/*
 * XREFs of ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18015E230
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18007E6CC (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A3220 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x18015F0B8 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::CConditionalExpression(
        CConditionalExpression *this,
        struct CComposition *a2)
{
  __int64 v3; // r9

  CBaseExpression::CBaseExpression(this, a2);
  *((_DWORD *)this + 68) = -1;
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  *((_DWORD *)this + 69) = 0x7FFFFFFF;
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 280, 0LL, 0, v3, 16);
  *((_QWORD *)this + 39) = 0LL;
  CConditionalExpression::Reset(this);
  return this;
}
