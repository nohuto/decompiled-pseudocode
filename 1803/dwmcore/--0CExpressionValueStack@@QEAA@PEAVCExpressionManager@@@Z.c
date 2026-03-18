/*
 * XREFs of ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x180051B3C
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x18003ACA4 (--0CExpressionManager@@AEAA@XZ.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003E930 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800CD200 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CExpressionValueStack *__fastcall CExpressionValueStack::CExpressionValueStack(
        CExpressionValueStack *this,
        struct CExpressionManager *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 24, 0LL, 0LL);
  return this;
}
