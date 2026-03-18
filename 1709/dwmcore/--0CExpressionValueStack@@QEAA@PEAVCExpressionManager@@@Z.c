/*
 * XREFs of ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1801835E8
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A5060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x180155CBC (--0CExpressionManager@@AEAA@XZ.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18007E6CC (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CExpressionValueStack *__fastcall CExpressionValueStack::CExpressionValueStack(
        CExpressionValueStack *this,
        struct CExpressionManager *a2,
        __int64 a3,
        __int64 a4)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 24, 0LL, 0, a4, 72);
  return this;
}
