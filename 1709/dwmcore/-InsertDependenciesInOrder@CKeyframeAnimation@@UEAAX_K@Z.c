/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800A3DF0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(CKeyframeAnimation *this, unsigned __int64 a2)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 86); i = (unsigned int)(i + 1) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 40) + 8 * i), a2);
}
