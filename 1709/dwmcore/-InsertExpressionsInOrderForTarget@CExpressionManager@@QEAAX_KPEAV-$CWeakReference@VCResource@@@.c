/*
 * XREFs of ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18011BD2C
 * Callers:
 *     _lambda_33703150b5e965453f86618a52381b33_::operator() @ 0x18016AAAC (_lambda_33703150b5e965453f86618a52381b33_--operator().c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18016BFF4 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x18011CE00 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 */

void __fastcall CExpressionManager::InsertExpressionsInOrderForTarget(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 Element; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v7 = a3;
  v8 = a4;
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(a1 + 304, &v7);
  if ( Element )
    v6 = *(_QWORD *)(Element + 16);
  else
    v6 = 0LL;
  while ( v6 )
  {
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(v6 + 8), a2);
    v6 = *(_QWORD *)(v6 + 16);
  }
}
