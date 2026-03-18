/*
 * XREFs of ?RegisterSourcesForOwner@CExpression@@QEAAJXZ @ 0x18016ACC0
 * Callers:
 *     ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x18012BB74 (-ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEA.c)
 *     ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x18012BE78 (-ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18012BB0C (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForOwner(CExpression *this)
{
  struct CBaseExpression *v1; // rbp
  __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // edi

  v1 = (struct CBaseExpression *)*((_QWORD *)this + 63);
  if ( !v1 )
    v1 = this;
  v3 = 0LL;
  if ( *((_DWORD *)this + 100) )
  {
    while ( 1 )
    {
      v4 = CExpression::RegisterSourceForAnimation(
             this,
             v1,
             (const struct ExpressionReferenceInfo *)(*((_QWORD *)this + 47) + 24 * v3));
      v5 = v4;
      if ( v4 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 100) )
        return 0;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x166u);
  }
  else
  {
    return 0;
  }
  return v5;
}
