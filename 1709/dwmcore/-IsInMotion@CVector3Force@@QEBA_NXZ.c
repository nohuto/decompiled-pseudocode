/*
 * XREFs of ?IsInMotion@CVector3Force@@QEBA_NXZ @ 0x1801936D4
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801728A0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x180193D50 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 * Callees:
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801932D8 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 */

char __fastcall CVector3Force::IsInMotion(CVector3Force *this)
{
  __int64 v2; // r8
  __int64 v3; // r8
  char v4; // dl

  if ( (*((_BYTE *)this + 352) & 4) != 0 )
    return 0;
  if ( CScalarForceEvaluator::IsInMotion((CVector3Force *)((char *)this + 16))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v2 + 68))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v3 + 136)) )
  {
    return 1;
  }
  return v4;
}
