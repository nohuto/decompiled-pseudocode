/*
 * XREFs of ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18013E8E4
 * Callers:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18013E8A0 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x18013FB40 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 */

__int64 __fastcall CExpressionManager::LookupExpressionsForTarget(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v5 = a3;
  result = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(a1 + 336, &v4);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}
